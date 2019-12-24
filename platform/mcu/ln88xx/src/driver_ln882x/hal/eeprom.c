#include "ln88xx.h"
#include <string.h>
#include "hal/eeprom.h"
#include "hal/hal_common.h"
#include "hal/flash.h"
#include "utils/debug/art_assert.h"
#include "utils/debug/log.h"
#include "osal/osal.h"

#include "hal/system_parameter.h"

#define EEPROM_BIT_FLAG_ARRAY_SIZE         DIV_ROUND_UP(sizeof(system_parameter_t) - sizeof(OS_Mutex_t), 2*8)
typedef struct eeprom_ctrl {
    uint16_t *buffer;
    uint16_t  vaddr_end;
    uint16_t  value;
    uint8_t   bit_flag[EEPROM_BIT_FLAG_ARRAY_SIZE];
}eeprom_ctrl_t;

static eeprom_ctrl_t geeprom_ctrl = {0,};

static HAL_StatusTypeDef EE_Format(void);
static uint16_t EE_FindValidPage(uint8_t Operation);
static uint16_t EE_VerifyPageFullWriteVariable(uint16_t VirtAddress, uint16_t Data);
static uint16_t EE_PageCopy(uint32_t srcPageStart, uint32_t destPageStart);
static uint16_t EE_PageTransfer(uint16_t VirtAddress, uint16_t Data);
static uint32_t EE_BinarySearch(uint32_t startAddress, uint32_t endAddress, uint32_t key);
static bool EE_LoadFlashDataToRAM(uint16_t *buffer);

static eeprom_ctrl_t *EE_GetInstance(void)
{
    return &geeprom_ctrl;
}

/**
  * @brief  Restore the pages to a known good state in case of page's status
  *   corruption after a power loss.
  * @param  None.
  * @retval - Flash error code: on write Flash error
  *         - HAL_OK: on success
  */
bool EE_Init(uint16_t *buffer, uint16_t sizeof_buffer)
{
    bool ret = true;
    uint16_t PageStatus0 = 6, PageStatus1 = 6;
    HAL_StatusTypeDef FlashStatus;
    uint16_t value = 0;
    eeprom_ctrl_t *eeprom_ctrl = EE_GetInstance();

    ART_ASSERT(eeprom_ctrl && buffer && (DIV_ROUND_UP(sizeof_buffer, 2*8) <= EEPROM_BIT_FLAG_ARRAY_SIZE));
    eeprom_ctrl->buffer = buffer;
    eeprom_ctrl->vaddr_end = (sizeof_buffer >> 1);

    /* Get Page0 status */
    FLASH_Read(PAGE0_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&PageStatus0);
    /* Get Page1 status */
    FLASH_Read(PAGE1_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&PageStatus1);

    /* Check for invalid header states and repair if necessary */
    switch (PageStatus0) {
        case ERASED:
            if (PageStatus1 == VALID_PAGE) { 
                /* Page0 erased, Page1 valid */
                /* Erase Page0 */
                //FLASH_Erase(PAGE0_BASE_ADDRESS, PAGE_SIZE);
            } else if (PageStatus1 == RECEIVE_DATA) { 
                /* Page0 erased, Page1 receive */
                FLASH_Erase(PAGE0_BASE_ADDRESS, PAGE_SIZE);
                value = VALID_PAGE;
                FLASH_Program(PAGE1_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&value);
            } else { 
                /* First EEPROM access (Page0&1 are erased) or invalid state -> format EEPROM */
                /* Erase both Page0 and Page1 and set Page0 as valid page */
                FlashStatus = EE_Format();
                /* If erase/program operation was failed, a Flash error code is returned */
                if (FlashStatus != HAL_OK) {
                    return false;
                }
                ret = false;
            }
            break;

        case RECEIVE_DATA:
            if (PageStatus1 == VALID_PAGE) { 
                /* Page0 receive, Page1 valid */
                /* Transfer data from Page1 to Page0 */
                EE_PageCopy(PAGE1_BASE_ADDRESS, PAGE0_BASE_ADDRESS);
                
                /* Mark Page0 as valid */
                value = VALID_PAGE;
                FLASH_Program(PAGE0_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&value);
                FLASH_Erase(PAGE1_BASE_ADDRESS, PAGE_SIZE);
            } else if (PageStatus1 == ERASED) { /* Page0 receive, Page1 erased */
                //FLASH_Erase(PAGE1_BASE_ADDRESS, PAGE_SIZE);
                value = VALID_PAGE;
                FLASH_Program(PAGE0_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&value);
            } else { 
                /* Invalid state -> format eeprom */
                /* Erase both Page0 and Page1 and set Page0 as valid page */
                FlashStatus = EE_Format();
                /* If erase/program operation was failed, a Flash error code is returned */
                if (FlashStatus != HAL_OK) {
                    return false;
                }
                ret = false;
            }
            break;

        case VALID_PAGE:
            if (PageStatus1 == VALID_PAGE) { 
                /* Invalid state -> format eeprom */
                /* Erase both Page0 and Page1 and set Page0 as valid page */
                FlashStatus = EE_Format();
                /* If erase/program operation was failed, a Flash error code is returned */
                if (FlashStatus != HAL_OK) {
                    return false;
                }
                ret = false;
            } else if (PageStatus1 == ERASED) { /* Page0 valid, Page1 erased */
                //FLASH_Erase(PAGE1_BASE_ADDRESS, PAGE_SIZE);
            } else { 
                /* Page0 valid, Page1 receive */
                /* Transfer data from Page0 to Page1 */
                EE_PageCopy(PAGE0_BASE_ADDRESS, PAGE1_BASE_ADDRESS);

                value = VALID_PAGE;
                FLASH_Program(PAGE1_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&value);
                FLASH_Erase(PAGE0_BASE_ADDRESS, PAGE_SIZE);
            }
            break;

        default:  
            /* Any other state -> format eeprom */
            /* Erase both Page0 and Page1 and set Page0 as valid page */
            FlashStatus = EE_Format();
            /* If erase/program operation was failed, a Flash error code is returned */
            if (FlashStatus != HAL_OK) {
                return false;
            }
            ret = false;
            break;
    }

    if(ret && !EE_LoadFlashDataToRAM(buffer)){
        memset(buffer, 0, sizeof_buffer);
        FlashStatus = EE_Format();
        /* If erase/program operation was failed, a Flash error code is returned */
        if (FlashStatus != HAL_OK) {
            return false;
        }
        ret = false;
    }
    return ret;
}

/**
  * @brief  Returns the last stored variable data, if found, which correspond to
  *   the passed virtual address
  * @param  VirtAddress: Variable virtual address
  * @param  Data: Global variable contains the read variable value
  * @retval Success or error status:
  *           - 0: if variable was found
  *           - 1: if the variable was not found
  *           - NO_VALID_PAGE: if no valid page was found.
  */
uint16_t EE_ReadVariable(uint16_t VirtAddress, uint16_t *Data)
{
    uint16_t ValidPage = PAGE0;
    uint16_t AddressValue = 0x5555, ReadStatus = 1, AddressData = 0;
    uint32_t Address = 0, PageStartAddress = 0, dataEndAddress;
    uint32_t value;

    /* Get active Page for read operation */
    ValidPage = EE_FindValidPage(READ_FROM_VALID_PAGE);

    /* Check if there is no valid page */
    if (ValidPage == NO_VALID_PAGE) {
        LOG(LOG_LVL_ERROR, "[%s, %d]NO_VALID_PAGE\r\n", __func__, __LINE__);
        return  NO_VALID_PAGE;
    }

    /* Get the valid Page start Address */
    PageStartAddress = (uint32_t)(EEPROM_START_ADDRESS + (uint32_t)(ValidPage * PAGE_SIZE));

    /* Get the valid Page end Address */
    Address = (uint32_t)((EEPROM_START_ADDRESS - 2) + (uint32_t)((1 + ValidPage) * PAGE_SIZE));

    dataEndAddress = EE_BinarySearch(PageStartAddress, Address, 0xFFFFFFFF);
    Address = dataEndAddress - 4;
    
    /* Check each active page address starting from end */
    while (Address > (PageStartAddress + 2)) {
        /* Get the current location content to be compared with virtual address */
        FLASH_Read(Address, sizeof(uint32_t), (uint8_t *)&value);
        AddressValue = (value >> 16) & 0xFFFF;
        AddressData = value & 0xFFFF;
        /* Compare the read address with the virtual address */
        if (AddressValue == VirtAddress) {
            *Data = AddressData;
            /* In case variable value is read, reset ReadStatus flag */
            ReadStatus = 0;
            break;
        } else {
            /* Next address location */
            Address = Address - 4;
        }
    }

    /* Return ReadStatus value: (0: variable exist, 1: variable doesn't exist) */
    return ReadStatus;
}


/**
  * @brief  Writes/upadtes variable data in EEPROM.
  * @param  VirtAddress: Variable virtual address
  * @param  Data: 16 bit data to be written
  * @retval Success or error status:
  *           - HAL_OK: on success
  *           - PAGE_FULL: if valid page is full
  *           - NO_VALID_PAGE: if no valid page was found
  *           - Flash error code: on write Flash error
  */
uint16_t EE_WriteVariable(uint16_t VirtAddress, uint16_t Data)
{
    uint16_t Status = 0;

    /* Write the variable virtual address and value in the EEPROM */
    Status = EE_VerifyPageFullWriteVariable(VirtAddress, Data);

    /* In case the EEPROM active page is full */
    if (Status == PAGE_FULL) {
        /* Perform Page transfer */
        Status = EE_PageTransfer(VirtAddress, Data);
    }

    /* Return last operation status */
    return Status;
}

/**
  * @brief  Erases PAGE0 and PAGE1 and writes VALID_PAGE header to PAGE0
  * @param  None
  * @retval Status of the last operation (Flash write or erase) done during
  *         EEPROM formating
  */
static HAL_StatusTypeDef EE_Format(void)
{
    HAL_StatusTypeDef FlashStatus = HAL_OK;
    uint16_t value = 0;

    FLASH_Erase(PAGE0_BASE_ADDRESS, PAGE_SIZE);
    value = VALID_PAGE;
    FLASH_Program(PAGE0_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&value);
    FLASH_Erase(PAGE1_BASE_ADDRESS, PAGE_SIZE);
    return FlashStatus;
}

/**
  * @brief  Find valid Page for write or read operation
  * @param  Operation: operation to achieve on the valid page.
  *   This parameter can be one of the following values:
  *     @arg READ_FROM_VALID_PAGE: read operation from valid page
  *     @arg WRITE_IN_VALID_PAGE: write operation from valid page
  * @retval Valid page number (PAGE0 or PAGE1) or NO_VALID_PAGE in case
  *   of no valid page was found
  */
static uint16_t EE_FindValidPage(uint8_t Operation)
{
    uint16_t PageStatus0 = 6, PageStatus1 = 6;

    /* Get Page0 actual status */
    FLASH_Read(PAGE0_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&PageStatus0);

    /* Get Page1 actual status */
    FLASH_Read(PAGE1_BASE_ADDRESS, sizeof(uint16_t), (uint8_t *)&PageStatus1);
    /* Write or read operation */
    switch (Operation) {
        case WRITE_IN_VALID_PAGE:   /* ---- Write operation ---- */
            if (PageStatus1 == VALID_PAGE) {
                /* Page0 receiving data */
                if (PageStatus0 == RECEIVE_DATA) {
                    return PAGE0;         /* Page0 valid */
                } else {
                    return PAGE1;         /* Page1 valid */
                }
            } else if (PageStatus0 == VALID_PAGE) {
                /* Page1 receiving data */
                if (PageStatus1 == RECEIVE_DATA) {
                    return PAGE1;         /* Page1 valid */
                } else {
                    return PAGE0;         /* Page0 valid */
                }
            } else {
                return NO_VALID_PAGE;   /* No valid Page */
            }

        case READ_FROM_VALID_PAGE:  /* ---- Read operation ---- */
            if (PageStatus0 == VALID_PAGE) {
                return PAGE0;           /* Page0 valid */
            } else if (PageStatus1 == VALID_PAGE) {
                return PAGE1;           /* Page1 valid */
            } else {
                return NO_VALID_PAGE ;  /* No valid Page */
            }

        default:
            return PAGE0;             /* Page0 valid */
    }
}


/**
  * @brief  Verify if active page is full and Writes variable in EEPROM.
  * @param  VirtAddress: 16 bit virtual address of the variable
  * @param  Data: 16 bit data to be written as variable value
  * @retval Success or error status:
  *           - HAL_OK: on success
  *           - PAGE_FULL: if valid page is full
  *           - NO_VALID_PAGE: if no valid page was found
  *           - Flash error code: on write Flash error
  */
static uint16_t EE_VerifyPageFullWriteVariable(uint16_t VirtAddress, uint16_t Data)
{
    HAL_StatusTypeDef FlashStatus = HAL_OK;
    uint16_t ValidPage = PAGE0;
    uint32_t Address = 0, PageEndAddress = 0, targetAddress, value = 0;

    /* Get valid Page for write operation */
    ValidPage = EE_FindValidPage(WRITE_IN_VALID_PAGE);

    /* Check if there is no valid page */
    if (ValidPage == NO_VALID_PAGE) {
        LOG(LOG_LVL_ERROR, "[%s, %d]NO_VALID_PAGE\r\n", __func__, __LINE__);
        return  NO_VALID_PAGE;
    }

    /* Get the valid Page start Address */
    Address = (uint32_t)(EEPROM_START_ADDRESS + (uint32_t)(ValidPage * PAGE_SIZE));

    /* Get the valid Page end Address */
    PageEndAddress = (uint32_t)((EEPROM_START_ADDRESS - 2) + (uint32_t)((1 + ValidPage) * PAGE_SIZE));

    /* Check each active page address starting from begining */
    targetAddress = EE_BinarySearch(Address, PageEndAddress, 0xFFFFFFFF);
    if( targetAddress > Address && targetAddress <= PageEndAddress){
        value = Data | (VirtAddress<<16);
        FLASH_Program(targetAddress, sizeof(uint32_t), (uint8_t *)&value);
        return FlashStatus;
    }

    /* Return PAGE_FULL in case the valid page is full */
    return PAGE_FULL;
}

uint16_t EE_PageCopy(uint32_t srcPageStart, uint32_t destPageStart)
{
    eeprom_ctrl_t *eeprom_ctrl = NULL;
    uint32_t       srcAddr = 0, srcDataEndAddr = 0, value = 0;
    uint16_t       virtualAddr = 0, data = 0, EepromStatus = 0;
    int            i = 0, j = 0, count = 0;
    uint8_t        *bit_flag = eeprom_ctrl->bit_flag, *flag = NULL;

    eeprom_ctrl = EE_GetInstance();
    memset(bit_flag, 0, EEPROM_BIT_FLAG_ARRAY_SIZE);
    /* 
     * srcPageStart is the valid Page start Address
     * Get the valid Page end Address 
     */
    srcAddr = srcPageStart + PAGE_SIZE - 2;

    srcDataEndAddr = EE_BinarySearch(srcPageStart, srcAddr, 0xFFFFFFFF);
    srcAddr = srcDataEndAddr - 4;
    
    /* Check each active page address starting from end */
    while ((srcAddr > srcPageStart) && srcAddr < (srcDataEndAddr + 2)) {
        /* Get the current location content to be compared with virtual address */
        FLASH_Read(srcAddr, sizeof(uint32_t), (uint8_t *)&value);
        virtualAddr = (value >> 16) & 0xFFFF;
        data = value & 0xFFFF;
        ART_ASSERT(virtualAddr < eeprom_ctrl->vaddr_end);
        i = virtualAddr / 8;
        j = virtualAddr % 8;
        flag = &bit_flag[i];
        if(!GET_BIT(*flag, j)){
            SET_BIT(*flag, j);
            /* Transfer the variable to the new active page */
            EepromStatus = EE_VerifyPageFullWriteVariable(virtualAddr, data);
            /* If program operation was failed, a Flash error code is returned */
            if (EepromStatus != HAL_OK) {
                return EepromStatus;
            }
            count++;
            if(count >= eeprom_ctrl->vaddr_end){
                break;
            }
        }
        srcAddr = srcAddr - 4;
    }
    return HAL_OK;
}

/**
  * @brief  Transfers last updated variables data from the full Page to
  *   an empty one.
  * @param  VirtAddress: 16 bit virtual address of the variable
  * @param  Data: 16 bit data to be written as variable value
  * @retval Success or error status:
  *           - HAL_OK: on success
  *           - PAGE_FULL: if valid page is full
  *           - NO_VALID_PAGE: if no valid page was found
  *           - Flash error code: on write Flash error
  */
static uint16_t EE_PageTransfer(uint16_t VirtAddress, uint16_t Data)
{
    uint32_t NewPageAddress = 0, OldPageAddress = 0, value = 0;
    uint16_t ValidPage = PAGE0;
    uint16_t EepromStatus = 0;
    eeprom_ctrl_t *eeprom_ctrl = EE_GetInstance();

    /* Get active Page for read operation */
    ValidPage = EE_FindValidPage(READ_FROM_VALID_PAGE);

    if (ValidPage == PAGE1) {     
        /* Page1 valid */
        /* New page address where variable will be moved to */
        NewPageAddress = PAGE0_BASE_ADDRESS;

        /* Old page address where variable will be taken from */
        OldPageAddress = PAGE1_BASE_ADDRESS;
    } else if (ValidPage == PAGE0) { 
        /* Page0 valid */
        /* New page address where variable will be moved to */
        NewPageAddress = PAGE1_BASE_ADDRESS;

        /* Old page address where variable will be taken from */
        OldPageAddress = PAGE0_BASE_ADDRESS;
    } else {
        LOG(LOG_LVL_ERROR, "[%s, %d]NO_VALID_PAGE\r\n", __func__, __LINE__);
        return NO_VALID_PAGE;       /* No valid Page */
    }
    value = RECEIVE_DATA;
    FLASH_Program(NewPageAddress, sizeof(uint16_t), (uint8_t *)&value);
    /* Write the variable passed as parameter in the new active page */
    EepromStatus = EE_VerifyPageFullWriteVariable(VirtAddress, Data);
    /* If program operation was failed, a Flash error code is returned */
    if (EepromStatus != HAL_OK) {
        return EepromStatus;
    }

    EE_PageCopy(OldPageAddress, NewPageAddress);

    value = VALID_PAGE;
    FLASH_Program(NewPageAddress, sizeof(uint16_t), (uint8_t *)&value);
	FLASH_Erase(OldPageAddress, PAGE_SIZE);
    /* Return last operation flash status */
    return HAL_OK;
}

uint32_t EE_BinarySearch(uint32_t startAddr, uint32_t endAddr, uint32_t key)
{
    int low = 0, mid = 0, high = 0;
    uint32_t value = 0;

    endAddr &= ~(0x3);
    ART_ASSERT(!(startAddr & 0x3) && !(endAddr & 0x3));
    low = startAddr >> 2;
    high = endAddr >> 2;
    while (low <= high){
        mid = (low + high) / 2;
        FLASH_Read(mid<<2, sizeof(uint32_t), (uint8_t *)&value);
        if(key != value){
            low = mid + 1;
        }else{
            FLASH_Read((mid - 1)<<2, sizeof(uint32_t), (uint8_t *)&value);
            if(key != value){
            	return mid<<2;
            }
            high = mid - 1;
        }
    }

    return low<<2;
}

bool EE_LoadFlashDataToRAM(uint16_t *buffer)
{
    bool ret = false;
    eeprom_ctrl_t *eeprom_ctrl = EE_GetInstance();
    uint16_t ValidPage = PAGE0;
    uint16_t virtualAddress = 0, virtualAddressValue = 0;
    uint32_t Address = 0, PageStartAddress = 0, dataEndAddress = 0, value = 0;
    uint8_t *bit_flag = eeprom_ctrl->bit_flag, *flag = NULL;
    int i,j, count = 0;

    memset(bit_flag, 0, EEPROM_BIT_FLAG_ARRAY_SIZE);
    /* Get active Page for read operation */
    ValidPage = EE_FindValidPage(READ_FROM_VALID_PAGE);

    /* Check if there is no valid page */
    if (ValidPage == NO_VALID_PAGE) {
        LOG(LOG_LVL_ERROR, "[%s, %d]NO_VALID_PAGE\r\n", __func__, __LINE__);
        goto out;
    }

    /* Get the valid Page start Address */
    PageStartAddress = (uint32_t)(EEPROM_START_ADDRESS + (uint32_t)(ValidPage * PAGE_SIZE));

    /* Get the valid Page end Address */
    Address = (uint32_t)((EEPROM_START_ADDRESS - 2) + (uint32_t)((1 + ValidPage) * PAGE_SIZE));

    dataEndAddress = EE_BinarySearch(PageStartAddress, Address, 0xFFFFFFFF);
    Address = dataEndAddress - 4;
    while (Address > (PageStartAddress + 2)) {
        FLASH_Read(Address, sizeof(uint32_t), (uint8_t *)&value);
        virtualAddress = (value >> 16) & 0xFFFF;
        virtualAddressValue = value & 0xFFFF;
        if(virtualAddress > eeprom_ctrl->vaddr_end){
            goto out;
        }
        i = virtualAddress / 8;
        j = virtualAddress % 8;
        flag = &bit_flag[i];
        if(!GET_BIT(*flag, j)){
            SET_BIT(*flag, j);
            buffer[virtualAddress] = virtualAddressValue;
            count++;
            if(count >= eeprom_ctrl->vaddr_end){
                break;
            }
        }
        Address = Address - 4;
    }
    ret = true;
out:
    return ret;
}

