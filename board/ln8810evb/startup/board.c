/*
 * Copyright (C) 2015-2018 Alibaba Group Holding Limited
 */

#include <stdint.h>
#include <stdio.h>
#include <k_api.h>
#include "k_config.h"
#include "board.h"
#include "aos/hal/uart.h"
#include "ln88xx.h"
#include "driver/hal/hal_syscon.h"

extern void soc_sys_mem_init(void);
extern void hal_init(void);

static void SystemClock_Config(void)
{
    SetSysClock();
}

/**
  * @general board init entry board_init
  * @retval None
  */


/**
* @System tick handler example.
shoule include:
  krhino_intrpt_enter();
  krhino_tick_proc();
  krhino_intrpt_exit();
*/
void SysTick_Handler(void)
{
  krhino_intrpt_enter();
  krhino_tick_proc();
  krhino_intrpt_exit();
}
void board_driver_init(void)
{
    //Can not add log in this function
    return;
}

void soc_driver_init(void)
{
    //Can not add log in this function
    hal_init();
}

void soc_system_init(void)
{
    //Can not add log in this function

    //platform_init();
}

void soc_systick_init(void)
{
    /* enable system tick */
    extern uint32_t SystemCoreClock;
    SysTick_Config(SystemCoreClock/RHINO_CONFIG_TICKS_PER_SECOND);
}
void board_init(void)
{
    /* Configure the system clock */
    SystemClock_Config();
    
    /*mm heap set*/
    soc_sys_mem_init();
	
	soc_systick_init();

    /*choosen to init flash partition , for kv¡¢flash¡¢ota and so on*/
    //flash_partition_init();
}

