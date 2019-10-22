/*
 * proj_config.h
 *
 *  Created on: Sep 28, 2018
 *      Author: naiquanhu
 */

#ifndef _PROJ_CONFIG_H_
#define _PROJ_CONFIG_H_

#include "common_def_ln88xx.h"

#define __CONFIG_OS_KERNEL                    RTOS_FREERTOS
#define EXEC_ENV                              RUN_ON_CHIP//RUN_ON_FPGA RUN_ON_SIMU RUN_ON_CHIP

/*
 * Clock settings section
 */
#if (EXEC_ENV == RUN_ON_FPGA)
    //Run on FPGA config
    #define SOURCE_CLOCK                            XTAL_CLOCK
    #define USE_PLL                                 DISABLE
    
    #define SYSTEM_CLOCK                            (SOURCE_CLOCK)
    #define AHBUS_CLOCK                             (SYSTEM_CLOCK)
    #define APBUS0_CLOCK                            (AHBUS_CLOCK)
    #define APBUS1_CLOCK                            (AHBUS_CLOCK)
    #define APBUS2_CLOCK                            (AHBUS_CLOCK)
    #define QSPI_CLK                                (APBUS2_CLOCK/2)
#else
    // RUN ON Chip and Run on SIMULATION config
    #define USE_PLL                             ENABLE
    
    #if (USE_PLL == ENABLE)
        #define SOURCE_CLOCK                        PLL_CLOCK
    #else
        #define SOURCE_CLOCK                        XTAL_CLOCK
    #endif
    
    #define SYSTEM_CLOCK                            (SOURCE_CLOCK)
    #define AHBUS_CLOCK                             (SYSTEM_CLOCK)
    #define APBUS0_CLOCK                            (AHBUS_CLOCK/2)
    #define APBUS1_CLOCK                            (AHBUS_CLOCK/4)
    #define APBUS2_CLOCK                            (AHBUS_CLOCK)
    #define QSPI_CLK                                (APBUS2_CLOCK/2)
#endif

#if ((AHBUS_CLOCK % APBUS0_CLOCK) || (AHBUS_CLOCK % APBUS1_CLOCK))
#error "AHBUS_CLOCK % APBUS0_CLOCK != 0 or AHBUS_CLOCK % APBUS1_CLOCK != 0"
#endif

#if ((defined (LN882x)) && (EXEC_ENV != RUN_ON_FPGA))
#error "Now,ln882x wasn't born yet!"
#endif

/*
 * Module enable/disable control
 */
#define FLASH_XIP                             ENABLE//DISABLE
#define ENABLE_FREERTOS                       ENABLE
#define AT_INTERFACE                          ENABLE
#define APP_EVENT                             ENABLE
#define PING_SENDER                           ENABLE
#define AUTO_TEST                             ENABLE
#define SMARTCONFIG_BROADCASTER               DISABLE
#define SMART_CONFIG_ENABLE                   DISABLE

#define CHIP_ROLE                             CHIP_MCU
#define WIFI_ROLE                             WIFI_STA


//#define CONFIG_MALLOC_USE_STDLIB
#define DEBUG_MODE
#define FULL_ASSERT                               ENABLE

#define PRINTF_OMIT   DISABLE     // when release software, set 1 to omit all printf logs
#define PRINT_TO_RTT  DISABLE //DISABLE  ENABLE   // 1: print to segger rtt   0: print to uart1

/*
 * in arm-none-eabi-gcc/7.3, BIG_ENDIAN is defined as 4321 default.
 */
#ifdef BIG_ENDIAN
  #undef BIG_ENDIAN
#endif

#define LITTLE_ENDIAN 1234

//#define DUAL_CORE_ACCESS_SHARED_MEMORY


#define BLE_SUPPORT DISABLE

#if (EXEC_ENV == RUN_ON_CHIP)
    #define RF_ART2000
#endif // RUN_ON_CHIP

/*
 * Hardware config
 */
#define CFG_UART0_TX_BUF_SIZE  256
#define CFG_UART0_RX_BUF_SIZE  256
#define CFG_UART1_TX_BUF_SIZE  128
#define CFG_UART1_RX_BUF_SIZE  256
#if (EXEC_ENV == RUN_ON_FPGA)
	#define CFG_UART_BAUDRATE_LOG      115200
	#define CFG_UART_BAUDRATE_CONSOLE  115200
#else
	#define CFG_UART_BAUDRATE_LOG      2000000
	#define CFG_UART_BAUDRATE_CONSOLE  2000000
#endif



#endif /* _PROJ_CONFIG_H_ */

