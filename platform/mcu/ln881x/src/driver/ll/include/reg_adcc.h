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
#ifndef __REG_ADCC_H__
#define __REG_ADCC_H__

#include "types.h"
#include "ln88xx.h"

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     reserved_2 :  1; /* 0: 0,                             NA*/
        uint32_t                    adc_clk_inv :  1; /* 1: 1,                             NA*/
        uint32_t                     reserved_1 :  1; /* 2: 2,                             NA*/
        uint32_t                   adc_vref_sel :  1; /* 3: 3,                             NA*/
        uint32_t                      data_skip :  2; /* 5: 4,                             NA*/
        uint32_t                     pwrdn_intv :  2; /* 7: 6,                             NA*/
        uint32_t                        intr_en :  4; /*11: 8,                             NA*/
        uint32_t             adcc_dma_watermark :  4; /*15:12,                             NA*/
        uint32_t                         avg_en :  1; /*16:16,                             NA*/
        uint32_t                        avg_cnt :  2; /*18:17,                             NA*/
        uint32_t                    adcc_dma_en :  1; /*19:19,                             NA*/
        uint32_t                adc_div_para_m1 :  9; /*28:20,                Aux ADC clk div*/
        uint32_t                     reserved_0 :  3; /*31:29,                             NA*/
    } bit_field;
} T_ADCC_MISC_CFG;

//adcc_div_up
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                adc_div_para_up :  1; /* 0: 0,                             NA*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_ADCC_ADCC_DIV_UP;

//chn_en
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                         chn_en :  8; /* 7: 0, adc chn enable, every bit corresponding one chn*/
        uint32_t                     reserved_0 : 24; /*31: 8,                             NA*/
    } bit_field;
} T_ADCC_CHN_EN;

//adcc_start
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  adc_meas_init :  1; /* 0: 0,    write 1 to enter Batch mode*/
        uint32_t                   adc_force_on :  1; /* 1: 1, write 1 to enter RealTime mode*/
        uint32_t                     reserved_0 : 30; /*31: 2,                             NA*/
    } bit_field;
} T_ADCC_ADCC_START;

//intr_clr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  adcc_intr_clr :  4; /* 3: 0, write 1 to clear batch and rt intr*/
        uint32_t                     reserved_0 : 28; /*31: 4,                             NA*/
    } bit_field;
} T_ADCC_INTR_CLR;

//intr_status
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                      adcc_intr :  4; /* 3: 0, [0]:batch intr
[1]:rt intr
[2]:rt fifo full
[3]:rt fifo empty*/
        uint32_t                   adcc_rawintr :  4; /* 7: 4, [0]:batch intr
[1]:rt intr
[2]:rt fifo full
[3]:rt fifo empty*/
        uint32_t                     reserved_0 : 24; /*31: 8,                             NA*/
    } bit_field;
} T_ADCC_INTR_STATUS;

//chn0_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       chn0_sum : 12; /*11: 0,                 result of chn0*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_CHN0_RESULT;

//chn1_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       chn1_sum : 12; /*11: 0,                 result of chn1*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_CHN1_RESULT;

//chn2_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       chn2_sum : 12; /*11: 0,                 result of chn2*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_CHN2_RESULT;

//chn3_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       chn3_sum : 12; /*11: 0,                 result of chn3*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_CHN3_RESULT;

//chn4_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       chn4_sum : 12; /*11: 0,                 result of chn4*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_CHN4_RESULT;

//chn5_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       chn5_sum : 12; /*11: 0,                 result of chn5*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_CHN5_RESULT;

//chn6_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       chn6_sum : 12; /*11: 0,                 result of chn6*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_CHN6_RESULT;

//chn7_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       chn7_sum : 12; /*11: 0,                 result of chn7*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_CHN7_RESULT;

//rt_result
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                       rt_rdata : 12; /*11: 0,              result of RT mode*/
        uint32_t                     reserved_0 : 20; /*31:12,                             NA*/
    } bit_field;
} T_ADCC_RT_RESULT;

//pd_status
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                         adc_pd :  1; /* 0: 0,          adc power down status*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_ADCC_PD_STATUS;

//Registers Mapping to the same address

typedef struct
{
    volatile                 T_ADCC_MISC_CFG                       misc_cfg; /*  0x0,    RW, 0x00FD83A0,                             NA*/
    volatile              T_ADCC_ADCC_DIV_UP                    adcc_div_up; /*  0x4,    RW, 0x00000000,                             NA*/
    volatile                   T_ADCC_CHN_EN                         chn_en; /*  0x8,    RW, 0x00000000,                             NA*/
    volatile               T_ADCC_ADCC_START                     adcc_start; /*  0xc,    RW, 0x00000000,                             NA*/
    volatile                 T_ADCC_INTR_CLR                       intr_clr; /* 0x10,    RW, 0x00000000,                             NA*/
    volatile              T_ADCC_INTR_STATUS                    intr_status; /* 0x14,    RO, 0x00000000,                             NA*/
    volatile              T_ADCC_CHN0_RESULT                    chn0_result; /* 0x18,    RO, 0x00000000,                             NA*/
    volatile              T_ADCC_CHN1_RESULT                    chn1_result; /* 0x1c,    RO, 0x00000000,                             NA*/
    volatile              T_ADCC_CHN2_RESULT                    chn2_result; /* 0x20,    RO, 0x00000000,                             NA*/
    volatile              T_ADCC_CHN3_RESULT                    chn3_result; /* 0x24,    RO, 0x00000000,                             NA*/
    volatile              T_ADCC_CHN4_RESULT                    chn4_result; /* 0x28,    RO, 0x00000000,                             NA*/
    volatile              T_ADCC_CHN5_RESULT                    chn5_result; /* 0x2c,    RO, 0x00000000,                             NA*/
    volatile              T_ADCC_CHN6_RESULT                    chn6_result; /* 0x30,    RO, 0x00000000,                             NA*/
    volatile              T_ADCC_CHN7_RESULT                    chn7_result; /* 0x34,    RO, 0x00000000,                             NA*/
    volatile                T_ADCC_RT_RESULT                      rt_result; /* 0x38,    RO, 0x00000000,                             NA*/
    volatile                T_ADCC_PD_STATUS                      pd_status; /* 0x3c,    RO, 0x00000001,                             NA*/
} T_HWP_ADCC_T;

#define hwp_adcc ((T_HWP_ADCC_T*)REG_ADC_BASE)


__STATIC_INLINE uint32_t adcc_misc_cfg_get(void)
{
    return hwp_adcc->misc_cfg.val;
}

__STATIC_INLINE void adcc_misc_cfg_set(uint32_t value)
{
    hwp_adcc->misc_cfg.val = value;
}

__STATIC_INLINE void adcc_misc_cfg_pack(uint16_t adc_div_para_m1, uint8_t adcc_dma_en, uint8_t avg_cnt, uint8_t avg_en, uint8_t adcc_dma_watermark, uint8_t intr_en, uint8_t pwrdn_intv, uint8_t data_skip, uint8_t adc_vref_sel, uint8_t adc_clk_inv)
{
    hwp_adcc->misc_cfg.val = (((uint32_t)adc_div_para_m1 << 20) | ((uint32_t)adcc_dma_en << 19) | ((uint32_t)avg_cnt << 17) | ((uint32_t)avg_en << 16) | ((uint32_t)adcc_dma_watermark << 12) | ((uint32_t)intr_en << 8) | ((uint32_t)pwrdn_intv << 6) | ((uint32_t)data_skip << 4) | ((uint32_t)adc_vref_sel << 3) | ((uint32_t)adc_clk_inv << 1));
}

__STATIC_INLINE void adcc_misc_cfg_unpack(uint16_t* adc_div_para_m1, uint8_t* adcc_dma_en, uint8_t* avg_cnt, uint8_t* avg_en, uint8_t* adcc_dma_watermark, uint8_t* intr_en, uint8_t* pwrdn_intv, uint8_t* data_skip, uint8_t* adc_vref_sel, uint8_t* adc_clk_inv)
{
    T_ADCC_MISC_CFG localVal = hwp_adcc->misc_cfg;

    *adc_div_para_m1 = localVal.bit_field.adc_div_para_m1;
    *adcc_dma_en = localVal.bit_field.adcc_dma_en;
    *avg_cnt = localVal.bit_field.avg_cnt;
    *avg_en = localVal.bit_field.avg_en;
    *adcc_dma_watermark = localVal.bit_field.adcc_dma_watermark;
    *intr_en = localVal.bit_field.intr_en;
    *pwrdn_intv = localVal.bit_field.pwrdn_intv;
    *data_skip = localVal.bit_field.data_skip;
    *adc_vref_sel = localVal.bit_field.adc_vref_sel;
    *adc_clk_inv = localVal.bit_field.adc_clk_inv;
}

__STATIC_INLINE uint16_t adcc_adc_div_para_m1_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.adc_div_para_m1;
}

__STATIC_INLINE void adcc_adc_div_para_m1_setf(uint16_t adc_div_para_m1)
{
    hwp_adcc->misc_cfg.bit_field.adc_div_para_m1 = adc_div_para_m1;
}

__STATIC_INLINE uint8_t adcc_adcc_dma_en_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.adcc_dma_en;
}

__STATIC_INLINE void adcc_adcc_dma_en_setf(uint8_t adcc_dma_en)
{
    hwp_adcc->misc_cfg.bit_field.adcc_dma_en = adcc_dma_en;
}

__STATIC_INLINE uint8_t adcc_avg_cnt_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.avg_cnt;
}

__STATIC_INLINE void adcc_avg_cnt_setf(uint8_t avg_cnt)
{
    hwp_adcc->misc_cfg.bit_field.avg_cnt = avg_cnt;
}

__STATIC_INLINE uint8_t adcc_avg_en_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.avg_en;
}

__STATIC_INLINE void adcc_avg_en_setf(uint8_t avg_en)
{
    hwp_adcc->misc_cfg.bit_field.avg_en = avg_en;
}

__STATIC_INLINE uint8_t adcc_adcc_dma_watermark_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.adcc_dma_watermark;
}

__STATIC_INLINE void adcc_adcc_dma_watermark_setf(uint8_t adcc_dma_watermark)
{
    hwp_adcc->misc_cfg.bit_field.adcc_dma_watermark = adcc_dma_watermark;
}

__STATIC_INLINE uint8_t adcc_intr_en_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.intr_en;
}

__STATIC_INLINE void adcc_intr_en_setf(uint8_t intr_en)
{
    hwp_adcc->misc_cfg.bit_field.intr_en = intr_en;
}

__STATIC_INLINE uint8_t adcc_pwrdn_intv_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.pwrdn_intv;
}

__STATIC_INLINE void adcc_pwrdn_intv_setf(uint8_t pwrdn_intv)
{
    hwp_adcc->misc_cfg.bit_field.pwrdn_intv = pwrdn_intv;
}

__STATIC_INLINE uint8_t adcc_data_skip_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.data_skip;
}

__STATIC_INLINE void adcc_data_skip_setf(uint8_t data_skip)
{
    hwp_adcc->misc_cfg.bit_field.data_skip = data_skip;
}

__STATIC_INLINE uint8_t adcc_adc_vref_sel_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.adc_vref_sel;
}

__STATIC_INLINE void adcc_adc_vref_sel_setf(uint8_t adc_vref_sel)
{
    hwp_adcc->misc_cfg.bit_field.adc_vref_sel = adc_vref_sel;
}

__STATIC_INLINE uint8_t adcc_adc_clk_inv_getf(void)
{
    return hwp_adcc->misc_cfg.bit_field.adc_clk_inv;
}

__STATIC_INLINE void adcc_adc_clk_inv_setf(uint8_t adc_clk_inv)
{
    hwp_adcc->misc_cfg.bit_field.adc_clk_inv = adc_clk_inv;
}

__STATIC_INLINE uint32_t adcc_adcc_div_up_get(void)
{
    return hwp_adcc->adcc_div_up.val;
}

__STATIC_INLINE void adcc_adcc_div_up_set(uint32_t value)
{
    hwp_adcc->adcc_div_up.val = value;
}

__STATIC_INLINE void adcc_adcc_div_up_pack(uint8_t adc_div_para_up)
{
    hwp_adcc->adcc_div_up.val = (((uint32_t)adc_div_para_up << 0));
}

__STATIC_INLINE uint32_t adcc_chn_en_get(void)
{
    return hwp_adcc->chn_en.val;
}

__STATIC_INLINE void adcc_chn_en_set(uint32_t value)
{
    hwp_adcc->chn_en.val = value;
}

__STATIC_INLINE void adcc_chn_en_pack(uint8_t chn_en)
{
    hwp_adcc->chn_en.val = (((uint32_t)chn_en << 0));
}

__STATIC_INLINE void adcc_chn_en_unpack(uint8_t* chn_en)
{
    T_ADCC_CHN_EN localVal = hwp_adcc->chn_en;

    *chn_en = localVal.bit_field.chn_en;
}

__STATIC_INLINE uint8_t adcc_chn_en_getf(void)
{
    return hwp_adcc->chn_en.bit_field.chn_en;
}

__STATIC_INLINE void adcc_chn_en_setf(uint8_t chn_en)
{
    hwp_adcc->chn_en.bit_field.chn_en = chn_en;
}

__STATIC_INLINE uint32_t adcc_adcc_start_get(void)
{
    return hwp_adcc->adcc_start.val;
}

__STATIC_INLINE void adcc_adcc_start_set(uint32_t value)
{
    hwp_adcc->adcc_start.val = value;
}

__STATIC_INLINE void adcc_adcc_start_pack(uint8_t adc_force_on, uint8_t adc_meas_init)
{
    hwp_adcc->adcc_start.val = (((uint32_t)adc_force_on << 1) | ((uint32_t)adc_meas_init << 0));
}

__STATIC_INLINE void adcc_adcc_start_unpack(uint8_t* adc_force_on, uint8_t* adc_meas_init)
{
    T_ADCC_ADCC_START localVal = hwp_adcc->adcc_start;

    *adc_force_on = localVal.bit_field.adc_force_on;
    *adc_meas_init = localVal.bit_field.adc_meas_init;
}

__STATIC_INLINE uint8_t adcc_adc_force_on_getf(void)
{
    return hwp_adcc->adcc_start.bit_field.adc_force_on;
}

__STATIC_INLINE void adcc_adc_force_on_setf(uint8_t adc_force_on)
{
    hwp_adcc->adcc_start.bit_field.adc_force_on = adc_force_on;
}

__STATIC_INLINE uint8_t adcc_adc_meas_init_getf(void)
{
    return hwp_adcc->adcc_start.bit_field.adc_meas_init;
}

__STATIC_INLINE void adcc_adc_meas_init_setf(uint8_t adc_meas_init)
{
    hwp_adcc->adcc_start.bit_field.adc_meas_init = adc_meas_init;
}

__STATIC_INLINE uint32_t adcc_intr_clr_get(void)
{
    return hwp_adcc->intr_clr.val;
}

__STATIC_INLINE void adcc_intr_clr_set(uint32_t value)
{
    hwp_adcc->intr_clr.val = value;
}

__STATIC_INLINE void adcc_intr_clr_pack(uint8_t adcc_intr_clr)
{
    hwp_adcc->intr_clr.val = (((uint32_t)adcc_intr_clr << 0));
}

__STATIC_INLINE uint32_t adcc_intr_status_get(void)
{
    return hwp_adcc->intr_status.val;
}

__STATIC_INLINE void adcc_intr_status_unpack(uint8_t* adcc_rawintr, uint8_t* adcc_intr)
{
    T_ADCC_INTR_STATUS localVal = hwp_adcc->intr_status;

    *adcc_rawintr = localVal.bit_field.adcc_rawintr;
    *adcc_intr = localVal.bit_field.adcc_intr;
}

__STATIC_INLINE uint8_t adcc_adcc_rawintr_getf(void)
{
    return hwp_adcc->intr_status.bit_field.adcc_rawintr;
}

__STATIC_INLINE uint8_t adcc_adcc_intr_getf(void)
{
    return hwp_adcc->intr_status.bit_field.adcc_intr;
}

__STATIC_INLINE uint32_t adcc_chn0_result_get(void)
{
    return hwp_adcc->chn0_result.val;
}

__STATIC_INLINE void adcc_chn0_result_unpack(uint16_t* chn0_sum)
{
    T_ADCC_CHN0_RESULT localVal = hwp_adcc->chn0_result;

    *chn0_sum = localVal.bit_field.chn0_sum;
}

__STATIC_INLINE uint16_t adcc_chn0_sum_getf(void)
{
    return hwp_adcc->chn0_result.bit_field.chn0_sum;
}

__STATIC_INLINE uint32_t adcc_chn1_result_get(void)
{
    return hwp_adcc->chn1_result.val;
}

__STATIC_INLINE void adcc_chn1_result_unpack(uint16_t* chn1_sum)
{
    T_ADCC_CHN1_RESULT localVal = hwp_adcc->chn1_result;

    *chn1_sum = localVal.bit_field.chn1_sum;
}

__STATIC_INLINE uint16_t adcc_chn1_sum_getf(void)
{
    return hwp_adcc->chn1_result.bit_field.chn1_sum;
}

__STATIC_INLINE uint32_t adcc_chn2_result_get(void)
{
    return hwp_adcc->chn2_result.val;
}

__STATIC_INLINE void adcc_chn2_result_unpack(uint16_t* chn2_sum)
{
    T_ADCC_CHN2_RESULT localVal = hwp_adcc->chn2_result;

    *chn2_sum = localVal.bit_field.chn2_sum;
}

__STATIC_INLINE uint16_t adcc_chn2_sum_getf(void)
{
    return hwp_adcc->chn2_result.bit_field.chn2_sum;
}

__STATIC_INLINE uint32_t adcc_chn3_result_get(void)
{
    return hwp_adcc->chn3_result.val;
}

__STATIC_INLINE void adcc_chn3_result_unpack(uint16_t* chn3_sum)
{
    T_ADCC_CHN3_RESULT localVal = hwp_adcc->chn3_result;

    *chn3_sum = localVal.bit_field.chn3_sum;
}

__STATIC_INLINE uint16_t adcc_chn3_sum_getf(void)
{
    return hwp_adcc->chn3_result.bit_field.chn3_sum;
}

__STATIC_INLINE uint32_t adcc_chn4_result_get(void)
{
    return hwp_adcc->chn4_result.val;
}

__STATIC_INLINE void adcc_chn4_result_unpack(uint16_t* chn4_sum)
{
    T_ADCC_CHN4_RESULT localVal = hwp_adcc->chn4_result;

    *chn4_sum = localVal.bit_field.chn4_sum;
}

__STATIC_INLINE uint16_t adcc_chn4_sum_getf(void)
{
    return hwp_adcc->chn4_result.bit_field.chn4_sum;
}

__STATIC_INLINE uint32_t adcc_chn5_result_get(void)
{
    return hwp_adcc->chn5_result.val;
}

__STATIC_INLINE void adcc_chn5_result_unpack(uint16_t* chn5_sum)
{
    T_ADCC_CHN5_RESULT localVal = hwp_adcc->chn5_result;

    *chn5_sum = localVal.bit_field.chn5_sum;
}

__STATIC_INLINE uint16_t adcc_chn5_sum_getf(void)
{
    return hwp_adcc->chn5_result.bit_field.chn5_sum;
}

__STATIC_INLINE uint32_t adcc_chn6_result_get(void)
{
    return hwp_adcc->chn6_result.val;
}

__STATIC_INLINE void adcc_chn6_result_unpack(uint16_t* chn6_sum)
{
    T_ADCC_CHN6_RESULT localVal = hwp_adcc->chn6_result;

    *chn6_sum = localVal.bit_field.chn6_sum;
}

__STATIC_INLINE uint16_t adcc_chn6_sum_getf(void)
{
    return hwp_adcc->chn6_result.bit_field.chn6_sum;
}

__STATIC_INLINE uint32_t adcc_chn7_result_get(void)
{
    return hwp_adcc->chn7_result.val;
}

__STATIC_INLINE void adcc_chn7_result_unpack(uint16_t* chn7_sum)
{
    T_ADCC_CHN7_RESULT localVal = hwp_adcc->chn7_result;

    *chn7_sum = localVal.bit_field.chn7_sum;
}

__STATIC_INLINE uint16_t adcc_chn7_sum_getf(void)
{
    return hwp_adcc->chn7_result.bit_field.chn7_sum;
}

__STATIC_INLINE uint32_t adcc_rt_result_get(void)
{
    return hwp_adcc->rt_result.val;
}

__STATIC_INLINE void adcc_rt_result_unpack(uint16_t* rt_rdata)
{
    T_ADCC_RT_RESULT localVal = hwp_adcc->rt_result;

    *rt_rdata = localVal.bit_field.rt_rdata;
}

__STATIC_INLINE uint16_t adcc_rt_rdata_getf(void)
{
    return hwp_adcc->rt_result.bit_field.rt_rdata;
}

__STATIC_INLINE uint32_t adcc_pd_status_get(void)
{
    return hwp_adcc->pd_status.val;
}

__STATIC_INLINE void adcc_pd_status_unpack(uint8_t* adc_pd)
{
    T_ADCC_PD_STATUS localVal = hwp_adcc->pd_status;

    *adc_pd = localVal.bit_field.adc_pd;
}

__STATIC_INLINE uint8_t adcc_adc_pd_getf(void)
{
    return hwp_adcc->pd_status.bit_field.adc_pd;
}

#endif
