#include "types.h"
#include "ll/ll_pwm.h"
#include "reg_pwm.h"

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////        CR       /////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Start PWM of one channel.
 *
 * @param pwm_chan_x channel index, valid value is 0~11.
 */
void LL_PWM_Start(uint8_t pwm_chan_x)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    uint8_t en = 1;

    if (pwm_chan_x % 2) {
        // chan 1, 3, 5, 7, 9, 11
        pwm_enb_setf(base, en);
    } else {
        // chan 0, 2, 4, 6, 8, 10
        pwm_ena_setf(base, en);
    }
}

/**
 * @brief Stop PWM of one channel
 *
 * @param pwm_chan_x channel index, valid value is 0~11.
 */
void LL_PWM_Stop(uint8_t pwm_chan_x)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    uint8_t en = 0;

    if (pwm_chan_x % 2) {
        // chan 1, 3, 5, 7, 9, 11
        pwm_enb_setf(base, en);
    } else {
        // chan 0, 2, 4, 6, 8, 10
        pwm_ena_setf(base, en);
    }
}


///////////////////////////////////////////////////////////////////////////////
/////////////////////////////        CFG       ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief PWM output invert, active high.
 *
 * @param pwm_chan_x channel index, valid value is 0~11.
 * @param en
 */
void LL_PWM_Invert_Set(uint8_t pwm_chan_x, uint8_t en)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    if (pwm_chan_x % 2) {
        // chan 1, 3, 5, 7, 9, 11
        pwm_invb_setf(base, en ? 1:0);
    } else {
        // chan 0, 2, 4, 6, 8, 10
        pwm_inva_setf(base, en ? 1:0);
    }
}

/**
 * @brief PWM count mode settting.
 *
 * @param pwm_chan_x channel index, valid value is 0~11.
 * @param mode valid value is 0~3.
 * 0: count up, 0-->load, 0-->load, 0-->load
 * 1: count down, load-->0, load-->0, load-->0
 * 2/3: count up/down, 0-->load-->0-->load...
 */
void LL_PWM_CntMode_Set(uint8_t pwm_chan_x, uint8_t mode)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    pwm_cnt_mode_setf(base, mode);
}

/**
 * @brief Set clock division of one channel.
 *
 * @param pwm_chan_x channel index, valid value is 0~11.
 * @param clk_div clock divide by 0:1, 1:2, ..., 63:64.
 */
void LL_PWM_Div_Set(uint8_t pwm_chan_x, uint8_t clk_div)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    pwm_div_setf(base, clk_div);
}

uint8_t LL_PWM_Div_Get(uint8_t pwm_chan_x)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    return pwm_div_getf(base);
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////        LOAD       /////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Set count load for PWM. It cann't be set on the fly.
 *
 * @param pwm_chan_x channel index, valid value is 0~11.
 * @param load
 */
void LL_PWM_Load_Set(uint8_t pwm_chan_x, uint16_t load)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    pwm_load_setf(base, load);
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////         CMP       /////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Set channel compersion value.
 *
 * @param pwm_chan_x channel index, valid value is 0~11.
 * @param cmp
 */
void LL_PWM_Compare_Set(uint8_t pwm_chan_x, uint16_t cmp)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    if (pwm_chan_x % 2) {
        // chan 1, 3, 5, 7, 9, 11
        pwm_cmp_b_setf(base, cmp);
    } else {
        // chan 0, 2, 4, 6, 8, 10
        pwm_cmp_a_setf(base, cmp);
    }
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////         COUNT       /////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Read count value of one channel.
 *
 * @param pwm_chan_x channel index, valid value is 0~11.
 * @return uint32_t
 */
uint32_t LL_PWM_Count_Read(uint8_t pwm_chan_x)
{
    uint32_t base_base = PWM_0_BASE;
    uint32_t base_offset = 0x20;
    uint8_t  offset_cnt = pwm_chan_x / 2;
    uint32_t base = base_base + base_offset * offset_cnt;

    return pwm_count_getf(base);
}

