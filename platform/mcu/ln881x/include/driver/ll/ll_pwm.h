#ifndef __LL_PWM_H__
#define __LL_PWM_H__
#ifdef __cplusplus
    extern "C" {
#endif // __cplusplus

/**
 * @brief Get current enabled PWM index, each bit for one PWM module.
 * bit0 represents PWM4,
 * bit1 represents PWM5,
 * bit2 represents PWM6,
 * bit3 represents PWM7.
 *
 * @return uint8_t
 */
uint8_t LL_PWM_GetEnabled(void);

/**
 * @brief Config PWM.
 *
 * @param high high-pulse width.
 * @param low low-pulse width.
 */
void LL_PWM4_Config(uint32_t high, uint32_t low);

/**
 * @brief PWM4 start.
 */
void LL_PWM4_Start(void);

/**
 * @brief PWM4 top.
 */
void LL_PWM4_Stop(void);

/**
 * @brief Get PWM high-pulse and low-pulse width
 *
 * @param high
 * @param low
 */
void LL_PWM4_GetParam(uint32_t *high, uint32_t *low);

/**
 * @brief Config PWM5.
 *
 * @param high high-pulse width.
 * @param low low-pulse width.
 */
void LL_PWM5_Config(uint32_t high, uint32_t low);

/**
 * @brief PWM5 start.
 */
void LL_PWM5_Start(void);

/**
 * @brief PWM5 stop.
 */
void LL_PWM5_Stop(void);

/**
 * @brief Get PWM5 high-pulse and low-pulse width
 *
 * @param high
 * @param low
 */
void LL_PWM5_GetParam(uint32_t *high, uint32_t *low);

/**
 * @brief Config PWM6.
 *
 * @param high high-pulse width.
 * @param low low-pulse width.
 */
void LL_PWM6_Config(uint32_t high, uint32_t low);

/**
 * @brief PWM6 start.
 */
void LL_PWM6_Start(void);

/**
 * @brief PWM6 stop.
 */
void LL_PWM6_Stop(void);

/**
 * @brief Get PWM6 high-pulse and low-pulse width
 *
 * @param high
 * @param low
 */
void LL_PWM6_GetParam(uint32_t *high, uint32_t *low);

/**
 * @brief Config PWM7.
 *
 * @param high high-pulse width.
 * @param low low-pulse width.
 */
void LL_PWM7_Config(uint32_t high, uint32_t low);

/**
 * @brief PWM7 start.
 */
void LL_PWM7_Start(void);

/**
 * @brief PWM7 Stop.
 */
void LL_PWM7_Stop(void);

/**
 * @brief Get PWM7 high-pulse and low-pulse width
 *
 * @param high
 * @param low
 */
void LL_PWM7_GetParam(uint32_t *high, uint32_t *low);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __LL_PWM_H__
