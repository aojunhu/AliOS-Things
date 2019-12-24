/**
 * @file   freertos_common.h
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#ifndef _ALIOS_COMMON_H_
#define _ALIOS_COMMON_H_

#include <stdint.h>
#include "ln88xx.h"
#include "k_api.h"

#include "aos/kernel.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Thread priority definition
 */
typedef enum  {
    OS_PRIORITY_IDLE            = 0,
    OS_PRIORITY_LOW             = 1,
    OS_PRIORITY_BELOW_NORMAL    = 2,
    OS_PRIORITY_NORMAL          = AOS_DEFAULT_APP_PRI,
    OS_PRIORITY_ABOVE_NORMAL    = 4,
    OS_PRIORITY_HIGH            = 5,
    OS_PRIORITY_REAL_TIME       = 6
} OS_Priority;
/**
 * @brief OS status definition
 */
typedef enum {
    OS_OK           = 0,    /* success */
    OS_FAIL         = -1,   /* general failure */
    OS_E_NOMEM      = -2,   /* out of memory */
    OS_E_PARAM      = -3,   /* invalid parameter */
    OS_E_TIMEOUT    = -4,   /* operation timeout */
    OS_E_ISR        = -5,   /* not allowed in ISR context */
} OS_Status;

typedef unsigned int OS_Time_t;
#define OS_WAIT_FOREVER         AOS_WAIT_FOREVER /* Wait forever timeout value */
#define OS_NO_WAIT              AOS_NO_WAIT
#define OS_SEMAPHORE_MAX_COUNT  0x7FFFFFFF /* Maximum count value for semaphore */
#define OS_INVALID_HANDLE       NULL        /* OS invalid handle */

#define OS_Malloc(size)         aos_malloc(size)
#define OS_Free(p)              aos_free(p)

/* check if in ISR context or not */
__STATIC_INLINE int OS_IsISRContext(void)
{
    return __get_IPSR();
}
#define OS_CPSR_ALLOC()                           CPSR_ALLOC()
#define OS_ENTER_CRITICAL()                       RHINO_CRITICAL_ENTER()
#define OS_ENTER_CRITICAL_FROM_ISR()              RHINO_CRITICAL_ENTER()
#define OS_EXIT_CRITICAL()                        RHINO_CRITICAL_EXIT()
#define OS_EXIT_CRITICAL_FROM_ISR(x)               RHINO_CRITICAL_EXIT()
#define OS_DISABLE_INTERRUPTS()                   RHINO_CRITICAL_ENTER()
#define OS_ENABLE_INTERRUPTS()                    RHINO_CRITICAL_EXIT()

#ifdef __cplusplus
}
#endif

#endif /* _ALIOS_COMMON_H_ */
