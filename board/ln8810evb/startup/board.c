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
#include "aos/hal/flash.h"

extern void soc_sys_mem_init(void);
extern void hal_init(void);

/* Logic partition on flash devices */
const hal_logic_partition_t hal_partitions[] = {
    [HAL_PARTITION_BOOTLOADER] =
    {
        .partition_owner            = HAL_FLASH_EMBEDDED,
        .partition_description      = "Bootloader",
        .partition_start_addr       = 0x000000,
        .partition_length           = 0x8000, //32k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
    [HAL_PARTITION_PARAMETER_1] =
    {
        .partition_owner            = HAL_FLASH_EMBEDDED,
        .partition_description      = "PARAMETER1",
        .partition_start_addr       = 0xB000,
        .partition_length           = 0x2000, // 8k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
    [HAL_PARTITION_APPLICATION] =
    {
        .partition_owner            = HAL_FLASH_EMBEDDED,
        .partition_description      = "Application",
        .partition_start_addr       = 0xF000,//cpu is 0x10000
        .partition_length           = 0xE1000, //900k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
    /*reserved 52k*/
    [HAL_PARTITION_OTA_TEMP] =
    {
        .partition_owner           = HAL_FLASH_EMBEDDED,
        .partition_description     = "OTA Storage",
        .partition_start_addr      = 0x0F0000,//cpu is 0xF0000
        .partition_length          = 0xE1000, //900k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
};
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
    /* Configure the system clock */
    SystemClock_Config();

    /*mm heap set*/
    soc_sys_mem_init();

    soc_systick_init();

}

