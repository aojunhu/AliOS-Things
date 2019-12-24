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
#include "hal/hal_syscon.h"
#include "aos/hal/flash.h"

extern void aos_heap_set(void);
extern void hal_init(void);
extern void flash_partition_init(void);

static void SystemClock_Config(void)
{
    SetSysClock();
}

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
    /*mm heap set*/
    aos_heap_set();

    flash_partition_init();

    /* Configure the system clock */
    SystemClock_Config();

    soc_systick_init();

}

