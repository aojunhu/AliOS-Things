#ifndef __HAL_SLEEP_H__
#define __HAL_SLEEP_H__

#ifdef __cplusplus
    extern "C" {
#endif // __cplusplus

#include "types.h"
#include "driver/ll/ll_sleep.h"

typedef enum {
    SLEEP_WAKEUP_SRC = 0,
    MAC_WAKEUP_SRC,
    EXTERNAL_WAKEUP_SRC,
    RTC_WAKEUP_SRC,
}hal_sleep_wakeup_src_enum_t;

typedef void (* reinitialize_phy_cb_t)(void);
typedef bool (* wifi_is_slept_cb_t)(void);

typedef struct
{
    bool                    flag;
    sleep_mode_enum_t       sleep_mode;
    uint32_t                nvic_int_en[2];
    uint64_t                compensation;
    uint32_t                msec;
    uint8_t                 wakeup_src;//bit[0]--SLEEP_IRQn; bit[1]--MAC_IRQn;bit[2]--EXTERNAL_IRQn;bit[3]--RTC_IRQn
    wifi_is_slept_cb_t      wifi_is_slept_cb;
    reinitialize_phy_cb_t   reinit_phy_cb;
}hal_sleep_ctrl_t ;

void hal_sleep_init(sleep_mode_enum_t sleep_mode);
void hal_sleep_deinit(void);
void hal_sleep_set_mode(sleep_mode_enum_t sleep_mode);
sleep_mode_enum_t hal_sleep_get_mode(void);
void hal_pre_sleep_processing(uint32_t *ticks);
uint32_t hal_post_sleep_processing(uint32_t ticks);
void hal_sleep_wakeup_source_set(hal_sleep_wakeup_src_enum_t wakeup_src);
void hal_sleep_wakeup_source_clear_all(void);
uint8_t hal_sleep_wakeup_source_get(void);
void hal_sleep_register_callback(reinitialize_phy_cb_t reinit_phy_cb, wifi_is_slept_cb_t wifi_is_slept_cb);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __HAL_SLEEP_H__

