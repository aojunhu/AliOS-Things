#include "ln88xx.h"
#include "reg_efuse.h"
#include "ll/ll_efuse.h"

void LL_EFUSE_WriteEnable(EFUSE_Instance * EFUSEx)
{
    uint32_t base = (uint32_t)((uint32_t *)EFUSEx);
    uint32_t key1 = 0x8C9DAEBF;
    uint32_t key2 = 0x13141516;

    efuse_key1_set(base, key1);
    efuse_key2_set(base, key2);

    efuse_pwr_ctrl1_set(base, 0x0c); // LDO parameter setting.
}

/**
 * @brief Write R0~R7. The effective value is read from correct register.
 *
 * @param EFUSEx
 * @param regIndex index, [0,7].
 * @param regValue
 */
void LL_EFUSE_WriteShadowReg(EFUSE_Instance *EFUSEx, uint8_t regIndex, uint32_t regValue)
{
    uint32_t base = (uint32_t)((uint32_t *)EFUSEx);

    efuse_pwr_ctrl0_set(base, 0x01); // avdd enable

    efuse_r0_set(base + (regIndex << 2), regValue);

    while((efuse_status_get(base) & 0x01)); // wait when busy.

    efuse_pwr_ctrl0_set(base, 0x00); // avdd disable

    for (uint32_t t = 0; t < 400; t++); // delay 10us
}

/**
 * @brief Read from shawdow register R0~R7.
 *
 * @param EFUSEx
 * @param regIndex 0~7 is valid.
 * @return uint32_t
 */
uint32_t LL_EFUSE_ReadShadowReg(EFUSE_Instance * EFUSEx, uint8_t regIndex)
{
    uint32_t base = (uint32_t)((uint32_t *)EFUSEx);
    uint32_t regValue;

    efuse_rd_trig_set(base, 0x01); // trigger read.

    while((efuse_status_get(base) & 0x01)); // wait when busy.

    regValue = efuse_r0_get(base + (regIndex << 2));

    return regValue;
}

/**
 * @brief The effective value is stored in correct registers.
 *
 * @param EFUSEx
 * @param regIndex 0~7 is valid.
 * @return uint32_t
 */
uint32_t LL_EFUSE_ReadCorrectReg(EFUSE_Instance * EFUSEx, uint8_t regIndex)
{
    uint32_t base = (uint32_t)((uint32_t *)EFUSEx);
    uint32_t regValue;

    efuse_rd_trig_set(base, 0x01); // trigger read.

    while((efuse_status_get(base) & 0x01)); // wait when busy.

    regValue = efuse_correct_r0_get(base + (regIndex << 2));

    return regValue;
}
