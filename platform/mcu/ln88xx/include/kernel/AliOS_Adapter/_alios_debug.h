/**
 * @file   freertos_debug.h
 * @author LightningSemi WLAN Team
 * Copyright (C) 2018 LightningSemi Technology Co., Ltd. All rights reserved.
 */

#ifndef _ALIOS_DEBUG_H_
#define _ALIOS_DEBUG_H_

#include <stdio.h>
#include "compiler.h"
//#include "utils/debug/log.h"
//#include "sys/interrupt.h"
    
#ifdef __cplusplus
extern "C" {
#endif

#define OS_DBG_ON       0
#define OS_WARN_ON      1
#define OS_ERR_ON       1
#define OS_ABORT_ON     1

#define OS_HANDLE_CHECK     1
#define OS_RESOURCE_TRACE   0 /* trace OS resource or not */

#ifdef __cplusplus
}
#endif

#endif /* _ALIOS_DEBUG_H_ */
