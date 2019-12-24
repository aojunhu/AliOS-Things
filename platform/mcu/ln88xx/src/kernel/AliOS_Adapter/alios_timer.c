/**
 * @file freertos_timer.c
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#include "AliOS_Adapter/alios_timer.h"
#include "AliOS_Adapter/alios_time.h"

static void OS_TimerCallback(void *ptmr, void *parg)
{
    OS_Timer_t *timer = NULL;
    if (ptmr == NULL || parg == NULL){
        return;
    }
    timer = (OS_Timer_t *)parg;
    if (timer && timer->callback == NULL){
        return;
    }
    timer->callback(timer->args);
}
/**
 * @brief Create and initialize a timer object
 *
 * @note Creating a timer does not start the timer running. The OS_TimerStart()
 *       and OS_TimerChangePeriod() API functions can all be used to start the
 *       timer running.
 *
 * @param[in] timer Pointer to the timer object
 * @param[in] type Timer type
 * @param[in] cb Timer expire callback function
 * @param[in] arg Argument of timer expire callback function
 * @param[in] periodMS Timer period in milliseconds
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_TimerCreate(OS_Timer_t *timer, OS_TimerType type,
                         OS_TimerCallback_t cb, void *arg, uint32_t periodMS)
{
    if (timer == NULL){
        return OS_FAIL;
    }
    timer->callback = cb;
    timer->args = arg;
    if (0 != aos_timer_new(&(timer->handle), OS_TimerCallback, timer, periodMS, (type == OS_TIMER_ONCE) ? 0 : 1)){
        return OS_FAIL;
    }

	return OS_OK;
}


/**
 * @brief Delete the timer object
 * @param[in] timer Pointer to the timer object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_TimerDelete(OS_Timer_t *timer)
{
    if (timer == NULL){
        return OS_FAIL;
    }
    aos_timer_free(&(timer->handle));

	return OS_OK;
}

/**
 * @brief Start a timer running.
 * @note If the timer is already running, this function will re-start the timer.
 * @param[in] timer Pointer to the timer object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_TimerStart(OS_Timer_t *timer)
{
    if (timer == NULL){
        return OS_FAIL;
    }

    if (0 != aos_timer_start(&(timer->handle))){
        return OS_FAIL;
    }

	return OS_OK;
}

/**
 * @brief Change the period of a timer
 *
 * If OS_TimerChangePeriod() is used to change the period of a timer that is
 * already running, then the timer will use the new period value to recalculate
 * its expiry time. The recalculated expiry time will then be relative to when
 * OS_TimerChangePeriod() was called, and not relative to when the timer was
 * originally started.

 * If OS_TimerChangePeriod() is used to change the period of a timer that is
 * not already running, then the timer will use the new period value to
 * calculate an expiry time, and the timer will start running.
 *
 * @param[in] timer Pointer to the timer object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_TimerChangePeriod(OS_Timer_t *timer, uint32_t periodMS)
{
    if (timer == NULL){
        return OS_FAIL;
    }

    if (0 != aos_timer_change(&(timer->handle), periodMS)){
        return OS_FAIL;
    }

	return OS_OK;
}

/**
 * @brief Stop a timer running.
 * @param[in] timer Pointer to the timer object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_TimerStop(OS_Timer_t *timer)
{
    if (timer == NULL){
        return OS_FAIL;
    }

    if (0 != aos_timer_stop(&(timer->handle))){
        return OS_FAIL;
    }

	return OS_OK;
}
