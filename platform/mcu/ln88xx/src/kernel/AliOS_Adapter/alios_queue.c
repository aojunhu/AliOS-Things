/**
 * @file freertos_queue.c
 * @author LightningSemi WLAN Team
 */
#include "AliOS_Adapter/alios_queue.h"
#include "AliOS_Adapter/alios_time.h"
#include <k_api.h>

/**
 * @brief Create and initialize a queue object
 * @param[in] queue Pointer to the queue object
 * @param[in] queueLen The maximum number of items that the queue can hold at
 *                     any one time.
 * @param[in] itemSize The size, in bytes, of each data item that can be stored
 *                     in the queue.
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_QueueCreate(OS_Queue_t *queue, uint32_t queueLen, uint32_t itemSize)
{
    if (queue == NULL){
        return OS_FAIL;
    }
    queue->buffer = aos_malloc(queueLen * itemSize);
    if (queue->buffer == NULL){
        return OS_FAIL;
    }
    if (0 != aos_queue_new(&(queue->handle), queue->buffer, queueLen * itemSize, itemSize)){
        return OS_FAIL;
    }

	return OS_OK;
}

/**
 * @brief Delete the queue object
 * @param[in] queue Pointer to the queue object
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_QueueDelete(OS_Queue_t *queue)
{
    if (queue == NULL){
        return OS_FAIL;
    }
    if (queue->buffer){
        aos_free(queue->buffer);
    }
    aos_queue_free(&queue->handle);
	return OS_OK;
}

static int OS_QueueGetMsgSize(OS_Queue_t *queue)
{
    aos_queue_t *aos_q = NULL;
    kbuf_queue_t *k_q = NULL;
    if (queue == NULL || queue->buffer == NULL) {
        return 0;
    }
    aos_q = &(queue->handle);
    k_q = aos_q->hdl;
    return k_q->max_msg_size;                                          
}

/**
 * @brief Send (write) an item to the back of the queue
 * @param[in] queue Pointer to the queue object
 * @param[in] item Pointer to the data to be copied into the queue.
 *                 The size of each item the queue can hold is set when the
 *                 queue is created, and that many bytes will be copied from
 *                 item into the queue storage area.
 * @param[in] waitMS The maximum amount of time the thread should remain in the
 *                   blocked state to wait for space to become available on the
 *                   queue, should the queue already be full.
 *                   HAL_WAIT_FOREVER for waiting forever, zero for no waiting.
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_QueueSend(OS_Queue_t *queue, const void *item, OS_Time_t waitMS)
{
    if (queue == NULL){
        return OS_FAIL;
    }
    if (0 != aos_queue_send(&(queue->handle), (void *)item, OS_QueueGetMsgSize(queue))){
        return OS_FAIL;
    }

	return OS_OK;
}

/**
 * @brief Receive (read) an item from the queue
 * @param[in] queue Pointer to the queue object
 * @param[in] item Pointer to the memory into which the received data will be
 *                 copied. The length of the buffer must be at least equal to
 *                 the queue item size which is set when the queue is created.
 * @param[in] waitMS The maximum amount of time the thread should remain in the
 *                   blocked state to wait for data to become available on the
 *                   queue, should the queue already be empty.
 *                   HAL_WAIT_FOREVER for waiting forever, zero for no waiting.
 * @retval OS_Status, OS_OK on success
 */
OS_Status OS_QueueReceive(OS_Queue_t *queue, void *item, OS_Time_t waitMS)
{
    unsigned int msgSize = 0, ret = 0;
    if (queue == NULL || item == NULL){
        return OS_FAIL;
    }
    ret = aos_queue_recv(&(queue->handle), waitMS, item, &msgSize);
    if (ret != 0){
        return OS_FAIL;
    }

	return OS_OK;
}

/**
 * @brief Check whether the queue object is valid or not
 * @param[in] queue Pointer to the queue object
 * @return 1 on valid, 0 on invalid
 */
int OS_QueueIsValid(OS_Queue_t *queue)
{
    if (queue == NULL){
        return 0;
    }
    return aos_queue_is_valid(&(queue->handle));
}
