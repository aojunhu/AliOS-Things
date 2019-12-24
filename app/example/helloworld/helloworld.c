/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>

#include <aos/kernel.h>

#define THR_TEST                    (0)
#if (THR_TEST)
#include <string.h>
#include "types.h"
#include "osal/osal.h"
#include "utils/debug/log.h"
#include "utils/debug/art_assert.h"
#define THR_TEST_TASK_STACK_SIZE          (2*256)
typedef struct {
    OS_Thread_t         thr;
    OS_Timer_t          tmr;
}thr_test_ctrl_t;

static thr_test_ctrl_t g_thr_test_ctrl = {0,};
static thr_test_ctrl_t *thr_test_ctrl_get_handle(void)
{
    return &g_thr_test_ctrl;
}
static void thr_test_func(void *params)
{
    thr_test_ctrl_t *test_ctrl = (thr_test_ctrl_t *)params;
    int i = 0;
    OS_TimerStart(&(test_ctrl->tmr));
    while(1)
    {
        LOG(LOG_LVL_ERROR, "[%s, %d]i=%d\r\n", __func__, __LINE__, i++);
        OS_SecDelay(30);
    }
}
static void thr_test_tmr_cb(void *params)
{
    LOG(LOG_LVL_ERROR, "[%s, %d]\r\n", __func__, __LINE__);
}
bool thr_test(void)
{
    thr_test_ctrl_t *test_ctrl = thr_test_ctrl_get_handle();

    ART_ASSERT(test_ctrl);

    memset(test_ctrl, 0, sizeof(thr_test_ctrl_t));
    if(OS_OK != OS_ThreadCreate(&(test_ctrl->thr), "thr_test", thr_test_func, test_ctrl, OS_PRIORITY_NORMAL, THR_TEST_TASK_STACK_SIZE)) {
        return false;
    }
    if (OS_OK != OS_TimerCreate(&(test_ctrl->tmr), OS_TIMER_PERIODIC, thr_test_tmr_cb, NULL, 3*1000)){
        return false;
    }

    return true;
}
#endif

#define ALIOS_QUEUE_TEST                    (0)
#if (ALIOS_QUEUE_TEST)
#include <string.h>
#include "types.h"
#include "osal/osal.h"
#include "utils/debug/log.h"
#include "utils/debug/art_assert.h"
#define THR1_TASK_STACK_SIZE          (2*256)
#define THR2_TASK_STACK_SIZE          (THR1_TASK_STACK_SIZE)
typedef struct {
    OS_Thread_t         thr;
}thr_queue_test_ctrl_t;

typedef struct {
    char     name[32];
    int      age;
}queue_item_test_t;
static thr_queue_test_ctrl_t g_thr1_queue_test_ctrl = {0,}, g_thr2_queue_test_ctrl = {0,};
OS_Queue_t msgqueue = {0,};
static thr_queue_test_ctrl_t *thr1_queue_test_ctrl_get_handle(void)
{
    return &g_thr1_queue_test_ctrl;
}
static thr_queue_test_ctrl_t *thr2_queue_test_ctrl_get_handle(void)
{
    return &g_thr2_queue_test_ctrl;
}
static void thr1_queue_test_func(void *params)
{
    OS_Queue_t *queue = (OS_Queue_t *)params;
    int i = 0;
    queue_item_test_t item = {
        .name = "lilei",
        .age = 0,
    };
    while(1)
    {
        item.age = i++;
        LOG(LOG_LVL_ERROR, "[%s, %d]item.age=%d\r\n", __func__, __LINE__, item.age);
        if (OS_QueueSend(queue, &item, OS_WAIT_FOREVER) != 0) { 
            LOG(LOG_LVL_ERROR, "queue send fail!\r\n");
        }
        OS_SecDelay(2);
    }
}
static void thr2_queue_test_func(void *params)
{
    OS_Queue_t *queue = (OS_Queue_t *)params;
    queue_item_test_t item;
    while(1)
    {
        if(OS_OK == OS_QueueReceive(queue, &item, OS_WAIT_FOREVER)){
            LOG(LOG_LVL_ERROR, "[%s, %d]item.age=%d, item.name=%s\r\n", __func__, __LINE__, item.age, item.name);
        }
        //OS_SecDelay(2);
    }
}
bool queue_test(void)
{
    thr_queue_test_ctrl_t *thr1_queue_test_ctrl = thr1_queue_test_ctrl_get_handle();
    thr_queue_test_ctrl_t *thr2_queue_test_ctrl = thr2_queue_test_ctrl_get_handle();

    ART_ASSERT(thr1_queue_test_ctrl && thr1_queue_test_ctrl);

    memset(thr1_queue_test_ctrl, 0, sizeof(thr_queue_test_ctrl_t));
    memset(thr2_queue_test_ctrl, 0, sizeof(thr_queue_test_ctrl_t));
    
    OS_QueueCreate(&msgqueue, 3, sizeof(queue_item_test_t));
    if(OS_OK != OS_ThreadCreate(&(thr1_queue_test_ctrl->thr), "thr1_queue_test", thr1_queue_test_func, &msgqueue, OS_PRIORITY_NORMAL, THR1_TASK_STACK_SIZE)) {
        return false;
    }
    if(OS_OK != OS_ThreadCreate(&(thr2_queue_test_ctrl->thr), "thr2_queue_test", thr2_queue_test_func, &msgqueue, OS_PRIORITY_NORMAL, THR2_TASK_STACK_SIZE)) {
        return false;
    }

    return true;
}
#endif

#define CERTIFICATE_RHINO_TEST                    (1)
#if (CERTIFICATE_RHINO_TEST)
extern void test_certificate(void);
#endif

int application_start(int argc, char *argv[])
{
    int count = 0;
    printf("nano entry here!\r\n");

#if (THR_TEST)
    thr_test();
#endif
#if (ALIOS_QUEUE_TEST)
    queue_test();
#endif
    
#if (CERTIFICATE_RHINO_TEST)
    test_certificate();
#endif
    while(1) {
        //printf("hello world! count %d \r\n", count++);

        aos_msleep(1000);
    };
}
