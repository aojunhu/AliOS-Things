/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include "aos/hal/flash.h"

/* Logic partition on flash devices */
hal_logic_partition_t hal_partitions[HAL_PARTITION_MAX];

void flash_partition_init(void)
{
    hal_partitions[HAL_PARTITION_BOOTLOADER].partition_owner       = HAL_FLASH_EMBEDDED;
    hal_partitions[HAL_PARTITION_BOOTLOADER].partition_description = "Bootloader";
    hal_partitions[HAL_PARTITION_BOOTLOADER].partition_start_addr  = 0x00000000;
    hal_partitions[HAL_PARTITION_BOOTLOADER].partition_length      = 0x8000; /* 32k bytes */
    hal_partitions[HAL_PARTITION_BOOTLOADER].partition_options     = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN;

    hal_partitions[HAL_PARTITION_PARAMETER_1].partition_owner       = HAL_FLASH_EMBEDDED;
    hal_partitions[HAL_PARTITION_PARAMETER_1].partition_description = "PARAMETER1";
    hal_partitions[HAL_PARTITION_PARAMETER_1].partition_start_addr  = 0xB000;
    hal_partitions[HAL_PARTITION_PARAMETER_1].partition_length      = 0x2000; /* 8k bytes */
    hal_partitions[HAL_PARTITION_PARAMETER_1].partition_options     = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN;

    hal_partitions[HAL_PARTITION_APPLICATION].partition_owner       = HAL_FLASH_EMBEDDED;
    hal_partitions[HAL_PARTITION_APPLICATION].partition_description = "Application";
    hal_partitions[HAL_PARTITION_APPLICATION].partition_start_addr  = 0xF000;
    hal_partitions[HAL_PARTITION_APPLICATION].partition_length      = 0xE1000; /* 900k bytes */
    hal_partitions[HAL_PARTITION_APPLICATION].partition_options     = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN;

    hal_partitions[HAL_PARTITION_OTA_TEMP].partition_owner          = HAL_FLASH_EMBEDDED;
    hal_partitions[HAL_PARTITION_OTA_TEMP].partition_description    = "OTA Storage";
    hal_partitions[HAL_PARTITION_OTA_TEMP].partition_start_addr     = 0xF0000;
    hal_partitions[HAL_PARTITION_OTA_TEMP].partition_length         = 0xE1000; /* 900k bytes */
    hal_partitions[HAL_PARTITION_OTA_TEMP].partition_options        = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN;

}

