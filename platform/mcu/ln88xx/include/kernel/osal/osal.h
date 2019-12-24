/**
 * @file   osal.h
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#ifndef __OSAL_H__
#define __OSAL_H__
#include "proj_config.h"

#if (__CONFIG_OS_KERNEL == RTOS_FREERTOS)
  #include "./FreeRTOS_Adapter/freertos_common.h"
  #include "./FreeRTOS_Adapter/freertos_cpuusage.h"
  #include "./FreeRTOS_Adapter/freertos_errno.h"
  #include "./FreeRTOS_Adapter/freertos_mutex.h"
  #include "./FreeRTOS_Adapter/freertos_queue.h"
  #include "./FreeRTOS_Adapter/freertos_semaphore.h"
  #include "./FreeRTOS_Adapter/freertos_thread.h"
  #include "./FreeRTOS_Adapter/freertos_time.h"
  #include "./FreeRTOS_Adapter/freertos_timer.h"
#elif (__CONFIG_OS_KERNEL == RTOS_ALIOS)
  #include "./AliOS_Adapter/alios_common.h"
  //#include "./AliOS_Adapter/alios_cpuusage.h"
  //#include "./AliOS_Adapter/alios_errno.h"
  #include "./AliOS_Adapter/alios_mutex.h"
  #include "./AliOS_Adapter/alios_queue.h"
  #include "./AliOS_Adapter/alios_semaphore.h"
  #include "./AliOS_Adapter/alios_thread.h"
  #include "./AliOS_Adapter/alios_time.h"
  #include "./AliOS_Adapter/alios_timer.h"
#elif (__CONFIG_OS_KERNEL == RTOS_RT_THREAD)
  #error "No OS Kernel defined!"
#else 
  #error "No OS Kernel defined!"
#endif

#endif /* __OSAL_H__ */
