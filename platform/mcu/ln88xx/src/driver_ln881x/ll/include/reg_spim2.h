//-----------------------------------------------------------------------------
// The confidential and proprietary information contained in this file may
// only be used by a person authorised under and to the extent permitted
// by a subsisting licensing agreement from FASTASIC Limited.
//
//            (C) COPYRIGHT 2015-2017 FASTASIC Limited.
//                ALL RIGHTS RESERVED
//
// This entire notice must be reproduced on all copies of this file
// and copies of this file may only be made by a person if such person is
// permitted to do so under the terms of a subsisting license agreement
// from FASTASIC Limited.
//-----------------------------------------------------------------------------
#ifndef __REG_SPIM2_H__
#define __REG_SPIM2_H__

#include "ln88xx.h"

//misc_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                sp_tx_int_ena_q :  1; /* 0: 0, SPI Transmit Interrupt Enable Bit*/
        uint32_t                       enable_q :  1; /* 1: 1,                 SPI Enable Bit*/
        uint32_t                     reserved_2 :  1; /* 2: 2,                       reserved*/
        uint32_t                    clk_phase_q :  1; /* 3: 3, CLK Phase, data output start mode.
0: start from negedge of SPI_SS
1: start from first edge of SPI_CLK*/
        uint32_t                 clk_polarity_q :  1; /* 4: 4, CLK Polarity, data active at rising or falling edge of SPI_CLK.
0: active at rising edge
1: active at falling edge*/
        uint32_t                       master_q :  1; /* 5: 5, Master/Slave select. high: master, low: slave.
suporrt master only*/
        uint32_t                     reserved_1 :  1; /* 6: 6,                       reserved*/
        uint32_t                sp_rx_int_ena_q :  1; /* 7: 7, SPI Receiver Interrupt Enable Bit*/
        uint32_t          sp_overflow_int_ena_q :  1; /* 8: 8,  overflow interrupt Enable Bit*/
        uint32_t         sp_modefault_int_ena_q :  1; /* 9: 9, modefault interrupt Enable Bit*/
        uint32_t                     reserved_0 : 22; /*31:10,                       reserved*/
    } bit_field;
} T_SPIM2_MISC_CFG;

//baud_set
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                baud_rate_sel_q :  2; /* 1: 0, SPI baud rate select. 00: 16, 01: 64, 10: 256, 11: 1024*/
        uint32_t                    mf_enable_q :  1; /* 2: 2,          Mode Fault Enable Bit*/
        uint32_t                       tx_empty :  1; /* 3: 3,                tx empty status*/
        uint32_t               modefault_status :  1; /* 4: 4,               modefault status*/
        uint32_t                overflow_status :  1; /* 5: 5,                overflow status*/
        uint32_t                   i_state_idle :  1; /* 6: 6,            indicate idle state*/
        uint32_t                     reserved_0 : 25; /*31: 7,                       reserved*/
    } bit_field;
} T_SPIM2_BAUD_SET;

//cmd_fmt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              set_data_length_q :  6; /* 5: 0, Data length, value 0~63 mean 1~64 bits data*/
        uint32_t                     reserved_2 :  1; /* 6: 6,                       reserved*/
        uint32_t                   set_tx_pls_q :  1; /* 7: 7,             Transmit start bit*/
        uint32_t              set_addr_length_q :  6; /*13: 8, addr length, value 0~63 mean 1~64 bits data*/
        uint32_t                     reserved_1 :  1; /*14:14,                       reserved*/
        uint32_t                       set_rw_q :  1; /*15:15, indicate this transfer is a read(1) or write(0) */
        uint32_t                     reserved_0 : 16; /*31:16,                             NA*/
    } bit_field;
} T_SPIM2_CMD_FMT;

//tx_data0
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               set_tx_data_q_lo : 32; /*31: 0, write send contex to this register */
    } bit_field;
} T_SPIM2_TX_DATA0;

//tx_data1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               set_tx_data_q_hi : 32; /*31: 0, write send contex to this register */
    } bit_field;
} T_SPIM2_TX_DATA1;

//rx_data0
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     rx_data_hi : 32; /*31: 0,               receive data msb*/
    } bit_field;
} T_SPIM2_RX_DATA0;

//rx_data1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     rx_data_lo : 32; /*31: 0,               receive data lsb*/
    } bit_field;
} T_SPIM2_RX_DATA1;

//intr_status
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                    intr_status :  4; /* 3: 0, [0]:overflow
[1]:modefault
[2]:tx finish
[3]:rx finish*/
        uint32_t                 intr_rawstatus :  4; /* 7: 4, [0]:overflow ( byte arrived before old byte be read) or
[1]: modefault(SPI_SS pin of a slave goes high during a transmission)
[2]:tx finish
[3]:rx finish*/
        uint32_t                     reserved_0 : 24; /*31: 8,                       reserved*/
    } bit_field;
} T_SPIM2_INTR_STATUS;

//intr_clr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       intr_clr :  4; /* 3: 0, [0]:overflow
[1]:modefault
[2]:tx finish
[3]:rx finish*/
        uint32_t                     reserved_0 : 28; /*31: 4,                       reserved*/
    } bit_field;
} T_SPIM2_INTR_CLR;

//Registers Mapping to the same address

typedef struct
{
    volatile                T_SPIM2_MISC_CFG                       misc_cfg; /*  0x0,    RW, 0x00000020,                             NA*/
    volatile                T_SPIM2_BAUD_SET                       baud_set; /*  0x4,    RW, 0x00000040,                             NA*/
    volatile                 T_SPIM2_CMD_FMT                        cmd_fmt; /*  0x8,    RW, 0x00000000,                             NA*/
    volatile                T_SPIM2_TX_DATA0                       tx_data0; /*  0xc,    RW, 0x00000000,                             NA*/
    volatile                T_SPIM2_TX_DATA1                       tx_data1; /* 0x10,    RW, 0x00000000,                             NA*/
    volatile                T_SPIM2_RX_DATA0                       rx_data0; /* 0x14,    RO, 0x00000000,                             NA*/
    volatile                T_SPIM2_RX_DATA1                       rx_data1; /* 0x18,    RO, 0x00000000,                             NA*/
    volatile             T_SPIM2_INTR_STATUS                    intr_status; /* 0x1c,    RO, 0x00000000,                             NA*/
    volatile                T_SPIM2_INTR_CLR                       intr_clr; /* 0x20,    RW, 0x00000000,                             NA*/
} T_HWP_SPIM2_T;

#define hwp_spim2 ((T_HWP_SPIM2_T*)REG_SPI_M1_BASE)


__STATIC_INLINE uint32_t spim2_misc_cfg_get(void)
{
    return hwp_spim2->misc_cfg.val;
}

__STATIC_INLINE void spim2_misc_cfg_set(uint32_t value)
{
    hwp_spim2->misc_cfg.val = value;
}

__STATIC_INLINE void spim2_misc_cfg_pack(uint8_t sp_modefault_int_ena_q, uint8_t sp_overflow_int_ena_q, uint8_t sp_rx_int_ena_q, uint8_t master_q, uint8_t clk_polarity_q, uint8_t clk_phase_q, uint8_t enable_q, uint8_t sp_tx_int_ena_q)
{
    hwp_spim2->misc_cfg.val = (((uint32_t)sp_modefault_int_ena_q << 9) | ((uint32_t)sp_overflow_int_ena_q << 8) | ((uint32_t)sp_rx_int_ena_q << 7) | ((uint32_t)master_q << 5) | ((uint32_t)clk_polarity_q << 4) | ((uint32_t)clk_phase_q << 3) | ((uint32_t)enable_q << 1) | ((uint32_t)sp_tx_int_ena_q << 0));
}

__STATIC_INLINE void spim2_misc_cfg_unpack(uint8_t* sp_modefault_int_ena_q, uint8_t* sp_overflow_int_ena_q, uint8_t* sp_rx_int_ena_q, uint8_t* master_q, uint8_t* clk_polarity_q, uint8_t* clk_phase_q, uint8_t* enable_q, uint8_t* sp_tx_int_ena_q)
{
    T_SPIM2_MISC_CFG localVal = hwp_spim2->misc_cfg;

    *sp_modefault_int_ena_q = localVal.bit_field.sp_modefault_int_ena_q;
    *sp_overflow_int_ena_q = localVal.bit_field.sp_overflow_int_ena_q;
    *sp_rx_int_ena_q = localVal.bit_field.sp_rx_int_ena_q;
    *master_q = localVal.bit_field.master_q;
    *clk_polarity_q = localVal.bit_field.clk_polarity_q;
    *clk_phase_q = localVal.bit_field.clk_phase_q;
    *enable_q = localVal.bit_field.enable_q;
    *sp_tx_int_ena_q = localVal.bit_field.sp_tx_int_ena_q;
}

__STATIC_INLINE uint8_t spim2_sp_modefault_int_ena_q_getf(void)
{
    return hwp_spim2->misc_cfg.bit_field.sp_modefault_int_ena_q;
}

__STATIC_INLINE void spim2_sp_modefault_int_ena_q_setf(uint8_t sp_modefault_int_ena_q)
{
    hwp_spim2->misc_cfg.bit_field.sp_modefault_int_ena_q = sp_modefault_int_ena_q;
}

__STATIC_INLINE uint8_t spim2_sp_overflow_int_ena_q_getf(void)
{
    return hwp_spim2->misc_cfg.bit_field.sp_overflow_int_ena_q;
}

__STATIC_INLINE void spim2_sp_overflow_int_ena_q_setf(uint8_t sp_overflow_int_ena_q)
{
    hwp_spim2->misc_cfg.bit_field.sp_overflow_int_ena_q = sp_overflow_int_ena_q;
}

__STATIC_INLINE uint8_t spim2_sp_rx_int_ena_q_getf(void)
{
    return hwp_spim2->misc_cfg.bit_field.sp_rx_int_ena_q;
}

__STATIC_INLINE void spim2_sp_rx_int_ena_q_setf(uint8_t sp_rx_int_ena_q)
{
    hwp_spim2->misc_cfg.bit_field.sp_rx_int_ena_q = sp_rx_int_ena_q;
}

__STATIC_INLINE uint8_t spim2_master_q_getf(void)
{
    return hwp_spim2->misc_cfg.bit_field.master_q;
}

__STATIC_INLINE void spim2_master_q_setf(uint8_t master_q)
{
    hwp_spim2->misc_cfg.bit_field.master_q = master_q;
}

__STATIC_INLINE uint8_t spim2_clk_polarity_q_getf(void)
{
    return hwp_spim2->misc_cfg.bit_field.clk_polarity_q;
}

__STATIC_INLINE void spim2_clk_polarity_q_setf(uint8_t clk_polarity_q)
{
    hwp_spim2->misc_cfg.bit_field.clk_polarity_q = clk_polarity_q;
}

__STATIC_INLINE uint8_t spim2_clk_phase_q_getf(void)
{
    return hwp_spim2->misc_cfg.bit_field.clk_phase_q;
}

__STATIC_INLINE void spim2_clk_phase_q_setf(uint8_t clk_phase_q)
{
    hwp_spim2->misc_cfg.bit_field.clk_phase_q = clk_phase_q;
}

__STATIC_INLINE uint8_t spim2_enable_q_getf(void)
{
    return hwp_spim2->misc_cfg.bit_field.enable_q;
}

__STATIC_INLINE void spim2_enable_q_setf(uint8_t enable_q)
{
    hwp_spim2->misc_cfg.bit_field.enable_q = enable_q;
}

__STATIC_INLINE uint8_t spim2_sp_tx_int_ena_q_getf(void)
{
    return hwp_spim2->misc_cfg.bit_field.sp_tx_int_ena_q;
}

__STATIC_INLINE void spim2_sp_tx_int_ena_q_setf(uint8_t sp_tx_int_ena_q)
{
    hwp_spim2->misc_cfg.bit_field.sp_tx_int_ena_q = sp_tx_int_ena_q;
}

__STATIC_INLINE uint32_t spim2_baud_set_get(void)
{
    return hwp_spim2->baud_set.val;
}

__STATIC_INLINE void spim2_baud_set_set(uint32_t value)
{
    hwp_spim2->baud_set.val = value;
}

__STATIC_INLINE void spim2_baud_set_pack(uint8_t mf_enable_q, uint8_t baud_rate_sel_q)
{
    hwp_spim2->baud_set.val = (((uint32_t)mf_enable_q << 2) | ((uint32_t)baud_rate_sel_q << 0));
}

__STATIC_INLINE void spim2_baud_set_unpack(uint8_t* i_state_idle, uint8_t* overflow_status, uint8_t* modefault_status, uint8_t* tx_empty, uint8_t* mf_enable_q, uint8_t* baud_rate_sel_q)
{
    T_SPIM2_BAUD_SET localVal = hwp_spim2->baud_set;

    *i_state_idle = localVal.bit_field.i_state_idle;
    *overflow_status = localVal.bit_field.overflow_status;
    *modefault_status = localVal.bit_field.modefault_status;
    *tx_empty = localVal.bit_field.tx_empty;
    *mf_enable_q = localVal.bit_field.mf_enable_q;
    *baud_rate_sel_q = localVal.bit_field.baud_rate_sel_q;
}

__STATIC_INLINE uint8_t spim2_i_state_idle_getf(void)
{
    return hwp_spim2->baud_set.bit_field.i_state_idle;
}

__STATIC_INLINE uint8_t spim2_overflow_status_getf(void)
{
    return hwp_spim2->baud_set.bit_field.overflow_status;
}

__STATIC_INLINE uint8_t spim2_modefault_status_getf(void)
{
    return hwp_spim2->baud_set.bit_field.modefault_status;
}

__STATIC_INLINE uint8_t spim2_tx_empty_getf(void)
{
    return hwp_spim2->baud_set.bit_field.tx_empty;
}

__STATIC_INLINE uint8_t spim2_mf_enable_q_getf(void)
{
    return hwp_spim2->baud_set.bit_field.mf_enable_q;
}

__STATIC_INLINE void spim2_mf_enable_q_setf(uint8_t mf_enable_q)
{
    hwp_spim2->baud_set.bit_field.mf_enable_q = mf_enable_q;
}

__STATIC_INLINE uint8_t spim2_baud_rate_sel_q_getf(void)
{
    return hwp_spim2->baud_set.bit_field.baud_rate_sel_q;
}

__STATIC_INLINE void spim2_baud_rate_sel_q_setf(uint8_t baud_rate_sel_q)
{
    hwp_spim2->baud_set.bit_field.baud_rate_sel_q = baud_rate_sel_q;
}

__STATIC_INLINE uint32_t spim2_cmd_fmt_get(void)
{
    return hwp_spim2->cmd_fmt.val;
}

__STATIC_INLINE void spim2_cmd_fmt_set(uint32_t value)
{
    hwp_spim2->cmd_fmt.val = value;
}

__STATIC_INLINE void spim2_cmd_fmt_pack(uint8_t set_rw_q, uint8_t set_addr_length_q, uint8_t set_tx_pls_q, uint8_t set_data_length_q)
{
    hwp_spim2->cmd_fmt.val = (((uint32_t)set_rw_q << 15) | ((uint32_t)set_addr_length_q << 8) | ((uint32_t)set_tx_pls_q << 7) | ((uint32_t)set_data_length_q << 0));
}

__STATIC_INLINE void spim2_cmd_fmt_unpack(uint8_t* set_rw_q, uint8_t* set_addr_length_q, uint8_t* set_data_length_q)
{
    T_SPIM2_CMD_FMT localVal = hwp_spim2->cmd_fmt;

    *set_rw_q = localVal.bit_field.set_rw_q;
    *set_addr_length_q = localVal.bit_field.set_addr_length_q;
    *set_data_length_q = localVal.bit_field.set_data_length_q;
}

__STATIC_INLINE uint8_t spim2_set_rw_q_getf(void)
{
    return hwp_spim2->cmd_fmt.bit_field.set_rw_q;
}

__STATIC_INLINE void spim2_set_rw_q_setf(uint8_t set_rw_q)
{
    hwp_spim2->cmd_fmt.bit_field.set_rw_q = set_rw_q;
}

__STATIC_INLINE uint8_t spim2_set_addr_length_q_getf(void)
{
    return hwp_spim2->cmd_fmt.bit_field.set_addr_length_q;
}

__STATIC_INLINE void spim2_set_addr_length_q_setf(uint8_t set_addr_length_q)
{
    hwp_spim2->cmd_fmt.bit_field.set_addr_length_q = set_addr_length_q;
}

__STATIC_INLINE uint8_t spim2_set_data_length_q_getf(void)
{
    return hwp_spim2->cmd_fmt.bit_field.set_data_length_q;
}

__STATIC_INLINE void spim2_set_data_length_q_setf(uint8_t set_data_length_q)
{
    hwp_spim2->cmd_fmt.bit_field.set_data_length_q = set_data_length_q;
}

__STATIC_INLINE uint32_t spim2_tx_data0_get(void)
{
    return hwp_spim2->tx_data0.val;
}

__STATIC_INLINE void spim2_tx_data0_set(uint32_t value)
{
    hwp_spim2->tx_data0.val = value;
}

__STATIC_INLINE void spim2_tx_data0_pack(uint32_t set_tx_data_q_lo)
{
    hwp_spim2->tx_data0.val = (((uint32_t)set_tx_data_q_lo << 0));
}

__STATIC_INLINE void spim2_tx_data0_unpack(uint32_t* set_tx_data_q_lo)
{
    T_SPIM2_TX_DATA0 localVal = hwp_spim2->tx_data0;

    *set_tx_data_q_lo = localVal.bit_field.set_tx_data_q_lo;
}

__STATIC_INLINE uint32_t spim2_set_tx_data_q_lo_getf(void)
{
    return hwp_spim2->tx_data0.bit_field.set_tx_data_q_lo;
}

__STATIC_INLINE void spim2_set_tx_data_q_lo_setf(uint32_t set_tx_data_q_lo)
{
    hwp_spim2->tx_data0.bit_field.set_tx_data_q_lo = set_tx_data_q_lo;
}

__STATIC_INLINE uint32_t spim2_tx_data1_get(void)
{
    return hwp_spim2->tx_data1.val;
}

__STATIC_INLINE void spim2_tx_data1_set(uint32_t value)
{
    hwp_spim2->tx_data1.val = value;
}

__STATIC_INLINE void spim2_tx_data1_pack(uint32_t set_tx_data_q_hi)
{
    hwp_spim2->tx_data1.val = (((uint32_t)set_tx_data_q_hi << 0));
}

__STATIC_INLINE void spim2_tx_data1_unpack(uint32_t* set_tx_data_q_hi)
{
    T_SPIM2_TX_DATA1 localVal = hwp_spim2->tx_data1;

    *set_tx_data_q_hi = localVal.bit_field.set_tx_data_q_hi;
}

__STATIC_INLINE uint32_t spim2_set_tx_data_q_hi_getf(void)
{
    return hwp_spim2->tx_data1.bit_field.set_tx_data_q_hi;
}

__STATIC_INLINE void spim2_set_tx_data_q_hi_setf(uint32_t set_tx_data_q_hi)
{
    hwp_spim2->tx_data1.bit_field.set_tx_data_q_hi = set_tx_data_q_hi;
}

__STATIC_INLINE uint32_t spim2_rx_data0_get(void)
{
    return hwp_spim2->rx_data0.val;
}

__STATIC_INLINE void spim2_rx_data0_unpack(uint32_t* rx_data_hi)
{
    T_SPIM2_RX_DATA0 localVal = hwp_spim2->rx_data0;

    *rx_data_hi = localVal.bit_field.rx_data_hi;
}

__STATIC_INLINE uint32_t spim2_rx_data_hi_getf(void)
{
    return hwp_spim2->rx_data0.bit_field.rx_data_hi;
}

__STATIC_INLINE uint32_t spim2_rx_data1_get(void)
{
    return hwp_spim2->rx_data1.val;
}

__STATIC_INLINE void spim2_rx_data1_unpack(uint32_t* rx_data_lo)
{
    T_SPIM2_RX_DATA1 localVal = hwp_spim2->rx_data1;

    *rx_data_lo = localVal.bit_field.rx_data_lo;
}

__STATIC_INLINE uint32_t spim2_rx_data_lo_getf(void)
{
    return hwp_spim2->rx_data1.bit_field.rx_data_lo;
}

__STATIC_INLINE uint32_t spim2_intr_status_get(void)
{
    return hwp_spim2->intr_status.val;
}

__STATIC_INLINE void spim2_intr_status_unpack(uint8_t* intr_rawstatus, uint8_t* intr_status)
{
    T_SPIM2_INTR_STATUS localVal = hwp_spim2->intr_status;

    *intr_rawstatus = localVal.bit_field.intr_rawstatus;
    *intr_status = localVal.bit_field.intr_status;
}

__STATIC_INLINE uint8_t spim2_intr_rawstatus_getf(void)
{
    return hwp_spim2->intr_status.bit_field.intr_rawstatus;
}

__STATIC_INLINE uint8_t spim2_intr_status_getf(void)
{
    return hwp_spim2->intr_status.bit_field.intr_status;
}

__STATIC_INLINE uint32_t spim2_intr_clr_get(void)
{
    return hwp_spim2->intr_clr.val;
}

__STATIC_INLINE void spim2_intr_clr_set(uint32_t value)
{
    hwp_spim2->intr_clr.val = value;
}

__STATIC_INLINE void spim2_intr_clr_pack(uint8_t intr_clr)
{
    hwp_spim2->intr_clr.val = (((uint32_t)intr_clr << 0));
}
#endif


