#ifndef __ETHERNETIF_H__
#define __ETHERNETIF_H__

#ifdef __cplusplus
    extern "C" {
#endif /* __cplusplus */

#include "types.h"

typedef enum{
    NETIF_TYPE_WIFI_STA = 0,
    NETIF_TYPE_WIFI_AP
}netif_type_enum_t;

typedef union
{
    struct
    {
        uint16_t  len  : 12;//bit: 0-11
        uint8_t   type : 4; //bit:12-15
    } bits;
    uint16_t data;
} frame_head_t;

#define FRAME_HEAD_SIZE (sizeof(frame_head_t))//The head describe the frame_type and frame_len.

void netif_low_level_input(uint8_t * data, uint16_t len, netif_type_enum_t netif_type);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __ETHERNETIF_H__ */

