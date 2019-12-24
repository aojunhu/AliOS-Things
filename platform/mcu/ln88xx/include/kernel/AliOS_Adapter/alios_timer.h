/**
 * @file   freertos_timer.h
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#ifndef _ALIOS_TIMER_H_
#define _ALIOS_TIMER_H_

#include "AliOS_Adapter/alios_common.h"
#include "aos/kernel.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Timer type definition
 *     - one shot timer: Timer will be in the dormant state after it expires.
 *     - periodic timer: Timer will auto-reload after it expires.
 */
typedef enum {
    OS_TIMER_ONCE       = 0, /* one shot timer */
    OS_TIMER_PERIODIC   = 1  /* periodic timer */
} OS_TimerType;

/** @brief Timer expire callback function definition */
typedef void (*OS_TimerCallback_t)(void *arg);


/**
 * @brief Timer object definition
 */
typedef struct OS_Timer {
    aos_timer_t           handle;
    OS_TimerCallback_t    callback;
    void                  *args;
} OS_Timer_t;


OS_Status OS_TimerCreate(OS_Timer_t *timer, OS_TimerType type,
                         OS_TimerCallback_t cb, void *arg, OS_Time_t periodMS);
OS_Status OS_TimerDelete(OS_Timer_t *timer);
OS_Status OS_TimerStart(OS_Timer_t *timer);
OS_Status OS_TimerChangePeriod(OS_Timer_t *timer, OS_Time_t periodMS);
OS_Status OS_TimerStop(OS_Timer_t *timer);

#ifdef __cplusplus
}
#endif

#endif /* _ALIOS_TIMER_H_ */
