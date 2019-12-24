/**
 * @file   freertos_thread.h
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#ifndef _ALIOS_THREAD_H_
#define _ALIOS_THREAD_H_

#include "AliOS_Adapter/alios_common.h"
#include "AliOS_Adapter/alios_time.h"
#include "aos/kernel.h"

#ifdef __cplusplus
extern "C" {
#endif

/* thread priority */
//#define OS_THREAD_PRIO_SYS_CTRL OS_PRIORITY_ABOVE_NORMAL
//#define OS_THREAD_PRIO_LWIP     OS_PRIORITY_NORMAL
//#define OS_THREAD_PRIO_CONSOLE  OS_PRIORITY_ABOVE_NORMAL
//#define OS_THREAD_PRIO_APP      OS_PRIORITY_NORMAL

/** @brief Thread entry definition, which is a pointer to a function */
//typedef TaskFunction_t OS_ThreadEntry_t;
typedef void (* OS_ThreadEntry_t)(void *);

/** @brief Thread handle definition */
typedef aos_task_t OS_ThreadHandle_t;

/**
 * @brief Thread object definition
 */
typedef struct OS_Thread {
    OS_ThreadHandle_t   handle;
    const char *        name;
} OS_Thread_t;

/**
 * @brief Macros used to delay for the given time (milliseconds or seconds)
 */
#define OS_MsDelay(msec)         aos_msleep(msec)
#define OS_Delay(sec)            OS_MsDelay((sec) * OS_MSEC_PER_SEC)
#define OS_SecDelay(sec)         OS_Delay(sec)

OS_Status OS_ThreadCreate(OS_Thread_t *thread, const char *name,
                          OS_ThreadEntry_t entry, void *arg,
                          OS_Priority priority, uint32_t stackSize);
OS_Status OS_ThreadDelete(OS_Thread_t *thread);
void OS_ThreadStartScheduler(void);

/**
 * @brief Check whether the thread scheduler is running or not
 * @return 1 on runing, 0 on not running
 */
int OS_ThreadIsSchedulerRunning(void);

#if INCLUDE_uxTaskGetStackHighWaterMark
uint32_t OS_ThreadGetStackMinFreeSize(OS_Thread_t *thread);
#endif

#ifdef __cplusplus
}
#endif

#endif /* _ALIOS_THREAD_H_ */
