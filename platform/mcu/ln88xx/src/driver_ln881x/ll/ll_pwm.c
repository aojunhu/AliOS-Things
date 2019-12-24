#include "types.h"
#include "reg_sysc_cmp.h"
#include "ll/ll_pwm.h"

/**
 * @brief Get current enabled PWM index, each bit for one PWM module.
 * bit0 represents PWM4,
 * bit1 represents PWM5,
 * bit2 represents PWM6,
 * bit3 represents PWM7.
 *
 * @return uint8_t
 */
uint8_t LL_PWM_GetEnabled(void)
{
    return sysc_cmp_r_pwm_en_getf();
}

/**
 * @brief Config PWM.
 *
 * @param high high-pulse width.
 * @param low low-pulse width.
 */
void LL_PWM4_Config(uint32_t high, uint32_t low)
{
    sysc_cmp_r_pwm1_wid_hi_setf(high);
    sysc_cmp_r_pwm1_wid_lo_setf(low);
    LL_PWM4_Stop();
}

/**
 * @brief PWM4 start.
 */
void LL_PWM4_Start(void)
{
    sysc_cmp_r_pwm_en_setf( sysc_cmp_r_pwm_en_getf() | 0x1);
}

/**
 * @brief PWM4 top.
 */
void LL_PWM4_Stop(void)
{
    sysc_cmp_r_pwm_en_setf( sysc_cmp_r_pwm_en_getf() & 0xE);
}

/**
 * @brief Get PWM high-pulse and low-pulse width
 *
 * @param high
 * @param low
 */
void LL_PWM4_GetParam(uint32_t *high, uint32_t *low)
{
    *high = sysc_cmp_r_pwm1_wid_hi_getf();
    *low = sysc_cmp_r_pwm1_wid_lo_getf();
}

/**
 * @brief Config PWM5.
 *
 * @param high high-pulse width.
 * @param low low-pulse width.
 */
void LL_PWM5_Config(uint32_t high, uint32_t low)
{
    sysc_cmp_r_pwm2_wid_hi_setf(high);
    sysc_cmp_r_pwm2_wid_lo_setf(low);
    LL_PWM5_Stop();
}

/**
 * @brief PWM5 start.
 */
void LL_PWM5_Start(void)
{
    sysc_cmp_r_pwm_en_setf( sysc_cmp_r_pwm_en_getf() | 0x2);
}

/**
 * @brief PWM5 stop.
 */
void LL_PWM5_Stop(void)
{
    sysc_cmp_r_pwm_en_setf( sysc_cmp_r_pwm_en_getf() & 0xD);
}

/**
 * @brief Get PWM5 high-pulse and low-pulse width
 *
 * @param high
 * @param low
 */
void LL_PWM5_GetParam(uint32_t *high, uint32_t *low)
{
    *high = sysc_cmp_r_pwm2_wid_hi_getf();
    *low = sysc_cmp_r_pwm2_wid_lo_getf();
}

/**
 * @brief Config PWM6.
 *
 * @param high high-pulse width.
 * @param low low-pulse width.
 */
void LL_PWM6_Config(uint32_t high, uint32_t low)
{
    sysc_cmp_r_pwm3_wid_hi_setf(high);
    sysc_cmp_r_pwm3_wid_lo_setf(low);
    LL_PWM6_Stop();
}

/**
 * @brief PWM6 start.
 */
void LL_PWM6_Start(void)
{
    sysc_cmp_r_pwm_en_setf( sysc_cmp_r_pwm_en_getf() | 0x4);
}

/**
 * @brief PWM6 stop.
 */
void LL_PWM6_Stop(void)
{
    sysc_cmp_r_pwm_en_setf( sysc_cmp_r_pwm_en_getf() & 0xB);
}

/**
 * @brief Get PWM6 high-pulse and low-pulse width
 *
 * @param high
 * @param low
 */
void LL_PWM6_GetParam(uint32_t *high, uint32_t *low)
{
    *high = sysc_cmp_r_pwm3_wid_hi_getf();
    *low = sysc_cmp_r_pwm3_wid_lo_getf();
}

/**
 * @brief Config PWM7.
 *
 * @param high high-pulse width.
 * @param low low-pulse width.
 */
void LL_PWM7_Config(uint32_t high, uint32_t low)
{
    sysc_cmp_r_pwm4_wid_hi_setf(high);
    sysc_cmp_r_pwm4_wid_lo_setf(low);
    LL_PWM7_Stop();
}

/**
 * @brief PWM7 start.
 */
void LL_PWM7_Start(void)
{
    sysc_cmp_r_pwm_en_setf( sysc_cmp_r_pwm_en_getf() | 0x8);
}

/**
 * @brief PWM7 Stop.
 */
void LL_PWM7_Stop(void)
{
    sysc_cmp_r_pwm_en_setf( sysc_cmp_r_pwm_en_getf() & 0x7);
}

/**
 * @brief Get PWM7 high-pulse and low-pulse width
 *
 * @param high
 * @param low
 */
void LL_PWM7_GetParam(uint32_t *high, uint32_t *low)
{
    *high = sysc_cmp_r_pwm4_wid_hi_getf();
    *low = sysc_cmp_r_pwm4_wid_lo_getf();
}
