
#ifndef __REG_PWM_H__
#define __REG_PWM_H__

#include "types.h"
#include "ln88xx.h"


typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    ise                 : 24 ; // 23 : 0
        uint32_t    reserved_0          : 8  ; // 31 : 24
    } bit_field;
} t_pwm_ise;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    is0                 : 4  ; // 3  : 0
        uint32_t    is1                 : 4  ; // 7  : 4
        uint32_t    is2                 : 4  ; // 11 : 8
        uint32_t    is3                 : 4  ; // 15 : 12
        uint32_t    is4                 : 4  ; // 19 : 16
        uint32_t    is5                 : 4  ; // 23 : 20
        uint32_t    reserved_0          : 8  ; // 31 : 24
    } bit_field;
} t_pwm_isr;


//--------------------------------------------------------------------------------

typedef struct
{
    volatile        t_pwm_ise                                ise                                    ; // 0x0
    volatile        t_pwm_isr                                isr                                    ; // 0x4
} t_hwp_pwm_t0;

#define hwp_pwm ((t_hwp_pwm_t0*)REG_PWM_BASE)

#define PWM_0_BASE (REG_PWM_BASE + 0x20*1)
#define PWM_1_BASE (REG_PWM_BASE + 0x20*2)
#define PWM_2_BASE (REG_PWM_BASE + 0x20*3)
#define PWM_3_BASE (REG_PWM_BASE + 0x20*4)
#define PWM_4_BASE (REG_PWM_BASE + 0x20*5)
#define PWM_5_BASE (REG_PWM_BASE + 0x20*6)


//--------------------------------------------------------------------------------

__STATIC_INLINE void pwm_ise_set(uint32_t value)
{
    hwp_pwm->ise.val = value;
}

__STATIC_INLINE void pwm_ise_setf(uint32_t ise)
{
    hwp_pwm->ise.bit_field.ise = ise;
}

__STATIC_INLINE void pwm_isr_set(uint32_t value)
{
    hwp_pwm->isr.val = value;
}

__STATIC_INLINE void pwm_is5_setf(uint8_t is5)
{
    hwp_pwm->isr.bit_field.is5 = is5;
}

__STATIC_INLINE void pwm_is4_setf(uint8_t is4)
{
    hwp_pwm->isr.bit_field.is4 = is4;
}

__STATIC_INLINE void pwm_is3_setf(uint8_t is3)
{
    hwp_pwm->isr.bit_field.is3 = is3;
}

__STATIC_INLINE void pwm_is2_setf(uint8_t is2)
{
    hwp_pwm->isr.bit_field.is2 = is2;
}

__STATIC_INLINE void pwm_is1_setf(uint8_t is1)
{
    hwp_pwm->isr.bit_field.is1 = is1;
}

__STATIC_INLINE void pwm_is0_setf(uint8_t is0)
{
    hwp_pwm->isr.bit_field.is0 = is0;
}


//--------------------------------------------------------------------------------

__STATIC_INLINE uint32_t pwm_ise_get(void)
{
    return hwp_pwm->ise.val;
}

__STATIC_INLINE uint32_t pwm_ise_getf(void)
{
    return hwp_pwm->ise.bit_field.ise;
}

__STATIC_INLINE uint32_t pwm_isr_get(void)
{
    return hwp_pwm->isr.val;
}




//--------------------------------------------------------------------------------

__STATIC_INLINE void pwm_isr_pack(uint8_t is5, uint8_t is4, uint8_t is3, uint8_t is2, uint8_t is1, uint8_t is0)
{
    hwp_pwm->isr.val = ( \
                                    ((uint32_t )is5               << 20) \
                                  | ((uint32_t )is4               << 16) \
                                  | ((uint32_t )is3               << 12) \
                                  | ((uint32_t )is2               << 8) \
                                  | ((uint32_t )is1               << 4) \
                                  | ((uint32_t )is0) \
                                  );
}


//--------------------------------------------------------------------------------

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    pwm_ena             : 1  ; // 0  : 0
        uint32_t    pwm_enb             : 1  ; // 1  : 1
        uint32_t    dben                : 1  ; // 2  : 2
        uint32_t    tim_en              : 1  ; // 3  : 3
        uint32_t    cap_en              : 1  ; // 4  : 4
        uint32_t    reserved_0          : 27 ; // 31 : 5
    } bit_field;
} t_pwm_cr;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    pwm_inva            : 1  ; // 0  : 0
        uint32_t    pwm_invb            : 1  ; // 1  : 1
        uint32_t    cnt_mode            : 2  ; // 3  : 2
        uint32_t    trig_mod            : 2  ; // 5  : 4
        uint32_t    trig_sel            : 3  ; // 8  : 6
        uint32_t    trig_clr_en         : 1  ; // 9  : 9
        uint32_t    cap_edg             : 2  ; // 11 : 10
        uint32_t    cap_mod             : 1  ; // 12 : 12
        uint32_t    div                 : 6  ; // 18 : 13
        uint32_t    tim_once            : 1  ; // 19 : 19
        uint32_t    int_cmp_a_mod       : 2  ; // 21 : 20
        uint32_t    int_cmp_b_mod       : 2  ; // 23 : 22
        uint32_t    reserved_0          : 8  ; // 31 : 24
    } bit_field;
} t_pwm_cfg;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    load                : 16 ; // 15 : 0
        uint32_t    pwm_db              : 12 ; // 27 : 16
        uint32_t    reserved_0          : 4  ; // 31 : 28
    } bit_field;
} t_pwm_load;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    cmp_a               : 16 ; // 15 : 0
        uint32_t    cmp_b               : 16 ; // 31 : 16
    } bit_field;
} t_pwm_cmp;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    pwm_trig            : 16 ; // 15 : 0
        uint32_t    reserved_0          : 16 ; // 31 : 16
    } bit_field;
} t_pwm_trig;

typedef union
{
    uint32_t val;
    struct
    {
        uint32_t    count               : 16 ; // 15 : 0
        uint32_t    reserved_0          : 16 ; // 31 : 16
    } bit_field;
} t_pwm_count;


//--------------------------------------------------------------------------------

typedef struct
{
    volatile        t_pwm_cr                                 cr                                     ; // 0x0
    volatile        t_pwm_cfg                                cfg                                    ; // 0x4
    volatile        t_pwm_load                               load                                   ; // 0x8
    volatile        t_pwm_cmp                                cmp                                    ; // 0xc
    volatile        t_pwm_trig                               trig                                   ; // 0x10
    volatile        t_pwm_count                              count                                  ; // 0x14
} t_hwp_pwm_t;


//--------------------------------------------------------------------------------

__STATIC_INLINE void pwm_cr_set(uint32_t base, uint32_t value)
{
    ((t_hwp_pwm_t*)(base))->cr.val = value;
}

__STATIC_INLINE void pwm_cap_en_setf(uint32_t base, uint8_t cap_en)
{
    ((t_hwp_pwm_t*)(base))->cr.bit_field.cap_en = cap_en;
}

__STATIC_INLINE void pwm_tim_en_setf(uint32_t base, uint8_t tim_en)
{
    ((t_hwp_pwm_t*)(base))->cr.bit_field.tim_en = tim_en;
}

__STATIC_INLINE void pwm_dben_setf(uint32_t base, uint8_t dben)
{
    ((t_hwp_pwm_t*)(base))->cr.bit_field.dben = dben;
}

__STATIC_INLINE void pwm_enb_setf(uint32_t base, uint8_t pwm_enb)
{
    ((t_hwp_pwm_t*)(base))->cr.bit_field.pwm_enb = pwm_enb;
}

__STATIC_INLINE void pwm_ena_setf(uint32_t base, uint8_t pwm_ena)
{
    ((t_hwp_pwm_t*)(base))->cr.bit_field.pwm_ena = pwm_ena;
}

__STATIC_INLINE void pwm_cfg_set(uint32_t base, uint32_t value)
{
    ((t_hwp_pwm_t*)(base))->cfg.val = value;
}

__STATIC_INLINE void pwm_int_cmp_b_mod_setf(uint32_t base, uint8_t int_cmp_b_mod)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.int_cmp_b_mod = int_cmp_b_mod;
}

__STATIC_INLINE void pwm_int_cmp_a_mod_setf(uint32_t base, uint8_t int_cmp_a_mod)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.int_cmp_a_mod = int_cmp_a_mod;
}

__STATIC_INLINE void pwm_tim_once_setf(uint32_t base, uint8_t tim_once)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.tim_once = tim_once;
}

__STATIC_INLINE void pwm_div_setf(uint32_t base, uint8_t div)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.div = div;
}

__STATIC_INLINE void pwm_cap_mod_setf(uint32_t base, uint8_t cap_mod)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.cap_mod = cap_mod;
}

__STATIC_INLINE void pwm_cap_edg_setf(uint32_t base, uint8_t cap_edg)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.cap_edg = cap_edg;
}

__STATIC_INLINE void pwm_trig_clr_en_setf(uint32_t base, uint8_t trig_clr_en)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.trig_clr_en = trig_clr_en;
}

__STATIC_INLINE void pwm_trig_sel_setf(uint32_t base, uint8_t trig_sel)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.trig_sel = trig_sel;
}

__STATIC_INLINE void pwm_trig_mod_setf(uint32_t base, uint8_t trig_mod)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.trig_mod = trig_mod;
}

__STATIC_INLINE void pwm_cnt_mode_setf(uint32_t base, uint8_t cnt_mode)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.cnt_mode = cnt_mode;
}

__STATIC_INLINE void pwm_invb_setf(uint32_t base, uint8_t pwm_invb)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.pwm_invb = pwm_invb;
}

__STATIC_INLINE void pwm_inva_setf(uint32_t base, uint8_t pwm_inva)
{
    ((t_hwp_pwm_t*)(base))->cfg.bit_field.pwm_inva = pwm_inva;
}

__STATIC_INLINE void pwm_load_set(uint32_t base, uint32_t value)
{
    ((t_hwp_pwm_t*)(base))->load.val = value;
}

__STATIC_INLINE void pwm_db_setf(uint32_t base, uint16_t pwm_db)
{
    ((t_hwp_pwm_t*)(base))->load.bit_field.pwm_db = pwm_db;
}

__STATIC_INLINE void pwm_load_setf(uint32_t base, uint16_t load)
{
    ((t_hwp_pwm_t*)(base))->load.bit_field.load = load;
}

__STATIC_INLINE void pwm_cmp_set(uint32_t base, uint32_t value)
{
    ((t_hwp_pwm_t*)(base))->cmp.val = value;
}

__STATIC_INLINE void pwm_cmp_b_setf(uint32_t base, uint16_t cmp_b)
{
    ((t_hwp_pwm_t*)(base))->cmp.bit_field.cmp_b = cmp_b;
}

__STATIC_INLINE void pwm_cmp_a_setf(uint32_t base, uint16_t cmp_a)
{
    ((t_hwp_pwm_t*)(base))->cmp.bit_field.cmp_a = cmp_a;
}

__STATIC_INLINE void pwm_trig_set(uint32_t base, uint32_t value)
{
    ((t_hwp_pwm_t*)(base))->trig.val = value;
}

__STATIC_INLINE void pwm_trig_setf(uint32_t base, uint16_t pwm_trig)
{
    ((t_hwp_pwm_t*)(base))->trig.bit_field.pwm_trig = pwm_trig;
}


//--------------------------------------------------------------------------------

__STATIC_INLINE uint32_t pwm_cr_get(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cr.val;
}

__STATIC_INLINE uint8_t pwm_cap_en_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cr.bit_field.cap_en;
}

__STATIC_INLINE uint8_t pwm_tim_en_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cr.bit_field.tim_en;
}

__STATIC_INLINE uint8_t pwm_dben_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cr.bit_field.dben;
}

__STATIC_INLINE uint8_t pwm_enb_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cr.bit_field.pwm_enb;
}

__STATIC_INLINE uint8_t pwm_ena_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cr.bit_field.pwm_ena;
}

__STATIC_INLINE uint32_t pwm_cfg_get(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.val;
}

__STATIC_INLINE uint8_t pwm_int_cmp_b_mod_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.int_cmp_b_mod;
}

__STATIC_INLINE uint8_t pwm_int_cmp_a_mod_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.int_cmp_a_mod;
}

__STATIC_INLINE uint8_t pwm_tim_once_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.tim_once;
}

__STATIC_INLINE uint8_t pwm_div_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.div;
}

__STATIC_INLINE uint8_t pwm_cap_mod_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.cap_mod;
}

__STATIC_INLINE uint8_t pwm_cap_edg_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.cap_edg;
}

__STATIC_INLINE uint8_t pwm_trig_clr_en_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.trig_clr_en;
}

__STATIC_INLINE uint8_t pwm_trig_sel_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.trig_sel;
}

__STATIC_INLINE uint8_t pwm_trig_mod_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.trig_mod;
}

__STATIC_INLINE uint8_t pwm_cnt_mode_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.cnt_mode;
}

__STATIC_INLINE uint8_t pwm_invb_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.pwm_invb;
}

__STATIC_INLINE uint8_t pwm_inva_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cfg.bit_field.pwm_inva;
}

__STATIC_INLINE uint32_t pwm_load_get(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->load.val;
}

__STATIC_INLINE uint16_t pwm_db_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->load.bit_field.pwm_db;
}

__STATIC_INLINE uint16_t pwm_load_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->load.bit_field.load;
}

__STATIC_INLINE uint32_t pwm_cmp_get(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cmp.val;
}

__STATIC_INLINE uint16_t pwm_cmp_b_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cmp.bit_field.cmp_b;
}

__STATIC_INLINE uint16_t pwm_cmp_a_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->cmp.bit_field.cmp_a;
}

__STATIC_INLINE uint32_t pwm_trig_get(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->trig.val;
}

__STATIC_INLINE uint16_t pwm_trig_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->trig.bit_field.pwm_trig;
}

__STATIC_INLINE uint32_t pwm_count_get(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->count.val;
}

__STATIC_INLINE uint16_t pwm_count_getf(uint32_t base)
{
    return ((t_hwp_pwm_t*)(base))->count.bit_field.count;
}


//--------------------------------------------------------------------------------

__STATIC_INLINE void pwm_cr_pack(uint32_t base, uint8_t cap_en, uint8_t tim_en, uint8_t dben, uint8_t pwm_enb, uint8_t pwm_ena)
{
    ((t_hwp_pwm_t*)(base))->cr.val = ( \
                                    ((uint32_t )cap_en            << 4) \
                                  | ((uint32_t )tim_en            << 3) \
                                  | ((uint32_t )dben              << 2) \
                                  | ((uint32_t )pwm_enb           << 1) \
                                  | ((uint32_t )pwm_ena) \
                                  );
}

__STATIC_INLINE void pwm_cfg_pack(uint32_t base, uint8_t int_cmp_b_mod, uint8_t int_cmp_a_mod, uint8_t tim_once, uint8_t div, uint8_t cap_mod, uint8_t cap_edg, uint8_t trig_clr_en, uint8_t trig_sel, uint8_t trig_mod, uint8_t cnt_mode, uint8_t pwm_invb, uint8_t pwm_inva)
{
    ((t_hwp_pwm_t*)(base))->cfg.val = ( \
                                    ((uint32_t )int_cmp_b_mod     << 22) \
                                  | ((uint32_t )int_cmp_a_mod     << 20) \
                                  | ((uint32_t )tim_once          << 19) \
                                  | ((uint32_t )div               << 13) \
                                  | ((uint32_t )cap_mod           << 12) \
                                  | ((uint32_t )cap_edg           << 10) \
                                  | ((uint32_t )trig_clr_en       << 9) \
                                  | ((uint32_t )trig_sel          << 6) \
                                  | ((uint32_t )trig_mod          << 4) \
                                  | ((uint32_t )cnt_mode          << 2) \
                                  | ((uint32_t )pwm_invb          << 1) \
                                  | ((uint32_t )pwm_inva) \
                                  );
}

__STATIC_INLINE void pwm_load_pack(uint32_t base, uint16_t pwm_db, uint16_t load)
{
    ((t_hwp_pwm_t*)(base))->load.val = ( \
                                    ((uint32_t )pwm_db            << 16) \
                                  | ((uint32_t )load) \
                                  );
}

__STATIC_INLINE void pwm_cmp_pack(uint32_t base, uint16_t cmp_b, uint16_t cmp_a)
{
    ((t_hwp_pwm_t*)(base))->cmp.val = ( \
                                    ((uint32_t )cmp_b             << 16) \
                                  | ((uint32_t )cmp_a) \
                                  );
}


//--------------------------------------------------------------------------------

__STATIC_INLINE void pwm_cr_unpack(uint32_t base, uint8_t * cap_en, uint8_t * tim_en, uint8_t * dben, uint8_t * pwm_enb, uint8_t * pwm_ena)
{
    t_pwm_cr local_val = ((t_hwp_pwm_t*)(base))->cr;

    *cap_en             = local_val.bit_field.cap_en;
    *tim_en             = local_val.bit_field.tim_en;
    *dben               = local_val.bit_field.dben;
    *pwm_enb            = local_val.bit_field.pwm_enb;
    *pwm_ena            = local_val.bit_field.pwm_ena;
}

__STATIC_INLINE void pwm_cfg_unpack(uint32_t base, uint8_t * int_cmp_b_mod, uint8_t * int_cmp_a_mod, uint8_t * tim_once, uint8_t * div, uint8_t * cap_mod, uint8_t * cap_edg, uint8_t * trig_clr_en, uint8_t * trig_sel, uint8_t * trig_mod, uint8_t * cnt_mode, uint8_t * pwm_invb, uint8_t * pwm_inva)
{
    t_pwm_cfg local_val = ((t_hwp_pwm_t*)(base))->cfg;

    *int_cmp_b_mod      = local_val.bit_field.int_cmp_b_mod;
    *int_cmp_a_mod      = local_val.bit_field.int_cmp_a_mod;
    *tim_once           = local_val.bit_field.tim_once;
    *div                = local_val.bit_field.div;
    *cap_mod            = local_val.bit_field.cap_mod;
    *cap_edg            = local_val.bit_field.cap_edg;
    *trig_clr_en        = local_val.bit_field.trig_clr_en;
    *trig_sel           = local_val.bit_field.trig_sel;
    *trig_mod           = local_val.bit_field.trig_mod;
    *cnt_mode           = local_val.bit_field.cnt_mode;
    *pwm_invb           = local_val.bit_field.pwm_invb;
    *pwm_inva           = local_val.bit_field.pwm_inva;
}

__STATIC_INLINE void pwm_load_unpack(uint32_t base, uint16_t * pwm_db, uint16_t * load)
{
    t_pwm_load local_val = ((t_hwp_pwm_t*)(base))->load;

    *pwm_db             = local_val.bit_field.pwm_db;
    *load               = local_val.bit_field.load;
}

__STATIC_INLINE void pwm_cmp_unpack(uint32_t base, uint16_t * cmp_b, uint16_t * cmp_a)
{
    t_pwm_cmp local_val = ((t_hwp_pwm_t*)(base))->cmp;

    *cmp_b              = local_val.bit_field.cmp_b;
    *cmp_a              = local_val.bit_field.cmp_a;
}

#endif




