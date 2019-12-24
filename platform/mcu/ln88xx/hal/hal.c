/*
 * Copyright (C) 2015-2018 Alibaba Group Holding Limited
 */
#include "aos/hal/uart.h"
//#include "aos/hal/wdg.h"
//#include "aos/hal/sd.h"
//#include "aos/hal/flash.h"

//#include "network/hal/wifi.h"
//#include "hal/ota.h"

//#include "sys/interrupt.h"

#include "board.h"

//extern int errno;
//wdg_dev_t  wdg;
uart_dev_t uart_0;
//sd_dev_t sd_dev;

//extern hal_wifi_module_t sim_aos_wifi_xr871;
//extern hal_ota_module_t xr871_ota_module;

void hal_init(void)
{
    // init uart
    uart_0.port                = PORT_UART_STD;
    uart_0.config.baud_rate    = STDIO_UART_BUADRATE;
    uart_0.config.data_width   = DATA_WIDTH_8BIT;
    uart_0.config.parity       = NO_PARITY;
    uart_0.config.stop_bits    = STOP_BITS_1;
    uart_0.config.flow_control = FLOW_CONTROL_DISABLED;

    hal_uart_init(&uart_0);
}

void hal_init_post(void)
{
#if 0
    // init wifi
	hal_wifi_register_module(&sim_aos_wifi_xr871);
	hal_wifi_init();
	
// 	hal_ota_register_module(&xr871_ota_module);
#endif
}
#if 0
void hal_boot(hal_partition_t partition)
{

    uint32_t addr;
    hal_logic_partition_t  partition_info;
    hal_logic_partition_t *p_partition_info;

    intc_deinit();

    p_partition_info = &partition_info;
    memset(p_partition_info, 0, sizeof(hal_logic_partition_t));
    hal_flash_info_get(partition, p_partition_info);
    addr = p_partition_info->partition_start_addr;
    __asm volatile ("BX %0" : : "r" (addr) );

}
#endif
void hal_reboot(void)
{
#if 0
	HAL_WDG_Reboot();
#endif
}


