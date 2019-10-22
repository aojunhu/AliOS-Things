#include "driver/ll/ll_phy_art2000.h"
#if defined (LN881x)
  #include "base_addr_ln881x.h"
#elif defined (LN882x)
  #include "base_addr_ln882x.h"
#endif

#define PHY_PA_BASE              (REG_MAC_PCU_REG_BASE)
#define PHY_REG_ACCESS_CON       (*(volatile uint32_t *)(PHY_PA_BASE + 0x0638))
#define PHY_REG_RW_DATA          (*(volatile uint32_t *)(PHY_PA_BASE + 0x063C))
#define BIT0                     ((uint32_t)(1 << 0))
#define BIT1                     ((uint32_t)(1 << 1))
#define PHY_REG_RW_TIMEOUT       (3) /* 3ms */

/**
 * @brief  Read value to the addr of PHY-PA.
 * @param  addr: the address of PHY-PA register.
 *         value: the value of PHY-PA register. 
 * @return 0 : on success, -1 : read reg timeout(failed)
 * @note   There is a 22 ms blocking delay inside the function.
 */
int32_t ll_phy_art2000_reg_read(uint8_t reg_addr, uint32_t *reg_data)
{
    uint32_t val   = 0;
    uint32_t delay = 0;
    int32_t ret = -1;
	uint32_t t = 0;
	
    while((PHY_REG_ACCESS_CON & BIT0) == BIT0) 
    {
        for(t = 0; t < 40000; t++);//delay 1ms(@160M CPU,O0(4 instructions))
        delay++;

        /* Wait for sometime for the CE-LUT update operation to complete */
        if(delay > PHY_REG_RW_TIMEOUT) {
            return ret;
        }
    }

    val  = ((uint8_t)reg_addr << 2); /* Register address set in bits 2 - 9 */
    val |= BIT1;                     /* Read/Write bit set to 1 for read */
    val |= BIT0;                     /* Access bit set to 1 */
    PHY_REG_ACCESS_CON = val;

    while((PHY_REG_ACCESS_CON & BIT0) == BIT0) 
    {
        for(t = 0; t < 40000; t++);//delay 1ms(@160M CPU,O0(4 instructions))
        delay++;

        /* Wait for sometime for the CE-LUT update operation to complete */
        if(delay > PHY_REG_RW_TIMEOUT) {
            return ret;
        }
    }

    *reg_data = PHY_REG_RW_DATA; /* Read data from register */
    ret = 0;
    return ret;
}

/**
 * @brief  Write value to the addr of PHY-PA.
 * @param  addr: the address of PHY-PA register.
 *         value: the value of PHY-PA register. 
 * @return 0 : on success, -1 : write reg timeout(failed)
 * @note   There is a 11 ms blocking delay inside the function.
 */
int32_t ll_phy_art2000_reg_write(uint8_t reg_addr, uint32_t reg_data)
{
    uint32_t val   = 0;
    uint32_t delay = 0;
    int32_t ret = -1;
	uint32_t t = 0;

    while((PHY_REG_ACCESS_CON & BIT0) == BIT0) 
    {
        for(t = 0; t < 40000; t++);//delay 1ms(@160M CPU,O0(4 instructions))
        delay++;

        /* Wait for sometime for the CE-LUT update operation to complete */
        if(delay > PHY_REG_RW_TIMEOUT) {
            return ret;
        }
    }

    /* Write the data to register */
    PHY_REG_RW_DATA = reg_data;

    val  = ((uint8_t)reg_addr << 2); /* Register address set in bits 2 - 9 */
    val &= ~ BIT1;                   /* Read/Write bit set to 0 for write */
    val |= BIT0;                     /* Access bit set to 1 */

    PHY_REG_ACCESS_CON = val;
    
    ret = 0;
	return ret;
}


