
#include <string.h>

//#include "prj_config.h"

#include "aos/hal/flash.h"
#include "hal/flash.h"

extern const hal_logic_partition_t hal_partitions[];

int32_t hal_flash_info_get(hal_partition_t in_partition, hal_logic_partition_t *partition)
{
    hal_logic_partition_t *logic_partition;

    logic_partition = (hal_logic_partition_t *)&hal_partitions[ in_partition ];
    memcpy(partition, logic_partition, sizeof(hal_logic_partition_t));

    return 0;
}

int32_t hal_flash_erase(hal_partition_t in_partition, uint32_t off_set, uint32_t size)
{
    uint32_t start_addr, end_addr;
    hal_logic_partition_t  partition_info;
    hal_logic_partition_t *p_partition_info = &partition_info;

    memset(p_partition_info, 0, sizeof(hal_logic_partition_t));
    if (hal_flash_info_get(in_partition, p_partition_info) != 0) {
        return -1;
    }

    if(size + off_set > p_partition_info->partition_length)
        return -1;

    start_addr = (p_partition_info->partition_start_addr + off_set) & (~0xFFF);
    end_addr = (p_partition_info->partition_start_addr + off_set + size - 1) & (~0xFFF);
    FLASH_Erase(start_addr, end_addr - start_addr);

    return 0;
}

int32_t hal_flash_write(hal_partition_t in_partition, uint32_t *off_set, const void *in_buf, uint32_t in_buf_len)
{
    uint32_t start_addr;
    hal_logic_partition_t  partition_info;
    hal_logic_partition_t *p_partition_info = &partition_info;

    memset(p_partition_info, 0, sizeof(hal_logic_partition_t));
    if (hal_flash_info_get(in_partition, p_partition_info) != 0) {
        return -1;
    }

    if(off_set == NULL || in_buf == NULL || *off_set + in_buf_len > p_partition_info->partition_length)
        return -1;

    start_addr = p_partition_info->partition_start_addr + *off_set;
    FLASH_Program(start_addr, in_buf_len, (uint8_t *)in_buf);
    *off_set += in_buf_len;

    return 0;
}

int32_t hal_flash_read(hal_partition_t in_partition, uint32_t *off_set, void *out_buf, uint32_t out_buf_len)
{
    uint32_t start_addr;
    hal_logic_partition_t  partition_info;
    hal_logic_partition_t *p_partition_info = &partition_info;

    memset(p_partition_info, 0, sizeof(hal_logic_partition_t));
    if (hal_flash_info_get(in_partition, p_partition_info) != 0) {
        return -1;
    }

    if(off_set == NULL || out_buf == NULL || *off_set + out_buf_len > p_partition_info->partition_length)
        return -1;

    start_addr = p_partition_info->partition_start_addr + *off_set;
    FLASH_Read(start_addr, out_buf_len, (uint8_t *)out_buf);
    *off_set += out_buf_len;

    return 0;
}

int32_t hal_flash_enable_secure(hal_partition_t partition, uint32_t off_set, uint32_t size)
{
    return 0;
}

int32_t hal_flash_dis_secure(hal_partition_t partition, uint32_t off_set, uint32_t size)
{
    return 0;
}
