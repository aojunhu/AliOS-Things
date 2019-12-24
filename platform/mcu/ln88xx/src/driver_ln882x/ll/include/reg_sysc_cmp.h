
#ifndef __REG_SYSC_CMP_H__
#define __REG_SYSC_CMP_H__

#include "ln88xx.h"

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    pclk0_div_para_up   : 1  ; // 0  : 0
        uint32_t    timer1_div_para_up  : 1  ; // 1  : 1
        uint32_t    timer2_div_para_up  : 1  ; // 2  : 2
        uint32_t    timer3_div_para_up  : 1  ; // 3  : 3
        uint32_t    timer4_div_para_up  : 1  ; // 4  : 4
        uint32_t    reserved_0          : 27 ; // 31 : 5
    } bit_field;
} t_sysc_cmp_div_update;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    pclk0_div_para_m1   : 4  ; // 3  : 0
        uint32_t    reserved_0          : 28 ; // 31 : 4
    } bit_field;
} t_sysc_cmp_div_para;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    timer1_div_para_m1  : 8  ; // 7  : 0
        uint32_t    timer2_div_para_m1  : 8  ; // 15 : 8
        uint32_t    timer3_div_para_m1  : 8  ; // 23 : 16
        uint32_t    timer4_div_para_m1  : 8  ; // 31 : 24
    } bit_field;
} t_sysc_cmp_div_para_timer_0;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    patch_gate_en       : 1  ; // 0  : 0
        uint32_t    qspi_gate_en        : 1  ; // 1  : 1
        uint32_t    adcc_gate_en        : 1  ; // 2  : 2
        uint32_t    i2s_gate_en         : 1  ; // 3  : 3
        uint32_t    gpio_gate_en        : 1  ; // 4  : 4
        uint32_t    spim_gate_en        : 1  ; // 5  : 5
        uint32_t    spis_gate_en        : 1  ; // 6  : 6
        uint32_t    i2c0_gate_en        : 1  ; // 7  : 7
        uint32_t    i2c1_gate_en        : 1  ; // 8  : 8
        uint32_t    uart0_gate_en       : 1  ; // 9  : 9
        uint32_t    uart1_gate_en       : 1  ; // 10 : 10
        uint32_t    spim2_gate_en       : 1  ; // 11 : 11
        uint32_t    wdt_gate_en         : 1  ; // 12 : 12
        uint32_t    timer_gate_en       : 1  ; // 13 : 13
        uint32_t    timer1_gate_en      : 1  ; // 14 : 14
        uint32_t    timer2_gate_en      : 1  ; // 15 : 15
        uint32_t    timer3_gate_en      : 1  ; // 16 : 16
        uint32_t    timer4_gate_en      : 1  ; // 17 : 17
        uint32_t    dbgh_gate_en        : 1  ; // 18 : 18
        uint32_t    sdio_gate_en        : 1  ; // 19 : 19
        uint32_t    mac_gate_en         : 1  ; // 20 : 20
        uint32_t    cache_gate_en       : 1  ; // 21 : 21
        uint32_t    dma_gate_en         : 1  ; // 22 : 22
        uint32_t    rfreg_gate_en       : 1  ; // 23 : 23
        uint32_t    pwm_gate_en         : 1  ; // 24 : 24
        uint32_t    ef_gate_en          : 1  ; // 25 : 25
        uint32_t    trng_gate_en        : 1  ; // 26 : 26
        uint32_t    aes_gate_en         : 1  ; // 27 : 27
        uint32_t    reserved_0          : 4  ; // 31 : 28
    } bit_field;
} t_sysc_cmp_sw_clkg;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    srstn_patch         : 1  ; // 0  : 0
        uint32_t    srstn_qspi          : 1  ; // 1  : 1
        uint32_t    srstn_adcc          : 1  ; // 2  : 2
        uint32_t    srstn_i2s           : 1  ; // 3  : 3
        uint32_t    srstn_gpio          : 1  ; // 4  : 4
        uint32_t    srstn_spim          : 1  ; // 5  : 5
        uint32_t    srstn_spis          : 1  ; // 6  : 6
        uint32_t    srstn_i2c0          : 1  ; // 7  : 7
        uint32_t    srstn_i2c1          : 1  ; // 8  : 8
        uint32_t    srstn_uart0         : 1  ; // 9  : 9
        uint32_t    srstn_uart1         : 1  ; // 10 : 10
        uint32_t    srstn_spim2         : 1  ; // 11 : 11
        uint32_t    srstn_wdt           : 1  ; // 12 : 12
        uint32_t    srstn_timer         : 1  ; // 13 : 13
        uint32_t    srstn_dbgh          : 1  ; // 14 : 14
        uint32_t    srstn_sdio          : 1  ; // 15 : 15
        uint32_t    srstn_mac           : 1  ; // 16 : 16
        uint32_t    srstn_cache         : 1  ; // 17 : 17
        uint32_t    srstn_dma           : 1  ; // 18 : 18
        uint32_t    srstn_rfreg         : 1  ; // 19 : 19
        uint32_t    srstn_pwm           : 1  ; // 20 : 20
        uint32_t    srstn_ef            : 1  ; // 21 : 21
        uint32_t    srstn_trng          : 1  ; // 22 : 22
        uint32_t    srstn_ase           : 1  ; // 23 : 23
        uint32_t    reserved_0          : 8  ; // 31 : 24
    } bit_field;
} t_sysc_cmp_sw_rstn;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    reserved_0          : 4  ; // 3  : 0
        uint32_t    sdio_io_en          : 1  ; // 4  : 4
        uint32_t    spif_io_en          : 1  ; // 5  : 5
        uint32_t    spim_io_en0         : 1  ; // 6  : 6
        uint32_t    spis_io_en          : 1  ; // 7  : 7
        uint32_t    i2s_io_en0          : 1  ; // 8  : 8
        uint32_t    i2s_io_en1          : 1  ; // 9  : 9
        uint32_t    r_uart0_sir_en      : 1  ; // 10 : 10
        uint32_t    r_io_dsel           : 21 ; // 31 : 11
    } bit_field;
} t_sysc_cmp_io_en;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    func_ien            : 20 ; // 19 : 0
        uint32_t    spim_io_en1         : 1  ; // 20 : 20
        uint32_t    spim_io_en2         : 1  ; // 21 : 21
        uint32_t    reserved_0          : 10 ; // 31 : 22
    } bit_field;
} t_sysc_cmp_func_en;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    func_io00_sel       : 6  ; // 5  : 0
        uint32_t    reserved_3          : 2  ; // 7  : 6
        uint32_t    func_io01_sel       : 6  ; // 13 : 8
        uint32_t    reserved_2          : 2  ; // 15 : 14
        uint32_t    func_io02_sel       : 6  ; // 21 : 16
        uint32_t    reserved_1          : 2  ; // 23 : 22
        uint32_t    func_io03_sel       : 6  ; // 29 : 24
        uint32_t    reserved_0          : 2  ; // 31 : 30
    } bit_field;
} t_sysc_cmp_func_isel_0;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    func_io04_sel       : 6  ; // 5  : 0
        uint32_t    reserved_3          : 2  ; // 7  : 6
        uint32_t    func_io05_sel       : 6  ; // 13 : 8
        uint32_t    reserved_2          : 2  ; // 15 : 14
        uint32_t    func_io06_sel       : 6  ; // 21 : 16
        uint32_t    reserved_1          : 2  ; // 23 : 22
        uint32_t    func_io07_sel       : 6  ; // 29 : 24
        uint32_t    reserved_0          : 2  ; // 31 : 30
    } bit_field;
} t_sysc_cmp_func_isel_1;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    func_io08_sel       : 6  ; // 5  : 0
        uint32_t    reserved_3          : 2  ; // 7  : 6
        uint32_t    func_io09_sel       : 6  ; // 13 : 8
        uint32_t    reserved_2          : 2  ; // 15 : 14
        uint32_t    func_io10_sel       : 6  ; // 21 : 16
        uint32_t    reserved_1          : 2  ; // 23 : 22
        uint32_t    func_io11_sel       : 6  ; // 29 : 24
        uint32_t    reserved_0          : 2  ; // 31 : 30
    } bit_field;
} t_sysc_cmp_func_isel_2;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    func_io12_sel       : 6  ; // 5  : 0
        uint32_t    reserved_3          : 2  ; // 7  : 6
        uint32_t    func_io13_sel       : 6  ; // 13 : 8
        uint32_t    reserved_2          : 2  ; // 15 : 14
        uint32_t    func_io14_sel       : 6  ; // 21 : 16
        uint32_t    reserved_1          : 2  ; // 23 : 22
        uint32_t    func_io15_sel       : 6  ; // 29 : 24
        uint32_t    reserved_0          : 2  ; // 31 : 30
    } bit_field;
} t_sysc_cmp_func_isel_3;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    func_io16_sel       : 6  ; // 5  : 0
        uint32_t    reserved_3          : 2  ; // 7  : 6
        uint32_t    func_io17_sel       : 6  ; // 13 : 8
        uint32_t    reserved_2          : 2  ; // 15 : 14
        uint32_t    func_io18_sel       : 6  ; // 21 : 16
        uint32_t    reserved_1          : 2  ; // 23 : 22
        uint32_t    func_io19_sel       : 6  ; // 29 : 24
        uint32_t    reserved_0          : 2  ; // 31 : 30
    } bit_field;
} t_sysc_cmp_func_isel_4;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    mcu_stcalib         : 25 ; // 24 : 0
        uint32_t    reserved_0          : 7  ; // 31 : 25
    } bit_field;
} t_sysc_cmp_mcu_stcalib;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    idle_reg            : 32 ; // 31 : 0
    } bit_field;
} t_sysc_cmp_idle;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    mac_txabort_reqn    : 1  ; // 0  : 0
        uint32_t    reserved_0          : 31 ; // 31 : 1
    } bit_field;
} t_sysc_cmp_mac_abort;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rom0_ema            : 3  ; // 2  : 0
        uint32_t    reserved_7          : 1  ; // 3  : 3
        uint32_t    rom1_ema            : 3  ; // 6  : 4
        uint32_t    reserved_6          : 1  ; // 7  : 7
        uint32_t    ram0_ema            : 3  ; // 10 : 8
        uint32_t    reserved_5          : 1  ; // 11 : 11
        uint32_t    ram1_ema            : 3  ; // 14 : 12
        uint32_t    reserved_4          : 1  ; // 15 : 15
        uint32_t    ram2_ema            : 3  ; // 18 : 16
        uint32_t    reserved_3          : 1  ; // 19 : 19
        uint32_t    ram30_ema           : 3  ; // 22 : 20
        uint32_t    reserved_2          : 1  ; // 23 : 23
        uint32_t    ram31_ema           : 3  ; // 26 : 24
        uint32_t    reserved_1          : 1  ; // 27 : 27
        uint32_t    ram32_ema           : 3  ; // 30 : 28
        uint32_t    reserved_0          : 1  ; // 31 : 31
    } bit_field;
} t_sysc_cmp_mem_ema_0;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ram33_ema           : 3  ; // 2  : 0
        uint32_t    reserved_3          : 1  ; // 3  : 3
        uint32_t    ram34_ema           : 3  ; // 6  : 4
        uint32_t    reserved_2          : 1  ; // 7  : 7
        uint32_t    ram35_ema           : 3  ; // 10 : 8
        uint32_t    reserved_1          : 1  ; // 11 : 11
        uint32_t    ram0_emaw           : 2  ; // 13 : 12
        uint32_t    ram1_emaw           : 2  ; // 15 : 14
        uint32_t    ram2_emaw           : 2  ; // 17 : 16
        uint32_t    ram30_emaw          : 2  ; // 19 : 18
        uint32_t    ram31_emaw          : 2  ; // 21 : 20
        uint32_t    ram32_emaw          : 2  ; // 23 : 22
        uint32_t    ram33_emaw          : 2  ; // 25 : 24
        uint32_t    ram34_emaw          : 2  ; // 27 : 26
        uint32_t    ram35_emaw          : 2  ; // 29 : 28
        uint32_t    reserved_0          : 2  ; // 31 : 30
    } bit_field;
} t_sysc_cmp_mem_ema_1;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    dma_clk_en_dly      : 8  ; // 7  : 0
        uint32_t    reserved_0          : 24 ; // 31 : 8
    } bit_field;
} t_sysc_cmp_dma_clk_dly;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rfreg_len           : 9  ; // 8  : 0
        uint32_t    reserved_1          : 7  ; // 15 : 9
        uint32_t    rfreg_base_addr     : 9  ; // 24 : 16
        uint32_t    reserved_0          : 7  ; // 31 : 25
    } bit_field;
} t_sysc_cmp_rfreg_cfg;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    rfreg_save          : 1  ; // 0  : 0
        uint32_t    rfreg_restore       : 1  ; // 1  : 1
        uint32_t    reserved_0          : 30 ; // 31 : 2
    } bit_field;
} t_sysc_cmp_rfreg_action;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    save_done           : 1  ; // 0  : 0
        uint32_t    restore_done        : 1  ; // 1  : 1
        uint32_t    reserved_0          : 30 ; // 31 : 2
    } bit_field;
} t_sysc_cmp_rfreg_action_status;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    debug_io_en         : 16 ; // 15 : 0
        uint32_t    reserved_0          : 16 ; // 31 : 16
    } bit_field;
} t_sysc_cmp_debug_io_en;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    debug_sw            : 16 ; // 15 : 0
        uint32_t    debug_port_sel      : 3  ; // 18 : 16
        uint32_t    rf_debug_mode       : 1  ; // 19 : 19
        uint32_t    mac_debug_port_sel  : 4  ; // 23 : 20
        uint32_t    reserved_0          : 8  ; // 31 : 24
    } bit_field;
} t_sysc_cmp_debug_sel;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    r_pwm1_wid_lo       : 20 ; // 19 : 0
        uint32_t    r_pwm_en            : 4  ; // 23 : 20
        uint32_t    reserved_0          : 8  ; // 31 : 24
    } bit_field;
} t_sysc_cmp_pwm1_lo;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    r_pwm1_wid_hi       : 20 ; // 19 : 0
        uint32_t    reserved_0          : 12 ; // 31 : 20
    } bit_field;
} t_sysc_cmp_pwm1_hi;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    r_pwm2_wid_lo       : 20 ; // 19 : 0
        uint32_t    reserved_0          : 12 ; // 31 : 20
    } bit_field;
} t_sysc_cmp_pwm2_lo;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    r_pwm2_wid_hi       : 20 ; // 19 : 0
        uint32_t    reserved_0          : 12 ; // 31 : 20
    } bit_field;
} t_sysc_cmp_pwm2_hi;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    r_pwm3_wid_lo       : 20 ; // 19 : 0
        uint32_t    reserved_0          : 12 ; // 31 : 20
    } bit_field;
} t_sysc_cmp_pwm3_lo;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    r_pwm3_wid_hi       : 20 ; // 19 : 0
        uint32_t    reserved_0          : 12 ; // 31 : 20
    } bit_field;
} t_sysc_cmp_pwm3_hi;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    r_pwm4_wid_lo       : 20 ; // 19 : 0
        uint32_t    reserved_0          : 12 ; // 31 : 20
    } bit_field;
} t_sysc_cmp_pwm4_lo;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    r_pwm4_wid_hi       : 20 ; // 19 : 0
        uint32_t    reserved_0          : 12 ; // 31 : 20
    } bit_field;
} t_sysc_cmp_pwm4_hi;


//--------------------------------------------------------------------------------

typedef struct
{
    volatile        t_sysc_cmp_div_update                    div_update                             ; // 0x0
    volatile        t_sysc_cmp_div_para                      div_para                               ; // 0x4
    volatile        t_sysc_cmp_div_para_timer_0              div_para_timer_0                       ; // 0x8
    volatile        uint32_t                                 reserved_1[1]                          ; // 0xc
    volatile        t_sysc_cmp_sw_clkg                       sw_clkg                                ; // 0x10
    volatile        t_sysc_cmp_sw_rstn                       sw_rstn                                ; // 0x14
    volatile        t_sysc_cmp_io_en                         io_en                                  ; // 0x18
    volatile        t_sysc_cmp_func_en                       func_en                                ; // 0x1c
    volatile        t_sysc_cmp_func_isel_0                   func_isel_0                            ; // 0x20
    volatile        t_sysc_cmp_func_isel_1                   func_isel_1                            ; // 0x24
    volatile        t_sysc_cmp_func_isel_2                   func_isel_2                            ; // 0x28
    volatile        t_sysc_cmp_func_isel_3                   func_isel_3                            ; // 0x2c
    volatile        t_sysc_cmp_func_isel_4                   func_isel_4                            ; // 0x30
    volatile        t_sysc_cmp_mcu_stcalib                   mcu_stcalib                            ; // 0x34
    volatile        t_sysc_cmp_idle                          idle                                   ; // 0x38
    volatile        uint32_t                                 reserved_2[1]                          ; // 0x3c
    volatile        t_sysc_cmp_mac_abort                     mac_abort                              ; // 0x40
    volatile        t_sysc_cmp_mem_ema_0                     mem_ema_0                              ; // 0x44
    volatile        t_sysc_cmp_mem_ema_1                     mem_ema_1                              ; // 0x48
    volatile        t_sysc_cmp_dma_clk_dly                   dma_clk_dly                            ; // 0x4c
    volatile        uint32_t                                 reserved_3[3]                          ; // 0x50
    volatile        t_sysc_cmp_rfreg_cfg                     rfreg_cfg                              ; // 0x5c
    volatile        t_sysc_cmp_rfreg_action                  rfreg_action                           ; // 0x60
    volatile        t_sysc_cmp_rfreg_action_status           rfreg_action_status                    ; // 0x64
    volatile        t_sysc_cmp_debug_io_en                   debug_io_en                            ; // 0x68
    volatile        t_sysc_cmp_debug_sel                     debug_sel                              ; // 0x6c
    volatile        t_sysc_cmp_pwm1_lo                       pwm1_lo                                ; // 0x70
    volatile        t_sysc_cmp_pwm1_hi                       pwm1_hi                                ; // 0x74
    volatile        t_sysc_cmp_pwm2_lo                       pwm2_lo                                ; // 0x78
    volatile        t_sysc_cmp_pwm2_hi                       pwm2_hi                                ; // 0x7c
    volatile        t_sysc_cmp_pwm3_lo                       pwm3_lo                                ; // 0x80
    volatile        t_sysc_cmp_pwm3_hi                       pwm3_hi                                ; // 0x84
    volatile        t_sysc_cmp_pwm4_lo                       pwm4_lo                                ; // 0x88
    volatile        t_sysc_cmp_pwm4_hi                       pwm4_hi                                ; // 0x8c
} t_hwp_sysc_cmp_t;


#define hwp_sysc_cmp ((t_hwp_sysc_cmp_t*)REG_SYSC_CMP_BASE)


//--------------------------------------------------------------------------------

__STATIC_INLINE void sysc_cmp_div_update_set(  uint32_t value)
{
    hwp_sysc_cmp->div_update.val = value;
}

__STATIC_INLINE void sysc_cmp_timer4_div_para_up_setf(  uint8_t timer4_div_para_up)
{
    hwp_sysc_cmp->div_update.bit_field.timer4_div_para_up = timer4_div_para_up;
}

__STATIC_INLINE void sysc_cmp_timer3_div_para_up_setf(  uint8_t timer3_div_para_up)
{
    hwp_sysc_cmp->div_update.bit_field.timer3_div_para_up = timer3_div_para_up;
}

__STATIC_INLINE void sysc_cmp_timer2_div_para_up_setf(  uint8_t timer2_div_para_up)
{
    hwp_sysc_cmp->div_update.bit_field.timer2_div_para_up = timer2_div_para_up;
}

__STATIC_INLINE void sysc_cmp_timer1_div_para_up_setf(  uint8_t timer1_div_para_up)
{
    hwp_sysc_cmp->div_update.bit_field.timer1_div_para_up = timer1_div_para_up;
}

__STATIC_INLINE void sysc_cmp_pclk0_div_para_up_setf(  uint8_t pclk0_div_para_up)
{
    hwp_sysc_cmp->div_update.bit_field.pclk0_div_para_up = pclk0_div_para_up;
}

__STATIC_INLINE void sysc_cmp_div_para_set(  uint32_t value)
{
    hwp_sysc_cmp->div_para.val = value;
}

__STATIC_INLINE void sysc_cmp_pclk0_div_para_m1_setf(  uint8_t pclk0_div_para_m1)
{
    hwp_sysc_cmp->div_para.bit_field.pclk0_div_para_m1 = pclk0_div_para_m1;
}

__STATIC_INLINE void sysc_cmp_div_para_timer_0_set(  uint32_t value)
{
    hwp_sysc_cmp->div_para_timer_0.val = value;
}

__STATIC_INLINE void sysc_cmp_timer4_div_para_m1_setf(  uint8_t timer4_div_para_m1)
{
    hwp_sysc_cmp->div_para_timer_0.bit_field.timer4_div_para_m1 = timer4_div_para_m1;
}

__STATIC_INLINE void sysc_cmp_timer3_div_para_m1_setf(  uint8_t timer3_div_para_m1)
{
    hwp_sysc_cmp->div_para_timer_0.bit_field.timer3_div_para_m1 = timer3_div_para_m1;
}

__STATIC_INLINE void sysc_cmp_timer2_div_para_m1_setf(  uint8_t timer2_div_para_m1)
{
    hwp_sysc_cmp->div_para_timer_0.bit_field.timer2_div_para_m1 = timer2_div_para_m1;
}

__STATIC_INLINE void sysc_cmp_timer1_div_para_m1_setf(  uint8_t timer1_div_para_m1)
{
    hwp_sysc_cmp->div_para_timer_0.bit_field.timer1_div_para_m1 = timer1_div_para_m1;
}

__STATIC_INLINE void sysc_cmp_sw_clkg_set(  uint32_t value)
{
    hwp_sysc_cmp->sw_clkg.val = value;
}

__STATIC_INLINE void sysc_cmp_aes_gate_en_setf(  uint8_t aes_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.aes_gate_en = aes_gate_en;
}

__STATIC_INLINE void sysc_cmp_trng_gate_en_setf(  uint8_t trng_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.trng_gate_en = trng_gate_en;
}

__STATIC_INLINE void sysc_cmp_ef_gate_en_setf(  uint8_t ef_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.ef_gate_en = ef_gate_en;
}

__STATIC_INLINE void sysc_cmp_pwm_gate_en_setf(  uint8_t pwm_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.pwm_gate_en = pwm_gate_en;
}

__STATIC_INLINE void sysc_cmp_rfreg_gate_en_setf(  uint8_t rfreg_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.rfreg_gate_en = rfreg_gate_en;
}

__STATIC_INLINE void sysc_cmp_dma_gate_en_setf(  uint8_t dma_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.dma_gate_en = dma_gate_en;
}

__STATIC_INLINE void sysc_cmp_cache_gate_en_setf(  uint8_t cache_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.cache_gate_en = cache_gate_en;
}

__STATIC_INLINE void sysc_cmp_mac_gate_en_setf(  uint8_t mac_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.mac_gate_en = mac_gate_en;
}

__STATIC_INLINE void sysc_cmp_sdio_gate_en_setf(  uint8_t sdio_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.sdio_gate_en = sdio_gate_en;
}

__STATIC_INLINE void sysc_cmp_dbgh_gate_en_setf(  uint8_t dbgh_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.dbgh_gate_en = dbgh_gate_en;
}

__STATIC_INLINE void sysc_cmp_timer4_gate_en_setf(  uint8_t timer4_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.timer4_gate_en = timer4_gate_en;
}

__STATIC_INLINE void sysc_cmp_timer3_gate_en_setf(  uint8_t timer3_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.timer3_gate_en = timer3_gate_en;
}

__STATIC_INLINE void sysc_cmp_timer2_gate_en_setf(  uint8_t timer2_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.timer2_gate_en = timer2_gate_en;
}

__STATIC_INLINE void sysc_cmp_timer1_gate_en_setf(  uint8_t timer1_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.timer1_gate_en = timer1_gate_en;
}

__STATIC_INLINE void sysc_cmp_timer_gate_en_setf(  uint8_t timer_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.timer_gate_en = timer_gate_en;
}

__STATIC_INLINE void sysc_cmp_wdt_gate_en_setf(  uint8_t wdt_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.wdt_gate_en = wdt_gate_en;
}

__STATIC_INLINE void sysc_cmp_spim2_gate_en_setf(  uint8_t spim2_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.spim2_gate_en = spim2_gate_en;
}

__STATIC_INLINE void sysc_cmp_uart1_gate_en_setf(  uint8_t uart1_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.uart1_gate_en = uart1_gate_en;
}

__STATIC_INLINE void sysc_cmp_uart0_gate_en_setf(  uint8_t uart0_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.uart0_gate_en = uart0_gate_en;
}

__STATIC_INLINE void sysc_cmp_i2c1_gate_en_setf(  uint8_t i2c1_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.i2c1_gate_en = i2c1_gate_en;
}

__STATIC_INLINE void sysc_cmp_i2c0_gate_en_setf(  uint8_t i2c0_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.i2c0_gate_en = i2c0_gate_en;
}

__STATIC_INLINE void sysc_cmp_spis_gate_en_setf(  uint8_t spis_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.spis_gate_en = spis_gate_en;
}

__STATIC_INLINE void sysc_cmp_spim_gate_en_setf(  uint8_t spim_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.spim_gate_en = spim_gate_en;
}

__STATIC_INLINE void sysc_cmp_gpio_gate_en_setf(  uint8_t gpio_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.gpio_gate_en = gpio_gate_en;
}

__STATIC_INLINE void sysc_cmp_i2s_gate_en_setf(  uint8_t i2s_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.i2s_gate_en = i2s_gate_en;
}

__STATIC_INLINE void sysc_cmp_adcc_gate_en_setf(  uint8_t adcc_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.adcc_gate_en = adcc_gate_en;
}

__STATIC_INLINE void sysc_cmp_qspi_gate_en_setf(  uint8_t qspi_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.qspi_gate_en = qspi_gate_en;
}

__STATIC_INLINE void sysc_cmp_patch_gate_en_setf(  uint8_t patch_gate_en)
{
    hwp_sysc_cmp->sw_clkg.bit_field.patch_gate_en = patch_gate_en;
}

__STATIC_INLINE void sysc_cmp_sw_rstn_set(  uint32_t value)
{
    hwp_sysc_cmp->sw_rstn.val = value;
}

__STATIC_INLINE void sysc_cmp_srstn_ase_setf(  uint8_t srstn_ase)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_ase = srstn_ase;
}

__STATIC_INLINE void sysc_cmp_srstn_trng_setf(  uint8_t srstn_trng)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_trng = srstn_trng;
}

__STATIC_INLINE void sysc_cmp_srstn_ef_setf(  uint8_t srstn_ef)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_ef = srstn_ef;
}

__STATIC_INLINE void sysc_cmp_srstn_pwm_setf(  uint8_t srstn_pwm)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_pwm = srstn_pwm;
}

__STATIC_INLINE void sysc_cmp_srstn_rfreg_setf(  uint8_t srstn_rfreg)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_rfreg = srstn_rfreg;
}

__STATIC_INLINE void sysc_cmp_srstn_dma_setf(  uint8_t srstn_dma)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_dma = srstn_dma;
}

__STATIC_INLINE void sysc_cmp_srstn_cache_setf(  uint8_t srstn_cache)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_cache = srstn_cache;
}

__STATIC_INLINE void sysc_cmp_srstn_mac_setf(  uint8_t srstn_mac)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_mac = srstn_mac;
}

__STATIC_INLINE void sysc_cmp_srstn_sdio_setf(  uint8_t srstn_sdio)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_sdio = srstn_sdio;
}

__STATIC_INLINE void sysc_cmp_srstn_dbgh_setf(  uint8_t srstn_dbgh)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_dbgh = srstn_dbgh;
}

__STATIC_INLINE void sysc_cmp_srstn_timer_setf(  uint8_t srstn_timer)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_timer = srstn_timer;
}

__STATIC_INLINE void sysc_cmp_srstn_wdt_setf(  uint8_t srstn_wdt)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_wdt = srstn_wdt;
}

__STATIC_INLINE void sysc_cmp_srstn_spim2_setf(  uint8_t srstn_spim2)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_spim2 = srstn_spim2;
}

__STATIC_INLINE void sysc_cmp_srstn_uart1_setf(  uint8_t srstn_uart1)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_uart1 = srstn_uart1;
}

__STATIC_INLINE void sysc_cmp_srstn_uart0_setf(  uint8_t srstn_uart0)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_uart0 = srstn_uart0;
}

__STATIC_INLINE void sysc_cmp_srstn_i2c1_setf(  uint8_t srstn_i2c1)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_i2c1 = srstn_i2c1;
}

__STATIC_INLINE void sysc_cmp_srstn_i2c0_setf(  uint8_t srstn_i2c0)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_i2c0 = srstn_i2c0;
}

__STATIC_INLINE void sysc_cmp_srstn_spis_setf(  uint8_t srstn_spis)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_spis = srstn_spis;
}

__STATIC_INLINE void sysc_cmp_srstn_spim_setf(  uint8_t srstn_spim)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_spim = srstn_spim;
}

__STATIC_INLINE void sysc_cmp_srstn_gpio_setf(  uint8_t srstn_gpio)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_gpio = srstn_gpio;
}

__STATIC_INLINE void sysc_cmp_srstn_i2s_setf(  uint8_t srstn_i2s)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_i2s = srstn_i2s;
}

__STATIC_INLINE void sysc_cmp_srstn_adcc_setf(  uint8_t srstn_adcc)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_adcc = srstn_adcc;
}

__STATIC_INLINE void sysc_cmp_srstn_qspi_setf(  uint8_t srstn_qspi)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_qspi = srstn_qspi;
}

__STATIC_INLINE void sysc_cmp_srstn_patch_setf(  uint8_t srstn_patch)
{
    hwp_sysc_cmp->sw_rstn.bit_field.srstn_patch = srstn_patch;
}

__STATIC_INLINE void sysc_cmp_io_en_set(  uint32_t value)
{
    hwp_sysc_cmp->io_en.val = value;
}

__STATIC_INLINE void sysc_cmp_r_io_dsel_setf(  uint32_t r_io_dsel)
{
    hwp_sysc_cmp->io_en.bit_field.r_io_dsel = r_io_dsel;
}

__STATIC_INLINE void sysc_cmp_r_uart0_sir_en_setf(  uint8_t r_uart0_sir_en)
{
    hwp_sysc_cmp->io_en.bit_field.r_uart0_sir_en = r_uart0_sir_en;
}

__STATIC_INLINE void sysc_cmp_i2s_io_en1_setf(  uint8_t i2s_io_en1)
{
    hwp_sysc_cmp->io_en.bit_field.i2s_io_en1 = i2s_io_en1;
}

__STATIC_INLINE void sysc_cmp_i2s_io_en0_setf(  uint8_t i2s_io_en0)
{
    hwp_sysc_cmp->io_en.bit_field.i2s_io_en0 = i2s_io_en0;
}

__STATIC_INLINE void sysc_cmp_spis_io_en_setf(  uint8_t spis_io_en)
{
    hwp_sysc_cmp->io_en.bit_field.spis_io_en = spis_io_en;
}

__STATIC_INLINE void sysc_cmp_spim_io_en0_setf(  uint8_t spim_io_en0)
{
    hwp_sysc_cmp->io_en.bit_field.spim_io_en0 = spim_io_en0;
}

__STATIC_INLINE void sysc_cmp_spif_io_en_setf(  uint8_t spif_io_en)
{
    hwp_sysc_cmp->io_en.bit_field.spif_io_en = spif_io_en;
}

__STATIC_INLINE void sysc_cmp_sdio_io_en_setf(  uint8_t sdio_io_en)
{
    hwp_sysc_cmp->io_en.bit_field.sdio_io_en = sdio_io_en;
}

__STATIC_INLINE void sysc_cmp_func_en_set(  uint32_t value)
{
    hwp_sysc_cmp->func_en.val = value;
}

__STATIC_INLINE void sysc_cmp_spim_io_en2_setf(  uint8_t spim_io_en2)
{
    hwp_sysc_cmp->func_en.bit_field.spim_io_en2 = spim_io_en2;
}

__STATIC_INLINE void sysc_cmp_spim_io_en1_setf(  uint8_t spim_io_en1)
{
    hwp_sysc_cmp->func_en.bit_field.spim_io_en1 = spim_io_en1;
}

__STATIC_INLINE void sysc_cmp_func_ien_setf(  uint32_t func_ien)
{
    hwp_sysc_cmp->func_en.bit_field.func_ien = func_ien;
}

__STATIC_INLINE void sysc_cmp_func_isel_0_set(  uint32_t value)
{
    hwp_sysc_cmp->func_isel_0.val = value;
}

__STATIC_INLINE void sysc_cmp_func_io03_sel_setf(  uint8_t func_io03_sel)
{
    hwp_sysc_cmp->func_isel_0.bit_field.func_io03_sel = func_io03_sel;
}

__STATIC_INLINE void sysc_cmp_func_io02_sel_setf(  uint8_t func_io02_sel)
{
    hwp_sysc_cmp->func_isel_0.bit_field.func_io02_sel = func_io02_sel;
}

__STATIC_INLINE void sysc_cmp_func_io01_sel_setf(  uint8_t func_io01_sel)
{
    hwp_sysc_cmp->func_isel_0.bit_field.func_io01_sel = func_io01_sel;
}

__STATIC_INLINE void sysc_cmp_func_io00_sel_setf(  uint8_t func_io00_sel)
{
    hwp_sysc_cmp->func_isel_0.bit_field.func_io00_sel = func_io00_sel;
}

__STATIC_INLINE void sysc_cmp_func_isel_1_set(  uint32_t value)
{
    hwp_sysc_cmp->func_isel_1.val = value;
}

__STATIC_INLINE void sysc_cmp_func_io07_sel_setf(  uint8_t func_io07_sel)
{
    hwp_sysc_cmp->func_isel_1.bit_field.func_io07_sel = func_io07_sel;
}

__STATIC_INLINE void sysc_cmp_func_io06_sel_setf(  uint8_t func_io06_sel)
{
    hwp_sysc_cmp->func_isel_1.bit_field.func_io06_sel = func_io06_sel;
}

__STATIC_INLINE void sysc_cmp_func_io05_sel_setf(  uint8_t func_io05_sel)
{
    hwp_sysc_cmp->func_isel_1.bit_field.func_io05_sel = func_io05_sel;
}

__STATIC_INLINE void sysc_cmp_func_io04_sel_setf(  uint8_t func_io04_sel)
{
    hwp_sysc_cmp->func_isel_1.bit_field.func_io04_sel = func_io04_sel;
}

__STATIC_INLINE void sysc_cmp_func_isel_2_set(  uint32_t value)
{
    hwp_sysc_cmp->func_isel_2.val = value;
}

__STATIC_INLINE void sysc_cmp_func_io11_sel_setf(  uint8_t func_io11_sel)
{
    hwp_sysc_cmp->func_isel_2.bit_field.func_io11_sel = func_io11_sel;
}

__STATIC_INLINE void sysc_cmp_func_io10_sel_setf(  uint8_t func_io10_sel)
{
    hwp_sysc_cmp->func_isel_2.bit_field.func_io10_sel = func_io10_sel;
}

__STATIC_INLINE void sysc_cmp_func_io09_sel_setf(  uint8_t func_io09_sel)
{
    hwp_sysc_cmp->func_isel_2.bit_field.func_io09_sel = func_io09_sel;
}

__STATIC_INLINE void sysc_cmp_func_io08_sel_setf(  uint8_t func_io08_sel)
{
    hwp_sysc_cmp->func_isel_2.bit_field.func_io08_sel = func_io08_sel;
}

__STATIC_INLINE void sysc_cmp_func_isel_3_set(  uint32_t value)
{
    hwp_sysc_cmp->func_isel_3.val = value;
}

__STATIC_INLINE void sysc_cmp_func_io15_sel_setf(  uint8_t func_io15_sel)
{
    hwp_sysc_cmp->func_isel_3.bit_field.func_io15_sel = func_io15_sel;
}

__STATIC_INLINE void sysc_cmp_func_io14_sel_setf(  uint8_t func_io14_sel)
{
    hwp_sysc_cmp->func_isel_3.bit_field.func_io14_sel = func_io14_sel;
}

__STATIC_INLINE void sysc_cmp_func_io13_sel_setf(  uint8_t func_io13_sel)
{
    hwp_sysc_cmp->func_isel_3.bit_field.func_io13_sel = func_io13_sel;
}

__STATIC_INLINE void sysc_cmp_func_io12_sel_setf(  uint8_t func_io12_sel)
{
    hwp_sysc_cmp->func_isel_3.bit_field.func_io12_sel = func_io12_sel;
}

__STATIC_INLINE void sysc_cmp_func_isel_4_set(  uint32_t value)
{
    hwp_sysc_cmp->func_isel_4.val = value;
}

__STATIC_INLINE void sysc_cmp_func_io19_sel_setf(  uint8_t func_io19_sel)
{
    hwp_sysc_cmp->func_isel_4.bit_field.func_io19_sel = func_io19_sel;
}

__STATIC_INLINE void sysc_cmp_func_io18_sel_setf(  uint8_t func_io18_sel)
{
    hwp_sysc_cmp->func_isel_4.bit_field.func_io18_sel = func_io18_sel;
}

__STATIC_INLINE void sysc_cmp_func_io17_sel_setf(  uint8_t func_io17_sel)
{
    hwp_sysc_cmp->func_isel_4.bit_field.func_io17_sel = func_io17_sel;
}

__STATIC_INLINE void sysc_cmp_func_io16_sel_setf(  uint8_t func_io16_sel)
{
    hwp_sysc_cmp->func_isel_4.bit_field.func_io16_sel = func_io16_sel;
}

__STATIC_INLINE void sysc_cmp_mcu_stcalib_set(  uint32_t value)
{
    hwp_sysc_cmp->mcu_stcalib.val = value;
}

__STATIC_INLINE void sysc_cmp_mcu_stcalib_setf(  uint32_t mcu_stcalib)
{
    hwp_sysc_cmp->mcu_stcalib.bit_field.mcu_stcalib = mcu_stcalib;
}

__STATIC_INLINE void sysc_cmp_idle_set(  uint32_t value)
{
    hwp_sysc_cmp->idle.val = value;
}

__STATIC_INLINE void sysc_cmp_idle_reg_setf(  uint32_t idle_reg)
{
    hwp_sysc_cmp->idle.bit_field.idle_reg = idle_reg;
}

__STATIC_INLINE void sysc_cmp_mac_abort_set(  uint32_t value)
{
    hwp_sysc_cmp->mac_abort.val = value;
}

__STATIC_INLINE void sysc_cmp_mac_txabort_reqn_setf(  uint8_t mac_txabort_reqn)
{
    hwp_sysc_cmp->mac_abort.bit_field.mac_txabort_reqn = mac_txabort_reqn;
}

__STATIC_INLINE void sysc_cmp_mem_ema_0_set(  uint32_t value)
{
    hwp_sysc_cmp->mem_ema_0.val = value;
}

__STATIC_INLINE void sysc_cmp_ram32_ema_setf(  uint8_t ram32_ema)
{
    hwp_sysc_cmp->mem_ema_0.bit_field.ram32_ema = ram32_ema;
}

__STATIC_INLINE void sysc_cmp_ram31_ema_setf(  uint8_t ram31_ema)
{
    hwp_sysc_cmp->mem_ema_0.bit_field.ram31_ema = ram31_ema;
}

__STATIC_INLINE void sysc_cmp_ram30_ema_setf(  uint8_t ram30_ema)
{
    hwp_sysc_cmp->mem_ema_0.bit_field.ram30_ema = ram30_ema;
}

__STATIC_INLINE void sysc_cmp_ram2_ema_setf(  uint8_t ram2_ema)
{
    hwp_sysc_cmp->mem_ema_0.bit_field.ram2_ema = ram2_ema;
}

__STATIC_INLINE void sysc_cmp_ram1_ema_setf(  uint8_t ram1_ema)
{
    hwp_sysc_cmp->mem_ema_0.bit_field.ram1_ema = ram1_ema;
}

__STATIC_INLINE void sysc_cmp_ram0_ema_setf(  uint8_t ram0_ema)
{
    hwp_sysc_cmp->mem_ema_0.bit_field.ram0_ema = ram0_ema;
}

__STATIC_INLINE void sysc_cmp_rom1_ema_setf(  uint8_t rom1_ema)
{
    hwp_sysc_cmp->mem_ema_0.bit_field.rom1_ema = rom1_ema;
}

__STATIC_INLINE void sysc_cmp_rom0_ema_setf(  uint8_t rom0_ema)
{
    hwp_sysc_cmp->mem_ema_0.bit_field.rom0_ema = rom0_ema;
}

__STATIC_INLINE void sysc_cmp_mem_ema_1_set(  uint32_t value)
{
    hwp_sysc_cmp->mem_ema_1.val = value;
}

__STATIC_INLINE void sysc_cmp_ram35_emaw_setf(  uint8_t ram35_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram35_emaw = ram35_emaw;
}

__STATIC_INLINE void sysc_cmp_ram34_emaw_setf(  uint8_t ram34_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram34_emaw = ram34_emaw;
}

__STATIC_INLINE void sysc_cmp_ram33_emaw_setf(  uint8_t ram33_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram33_emaw = ram33_emaw;
}

__STATIC_INLINE void sysc_cmp_ram32_emaw_setf(  uint8_t ram32_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram32_emaw = ram32_emaw;
}

__STATIC_INLINE void sysc_cmp_ram31_emaw_setf(  uint8_t ram31_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram31_emaw = ram31_emaw;
}

__STATIC_INLINE void sysc_cmp_ram30_emaw_setf(  uint8_t ram30_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram30_emaw = ram30_emaw;
}

__STATIC_INLINE void sysc_cmp_ram2_emaw_setf(  uint8_t ram2_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram2_emaw = ram2_emaw;
}

__STATIC_INLINE void sysc_cmp_ram1_emaw_setf(  uint8_t ram1_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram1_emaw = ram1_emaw;
}

__STATIC_INLINE void sysc_cmp_ram0_emaw_setf(  uint8_t ram0_emaw)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram0_emaw = ram0_emaw;
}

__STATIC_INLINE void sysc_cmp_ram35_ema_setf(  uint8_t ram35_ema)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram35_ema = ram35_ema;
}

__STATIC_INLINE void sysc_cmp_ram34_ema_setf(  uint8_t ram34_ema)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram34_ema = ram34_ema;
}

__STATIC_INLINE void sysc_cmp_ram33_ema_setf(  uint8_t ram33_ema)
{
    hwp_sysc_cmp->mem_ema_1.bit_field.ram33_ema = ram33_ema;
}

__STATIC_INLINE void sysc_cmp_dma_clk_dly_set(  uint32_t value)
{
    hwp_sysc_cmp->dma_clk_dly.val = value;
}

__STATIC_INLINE void sysc_cmp_dma_clk_en_dly_setf(  uint8_t dma_clk_en_dly)
{
    hwp_sysc_cmp->dma_clk_dly.bit_field.dma_clk_en_dly = dma_clk_en_dly;
}

__STATIC_INLINE void sysc_cmp_rfreg_cfg_set(  uint32_t value)
{
    hwp_sysc_cmp->rfreg_cfg.val = value;
}

__STATIC_INLINE void sysc_cmp_rfreg_base_addr_setf(  uint16_t rfreg_base_addr)
{
    hwp_sysc_cmp->rfreg_cfg.bit_field.rfreg_base_addr = rfreg_base_addr;
}

__STATIC_INLINE void sysc_cmp_rfreg_len_setf(  uint16_t rfreg_len)
{
    hwp_sysc_cmp->rfreg_cfg.bit_field.rfreg_len = rfreg_len;
}

__STATIC_INLINE void sysc_cmp_rfreg_action_set(  uint32_t value)
{
    hwp_sysc_cmp->rfreg_action.val = value;
}

__STATIC_INLINE void sysc_cmp_rfreg_restore_setf(  uint8_t rfreg_restore)
{
    hwp_sysc_cmp->rfreg_action.bit_field.rfreg_restore = rfreg_restore;
}

__STATIC_INLINE void sysc_cmp_rfreg_save_setf(  uint8_t rfreg_save)
{
    hwp_sysc_cmp->rfreg_action.bit_field.rfreg_save = rfreg_save;
}

__STATIC_INLINE void sysc_cmp_debug_io_en_set(  uint32_t value)
{
    hwp_sysc_cmp->debug_io_en.val = value;
}

__STATIC_INLINE void sysc_cmp_debug_io_en_setf(  uint16_t debug_io_en)
{
    hwp_sysc_cmp->debug_io_en.bit_field.debug_io_en = debug_io_en;
}

__STATIC_INLINE void sysc_cmp_debug_sel_set(  uint32_t value)
{
    hwp_sysc_cmp->debug_sel.val = value;
}

__STATIC_INLINE void sysc_cmp_mac_debug_port_sel_setf(  uint8_t mac_debug_port_sel)
{
    hwp_sysc_cmp->debug_sel.bit_field.mac_debug_port_sel = mac_debug_port_sel;
}

__STATIC_INLINE void sysc_cmp_rf_debug_mode_setf(  uint8_t rf_debug_mode)
{
    hwp_sysc_cmp->debug_sel.bit_field.rf_debug_mode = rf_debug_mode;
}

__STATIC_INLINE void sysc_cmp_debug_port_sel_setf(  uint8_t debug_port_sel)
{
    hwp_sysc_cmp->debug_sel.bit_field.debug_port_sel = debug_port_sel;
}

__STATIC_INLINE void sysc_cmp_debug_sw_setf(  uint16_t debug_sw)
{
    hwp_sysc_cmp->debug_sel.bit_field.debug_sw = debug_sw;
}

__STATIC_INLINE void sysc_cmp_pwm1_lo_set(  uint32_t value)
{
    hwp_sysc_cmp->pwm1_lo.val = value;
}

__STATIC_INLINE void sysc_cmp_r_pwm_en_setf(  uint8_t r_pwm_en)
{
    hwp_sysc_cmp->pwm1_lo.bit_field.r_pwm_en = r_pwm_en;
}

__STATIC_INLINE void sysc_cmp_r_pwm1_wid_lo_setf(  uint32_t r_pwm1_wid_lo)
{
    hwp_sysc_cmp->pwm1_lo.bit_field.r_pwm1_wid_lo = r_pwm1_wid_lo;
}

__STATIC_INLINE void sysc_cmp_pwm1_hi_set(  uint32_t value)
{
    hwp_sysc_cmp->pwm1_hi.val = value;
}

__STATIC_INLINE void sysc_cmp_r_pwm1_wid_hi_setf(  uint32_t r_pwm1_wid_hi)
{
    hwp_sysc_cmp->pwm1_hi.bit_field.r_pwm1_wid_hi = r_pwm1_wid_hi;
}

__STATIC_INLINE void sysc_cmp_pwm2_lo_set(  uint32_t value)
{
    hwp_sysc_cmp->pwm2_lo.val = value;
}

__STATIC_INLINE void sysc_cmp_r_pwm2_wid_lo_setf(  uint32_t r_pwm2_wid_lo)
{
    hwp_sysc_cmp->pwm2_lo.bit_field.r_pwm2_wid_lo = r_pwm2_wid_lo;
}

__STATIC_INLINE void sysc_cmp_pwm2_hi_set(  uint32_t value)
{
    hwp_sysc_cmp->pwm2_hi.val = value;
}

__STATIC_INLINE void sysc_cmp_r_pwm2_wid_hi_setf(  uint32_t r_pwm2_wid_hi)
{
    hwp_sysc_cmp->pwm2_hi.bit_field.r_pwm2_wid_hi = r_pwm2_wid_hi;
}

__STATIC_INLINE void sysc_cmp_pwm3_lo_set(  uint32_t value)
{
    hwp_sysc_cmp->pwm3_lo.val = value;
}

__STATIC_INLINE void sysc_cmp_r_pwm3_wid_lo_setf(  uint32_t r_pwm3_wid_lo)
{
    hwp_sysc_cmp->pwm3_lo.bit_field.r_pwm3_wid_lo = r_pwm3_wid_lo;
}

__STATIC_INLINE void sysc_cmp_pwm3_hi_set(  uint32_t value)
{
    hwp_sysc_cmp->pwm3_hi.val = value;
}

__STATIC_INLINE void sysc_cmp_r_pwm3_wid_hi_setf(  uint32_t r_pwm3_wid_hi)
{
    hwp_sysc_cmp->pwm3_hi.bit_field.r_pwm3_wid_hi = r_pwm3_wid_hi;
}

__STATIC_INLINE void sysc_cmp_pwm4_lo_set(  uint32_t value)
{
    hwp_sysc_cmp->pwm4_lo.val = value;
}

__STATIC_INLINE void sysc_cmp_r_pwm4_wid_lo_setf(  uint32_t r_pwm4_wid_lo)
{
    hwp_sysc_cmp->pwm4_lo.bit_field.r_pwm4_wid_lo = r_pwm4_wid_lo;
}

__STATIC_INLINE void sysc_cmp_pwm4_hi_set(  uint32_t value)
{
    hwp_sysc_cmp->pwm4_hi.val = value;
}

__STATIC_INLINE void sysc_cmp_r_pwm4_wid_hi_setf(  uint32_t r_pwm4_wid_hi)
{
    hwp_sysc_cmp->pwm4_hi.bit_field.r_pwm4_wid_hi = r_pwm4_wid_hi;
}


//--------------------------------------------------------------------------------

__STATIC_INLINE uint32_t sysc_cmp_div_para_get(void)
{
    return hwp_sysc_cmp->div_para.val;
}

__STATIC_INLINE uint8_t sysc_cmp_pclk0_div_para_m1_getf(void)
{
    return hwp_sysc_cmp->div_para.bit_field.pclk0_div_para_m1;
}

__STATIC_INLINE uint32_t sysc_cmp_div_para_timer_0_get(void)
{
    return hwp_sysc_cmp->div_para_timer_0.val;
}

__STATIC_INLINE uint8_t sysc_cmp_timer4_div_para_m1_getf(void)
{
    return hwp_sysc_cmp->div_para_timer_0.bit_field.timer4_div_para_m1;
}

__STATIC_INLINE uint8_t sysc_cmp_timer3_div_para_m1_getf(void)
{
    return hwp_sysc_cmp->div_para_timer_0.bit_field.timer3_div_para_m1;
}

__STATIC_INLINE uint8_t sysc_cmp_timer2_div_para_m1_getf(void)
{
    return hwp_sysc_cmp->div_para_timer_0.bit_field.timer2_div_para_m1;
}

__STATIC_INLINE uint8_t sysc_cmp_timer1_div_para_m1_getf(void)
{
    return hwp_sysc_cmp->div_para_timer_0.bit_field.timer1_div_para_m1;
}

__STATIC_INLINE uint32_t sysc_cmp_sw_clkg_get(void)
{
    return hwp_sysc_cmp->sw_clkg.val;
}

__STATIC_INLINE uint8_t sysc_cmp_aes_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.aes_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_trng_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.trng_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_ef_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.ef_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_pwm_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.pwm_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_rfreg_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.rfreg_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_dma_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.dma_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_cache_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.cache_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_mac_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.mac_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_sdio_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.sdio_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_dbgh_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.dbgh_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_timer4_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.timer4_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_timer3_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.timer3_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_timer2_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.timer2_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_timer1_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.timer1_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_timer_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.timer_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_wdt_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.wdt_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_spim2_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.spim2_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_uart1_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.uart1_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_uart0_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.uart0_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_i2c1_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.i2c1_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_i2c0_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.i2c0_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_spis_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.spis_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_spim_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.spim_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_gpio_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.gpio_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_i2s_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.i2s_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_adcc_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.adcc_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_qspi_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.qspi_gate_en;
}

__STATIC_INLINE uint8_t sysc_cmp_patch_gate_en_getf(void)
{
    return hwp_sysc_cmp->sw_clkg.bit_field.patch_gate_en;
}

__STATIC_INLINE uint32_t sysc_cmp_sw_rstn_get(void)
{
    return hwp_sysc_cmp->sw_rstn.val;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_ase_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_ase;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_trng_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_trng;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_ef_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_ef;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_pwm_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_pwm;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_rfreg_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_rfreg;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_dma_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_dma;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_cache_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_cache;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_mac_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_mac;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_sdio_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_sdio;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_dbgh_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_dbgh;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_timer_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_timer;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_wdt_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_wdt;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_spim2_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_spim2;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_uart1_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_uart1;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_uart0_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_uart0;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_i2c1_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_i2c1;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_i2c0_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_i2c0;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_spis_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_spis;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_spim_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_spim;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_gpio_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_gpio;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_i2s_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_i2s;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_adcc_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_adcc;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_qspi_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_qspi;
}

__STATIC_INLINE uint8_t sysc_cmp_srstn_patch_getf(void)
{
    return hwp_sysc_cmp->sw_rstn.bit_field.srstn_patch;
}

__STATIC_INLINE uint32_t sysc_cmp_io_en_get(void)
{
    return hwp_sysc_cmp->io_en.val;
}

__STATIC_INLINE uint32_t sysc_cmp_r_io_dsel_getf(void)
{
    return hwp_sysc_cmp->io_en.bit_field.r_io_dsel;
}

__STATIC_INLINE uint8_t sysc_cmp_r_uart0_sir_en_getf(void)
{
    return hwp_sysc_cmp->io_en.bit_field.r_uart0_sir_en;
}

__STATIC_INLINE uint8_t sysc_cmp_i2s_io_en1_getf(void)
{
    return hwp_sysc_cmp->io_en.bit_field.i2s_io_en1;
}

__STATIC_INLINE uint8_t sysc_cmp_i2s_io_en0_getf(void)
{
    return hwp_sysc_cmp->io_en.bit_field.i2s_io_en0;
}

__STATIC_INLINE uint8_t sysc_cmp_spis_io_en_getf(void)
{
    return hwp_sysc_cmp->io_en.bit_field.spis_io_en;
}

__STATIC_INLINE uint8_t sysc_cmp_spim_io_en0_getf(void)
{
    return hwp_sysc_cmp->io_en.bit_field.spim_io_en0;
}

__STATIC_INLINE uint8_t sysc_cmp_spif_io_en_getf(void)
{
    return hwp_sysc_cmp->io_en.bit_field.spif_io_en;
}

__STATIC_INLINE uint8_t sysc_cmp_sdio_io_en_getf(void)
{
    return hwp_sysc_cmp->io_en.bit_field.sdio_io_en;
}

__STATIC_INLINE uint32_t sysc_cmp_func_en_get(void)
{
    return hwp_sysc_cmp->func_en.val;
}

__STATIC_INLINE uint8_t sysc_cmp_spim_io_en2_getf(void)
{
    return hwp_sysc_cmp->func_en.bit_field.spim_io_en2;
}

__STATIC_INLINE uint8_t sysc_cmp_spim_io_en1_getf(void)
{
    return hwp_sysc_cmp->func_en.bit_field.spim_io_en1;
}

__STATIC_INLINE uint32_t sysc_cmp_func_ien_getf(void)
{
    return hwp_sysc_cmp->func_en.bit_field.func_ien;
}

__STATIC_INLINE uint32_t sysc_cmp_func_isel_0_get(void)
{
    return hwp_sysc_cmp->func_isel_0.val;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io03_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_0.bit_field.func_io03_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io02_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_0.bit_field.func_io02_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io01_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_0.bit_field.func_io01_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io00_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_0.bit_field.func_io00_sel;
}

__STATIC_INLINE uint32_t sysc_cmp_func_isel_1_get(void)
{
    return hwp_sysc_cmp->func_isel_1.val;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io07_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_1.bit_field.func_io07_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io06_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_1.bit_field.func_io06_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io05_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_1.bit_field.func_io05_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io04_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_1.bit_field.func_io04_sel;
}

__STATIC_INLINE uint32_t sysc_cmp_func_isel_2_get(void)
{
    return hwp_sysc_cmp->func_isel_2.val;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io11_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_2.bit_field.func_io11_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io10_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_2.bit_field.func_io10_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io09_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_2.bit_field.func_io09_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io08_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_2.bit_field.func_io08_sel;
}

__STATIC_INLINE uint32_t sysc_cmp_func_isel_3_get(void)
{
    return hwp_sysc_cmp->func_isel_3.val;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io15_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_3.bit_field.func_io15_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io14_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_3.bit_field.func_io14_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io13_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_3.bit_field.func_io13_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io12_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_3.bit_field.func_io12_sel;
}

__STATIC_INLINE uint32_t sysc_cmp_func_isel_4_get(void)
{
    return hwp_sysc_cmp->func_isel_4.val;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io19_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_4.bit_field.func_io19_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io18_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_4.bit_field.func_io18_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io17_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_4.bit_field.func_io17_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_func_io16_sel_getf(void)
{
    return hwp_sysc_cmp->func_isel_4.bit_field.func_io16_sel;
}

__STATIC_INLINE uint32_t sysc_cmp_mcu_stcalib_get(void)
{
    return hwp_sysc_cmp->mcu_stcalib.val;
}

__STATIC_INLINE uint32_t sysc_cmp_mcu_stcalib_getf(void)
{
    return hwp_sysc_cmp->mcu_stcalib.bit_field.mcu_stcalib;
}

__STATIC_INLINE uint32_t sysc_cmp_idle_get(void)
{
    return hwp_sysc_cmp->idle.val;
}

__STATIC_INLINE uint32_t sysc_cmp_idle_reg_getf(void)
{
    return hwp_sysc_cmp->idle.bit_field.idle_reg;
}

__STATIC_INLINE uint32_t sysc_cmp_mac_abort_get(void)
{
    return hwp_sysc_cmp->mac_abort.val;
}

__STATIC_INLINE uint8_t sysc_cmp_mac_txabort_reqn_getf(void)
{
    return hwp_sysc_cmp->mac_abort.bit_field.mac_txabort_reqn;
}

__STATIC_INLINE uint32_t sysc_cmp_mem_ema_0_get(void)
{
    return hwp_sysc_cmp->mem_ema_0.val;
}

__STATIC_INLINE uint8_t sysc_cmp_ram32_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_0.bit_field.ram32_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_ram31_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_0.bit_field.ram31_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_ram30_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_0.bit_field.ram30_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_ram2_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_0.bit_field.ram2_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_ram1_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_0.bit_field.ram1_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_ram0_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_0.bit_field.ram0_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_rom1_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_0.bit_field.rom1_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_rom0_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_0.bit_field.rom0_ema;
}

__STATIC_INLINE uint32_t sysc_cmp_mem_ema_1_get(void)
{
    return hwp_sysc_cmp->mem_ema_1.val;
}

__STATIC_INLINE uint8_t sysc_cmp_ram35_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram35_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram34_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram34_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram33_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram33_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram32_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram32_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram31_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram31_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram30_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram30_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram2_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram2_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram1_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram1_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram0_emaw_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram0_emaw;
}

__STATIC_INLINE uint8_t sysc_cmp_ram35_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram35_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_ram34_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram34_ema;
}

__STATIC_INLINE uint8_t sysc_cmp_ram33_ema_getf(void)
{
    return hwp_sysc_cmp->mem_ema_1.bit_field.ram33_ema;
}

__STATIC_INLINE uint32_t sysc_cmp_dma_clk_dly_get(void)
{
    return hwp_sysc_cmp->dma_clk_dly.val;
}

__STATIC_INLINE uint8_t sysc_cmp_dma_clk_en_dly_getf(void)
{
    return hwp_sysc_cmp->dma_clk_dly.bit_field.dma_clk_en_dly;
}

__STATIC_INLINE uint32_t sysc_cmp_rfreg_cfg_get(void)
{
    return hwp_sysc_cmp->rfreg_cfg.val;
}

__STATIC_INLINE uint16_t sysc_cmp_rfreg_base_addr_getf(void)
{
    return hwp_sysc_cmp->rfreg_cfg.bit_field.rfreg_base_addr;
}

__STATIC_INLINE uint16_t sysc_cmp_rfreg_len_getf(void)
{
    return hwp_sysc_cmp->rfreg_cfg.bit_field.rfreg_len;
}

__STATIC_INLINE uint32_t sysc_cmp_rfreg_action_status_get(void)
{
    return hwp_sysc_cmp->rfreg_action_status.val;
}

__STATIC_INLINE uint8_t sysc_cmp_restore_done_getf(void)
{
    return hwp_sysc_cmp->rfreg_action_status.bit_field.restore_done;
}

__STATIC_INLINE uint8_t sysc_cmp_save_done_getf(void)
{
    return hwp_sysc_cmp->rfreg_action_status.bit_field.save_done;
}

__STATIC_INLINE uint32_t sysc_cmp_debug_io_en_get(void)
{
    return hwp_sysc_cmp->debug_io_en.val;
}

__STATIC_INLINE uint16_t sysc_cmp_debug_io_en_getf(void)
{
    return hwp_sysc_cmp->debug_io_en.bit_field.debug_io_en;
}

__STATIC_INLINE uint32_t sysc_cmp_debug_sel_get(void)
{
    return hwp_sysc_cmp->debug_sel.val;
}

__STATIC_INLINE uint8_t sysc_cmp_mac_debug_port_sel_getf(void)
{
    return hwp_sysc_cmp->debug_sel.bit_field.mac_debug_port_sel;
}

__STATIC_INLINE uint8_t sysc_cmp_rf_debug_mode_getf(void)
{
    return hwp_sysc_cmp->debug_sel.bit_field.rf_debug_mode;
}

__STATIC_INLINE uint8_t sysc_cmp_debug_port_sel_getf(void)
{
    return hwp_sysc_cmp->debug_sel.bit_field.debug_port_sel;
}

__STATIC_INLINE uint16_t sysc_cmp_debug_sw_getf(void)
{
    return hwp_sysc_cmp->debug_sel.bit_field.debug_sw;
}

__STATIC_INLINE uint32_t sysc_cmp_pwm1_lo_get(void)
{
    return hwp_sysc_cmp->pwm1_lo.val;
}

__STATIC_INLINE uint8_t sysc_cmp_r_pwm_en_getf(void)
{
    return hwp_sysc_cmp->pwm1_lo.bit_field.r_pwm_en;
}

__STATIC_INLINE uint32_t sysc_cmp_r_pwm1_wid_lo_getf(void)
{
    return hwp_sysc_cmp->pwm1_lo.bit_field.r_pwm1_wid_lo;
}

__STATIC_INLINE uint32_t sysc_cmp_pwm1_hi_get(void)
{
    return hwp_sysc_cmp->pwm1_hi.val;
}

__STATIC_INLINE uint32_t sysc_cmp_r_pwm1_wid_hi_getf(void)
{
    return hwp_sysc_cmp->pwm1_hi.bit_field.r_pwm1_wid_hi;
}

__STATIC_INLINE uint32_t sysc_cmp_pwm2_lo_get(void)
{
    return hwp_sysc_cmp->pwm2_lo.val;
}

__STATIC_INLINE uint32_t sysc_cmp_r_pwm2_wid_lo_getf(void)
{
    return hwp_sysc_cmp->pwm2_lo.bit_field.r_pwm2_wid_lo;
}

__STATIC_INLINE uint32_t sysc_cmp_pwm2_hi_get(void)
{
    return hwp_sysc_cmp->pwm2_hi.val;
}

__STATIC_INLINE uint32_t sysc_cmp_r_pwm2_wid_hi_getf(void)
{
    return hwp_sysc_cmp->pwm2_hi.bit_field.r_pwm2_wid_hi;
}

__STATIC_INLINE uint32_t sysc_cmp_pwm3_lo_get(void)
{
    return hwp_sysc_cmp->pwm3_lo.val;
}

__STATIC_INLINE uint32_t sysc_cmp_r_pwm3_wid_lo_getf(void)
{
    return hwp_sysc_cmp->pwm3_lo.bit_field.r_pwm3_wid_lo;
}

__STATIC_INLINE uint32_t sysc_cmp_pwm3_hi_get(void)
{
    return hwp_sysc_cmp->pwm3_hi.val;
}

__STATIC_INLINE uint32_t sysc_cmp_r_pwm3_wid_hi_getf(void)
{
    return hwp_sysc_cmp->pwm3_hi.bit_field.r_pwm3_wid_hi;
}

__STATIC_INLINE uint32_t sysc_cmp_pwm4_lo_get(void)
{
    return hwp_sysc_cmp->pwm4_lo.val;
}

__STATIC_INLINE uint32_t sysc_cmp_r_pwm4_wid_lo_getf(void)
{
    return hwp_sysc_cmp->pwm4_lo.bit_field.r_pwm4_wid_lo;
}

__STATIC_INLINE uint32_t sysc_cmp_pwm4_hi_get(void)
{
    return hwp_sysc_cmp->pwm4_hi.val;
}

__STATIC_INLINE uint32_t sysc_cmp_r_pwm4_wid_hi_getf(void)
{
    return hwp_sysc_cmp->pwm4_hi.bit_field.r_pwm4_wid_hi;
}


//--------------------------------------------------------------------------------

__STATIC_INLINE void sysc_cmp_div_update_pack(  uint8_t timer4_div_para_up, uint8_t timer3_div_para_up, uint8_t timer2_div_para_up, uint8_t timer1_div_para_up, uint8_t pclk0_div_para_up)
{
    hwp_sysc_cmp->div_update.val = ( \
                                    ((uint32_t )timer4_div_para_up<< 4) \
                                  | ((uint32_t )timer3_div_para_up<< 3) \
                                  | ((uint32_t )timer2_div_para_up<< 2) \
                                  | ((uint32_t )timer1_div_para_up<< 1) \
                                  | ((uint32_t )pclk0_div_para_up) \
                                  );
}

__STATIC_INLINE void sysc_cmp_div_para_timer_0_pack(  uint8_t timer4_div_para_m1, uint8_t timer3_div_para_m1, uint8_t timer2_div_para_m1, uint8_t timer1_div_para_m1)
{
    hwp_sysc_cmp->div_para_timer_0.val = ( \
                                    ((uint32_t )timer4_div_para_m1<< 24) \
                                  | ((uint32_t )timer3_div_para_m1<< 16) \
                                  | ((uint32_t )timer2_div_para_m1<< 8) \
                                  | ((uint32_t )timer1_div_para_m1) \
                                  );
}

__STATIC_INLINE void sysc_cmp_sw_clkg_pack(  uint8_t aes_gate_en, uint8_t trng_gate_en, uint8_t ef_gate_en, uint8_t pwm_gate_en, uint8_t rfreg_gate_en, uint8_t dma_gate_en, uint8_t cache_gate_en, uint8_t mac_gate_en, uint8_t sdio_gate_en, uint8_t dbgh_gate_en, uint8_t timer4_gate_en, uint8_t timer3_gate_en, uint8_t timer2_gate_en, uint8_t timer1_gate_en, uint8_t timer_gate_en, uint8_t wdt_gate_en, uint8_t spim2_gate_en, uint8_t uart1_gate_en, uint8_t uart0_gate_en, uint8_t i2c1_gate_en, uint8_t i2c0_gate_en, uint8_t spis_gate_en, uint8_t spim_gate_en, uint8_t gpio_gate_en, uint8_t i2s_gate_en, uint8_t adcc_gate_en, uint8_t qspi_gate_en, uint8_t patch_gate_en)
{
    hwp_sysc_cmp->sw_clkg.val = ( \
                                    ((uint32_t )aes_gate_en       << 27) \
                                  | ((uint32_t )trng_gate_en      << 26) \
                                  | ((uint32_t )ef_gate_en        << 25) \
                                  | ((uint32_t )pwm_gate_en       << 24) \
                                  | ((uint32_t )rfreg_gate_en     << 23) \
                                  | ((uint32_t )dma_gate_en       << 22) \
                                  | ((uint32_t )cache_gate_en     << 21) \
                                  | ((uint32_t )mac_gate_en       << 20) \
                                  | ((uint32_t )sdio_gate_en      << 19) \
                                  | ((uint32_t )dbgh_gate_en      << 18) \
                                  | ((uint32_t )timer4_gate_en    << 17) \
                                  | ((uint32_t )timer3_gate_en    << 16) \
                                  | ((uint32_t )timer2_gate_en    << 15) \
                                  | ((uint32_t )timer1_gate_en    << 14) \
                                  | ((uint32_t )timer_gate_en     << 13) \
                                  | ((uint32_t )wdt_gate_en       << 12) \
                                  | ((uint32_t )spim2_gate_en     << 11) \
                                  | ((uint32_t )uart1_gate_en     << 10) \
                                  | ((uint32_t )uart0_gate_en     << 9) \
                                  | ((uint32_t )i2c1_gate_en      << 8) \
                                  | ((uint32_t )i2c0_gate_en      << 7) \
                                  | ((uint32_t )spis_gate_en      << 6) \
                                  | ((uint32_t )spim_gate_en      << 5) \
                                  | ((uint32_t )gpio_gate_en      << 4) \
                                  | ((uint32_t )i2s_gate_en       << 3) \
                                  | ((uint32_t )adcc_gate_en      << 2) \
                                  | ((uint32_t )qspi_gate_en      << 1) \
                                  | ((uint32_t )patch_gate_en) \
                                  );
}

__STATIC_INLINE void sysc_cmp_sw_rstn_pack(  uint8_t srstn_ase, uint8_t srstn_trng, uint8_t srstn_ef, uint8_t srstn_pwm, uint8_t srstn_rfreg, uint8_t srstn_dma, uint8_t srstn_cache, uint8_t srstn_mac, uint8_t srstn_sdio, uint8_t srstn_dbgh, uint8_t srstn_timer, uint8_t srstn_wdt, uint8_t srstn_spim2, uint8_t srstn_uart1, uint8_t srstn_uart0, uint8_t srstn_i2c1, uint8_t srstn_i2c0, uint8_t srstn_spis, uint8_t srstn_spim, uint8_t srstn_gpio, uint8_t srstn_i2s, uint8_t srstn_adcc, uint8_t srstn_qspi, uint8_t srstn_patch)
{
    hwp_sysc_cmp->sw_rstn.val = ( \
                                    ((uint32_t )srstn_ase         << 23) \
                                  | ((uint32_t )srstn_trng        << 22) \
                                  | ((uint32_t )srstn_ef          << 21) \
                                  | ((uint32_t )srstn_pwm         << 20) \
                                  | ((uint32_t )srstn_rfreg       << 19) \
                                  | ((uint32_t )srstn_dma         << 18) \
                                  | ((uint32_t )srstn_cache       << 17) \
                                  | ((uint32_t )srstn_mac         << 16) \
                                  | ((uint32_t )srstn_sdio        << 15) \
                                  | ((uint32_t )srstn_dbgh        << 14) \
                                  | ((uint32_t )srstn_timer       << 13) \
                                  | ((uint32_t )srstn_wdt         << 12) \
                                  | ((uint32_t )srstn_spim2       << 11) \
                                  | ((uint32_t )srstn_uart1       << 10) \
                                  | ((uint32_t )srstn_uart0       << 9) \
                                  | ((uint32_t )srstn_i2c1        << 8) \
                                  | ((uint32_t )srstn_i2c0        << 7) \
                                  | ((uint32_t )srstn_spis        << 6) \
                                  | ((uint32_t )srstn_spim        << 5) \
                                  | ((uint32_t )srstn_gpio        << 4) \
                                  | ((uint32_t )srstn_i2s         << 3) \
                                  | ((uint32_t )srstn_adcc        << 2) \
                                  | ((uint32_t )srstn_qspi        << 1) \
                                  | ((uint32_t )srstn_patch) \
                                  );
}

__STATIC_INLINE void sysc_cmp_io_en_pack(  uint32_t r_io_dsel, uint8_t r_uart0_sir_en, uint8_t i2s_io_en1, uint8_t i2s_io_en0, uint8_t spis_io_en, uint8_t spim_io_en0, uint8_t spif_io_en, uint8_t sdio_io_en)
{
    hwp_sysc_cmp->io_en.val = ( \
                                    ((uint32_t )r_io_dsel         << 11) \
                                  | ((uint32_t )r_uart0_sir_en    << 10) \
                                  | ((uint32_t )i2s_io_en1        << 9) \
                                  | ((uint32_t )i2s_io_en0        << 8) \
                                  | ((uint32_t )spis_io_en        << 7) \
                                  | ((uint32_t )spim_io_en0       << 6) \
                                  | ((uint32_t )spif_io_en        << 5) \
                                  | ((uint32_t )sdio_io_en        << 4) \
                                  );
}

__STATIC_INLINE void sysc_cmp_func_en_pack(  uint8_t spim_io_en2, uint8_t spim_io_en1, uint32_t func_ien)
{
    hwp_sysc_cmp->func_en.val = ( \
                                    ((uint32_t )spim_io_en2       << 21) \
                                  | ((uint32_t )spim_io_en1       << 20) \
                                  | ((uint32_t )func_ien) \
                                  );
}

__STATIC_INLINE void sysc_cmp_func_isel_0_pack(  uint8_t func_io03_sel, uint8_t func_io02_sel, uint8_t func_io01_sel, uint8_t func_io00_sel)
{
    hwp_sysc_cmp->func_isel_0.val = ( \
                                    ((uint32_t )func_io03_sel     << 24) \
                                  | ((uint32_t )func_io02_sel     << 16) \
                                  | ((uint32_t )func_io01_sel     << 8) \
                                  | ((uint32_t )func_io00_sel) \
                                  );
}

__STATIC_INLINE void sysc_cmp_func_isel_1_pack(  uint8_t func_io07_sel, uint8_t func_io06_sel, uint8_t func_io05_sel, uint8_t func_io04_sel)
{
    hwp_sysc_cmp->func_isel_1.val = ( \
                                    ((uint32_t )func_io07_sel     << 24) \
                                  | ((uint32_t )func_io06_sel     << 16) \
                                  | ((uint32_t )func_io05_sel     << 8) \
                                  | ((uint32_t )func_io04_sel) \
                                  );
}

__STATIC_INLINE void sysc_cmp_func_isel_2_pack(  uint8_t func_io11_sel, uint8_t func_io10_sel, uint8_t func_io09_sel, uint8_t func_io08_sel)
{
    hwp_sysc_cmp->func_isel_2.val = ( \
                                    ((uint32_t )func_io11_sel     << 24) \
                                  | ((uint32_t )func_io10_sel     << 16) \
                                  | ((uint32_t )func_io09_sel     << 8) \
                                  | ((uint32_t )func_io08_sel) \
                                  );
}

__STATIC_INLINE void sysc_cmp_func_isel_3_pack(  uint8_t func_io15_sel, uint8_t func_io14_sel, uint8_t func_io13_sel, uint8_t func_io12_sel)
{
    hwp_sysc_cmp->func_isel_3.val = ( \
                                    ((uint32_t )func_io15_sel     << 24) \
                                  | ((uint32_t )func_io14_sel     << 16) \
                                  | ((uint32_t )func_io13_sel     << 8) \
                                  | ((uint32_t )func_io12_sel) \
                                  );
}

__STATIC_INLINE void sysc_cmp_func_isel_4_pack(  uint8_t func_io19_sel, uint8_t func_io18_sel, uint8_t func_io17_sel, uint8_t func_io16_sel)
{
    hwp_sysc_cmp->func_isel_4.val = ( \
                                    ((uint32_t )func_io19_sel     << 24) \
                                  | ((uint32_t )func_io18_sel     << 16) \
                                  | ((uint32_t )func_io17_sel     << 8) \
                                  | ((uint32_t )func_io16_sel) \
                                  );
}

__STATIC_INLINE void sysc_cmp_mem_ema_0_pack(  uint8_t ram32_ema, uint8_t ram31_ema, uint8_t ram30_ema, uint8_t ram2_ema, uint8_t ram1_ema, uint8_t ram0_ema, uint8_t rom1_ema, uint8_t rom0_ema)
{
    hwp_sysc_cmp->mem_ema_0.val = ( \
                                    ((uint32_t )ram32_ema         << 28) \
                                  | ((uint32_t )ram31_ema         << 24) \
                                  | ((uint32_t )ram30_ema         << 20) \
                                  | ((uint32_t )ram2_ema          << 16) \
                                  | ((uint32_t )ram1_ema          << 12) \
                                  | ((uint32_t )ram0_ema          << 8) \
                                  | ((uint32_t )rom1_ema          << 4) \
                                  | ((uint32_t )rom0_ema) \
                                  );
}

__STATIC_INLINE void sysc_cmp_mem_ema_1_pack(  uint8_t ram35_emaw, uint8_t ram34_emaw, uint8_t ram33_emaw, uint8_t ram32_emaw, uint8_t ram31_emaw, uint8_t ram30_emaw, uint8_t ram2_emaw, uint8_t ram1_emaw, uint8_t ram0_emaw, uint8_t ram35_ema, uint8_t ram34_ema, uint8_t ram33_ema)
{
    hwp_sysc_cmp->mem_ema_1.val = ( \
                                    ((uint32_t )ram35_emaw        << 28) \
                                  | ((uint32_t )ram34_emaw        << 26) \
                                  | ((uint32_t )ram33_emaw        << 24) \
                                  | ((uint32_t )ram32_emaw        << 22) \
                                  | ((uint32_t )ram31_emaw        << 20) \
                                  | ((uint32_t )ram30_emaw        << 18) \
                                  | ((uint32_t )ram2_emaw         << 16) \
                                  | ((uint32_t )ram1_emaw         << 14) \
                                  | ((uint32_t )ram0_emaw         << 12) \
                                  | ((uint32_t )ram35_ema         << 8) \
                                  | ((uint32_t )ram34_ema         << 4) \
                                  | ((uint32_t )ram33_ema) \
                                  );
}

__STATIC_INLINE void sysc_cmp_rfreg_cfg_pack(  uint16_t rfreg_base_addr, uint16_t rfreg_len)
{
    hwp_sysc_cmp->rfreg_cfg.val = ( \
                                    ((uint32_t )rfreg_base_addr   << 16) \
                                  | ((uint32_t )rfreg_len) \
                                  );
}

__STATIC_INLINE void sysc_cmp_rfreg_action_pack(  uint8_t rfreg_restore, uint8_t rfreg_save)
{
    hwp_sysc_cmp->rfreg_action.val = ( \
                                    ((uint32_t )rfreg_restore     << 1) \
                                  | ((uint32_t )rfreg_save) \
                                  );
}

__STATIC_INLINE void sysc_cmp_debug_sel_pack(  uint8_t mac_debug_port_sel, uint8_t rf_debug_mode, uint8_t debug_port_sel, uint16_t debug_sw)
{
    hwp_sysc_cmp->debug_sel.val = ( \
                                    ((uint32_t )mac_debug_port_sel<< 20) \
                                  | ((uint32_t )rf_debug_mode     << 19) \
                                  | ((uint32_t )debug_port_sel    << 16) \
                                  | ((uint32_t )debug_sw) \
                                  );
}

__STATIC_INLINE void sysc_cmp_pwm1_lo_pack(  uint8_t r_pwm_en, uint32_t r_pwm1_wid_lo)
{
    hwp_sysc_cmp->pwm1_lo.val = ( \
                                    ((uint32_t )r_pwm_en          << 20) \
                                  | ((uint32_t )r_pwm1_wid_lo) \
                                  );
}


//--------------------------------------------------------------------------------

__STATIC_INLINE void sysc_cmp_div_para_timer_0_unpack(  uint8_t * timer4_div_para_m1, uint8_t * timer3_div_para_m1, uint8_t * timer2_div_para_m1, uint8_t * timer1_div_para_m1)
{
    t_sysc_cmp_div_para_timer_0 local_val = hwp_sysc_cmp->div_para_timer_0;

    *timer4_div_para_m1 = local_val.bit_field.timer4_div_para_m1;
    *timer3_div_para_m1 = local_val.bit_field.timer3_div_para_m1;
    *timer2_div_para_m1 = local_val.bit_field.timer2_div_para_m1;
    *timer1_div_para_m1 = local_val.bit_field.timer1_div_para_m1;
}

__STATIC_INLINE void sysc_cmp_sw_clkg_unpack(  uint8_t * aes_gate_en, uint8_t * trng_gate_en, uint8_t * ef_gate_en, uint8_t * pwm_gate_en, uint8_t * rfreg_gate_en, uint8_t * dma_gate_en, uint8_t * cache_gate_en, uint8_t * mac_gate_en, uint8_t * sdio_gate_en, uint8_t * dbgh_gate_en, uint8_t * timer4_gate_en, uint8_t * timer3_gate_en, uint8_t * timer2_gate_en, uint8_t * timer1_gate_en, uint8_t * timer_gate_en, uint8_t * wdt_gate_en, uint8_t * spim2_gate_en, uint8_t * uart1_gate_en, uint8_t * uart0_gate_en, uint8_t * i2c1_gate_en, uint8_t * i2c0_gate_en, uint8_t * spis_gate_en, uint8_t * spim_gate_en, uint8_t * gpio_gate_en, uint8_t * i2s_gate_en, uint8_t * adcc_gate_en, uint8_t * qspi_gate_en, uint8_t * patch_gate_en)
{
    t_sysc_cmp_sw_clkg local_val = hwp_sysc_cmp->sw_clkg;

    *aes_gate_en        = local_val.bit_field.aes_gate_en;
    *trng_gate_en       = local_val.bit_field.trng_gate_en;
    *ef_gate_en         = local_val.bit_field.ef_gate_en;
    *pwm_gate_en        = local_val.bit_field.pwm_gate_en;
    *rfreg_gate_en      = local_val.bit_field.rfreg_gate_en;
    *dma_gate_en        = local_val.bit_field.dma_gate_en;
    *cache_gate_en      = local_val.bit_field.cache_gate_en;
    *mac_gate_en        = local_val.bit_field.mac_gate_en;
    *sdio_gate_en       = local_val.bit_field.sdio_gate_en;
    *dbgh_gate_en       = local_val.bit_field.dbgh_gate_en;
    *timer4_gate_en     = local_val.bit_field.timer4_gate_en;
    *timer3_gate_en     = local_val.bit_field.timer3_gate_en;
    *timer2_gate_en     = local_val.bit_field.timer2_gate_en;
    *timer1_gate_en     = local_val.bit_field.timer1_gate_en;
    *timer_gate_en      = local_val.bit_field.timer_gate_en;
    *wdt_gate_en        = local_val.bit_field.wdt_gate_en;
    *spim2_gate_en      = local_val.bit_field.spim2_gate_en;
    *uart1_gate_en      = local_val.bit_field.uart1_gate_en;
    *uart0_gate_en      = local_val.bit_field.uart0_gate_en;
    *i2c1_gate_en       = local_val.bit_field.i2c1_gate_en;
    *i2c0_gate_en       = local_val.bit_field.i2c0_gate_en;
    *spis_gate_en       = local_val.bit_field.spis_gate_en;
    *spim_gate_en       = local_val.bit_field.spim_gate_en;
    *gpio_gate_en       = local_val.bit_field.gpio_gate_en;
    *i2s_gate_en        = local_val.bit_field.i2s_gate_en;
    *adcc_gate_en       = local_val.bit_field.adcc_gate_en;
    *qspi_gate_en       = local_val.bit_field.qspi_gate_en;
    *patch_gate_en      = local_val.bit_field.patch_gate_en;
}

__STATIC_INLINE void sysc_cmp_sw_rstn_unpack(  uint8_t * srstn_ase, uint8_t * srstn_trng, uint8_t * srstn_ef, uint8_t * srstn_pwm, uint8_t * srstn_rfreg, uint8_t * srstn_dma, uint8_t * srstn_cache, uint8_t * srstn_mac, uint8_t * srstn_sdio, uint8_t * srstn_dbgh, uint8_t * srstn_timer, uint8_t * srstn_wdt, uint8_t * srstn_spim2, uint8_t * srstn_uart1, uint8_t * srstn_uart0, uint8_t * srstn_i2c1, uint8_t * srstn_i2c0, uint8_t * srstn_spis, uint8_t * srstn_spim, uint8_t * srstn_gpio, uint8_t * srstn_i2s, uint8_t * srstn_adcc, uint8_t * srstn_qspi, uint8_t * srstn_patch)
{
    t_sysc_cmp_sw_rstn local_val = hwp_sysc_cmp->sw_rstn;

    *srstn_ase          = local_val.bit_field.srstn_ase;
    *srstn_trng         = local_val.bit_field.srstn_trng;
    *srstn_ef           = local_val.bit_field.srstn_ef;
    *srstn_pwm          = local_val.bit_field.srstn_pwm;
    *srstn_rfreg        = local_val.bit_field.srstn_rfreg;
    *srstn_dma          = local_val.bit_field.srstn_dma;
    *srstn_cache        = local_val.bit_field.srstn_cache;
    *srstn_mac          = local_val.bit_field.srstn_mac;
    *srstn_sdio         = local_val.bit_field.srstn_sdio;
    *srstn_dbgh         = local_val.bit_field.srstn_dbgh;
    *srstn_timer        = local_val.bit_field.srstn_timer;
    *srstn_wdt          = local_val.bit_field.srstn_wdt;
    *srstn_spim2        = local_val.bit_field.srstn_spim2;
    *srstn_uart1        = local_val.bit_field.srstn_uart1;
    *srstn_uart0        = local_val.bit_field.srstn_uart0;
    *srstn_i2c1         = local_val.bit_field.srstn_i2c1;
    *srstn_i2c0         = local_val.bit_field.srstn_i2c0;
    *srstn_spis         = local_val.bit_field.srstn_spis;
    *srstn_spim         = local_val.bit_field.srstn_spim;
    *srstn_gpio         = local_val.bit_field.srstn_gpio;
    *srstn_i2s          = local_val.bit_field.srstn_i2s;
    *srstn_adcc         = local_val.bit_field.srstn_adcc;
    *srstn_qspi         = local_val.bit_field.srstn_qspi;
    *srstn_patch        = local_val.bit_field.srstn_patch;
}

__STATIC_INLINE void sysc_cmp_io_en_unpack(  uint32_t * r_io_dsel, uint8_t * r_uart0_sir_en, uint8_t * i2s_io_en1, uint8_t * i2s_io_en0, uint8_t * spis_io_en, uint8_t * spim_io_en0, uint8_t * spif_io_en, uint8_t * sdio_io_en)
{
    t_sysc_cmp_io_en local_val = hwp_sysc_cmp->io_en;

    *r_io_dsel          = local_val.bit_field.r_io_dsel;
    *r_uart0_sir_en     = local_val.bit_field.r_uart0_sir_en;
    *i2s_io_en1         = local_val.bit_field.i2s_io_en1;
    *i2s_io_en0         = local_val.bit_field.i2s_io_en0;
    *spis_io_en         = local_val.bit_field.spis_io_en;
    *spim_io_en0        = local_val.bit_field.spim_io_en0;
    *spif_io_en         = local_val.bit_field.spif_io_en;
    *sdio_io_en         = local_val.bit_field.sdio_io_en;
}

__STATIC_INLINE void sysc_cmp_func_en_unpack(  uint8_t * spim_io_en2, uint8_t * spim_io_en1, uint32_t * func_ien)
{
    t_sysc_cmp_func_en local_val = hwp_sysc_cmp->func_en;

    *spim_io_en2        = local_val.bit_field.spim_io_en2;
    *spim_io_en1        = local_val.bit_field.spim_io_en1;
    *func_ien           = local_val.bit_field.func_ien;
}

__STATIC_INLINE void sysc_cmp_func_isel_0_unpack(  uint8_t * func_io03_sel, uint8_t * func_io02_sel, uint8_t * func_io01_sel, uint8_t * func_io00_sel)
{
    t_sysc_cmp_func_isel_0 local_val = hwp_sysc_cmp->func_isel_0;

    *func_io03_sel      = local_val.bit_field.func_io03_sel;
    *func_io02_sel      = local_val.bit_field.func_io02_sel;
    *func_io01_sel      = local_val.bit_field.func_io01_sel;
    *func_io00_sel      = local_val.bit_field.func_io00_sel;
}

__STATIC_INLINE void sysc_cmp_func_isel_1_unpack(  uint8_t * func_io07_sel, uint8_t * func_io06_sel, uint8_t * func_io05_sel, uint8_t * func_io04_sel)
{
    t_sysc_cmp_func_isel_1 local_val = hwp_sysc_cmp->func_isel_1;

    *func_io07_sel      = local_val.bit_field.func_io07_sel;
    *func_io06_sel      = local_val.bit_field.func_io06_sel;
    *func_io05_sel      = local_val.bit_field.func_io05_sel;
    *func_io04_sel      = local_val.bit_field.func_io04_sel;
}

__STATIC_INLINE void sysc_cmp_func_isel_2_unpack(  uint8_t * func_io11_sel, uint8_t * func_io10_sel, uint8_t * func_io09_sel, uint8_t * func_io08_sel)
{
    t_sysc_cmp_func_isel_2 local_val = hwp_sysc_cmp->func_isel_2;

    *func_io11_sel      = local_val.bit_field.func_io11_sel;
    *func_io10_sel      = local_val.bit_field.func_io10_sel;
    *func_io09_sel      = local_val.bit_field.func_io09_sel;
    *func_io08_sel      = local_val.bit_field.func_io08_sel;
}

__STATIC_INLINE void sysc_cmp_func_isel_3_unpack(  uint8_t * func_io15_sel, uint8_t * func_io14_sel, uint8_t * func_io13_sel, uint8_t * func_io12_sel)
{
    t_sysc_cmp_func_isel_3 local_val = hwp_sysc_cmp->func_isel_3;

    *func_io15_sel      = local_val.bit_field.func_io15_sel;
    *func_io14_sel      = local_val.bit_field.func_io14_sel;
    *func_io13_sel      = local_val.bit_field.func_io13_sel;
    *func_io12_sel      = local_val.bit_field.func_io12_sel;
}

__STATIC_INLINE void sysc_cmp_func_isel_4_unpack(  uint8_t * func_io19_sel, uint8_t * func_io18_sel, uint8_t * func_io17_sel, uint8_t * func_io16_sel)
{
    t_sysc_cmp_func_isel_4 local_val = hwp_sysc_cmp->func_isel_4;

    *func_io19_sel      = local_val.bit_field.func_io19_sel;
    *func_io18_sel      = local_val.bit_field.func_io18_sel;
    *func_io17_sel      = local_val.bit_field.func_io17_sel;
    *func_io16_sel      = local_val.bit_field.func_io16_sel;
}

__STATIC_INLINE void sysc_cmp_mem_ema_0_unpack(  uint8_t * ram32_ema, uint8_t * ram31_ema, uint8_t * ram30_ema, uint8_t * ram2_ema, uint8_t * ram1_ema, uint8_t * ram0_ema, uint8_t * rom1_ema, uint8_t * rom0_ema)
{
    t_sysc_cmp_mem_ema_0 local_val = hwp_sysc_cmp->mem_ema_0;

    *ram32_ema          = local_val.bit_field.ram32_ema;
    *ram31_ema          = local_val.bit_field.ram31_ema;
    *ram30_ema          = local_val.bit_field.ram30_ema;
    *ram2_ema           = local_val.bit_field.ram2_ema;
    *ram1_ema           = local_val.bit_field.ram1_ema;
    *ram0_ema           = local_val.bit_field.ram0_ema;
    *rom1_ema           = local_val.bit_field.rom1_ema;
    *rom0_ema           = local_val.bit_field.rom0_ema;
}

__STATIC_INLINE void sysc_cmp_mem_ema_1_unpack(  uint8_t * ram35_emaw, uint8_t * ram34_emaw, uint8_t * ram33_emaw, uint8_t * ram32_emaw, uint8_t * ram31_emaw, uint8_t * ram30_emaw, uint8_t * ram2_emaw, uint8_t * ram1_emaw, uint8_t * ram0_emaw, uint8_t * ram35_ema, uint8_t * ram34_ema, uint8_t * ram33_ema)
{
    t_sysc_cmp_mem_ema_1 local_val = hwp_sysc_cmp->mem_ema_1;

    *ram35_emaw         = local_val.bit_field.ram35_emaw;
    *ram34_emaw         = local_val.bit_field.ram34_emaw;
    *ram33_emaw         = local_val.bit_field.ram33_emaw;
    *ram32_emaw         = local_val.bit_field.ram32_emaw;
    *ram31_emaw         = local_val.bit_field.ram31_emaw;
    *ram30_emaw         = local_val.bit_field.ram30_emaw;
    *ram2_emaw          = local_val.bit_field.ram2_emaw;
    *ram1_emaw          = local_val.bit_field.ram1_emaw;
    *ram0_emaw          = local_val.bit_field.ram0_emaw;
    *ram35_ema          = local_val.bit_field.ram35_ema;
    *ram34_ema          = local_val.bit_field.ram34_ema;
    *ram33_ema          = local_val.bit_field.ram33_ema;
}

__STATIC_INLINE void sysc_cmp_rfreg_cfg_unpack(  uint16_t * rfreg_base_addr, uint16_t * rfreg_len)
{
    t_sysc_cmp_rfreg_cfg local_val = hwp_sysc_cmp->rfreg_cfg;

    *rfreg_base_addr    = local_val.bit_field.rfreg_base_addr;
    *rfreg_len          = local_val.bit_field.rfreg_len;
}

__STATIC_INLINE void sysc_cmp_rfreg_action_status_unpack(  uint8_t * restore_done, uint8_t * save_done)
{
    t_sysc_cmp_rfreg_action_status local_val = hwp_sysc_cmp->rfreg_action_status;

    *restore_done       = local_val.bit_field.restore_done;
    *save_done          = local_val.bit_field.save_done;
}

__STATIC_INLINE void sysc_cmp_debug_sel_unpack(  uint8_t * mac_debug_port_sel, uint8_t * rf_debug_mode, uint8_t * debug_port_sel, uint16_t * debug_sw)
{
    t_sysc_cmp_debug_sel local_val = hwp_sysc_cmp->debug_sel;

    *mac_debug_port_sel = local_val.bit_field.mac_debug_port_sel;
    *rf_debug_mode      = local_val.bit_field.rf_debug_mode;
    *debug_port_sel     = local_val.bit_field.debug_port_sel;
    *debug_sw           = local_val.bit_field.debug_sw;
}

__STATIC_INLINE void sysc_cmp_pwm1_lo_unpack(  uint8_t * r_pwm_en, uint32_t * r_pwm1_wid_lo)
{
    t_sysc_cmp_pwm1_lo local_val = hwp_sysc_cmp->pwm1_lo;

    *r_pwm_en           = local_val.bit_field.r_pwm_en;
    *r_pwm1_wid_lo      = local_val.bit_field.r_pwm1_wid_lo;
}

#endif


