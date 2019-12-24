/**
 * @file    freertos_mutex.c
 * @author  LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */
#include "AliOS_Adapter/alios_mutex.h"
#include "AliOS_Adapter/alios_time.h"


/**
 * @brief Create and initialize a mutex object
 * @note A mutex can only be locked by a single thread at any given time.
 * @param[in] mutex Pointer to the mutex object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_MutexCreate(OS_Mutex_t *mutex)
{
    if (aos_mutex_new(&mutex->handle) != 0) {
        return OS_FAIL;
    }
	return OS_OK;
}

/**
 * @brief Delete the mutex object
 * @param[in] mutex Pointer to the mutex object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_MutexDelete(OS_Mutex_t *mutex)
{
    aos_mutex_free(&mutex->handle);
	return OS_OK;
}

/**
 * @brief Lock the mutex object
 * @note A mutex can only be locked by a single thread at any given time. If
 *       the mutex is already locked, the caller will be blocked for the
 *       specified time duration.
 * @param[in] mutex Pointer to the mutex object
 * @param[in] waitMS The maximum amount of time (in millisecond) the thread
 *                   should remain in the blocked state to wait for the mutex
 *                   to become unlocked.
 *                   HAL_WAIT_FOREVER for waiting forever, zero for no waiting.
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_MutexLock(OS_Mutex_t *mutex, unsigned int timeout)
{
    if (aos_mutex_lock(&mutex->handle, timeout) != 0) {
        return OS_FAIL;
    }
	return OS_OK;
}

/**
 * @brief Unlock the mutex object previously locked using OS_MutexLock()
 * @note The mutex should be unlocked from the same thread context from which
 *       it was locked.
 * @param[in] mutex Pointer to the mutex object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_MutexUnlock(OS_Mutex_t *mutex)
{
    if (aos_mutex_unlock(&mutex->handle) != 0) {
        return OS_FAIL;
    }
	return OS_OK;
}

/**
 * @brief Check whether the mutex object is valid or not
 * @param[in] mutex Pointer to the mutex object
 * @return 1 on valid, 0 on invalid
 */
int OS_MutexIsValid(OS_Mutex_t *mutex)
{
	return aos_mutex_is_valid(&mutex->handle);
}
