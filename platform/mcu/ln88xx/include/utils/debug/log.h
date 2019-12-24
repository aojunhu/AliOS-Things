/*
 * log.h
 *
 *  Created on: Sep 29, 2018
 *      Author: naiquanhu
 */

#ifndef __LOG_H__
#define __LOG_H__

#include <stdio.h>
#include "proj_config.h"
#include "types.h"
#include "utils/wrap_stdio.h"


#define LOG_LVL_EMERG               0
#define LOG_LVL_ERROR               (LOG_LVL_EMERG + 1)
#define LOG_LVL_WARN                (LOG_LVL_EMERG + 2)
#define LOG_LVL_INFO                (LOG_LVL_EMERG + 3)
#define LOG_LVL_DEBUG               (LOG_LVL_EMERG + 4)
#define LOG_LVL_TRACE               (LOG_LVL_EMERG + 5)
#define LOG_LVL_CTRL                LOG_LVL_INFO     //By modifying this value, control the different levels of log printing

#if !(defined(__CONFIG_OS_KERNEL) && (__CONFIG_OS_KERNEL == RTOS_ALIOS))
void log_init(void);
#endif
void hexdump(uint8_t level, uint8_t *info, void *buff, uint32_t count);
int log_stdio_write(char *buf, size_t size);


#define log_printf(format, ...)     __wrap_sprintf((stdio_write_fn)log_stdio_write, format, ##__VA_ARGS__)

#if (PRINTF_OMIT == DISABLE)
    #if (EXEC_ENV == RUN_ON_SIMU)
        #define SIM_REPORT_BASE                 0x20031ff0
        #define SIM_PRINT_BASE                  (SIM_REPORT_BASE+4)
        #define LOG(level,...)                                       \
                do{                                                  \
                    if(level <= LOG_LVL_CTRL){                       \
                        log_printf(__VA_ARGS__);                     \
                        *(volatile uint32_t *)SIM_REPORT_BASE = 0x7; \
                    }                                                \
                }while(0)
        #define LOG_INIT()
    #else
        #define LOG(level, ...)                  \
                do{                              \
                    if(level <= LOG_LVL_CTRL){   \
                        log_printf(__VA_ARGS__); \
                    }                            \
                }while(0)
    #endif
#else
    #define LOG(level,...);
#endif


#if (EXEC_ENV == RUN_ON_SIMU)
    void simu_pass(void);
    void simu_fail(void);
    void simu_finish(void);
#else
    #define simu_pass()
    #define simu_fail()
    #define simu_finish()
#endif


#endif /* __LOG_H__ */
