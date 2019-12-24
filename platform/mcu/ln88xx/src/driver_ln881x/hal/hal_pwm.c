#include "types.h"
#include "proj_config.h"
#include "ll/ll_pwm.h"
#include "hal/hal_pwm.h"
#include "hal/hal_common.h"

/**
 * @brief Enable a PWM according to its configuration.
 *
 * @param config PWM configuration, its maximum frequency is 800KHz.
 * @return int8_t return HAL_OK on success, return HAL_ERROR on failure.
 */
int8_t HAL_PWM_Config(PWM_InitTypeDef config)
{
    uint32_t clk_freq = 0;
    uint32_t high = 0;
    uint32_t low = 0;

    clk_freq = APBUS0_CLOCK;    // PWM source clock

    if ( (config.frequency > (clk_freq/100) )  || (config.duty_cycle > 1.0) ) {
        assert_param(0);
        return HAL_ERROR;
    }

    high = config.duty_cycle * (clk_freq / config.frequency);
    low = (1 - config.duty_cycle ) * (clk_freq / config.frequency);

    switch (config.index) {
        case PWM_INDEX_4:
            LL_PWM4_Config(high, low);
            break;
        case PWM_INDEX_5:
            LL_PWM5_Config(high, low);
            break;
        case PWM_INDEX_6:
            LL_PWM6_Config(high, low);
            break;
        case PWM_INDEX_7:
            LL_PWM7_Config(high, low);
            break;
        default:
            break;
    }
    return HAL_OK;
}

/**
 * @brief PWM start.
 *
 * @param index PWM index.
 */
void HAL_PWM_Start(PWM_Index index)
{
    switch (index) {
        case PWM_INDEX_4:
            LL_PWM4_Start();
            break;
        case PWM_INDEX_5:
            LL_PWM5_Start();
            break;
        case PWM_INDEX_6:
            LL_PWM6_Start();
            break;
        case PWM_INDEX_7:
            LL_PWM7_Start();
            break;
        default:
            break;
    }
}

/**
 * @brief PWM stop.
 *
 * @param index PWM index.
 */
void HAL_PWM_Stop(PWM_Index index)
{
    switch (index) {
        case PWM_INDEX_4:
            LL_PWM4_Stop();
            break;
        case PWM_INDEX_5:
            LL_PWM5_Stop();
            break;
        case PWM_INDEX_6:
            LL_PWM6_Stop();
            break;
        case PWM_INDEX_7:
            LL_PWM7_Stop();
            break;
        default:
            break;
    }
}

/**
 * @brief Get PWM dutycycle.
 *
 * @param index PWM index.
 * @param freq user-defined PWM frequency.
 * @return float dutycycle.
 */
float HAL_PWM_Get_DutyCycle(PWM_Index index, uint32_t freq)
{
    uint32_t pwm_h, pwm_l;
    uint32_t clk_freq = APBUS0_CLOCK;
    float dutycycle = 0;

    switch( index ) {
        case PWM_INDEX_4:
            LL_PWM4_GetParam(&pwm_h, &pwm_l);
            break;
        case PWM_INDEX_5:
            LL_PWM5_GetParam(&pwm_h, &pwm_l);
            break;
        case PWM_INDEX_6:
            LL_PWM6_GetParam(&pwm_h, &pwm_l);
            break;
        case PWM_INDEX_7:
            LL_PWM7_GetParam(&pwm_h, &pwm_l);
            break;
        default:
            break;
    }
    dutycycle = (pwm_h / clk_freq) * freq;
    return dutycycle;
}
