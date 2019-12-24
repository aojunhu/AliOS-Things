/**
 * @file   freertos_semaphore.h
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#ifndef _ALIOS_SEMAPHORE_H_
#define _ALIOS_SEMAPHORE_H_

#include "AliOS_Adapter/alios_common.h"
#include "aos/kernel.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Semaphore object definition
 */
typedef struct OS_Semaphore {
    aos_sem_t       handle;
} OS_Semaphore_t;

OS_Status OS_SemaphoreCreate(OS_Semaphore_t *sem, uint32_t initCount, uint32_t maxCount);
OS_Status OS_SemaphoreCreateBinary(OS_Semaphore_t *sem);
OS_Status OS_SemaphoreDelete(OS_Semaphore_t *sem);
OS_Status OS_SemaphoreWait(OS_Semaphore_t *sem, OS_Time_t waitMS);
OS_Status OS_SemaphoreRelease(OS_Semaphore_t *sem);
int OS_SemaphoreGetCount(OS_Semaphore_t *sem);
int OS_SemaphoreIsValid(OS_Semaphore_t *sem);

#ifdef __cplusplus
}
#endif

#endif /* _ALIOS_SEMAPHORE_H_ */
