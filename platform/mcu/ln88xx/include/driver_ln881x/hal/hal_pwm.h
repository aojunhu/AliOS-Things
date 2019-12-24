#ifndef __HAL_PWM_H__
#define __HAL_PWM_H__
#ifdef __cplusplus
    extern "C" {
#endif // __cplusplus

#include "types.h"

////////////////////////////////  Datatypes and Macros  ///////////////////////

/**
 * @brief PWM channel index, can only choose from PWM_INDEX_4 to PWM_INDEX_7. We should set the io mux of specific pwm to io pad.
 */
typedef enum
{
    PWM_INDEX_4 = 0,
    PWM_INDEX_5,
    PWM_INDEX_6,
    PWM_INDEX_7
} PWM_Index;

/**
 * @brief This is the struct to initialize the pwm module.
 */
typedef struct
{
    PWM_Index index;    /**< index: Set the pwm channel index */
    uint32_t frequency;  /**< frequency: user defined frequecy, maximum value is 800KHz */
    double duty_cycle;   /**< high level period */
} PWM_InitTypeDef;


////////////////////////////////  Function Declarations  //////////////////////

/**
 * @brief Enable a PWM according to its configuration.
 *
 * @param config PWM configuration, its maximum frequency is 800KHz.
 * @return int8_t return HAL_OK on success, return HAL_ERROR on failure.
 */
int8_t HAL_PWM_Config(PWM_InitTypeDef config);

/**
 * @brief PWM start.
 *
 * @param index PWM index.
 */
void HAL_PWM_Start(PWM_Index index);

/**
 * @brief PWM stop.
 *
 * @param index PWM index.
 */
void HAL_PWM_Stop(PWM_Index index);

/**
 * @brief Get PWM dutycycle.
 *
 * @param index PWM index.
 * @param freq user-defined PWM frequency.
 * @return float dutycycle.
 */
float HAL_PWM_Get_DutyCycle(PWM_Index index, uint32_t freq);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __HAL_PWM_H__
