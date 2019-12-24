/**
 * @file   freertos_semaphore.c
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#include "AliOS_Adapter/alios_semaphore.h"
#include "AliOS_Adapter/alios_time.h"
#include <k_api.h>

/**
 * @brief Create and initialize a counting semaphore object
 * @param[in] sem Pointer to the semaphore object
 * @param[in] initCount The count value assigned to the semaphore when it is
 *                      created.
 * @param[in] maxCount The maximum count value that can be reached. When the
 *                     semaphore reaches this value it can no longer be
 *                     released.
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_SemaphoreCreate(OS_Semaphore_t *sem, uint32_t initCount, uint32_t maxCount)
{
    if (sem == NULL){
        return OS_FAIL;
    }
    if (0 != aos_sem_new(&(sem->handle), initCount)){
        return OS_FAIL;
    }
	return OS_OK;
}

/**
 * @brief Create and initialize a binary semaphore object
 * @note A binary semaphore is equal to a counting semaphore created by calling
         OS_SemaphoreCreate(sem, 0, 1).
 * @param[in] sem Pointer to the semaphore object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_SemaphoreCreateBinary(OS_Semaphore_t *sem)
{
    if (sem == NULL){
        return OS_FAIL;
    }
    if (0 != aos_sem_new(&(sem->handle), 1)){
        return OS_FAIL;
    }
	return OS_OK;
}

/**
 * @brief Delete the semaphore object
 * @param[in] sem Pointer to the semaphore object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_SemaphoreDelete(OS_Semaphore_t *sem)
{
	if (sem == NULL){
        return OS_FAIL;
    }
    aos_sem_free(&(sem->handle));

	return OS_OK;
}

/**
 * @brief Wait until the semaphore object becomes available
 * @param[in] sem Pointer to the semaphore object
 * @param[in] waitMS The maximum amount of time (in millisecond) the thread
 *                   should remain in the blocked state to wait for the
 *                   semaphore to become available.
 *                   HAL_WAIT_FOREVER for waiting forever, zero for no waiting.
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_SemaphoreWait(OS_Semaphore_t *sem, OS_Time_t waitMS)
{
    if (sem == NULL){
        return OS_FAIL;
    }
    if (0 != aos_sem_wait(&(sem->handle), waitMS)){
        return OS_FAIL;
    }

	return OS_OK;
}

/**
 * @brief Release the semaphore object
 * @param[in] sem Pointer to the semaphore object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_SemaphoreRelease(OS_Semaphore_t *sem)
{
    if (sem == NULL){
        return OS_FAIL;
    }
    aos_sem_signal(&(sem->handle));

	return OS_OK;
}

/**
 * @brief Check whether the semaphore object is valid or not
 * @param[in] sem Pointer to the semaphore object
 * @return 1 on valid, 0 on invalid
 */
int OS_SemaphoreIsValid(OS_Semaphore_t *sem)
{
    if (sem == NULL){
        return 0;
    }
    return aos_sem_is_valid(&(sem->handle));
}
int OS_SemaphoreGetCount(OS_Semaphore_t *sem)
{
    aos_sem_t *aos_sem = NULL;
    ksem_t *ks = NULL;
    kstat_t ret;
    sem_count_t cnt;
    if (sem == NULL){
        return -1;
    }
    aos_sem = &(sem->handle);
    ks = aos_sem->hdl;
    ret = krhino_sem_count_get(ks, &cnt);
    if (ret == RHINO_SUCCESS) {
        return (int)cnt;
    } else {
        return -1;
    }
}
