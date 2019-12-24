#include "include/reg_cache.h"
#include "ll/ll_cache.h"

#pragma push
#pragma O2

/*******************************  reg_cache_en  ******************************/

/**
 * @brief Get cache state.
 * 
 * @return uint8_t cache state: 0 -- idle; 1 -- filling.
 */
uint8_t LL_CACHE_StateGet(void)
{
    return cache_cache_cs_getf();
}

/**
 * @brief enable/disable cache function.
 * 
 * @param enable 0 -- disable; 1 -- enable
 */
void LL_CACHE_Enable(uint8_t enable)
{
    if (enable) {
        cache_cache_en_setf(1);
    } else {
        cache_cache_en_setf(0);
    }
}

/***************************  reg_flash_base_addr  ***************************/

/**
 * @brief Set FLASH base address.
 * 
 * @param addr 
 */
void LL_CACHE_FlashBaseAddrSet(uint32_t addr)
{
    cache_flash_base_addr_setf(addr);
}

/**
 * @brief Get FLASH base address.
 * 
 * @return uint32_t 
 */
uint32_t LL_CACHE_FlashBaseAddrGet(void)
{
    return cache_flash_base_addr_getf();
}

/*****************************  req_qspi_dr_addr  ****************************/

/**
 * @brief Set QSPI DR register address.
 * 
 * @param addr QSPI DR register address.
 */
void LL_CACHE_QspiDRAddrSet(uint32_t addr)
{
    cache_qspi_dr_addr_setf(addr);
}

/**
 * @brief Get QSPI DR register address.
 * 
 * @return uint32_t 
 */
uint32_t LL_CACHE_QspiDRAddrGet(void)
{
    return cache_qspi_dr_addr_getf();
}

/******************************  reg_flash_cmd  ******************************/

/**
 * @brief Set FLASH cmd/data format.
 * 
 * @param tagram_emaw tag ram parameter
 * @param tagram_ema  tag ram parameter
 * @param flash_rd_cmd_format 8bit read command format: 0 -- {24'd0, cmd}, 1 -- {cmd, 24'd0}
 * @param flash_rd_data_format flash output data format: 0 -- little endian. 1 -- big endian.
 * @param flash_rd_addr_format 24bit read address format: 0 -- {8'd0, addr}, 1 -- {addr, 8'd0}
 * @param flash_rd_cmd SPI FLASH read command.
 */
void LL_CACHE_FlashCmdSet(uint8_t tagram_emaw, uint8_t tagram_ema, uint8_t flash_rd_cmd_format,
                            uint8_t flash_rd_data_format, uint8_t flash_rd_addr_format, uint8_t flash_rd_cmd)
{
    cache_reg_flash_cmd_pack(tagram_emaw, tagram_ema, flash_rd_cmd_format, 
                            flash_rd_data_format, flash_rd_addr_format, flash_rd_cmd);
}

/*****************************  reg_flush_addr_l  ****************************/

/**
 * @brief flush address LOW range
 * 
 * @param addrl 
 */
void LL_CACHE_FlushAddrLow(uint32_t addrl)
{
    cache_reg_flush_addr_l_set(addrl);
}

/*****************************  reg_flush_addr_h  ****************************/

/**
 * @brief flush address high range
 * 
 * @param addrh 
 */
void LL_CACHE_FlushAddrHigh(uint32_t addrh)
{
    cache_reg_flush_addr_h_set(addrh);
}

/*******************************  reg_flush_all  *****************************/

/**
 * @brief flush all data in tag ram.
 * 
 * @param isAll 
 */
void LL_CACHE_FlushAll(uint8_t isAll)
{
    if (isAll) {
        cache_flush_all_setf(1);
    } else {
        cache_flush_all_setf(0);
    }
}

/*******************************  reg_flush_en  ******************************/

/**
 * @brief Start flush the range of cache data or all the cache data.
 * 
 * @param en 
 */
void LL_CACHE_FlushEnable(uint8_t en)
{
    if (en) {
        cache_flush_en_setf(1);
    } else {
        cache_flush_en_setf(0);
    }
}

/**
 * @brief Check if the flush operation is done or not.
 * 
 * @return uint8_t 1 -- flush in progress; 0 -- flush done.
 */
uint8_t LL_CACHE_IsFlushing(void)
{
    return cache_flush_en_getf();
}

#pragma pop

