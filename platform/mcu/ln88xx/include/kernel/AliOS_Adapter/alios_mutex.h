/**
 * @file   freertos_mutex.h
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#ifndef _ALIOS_MUTEX_H_
#define _ALIOS_MUTEX_H_

#include "AliOS_Adapter/alios_common.h"
#include "AliOS_Adapter/alios_time.h"
#include "AliOS_Adapter/alios_thread.h"
#include "aos/kernel.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Mutex object definition
 */
typedef struct OS_Mutex {
	aos_mutex_t	handle;
} OS_Mutex_t;

OS_Status OS_MutexCreate(OS_Mutex_t *mutex);
OS_Status OS_MutexDelete(OS_Mutex_t *mutex);
OS_Status OS_MutexLock(OS_Mutex_t *mutex, unsigned int timeout);
OS_Status OS_MutexUnlock(OS_Mutex_t *mutex);

/**
 * @brief Check whether the mutex object is valid or not
 * @param[in] mutex Pointer to the mutex object
 * @return 1 on valid, 0 on invalid
 */
int OS_MutexIsValid(OS_Mutex_t *mutex);

#ifdef __cplusplus
}
#endif

#endif /* _ALIOS_MUTEX_H_ */
