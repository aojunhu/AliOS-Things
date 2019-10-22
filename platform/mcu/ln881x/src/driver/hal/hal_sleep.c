
#include <string.h>
#include "types.h"
#include "ln88xx.h"
#include "driver/hal/hal_syscon.h"
#include "driver/hal/hal_rtc.h"
#include "driver/hal/hal_gpio.h"
#include "driver/hal/cache.h"
#include "driver/hal/flash.h"
#include "driver/hal/hal_sleep.h"
#include "utils/debug/log.h"
#include "FreeRTOS.h"

#define SLEEP_TIMER_EXTRA_COMPENSATION_MSEC                             (0)
#define RTC_TIMER_EXTRA_COMPENSATION_MSEC                               (0)

hal_sleep_ctrl_t g_sleep_ctrl __attribute__((section("retention_data"))) = {0};


#define EXT_IRQ_WAKEUP                          (1)

#if (EXT_IRQ_WAKEUP == 1)
#define EXT_IRQ_WAKEUP_GPIO              (GPIOA_7)
void EXTERNAL_IRQHandler(void)
{
    //uint8_t stat;
    //stat = HAL_SYSCON_EXT_INTR_Stat();
    hal_sleep_wakeup_source_set(EXTERNAL_WAKEUP_SRC);
    HAL_SYSCON_EXT_INTR_Clear();
}

static void hal_sleep_external_irq_wakeup_init(SYSTEM_EXT_INT_Wakeup_Index ext_int_idx, SYSTEM_EXT_INT_Triggle_Type triggle)
{
    HAL_SYSCON_EXT_INTR_Set_Triggle_Condition(ext_int_idx, triggle);
    HAL_SYSCON_EXT_INTR_Enable(ext_int_idx, true);
    NVIC_EnableIRQ(EXTERNAL_IRQn);
}
#endif

void hal_sleep_rtc_wakeup_init(uint32_t counter_match)
{
    RTC_InitTypeDef rtcConfig;

    rtcConfig.counter_load = 0;
    rtcConfig.counter_match = counter_match;
    rtcConfig.int_en = RTC_INT_ENABLE;
    rtcConfig.int_mask = RTC_INT_UNMASK;
    rtcConfig.wrap_en = RTC_WRAP_DISABLE;//RTC_WRAP_ENABLE
    HAL_RTC_Init(rtcConfig);
    HAL_RTC_Enable(RTC_ENABLE);
    NVIC_EnableIRQ(RTC_IRQn);
}
void hal_sleep_rtc_wakeup_deinit(void)
{
    HAL_RTC_Enable(RTC_DISABLE);
    NVIC_DisableIRQ(RTC_IRQn);
}
void RTC_IRQHandler(void)
{
    RTC_IntStatus status = HAL_RTC_IntStatus();

    if (status) {
        // clear int
        HAL_RTC_ClearInt();

        //disable RTC
        hal_sleep_rtc_wakeup_deinit();

        //set wakeup src
        hal_sleep_wakeup_source_set(RTC_WAKEUP_SRC);
    }
}

static hal_sleep_ctrl_t *hal_sleep_get_handle(void)
{
    return &g_sleep_ctrl;
}
void hal_sleep_init(sleep_mode_enum_t sleep_mode)
{
    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();

    hal_sleep_set_mode(sleep_mode);
}
void hal_sleep_deinit(void)
{
    return;
}
static void hal_sleep_set_wakeup_source(sleep_mode_enum_t sleep_mode)
{
    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();

    //clear wakeup source
    hal_sleep_wakeup_source_clear_all();
    if(sleep_mode >= LIGHT_SLEEP)
    {
        sleep_ctrl->nvic_int_en[0] = NVIC->ISER[0];
        sleep_ctrl->nvic_int_en[1] = NVIC->ISER[1];

        //disable all interrupts
        NVIC->ICER[0] = 0xFFFFFFFF;
        NVIC->ICER[1] = 0xFFFFFFFF;
    }

    //enable wakeup IRQ
    if(sleep_mode >= LIGHT_SLEEP){
        if(sleep_mode == LIGHT_SLEEP){
            NVIC_EnableIRQ(UART0_IRQn);
            NVIC_EnableIRQ(UART1_IRQn);
        }else{
            NVIC_EnableIRQ(SLEEP_IRQn);
        }

        if(sleep_mode <= DEEP_SLEEP){
            NVIC_EnableIRQ(MAC_IRQn);
        }
#if (EXT_IRQ_WAKEUP == 1)
        //ext int wakeup init
        hal_sleep_external_irq_wakeup_init(HAL_GPIO_Mapping_To_Ext_Int(EXT_IRQ_WAKEUP_GPIO), SYSTEM_EXT_INT_TRIG_RISING_EDGE);
#endif
    }
}
void hal_sleep_set_mode(sleep_mode_enum_t sleep_mode)
{
    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();

    sleep_ctrl->sleep_mode = sleep_mode;
}

sleep_mode_enum_t hal_sleep_get_mode(void)
{
    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();
    return sleep_ctrl->sleep_mode;
}
extern bool is_sta_sleeping(void);
extern void initialize_phy(void);
//#include "wifi_cfg.h"
void hal_pre_sleep_processing(uint32_t *ticks)
{
    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();
    sleep_mode_enum_t sleep_mode = hal_sleep_get_mode();
    uint64_t u64val = (uint64_t)(*ticks) * 1000 / configTICK_RATE_HZ;

    if(sleep_mode < LIGHT_SLEEP || sleep_ctrl->flag || (sleep_ctrl->wifi_is_slept_cb && !sleep_ctrl->wifi_is_slept_cb())){
        *ticks = 0;
        return;
    }

    if(u64val >> 32){
        LOG(LOG_LVL_ERROR, "[%s, %d]ticks(%d) expected overflow!\r\n", __func__, __LINE__, *ticks);
        u64val = u64val & 0xFFFFFFFFULL;
    }
    sleep_ctrl->msec = u64val;

    //Stop SysTick
    SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;

    sleep_ctrl->flag = true;

    //set wakeup source
    hal_sleep_set_wakeup_source(sleep_mode);
    if(sleep_mode == LIGHT_SLEEP){
        u64val = ((uint64_t)1000000 * (sleep_ctrl->msec - RTC_TIMER_EXTRA_COMPENSATION_MSEC))/HAL_SYSCON_Get32KPeriodNs();
        if(u64val >> 32){
            LOG(LOG_LVL_ERROR, "[%s, %d]RTC counter_match(%lld) overflow!\r\n", __func__, __LINE__, u64val);
            u64val = u64val & 0xFFFFFFFFULL;
        }
        hal_sleep_rtc_wakeup_init(u64val);
    }else{
        sleep_ctrl->compensation = HAL_SYSCON_CalculateCompensateNs() + (uint64_t)SLEEP_TIMER_EXTRA_COMPENSATION_MSEC*1000000;
        HAL_SYSCON_CPUSleepDurationEnable(((uint64_t)*ticks * 1000000000 / configTICK_RATE_HZ) - sleep_ctrl->compensation);
    }
    ll_pre_sleep_processing(sleep_mode);
#if 0
    if(sleep_mode >= DEEP_SLEEP){
        FLASH_PowerDown();
    }
#endif
}
uint32_t hal_post_sleep_processing(uint32_t ticks)
{
    uint64_t sleep_ns = 0, real0=0;

    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();
    sleep_mode_enum_t mode = hal_sleep_get_mode();

    if(mode < LIGHT_SLEEP || !sleep_ctrl->flag){
        return 0;
    }

#if 0
    if(mode >= DEEP_SLEEP){
        FLASH_PowerOn();
    }
#endif

    if(mode >= RETENTION_SLEEP){
        FLASH_Init();
        //Enable QSPI 4bit mode
        FLASH_QuadModeEnable(1);
        //Init Flash cache
        flash_cache_init(0);
        log_init();
    }

    sleep_ctrl->flag = false;
    ll_post_sleep_processing(mode);

    if(mode == LIGHT_SLEEP){
        ticks = (((uint64_t)HAL_RTC_GetCurValue() * HAL_SYSCON_Get32KPeriodNs() / 1000000 + RTC_TIMER_EXTRA_COMPENSATION_MSEC) * configTICK_RATE_HZ) / 1000;
    }else{
        real0 = HAL_SYSCON_RealSleepTime();
        sleep_ns = real0 + sleep_ctrl->compensation;
        ticks = (sleep_ns * configTICK_RATE_HZ) / 1000000000;
    }
    if(sleep_ctrl->msec < ticks){
        ticks = sleep_ctrl->msec;
    }

    if(mode >= LIGHT_SLEEP)
    {        
        NVIC->ISER[0] = sleep_ctrl->nvic_int_en[0];
        NVIC->ISER[1] = sleep_ctrl->nvic_int_en[1];
    }
    if(sleep_ctrl->reinit_phy_cb)
    {
        sleep_ctrl->reinit_phy_cb();
    }
    return ticks;
}
void hal_sleep_wakeup_source_set(hal_sleep_wakeup_src_enum_t wakeup_src)
{
    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();
    SET_BIT(sleep_ctrl->wakeup_src,(uint8_t)wakeup_src);
}
void hal_sleep_wakeup_source_clear_all(void)
{
    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();
    sleep_ctrl->wakeup_src = 0;
}
uint8_t hal_sleep_wakeup_source_get(void)
{
    return hal_sleep_get_handle()->wakeup_src;
}
void hal_sleep_register_callback(reinitialize_phy_cb_t reinit_phy_cb, wifi_is_slept_cb_t wifi_is_slept_cb)
{
    hal_sleep_ctrl_t *sleep_ctrl = hal_sleep_get_handle();
    sleep_ctrl->reinit_phy_cb = reinit_phy_cb;
    sleep_ctrl->wifi_is_slept_cb = wifi_is_slept_cb;
}

void SLEEP_IRQHandler(void)
{
    //do nothing
    hal_sleep_wakeup_source_set(SLEEP_WAKEUP_SRC);
}

