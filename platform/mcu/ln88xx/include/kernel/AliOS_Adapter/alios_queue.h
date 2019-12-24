/**
 * @file freertos_queue.h
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#ifndef _ALIOS_QUEUE_H_
#define _ALIOS_QUEUE_H_

#include "AliOS_Adapter/alios_common.h"
#include "aos/kernel.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Queue object definition
 */
typedef struct OS_Queue {
    aos_queue_t handle;
    char        *buffer;
} OS_Queue_t;

OS_Status OS_QueueCreate(OS_Queue_t *queue, uint32_t queueLen, uint32_t itemSize);
OS_Status OS_QueueDelete(OS_Queue_t *queue);
OS_Status OS_QueueSend(OS_Queue_t *queue, const void *item, OS_Time_t waitMS);
OS_Status OS_QueueReceive(OS_Queue_t *queue, void *item, OS_Time_t waitMS);

/**
 * @brief Check whether the queue object is valid or not
 * @param[in] queue Pointer to the queue object
 * @return 1 on valid, 0 on invalid
 */
int OS_QueueIsValid(OS_Queue_t *queue);

#ifdef __cplusplus
}
#endif

#endif /* _ALIOS_QUEUE_H_ */
