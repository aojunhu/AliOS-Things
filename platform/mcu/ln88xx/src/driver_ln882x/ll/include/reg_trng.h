
#ifndef __REG_TRNG_H__
#define __REG_TRNG_H__

#include "ln88xx.h"

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_valid_int_mask  : 1  ; // 0  : 0
        uint32_t    autocorr_err_int_mask: 1  ; // 1  : 1
        uint32_t    crngt_err_int_mask  : 1  ; // 2  : 2
        uint32_t    vn_err_int_mask     : 1  ; // 3  : 3
        uint32_t    reserved_0          : 28 ; // 31 : 4
    } bit_field;
} t_trng_rng_imr;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_valid           : 1  ; // 0  : 0
        uint32_t    autocorr_err        : 1  ; // 1  : 1
        uint32_t    crngt_err           : 1  ; // 2  : 2
        uint32_t    vn_err              : 1  ; // 3  : 3
        uint32_t    reserved_0          : 28 ; // 31 : 4
    } bit_field;
} t_trng_rng_isr;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_valid1          : 1  ; // 0  : 0
        uint32_t    autocorr_err1       : 1  ; // 1  : 1
        uint32_t    crngt_err1          : 1  ; // 2  : 2
        uint32_t    vn_err1             : 1  ; // 3  : 3
        uint32_t    reserved_0          : 28 ; // 31 : 4
    } bit_field;
} t_trng_rng_icr;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rnd_src_sel         : 2  ; // 1  : 0
        uint32_t    reserved_0          : 30 ; // 31 : 2
    } bit_field;
} t_trng_config;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_valid2          : 1  ; // 0  : 0
        uint32_t    reserved_0          : 31 ; // 31 : 1
    } bit_field;
} t_trng_valid;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_data_0          : 32 ; // 31 : 0
    } bit_field;
} t_trng_ehr_data0;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_data_1          : 32 ; // 31 : 0
    } bit_field;
} t_trng_ehr_data1;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_data_2          : 32 ; // 31 : 0
    } bit_field;
} t_trng_ehr_data2;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_data_3          : 32 ; // 31 : 0
    } bit_field;
} t_trng_ehr_data3;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_data_4          : 32 ; // 31 : 0
    } bit_field;
} t_trng_ehr_data4;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ehr_data_5          : 32 ; // 31 : 0
    } bit_field;
} t_trng_ehr_data5;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rnd_src_en          : 1  ; // 0  : 0
        uint32_t    reserved_0          : 31 ; // 31 : 1
    } bit_field;
} t_trng_rnd_source_enable;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    sample_cntr1        : 32 ; // 31 : 0
    } bit_field;
} t_trng_sample_cnt1;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    autocorr_trys       : 14 ; // 13 : 0
        uint32_t    autocorr_fails      : 8  ; // 21 : 14
        uint32_t    reserved_0          : 10 ; // 31 : 22
    } bit_field;
} t_trng_autocorr_statistic;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    reserved_1          : 1  ; // 0  : 0
        uint32_t    vnc_bypass          : 1  ; // 1  : 1
        uint32_t    trng_crngt_bypass   : 1  ; // 2  : 2
        uint32_t    auto_correlate_bypass: 1  ; // 3  : 3
        uint32_t    reserved_0          : 28 ; // 31 : 4
    } bit_field;
} t_trng_debug_control;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    trng_sw_reset       : 1  ; // 0  : 0
        uint32_t    reserved_0          : 31 ; // 31 : 1
    } bit_field;
} t_trng_sw_reset;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    trng_busy           : 1  ; // 0  : 0
        uint32_t    reserved_0          : 31 ; // 31 : 1
    } bit_field;
} t_trng_busy;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rst_bits_counter    : 1  ; // 0  : 0
        uint32_t    reserved_0          : 31 ; // 31 : 1
    } bit_field;
} t_trng_rst_bits_counter;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rosc_cntr_val0      : 22 ; // 21 : 0
        uint32_t    reserved_0          : 10 ; // 31 : 22
    } bit_field;
} t_trng_rng_bist_cntr0;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rosc_cntr_val1      : 22 ; // 21 : 0
        uint32_t    reserved_0          : 10 ; // 31 : 22
    } bit_field;
} t_trng_rng_bist_cntr1;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rosc_cntr_val2      : 22 ; // 21 : 0
        uint32_t    reserved_0          : 10 ; // 31 : 22
    } bit_field;
} t_trng_rng_bist_cntr2;


//--------------------------------------------------------------------------------

typedef struct
{
    volatile        uint32_t                                 reserved_1[64]                         ; // 0x0
    volatile        t_trng_rng_imr                           rng_imr                                ; // 0x100
    volatile        t_trng_rng_isr                           rng_isr                                ; // 0x104
    volatile        t_trng_rng_icr                           rng_icr                                ; // 0x108
    volatile        t_trng_config                            trng_config                            ; // 0x10c
    volatile        t_trng_valid                             trng_valid                             ; // 0x110
    volatile        t_trng_ehr_data0                         ehr_data0                              ; // 0x114
    volatile        t_trng_ehr_data1                         ehr_data1                              ; // 0x118
    volatile        t_trng_ehr_data2                         ehr_data2                              ; // 0x11c
    volatile        t_trng_ehr_data3                         ehr_data3                              ; // 0x120
    volatile        t_trng_ehr_data4                         ehr_data4                              ; // 0x124
    volatile        t_trng_ehr_data5                         ehr_data5                              ; // 0x128
    volatile        t_trng_rnd_source_enable                 rnd_source_enable                      ; // 0x12c
    volatile        t_trng_sample_cnt1                       sample_cnt1                            ; // 0x130
    volatile        t_trng_autocorr_statistic                autocorr_statistic                     ; // 0x134
    volatile        t_trng_debug_control                     trng_debug_control                     ; // 0x138
    volatile        uint32_t                                 reserved_2[1]                          ; // 0x13c
    volatile        t_trng_sw_reset                          trng_sw_reset                          ; // 0x140
    volatile        uint32_t                                 reserved_3[29]                         ; // 0x144
    volatile        t_trng_busy                              trng_busy                              ; // 0x1b8
    volatile        t_trng_rst_bits_counter                  rst_bits_counter                       ; // 0x1bc
    volatile        uint32_t                                 reserved_4[8]                          ; // 0x1c0
    volatile        t_trng_rng_bist_cntr0                    rng_bist_cntr0                         ; // 0x1e0
    volatile        t_trng_rng_bist_cntr1                    rng_bist_cntr1                         ; // 0x1e4
    volatile        t_trng_rng_bist_cntr2                    rng_bist_cntr2                         ; // 0x1e8
} t_hwp_trng_t;


//--------------------------------------------------------------------------------

__STATIC_INLINE void trng_rng_imr_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->rng_imr.val = value;
}

__STATIC_INLINE void trng_vn_err_int_mask_setf(uint32_t base, uint8_t vn_err_int_mask)
{
    ((t_hwp_trng_t*)(base))->rng_imr.bit_field.vn_err_int_mask = vn_err_int_mask;
}

__STATIC_INLINE void trng_crngt_err_int_mask_setf(uint32_t base, uint8_t crngt_err_int_mask)
{
    ((t_hwp_trng_t*)(base))->rng_imr.bit_field.crngt_err_int_mask = crngt_err_int_mask;
}

__STATIC_INLINE void trng_autocorr_err_int_mask_setf(uint32_t base, uint8_t autocorr_err_int_mask)
{
    ((t_hwp_trng_t*)(base))->rng_imr.bit_field.autocorr_err_int_mask = autocorr_err_int_mask;
}

__STATIC_INLINE void trng_ehr_valid_int_mask_setf(uint32_t base, uint8_t ehr_valid_int_mask)
{
    ((t_hwp_trng_t*)(base))->rng_imr.bit_field.ehr_valid_int_mask = ehr_valid_int_mask;
}

__STATIC_INLINE void trng_rng_icr_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->rng_icr.val = value;
}

__STATIC_INLINE void trng_vn_err1_setf(uint32_t base, uint8_t vn_err1)
{
    ((t_hwp_trng_t*)(base))->rng_icr.bit_field.vn_err1 = vn_err1;
}

__STATIC_INLINE void trng_crngt_err1_setf(uint32_t base, uint8_t crngt_err1)
{
    ((t_hwp_trng_t*)(base))->rng_icr.bit_field.crngt_err1 = crngt_err1;
}

__STATIC_INLINE void trng_autocorr_err1_setf(uint32_t base, uint8_t autocorr_err1)
{
    ((t_hwp_trng_t*)(base))->rng_icr.bit_field.autocorr_err1 = autocorr_err1;
}

__STATIC_INLINE void trng_ehr_valid1_setf(uint32_t base, uint8_t ehr_valid1)
{
    ((t_hwp_trng_t*)(base))->rng_icr.bit_field.ehr_valid1 = ehr_valid1;
}

__STATIC_INLINE void trng_config_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->trng_config.val = value;
}

__STATIC_INLINE void trng_rnd_src_sel_setf(uint32_t base, uint8_t rnd_src_sel)
{
    ((t_hwp_trng_t*)(base))->trng_config.bit_field.rnd_src_sel = rnd_src_sel;
}

__STATIC_INLINE void trng_rnd_source_enable_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->rnd_source_enable.val = value;
}

__STATIC_INLINE void trng_rnd_src_en_setf(uint32_t base, uint8_t rnd_src_en)
{
    ((t_hwp_trng_t*)(base))->rnd_source_enable.bit_field.rnd_src_en = rnd_src_en;
}

__STATIC_INLINE void trng_sample_cnt1_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->sample_cnt1.val = value;
}

__STATIC_INLINE void trng_sample_cntr1_setf(uint32_t base, uint32_t sample_cntr1)
{
    ((t_hwp_trng_t*)(base))->sample_cnt1.bit_field.sample_cntr1 = sample_cntr1;
}

__STATIC_INLINE void trng_autocorr_statistic_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->autocorr_statistic.val = value;
}

__STATIC_INLINE void trng_autocorr_fails_setf(uint32_t base, uint8_t autocorr_fails)
{
    ((t_hwp_trng_t*)(base))->autocorr_statistic.bit_field.autocorr_fails = autocorr_fails;
}

__STATIC_INLINE void trng_autocorr_trys_setf(uint32_t base, uint16_t autocorr_trys)
{
    ((t_hwp_trng_t*)(base))->autocorr_statistic.bit_field.autocorr_trys = autocorr_trys;
}

__STATIC_INLINE void trng_sw_reset_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->trng_sw_reset.val = value;
}

__STATIC_INLINE void trng_sw_reset_setf(uint32_t base, uint8_t trng_sw_reset)
{
    ((t_hwp_trng_t*)(base))->trng_sw_reset.bit_field.trng_sw_reset = trng_sw_reset;
}

__STATIC_INLINE void trng_rst_bits_counter_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->rst_bits_counter.val = value;
}

__STATIC_INLINE void trng_rst_bits_counter_setf(uint32_t base, uint8_t rst_bits_counter)
{
    ((t_hwp_trng_t*)(base))->rst_bits_counter.bit_field.rst_bits_counter = rst_bits_counter;
}


//--------------------------------------------------------------------------------

__STATIC_INLINE uint32_t trng_rng_imr_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_imr.val;
}

__STATIC_INLINE uint8_t trng_vn_err_int_mask_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_imr.bit_field.vn_err_int_mask;
}

__STATIC_INLINE uint8_t trng_crngt_err_int_mask_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_imr.bit_field.crngt_err_int_mask;
}

__STATIC_INLINE uint8_t trng_autocorr_err_int_mask_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_imr.bit_field.autocorr_err_int_mask;
}

__STATIC_INLINE uint8_t trng_ehr_valid_int_mask_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_imr.bit_field.ehr_valid_int_mask;
}

__STATIC_INLINE uint32_t trng_rng_isr_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_isr.val;
}

__STATIC_INLINE uint8_t trng_vn_err_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_isr.bit_field.vn_err;
}

__STATIC_INLINE uint8_t trng_crngt_err_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_isr.bit_field.crngt_err;
}

__STATIC_INLINE uint8_t trng_autocorr_err_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_isr.bit_field.autocorr_err;
}

__STATIC_INLINE uint8_t trng_ehr_valid_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_isr.bit_field.ehr_valid;
}

__STATIC_INLINE uint32_t trng_config_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_config.val;
}

__STATIC_INLINE uint8_t trng_rnd_src_sel_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_config.bit_field.rnd_src_sel;
}

__STATIC_INLINE uint32_t trng_valid_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_valid.val;
}

__STATIC_INLINE uint8_t trng_ehr_valid2_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_valid.bit_field.ehr_valid2;
}

__STATIC_INLINE uint32_t trng_ehr_data0_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data0.val;
}

__STATIC_INLINE uint32_t trng_ehr_data_0_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data0.bit_field.ehr_data_0;
}

__STATIC_INLINE uint32_t trng_ehr_data1_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data1.val;
}

__STATIC_INLINE uint32_t trng_ehr_data_1_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data1.bit_field.ehr_data_1;
}

__STATIC_INLINE uint32_t trng_ehr_data2_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data2.val;
}

__STATIC_INLINE uint32_t trng_ehr_data_2_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data2.bit_field.ehr_data_2;
}

__STATIC_INLINE uint32_t trng_ehr_data3_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data3.val;
}

__STATIC_INLINE uint32_t trng_ehr_data_3_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data3.bit_field.ehr_data_3;
}

__STATIC_INLINE uint32_t trng_ehr_data4_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data4.val;
}

__STATIC_INLINE uint32_t trng_ehr_data_4_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data4.bit_field.ehr_data_4;
}

__STATIC_INLINE uint32_t trng_ehr_data5_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data5.val;
}

__STATIC_INLINE uint32_t trng_ehr_data_5_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->ehr_data5.bit_field.ehr_data_5;
}

__STATIC_INLINE uint32_t trng_rnd_source_enable_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rnd_source_enable.val;
}

__STATIC_INLINE uint8_t trng_rnd_src_en_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rnd_source_enable.bit_field.rnd_src_en;
}

__STATIC_INLINE uint32_t trng_sample_cnt1_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->sample_cnt1.val;
}

__STATIC_INLINE uint32_t trng_sample_cntr1_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->sample_cnt1.bit_field.sample_cntr1;
}

__STATIC_INLINE uint32_t trng_autocorr_statistic_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->autocorr_statistic.val;
}

__STATIC_INLINE uint8_t trng_autocorr_fails_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->autocorr_statistic.bit_field.autocorr_fails;
}

__STATIC_INLINE uint16_t trng_autocorr_trys_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->autocorr_statistic.bit_field.autocorr_trys;
}

__STATIC_INLINE uint32_t trng_debug_control_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_debug_control.val;
}

__STATIC_INLINE void trng_debug_control_set(uint32_t base, uint32_t value)
{
    ((t_hwp_trng_t*)(base))->trng_debug_control.val = value;
}

__STATIC_INLINE uint8_t trng_auto_correlate_bypass_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_debug_control.bit_field.auto_correlate_bypass;
}

__STATIC_INLINE uint8_t trng_crngt_bypass_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_debug_control.bit_field.trng_crngt_bypass;
}

__STATIC_INLINE uint8_t trng_vnc_bypass_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_debug_control.bit_field.vnc_bypass;
}

__STATIC_INLINE uint32_t trng_busy_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_busy.val;
}

__STATIC_INLINE uint8_t trng_busy_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->trng_busy.bit_field.trng_busy;
}

__STATIC_INLINE uint32_t trng_rng_bist_cntr0_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_bist_cntr0.val;
}

__STATIC_INLINE uint32_t trng_rosc_cntr_val0_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_bist_cntr0.bit_field.rosc_cntr_val0;
}

__STATIC_INLINE uint32_t trng_rng_bist_cntr1_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_bist_cntr1.val;
}

__STATIC_INLINE uint32_t trng_rosc_cntr_val1_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_bist_cntr1.bit_field.rosc_cntr_val1;
}

__STATIC_INLINE uint32_t trng_rng_bist_cntr2_get(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_bist_cntr2.val;
}

__STATIC_INLINE uint32_t trng_rosc_cntr_val2_getf(uint32_t base)
{
    return ((t_hwp_trng_t*)(base))->rng_bist_cntr2.bit_field.rosc_cntr_val2;
}


//--------------------------------------------------------------------------------

__STATIC_INLINE void trng_rng_imr_pack(uint32_t base, uint8_t vn_err_int_mask, uint8_t crngt_err_int_mask, uint8_t autocorr_err_int_mask, uint8_t ehr_valid_int_mask)
{
    ((t_hwp_trng_t*)(base))->rng_imr.val = ( \
                                    ((uint32_t )vn_err_int_mask   << 3) \
                                  | ((uint32_t )crngt_err_int_mask<< 2) \
                                  | ((uint32_t )autocorr_err_int_mask<< 1) \
                                  | ((uint32_t )ehr_valid_int_mask) \
                                  );
}

__STATIC_INLINE void trng_rng_icr_pack(uint32_t base, uint8_t vn_err1, uint8_t crngt_err1, uint8_t autocorr_err1, uint8_t ehr_valid1)
{
    ((t_hwp_trng_t*)(base))->rng_icr.val = ( \
                                    ((uint32_t )vn_err1           << 3) \
                                  | ((uint32_t )crngt_err1        << 2) \
                                  | ((uint32_t )autocorr_err1     << 1) \
                                  | ((uint32_t )ehr_valid1) \
                                  );
}

__STATIC_INLINE void trng_autocorr_statistic_pack(uint32_t base, uint8_t autocorr_fails, uint16_t autocorr_trys)
{
    ((t_hwp_trng_t*)(base))->autocorr_statistic.val = ( \
                                    ((uint32_t )autocorr_fails    << 14) \
                                  | ((uint32_t )autocorr_trys) \
                                  );
}


//--------------------------------------------------------------------------------

__STATIC_INLINE void trng_rng_imr_unpack(uint32_t base, uint8_t * vn_err_int_mask, uint8_t * crngt_err_int_mask, uint8_t * autocorr_err_int_mask, uint8_t * ehr_valid_int_mask)
{
    t_trng_rng_imr local_val = ((t_hwp_trng_t*)(base))->rng_imr;

    *vn_err_int_mask    = local_val.bit_field.vn_err_int_mask;
    *crngt_err_int_mask = local_val.bit_field.crngt_err_int_mask;
    *autocorr_err_int_mask= local_val.bit_field.autocorr_err_int_mask;
    *ehr_valid_int_mask = local_val.bit_field.ehr_valid_int_mask;
}

__STATIC_INLINE void trng_rng_isr_unpack(uint32_t base, uint8_t * vn_err, uint8_t * crngt_err, uint8_t * autocorr_err, uint8_t * ehr_valid)
{
    t_trng_rng_isr local_val = ((t_hwp_trng_t*)(base))->rng_isr;

    *vn_err             = local_val.bit_field.vn_err;
    *crngt_err          = local_val.bit_field.crngt_err;
    *autocorr_err       = local_val.bit_field.autocorr_err;
    *ehr_valid          = local_val.bit_field.ehr_valid;
}

__STATIC_INLINE void trng_autocorr_statistic_unpack(uint32_t base, uint8_t * autocorr_fails, uint16_t * autocorr_trys)
{
    t_trng_autocorr_statistic local_val = ((t_hwp_trng_t*)(base))->autocorr_statistic;

    *autocorr_fails     = local_val.bit_field.autocorr_fails;
    *autocorr_trys      = local_val.bit_field.autocorr_trys;
}

__STATIC_INLINE void trng_debug_control_unpack(uint32_t base, uint8_t * auto_correlate_bypass, uint8_t * trng_crngt_bypass, uint8_t * vnc_bypass)
{
    t_trng_debug_control local_val = ((t_hwp_trng_t*)(base))->trng_debug_control;

    *auto_correlate_bypass= local_val.bit_field.auto_correlate_bypass;
    *trng_crngt_bypass  = local_val.bit_field.trng_crngt_bypass;
    *vnc_bypass         = local_val.bit_field.vnc_bypass;
}

#endif // !__REG_TRNG_H__
