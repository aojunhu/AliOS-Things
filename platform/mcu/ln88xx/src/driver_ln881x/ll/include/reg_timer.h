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
#ifndef __REG_TIMER_H__
#define __REG_TIMER_H__

#ifdef __cpluscplus
    extern "C" {
#endif // __cpluscplus

#include "ln88xx.h"

//timer1loadcount
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        timer1loadcountregister : 24; /*23: 0, Value to be loaded into Timer1. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER1LOADCOUNT;

//timer1currentvalue
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t     timer1currentvalueregister : 24; /*23: 0, Current Value of Timer1. When TIM_NEWMODE=0, this register is supported only when timer_N_clk is synchronous to pclk. Reading this register when using independent clocks results in an undefined value. When TIM_NEWMODE=1, no restrictions apply.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER1CURRENTVALUE;

//timer1controlreg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                   timer1enable :  1; /* 0: 0, Timer enable bit for Timer1
0 每 disable
1 每 enable*/
        uint32_t                     timer1mode :  1; /* 1: 1, Timer mode for Timer1
0 每 free-running mode
1 每 user-defined count mode*/
        uint32_t            timer1interruptmask :  1; /* 2: 2, Timer interrupt mask for Timer1
0 每 not masked
1 每 masked*/
        uint32_t                      timer1pwm :  1; /* 3: 3,                             NA*/
        uint32_t                     reserved_0 : 28; /*31: 4, Loaded into the counter as the loaded value, which is written coherently. Bits from RTC_CNT_WIDTH and above are read and written as 0 when RTC_CNT_WIDTH is less than 31.*/
    } bit_field;
} T_TIMER_TIMER1CONTROLREG;

//timer1eoi
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t   timer1endofinterruptregister :  1; /* 0: 0, Reading from this register returns all zeroes (0) and clears the interrupt from Timer1.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMER1EOI;

//timer1intstatus
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t  timer1interruptstatusregister :  1; /* 0: 0, Contains the interrupt status for Timer1.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMER1INTSTATUS;

//timer2loadcount
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        timer2loadcountregister : 24; /*23: 0, Value to be loaded into Timer2. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER2LOADCOUNT;

//timer2currentvalue
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t     timer2currentvalueregister : 24; /*23: 0, Current Value of Timer2. When TIM_NEWMODE=0, this register is supported only when timer_N_clk is synchronous to pclk. Reading this register when using independent clocks results in an undefined value. When TIM_NEWMODE=1, no restrictions apply.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER2CURRENTVALUE;

//timer2controlreg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                   timer2enable :  1; /* 0: 0, Timer enable bit for Timer2
0 每 disable
1 每 enable*/
        uint32_t                     timer2mode :  1; /* 1: 1, Timer mode for Timer2
0 每 free-running mode
1 每 user-defined count mode*/
        uint32_t            timer2interruptmask :  1; /* 2: 2, Timer interrupt mask for Timer2
0 每 not masked
1 每 masked*/
        uint32_t                      timer2pwm :  1; /* 3: 3,                             NA*/
        uint32_t                     reserved_0 : 28; /*31: 4, Loaded into the counter as the loaded value, which is written coherently. Bits from RTC_CNT_WIDTH and above are read and written as 0 when RTC_CNT_WIDTH is less than 31.*/
    } bit_field;
} T_TIMER_TIMER2CONTROLREG;

//timer2eoi
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t   timer2endofinterruptregister :  1; /* 0: 0, Reading from this register returns all zeroes (0) and clears the interrupt from Timer2.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMER2EOI;

//timer2ntstatus
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t  timer2interruptstatusregister :  1; /* 0: 0, Contains the interrupt status for Timer2.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMER2NTSTATUS;

//timer3loadcount
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        timer3loadcountregister : 24; /*23: 0, Value to be loaded into Timer3. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER3LOADCOUNT;

//timer3currentvalue
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t     timer3currentvalueregister : 24; /*23: 0, Current Value of Timer3. When TIM_NEWMODE=0, this register is supported only when timer_N_clk is synchronous to pclk. Reading this register when using independent clocks results in an undefined value. When TIM_NEWMODE=1, no restrictions apply.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER3CURRENTVALUE;

//timer3controlreg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                   timer3enable :  1; /* 0: 0, Timer enable bit for Timer3
0 每 disable
1 每 enable*/
        uint32_t                     timer3mode :  1; /* 1: 1, Timer mode for Timer3
0 每 free-running mode
1 每 user-defined count mode*/
        uint32_t            timer3interruptmask :  1; /* 2: 2, Timer interrupt mask for Timer3
0 每 not masked
1 每 masked*/
        uint32_t                      timer3pwm :  1; /* 3: 3,                             NA*/
        uint32_t                     reserved_0 : 28; /*31: 4, Loaded into the counter as the loaded value, which is written coherently. Bits from RTC_CNT_WIDTH and above are read and written as 0 when RTC_CNT_WIDTH is less than 31.*/
    } bit_field;
} T_TIMER_TIMER3CONTROLREG;

//timer3eoi
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t   timer3endofinterruptregister :  1; /* 0: 0, Reading from this register returns all zeroes (0) and clears the interrupt from Timer3.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMER3EOI;

//timer3intstatus
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t  timer3interruptstatusregister :  1; /* 0: 0, Contains the interrupt status for Timer3.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMER3INTSTATUS;

//timer4loadcount
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        timer4loadcountregister : 24; /*23: 0, Value to be loaded into Timer4. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER4LOADCOUNT;

//timer4currentvalue
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t     timer4currentvalueregister : 24; /*23: 0, Current Value of Timer4. When TIM_NEWMODE=0, this register is supported only when timer_N_clk is synchronous to pclk. Reading this register when using independent clocks results in an undefined value. When TIM_NEWMODE=1, no restrictions apply.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER4CURRENTVALUE;

//timer4controlreg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                   timer4enable :  1; /* 0: 0, Timer enable bit for Timer4
0 每 disable
1 每 enable*/
        uint32_t                     timer4mode :  1; /* 1: 1, Timer mode for Timer4
0 每 free-running mode
1 每 user-defined count mode*/
        uint32_t            timer4interruptmask :  1; /* 2: 2, Timer interrupt mask for Timer4
0 每 not masked
1 每 masked*/
        uint32_t                      timer4pwm :  1; /* 3: 3,                             NA*/
        uint32_t                     reserved_0 : 28; /*31: 4, Loaded into the counter as the loaded value, which is written coherently. Bits from RTC_CNT_WIDTH and above are read and written as 0 when RTC_CNT_WIDTH is less than 31.*/
    } bit_field;
} T_TIMER_TIMER4CONTROLREG;

//timer4eoi
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t   timer4endofinterruptregister :  1; /* 0: 0, Reading from this register returns all zeroes (0) and clears the interrupt from Timer4.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMER4EOI;

//timer4ntstatus
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t  timer4interruptstatusregister :  1; /* 0: 0, Contains the interrupt status for Timer4.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMER4NTSTATUS;

//timersintstatus
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t   timerinterruptstatusregister :  4; /* 3: 0, Contains the interrupt status of all timers in the component. If a bit of
this register is 0, then the corresponding timer interrupt is not active 每
and the corresponding interrupt could be on either the timer_intr bus or the timer_intr_n bus, depending on the interrupt polarity you have
chosen. Similarly, if a bit of this register is 1, then the corresponding
interrupt bit has been set in the relevant interrupt bus. In both cases, the status reported is the status after the interrupt mask has been applied. Reading from this register does not clear any active interrupts:
0 每 either timer_intr or timer_intr_n is not active after masking
1 每 either timer_intr or timer_intr_n is active after masking*/
        uint32_t                     reserved_0 : 28; /*31: 4,                             NA*/
    } bit_field;
} T_TIMER_TIMERSINTSTATUS;

//timerseoi
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t   timersendofinterruptregister :  4; /* 3: 0, Reading this register returns all zeroes (0) and clears all active
interrupts.*/
        uint32_t                     reserved_0 : 28; /*31: 4,                             NA*/
    } bit_field;
} T_TIMER_TIMERSEOI;

//timersrawintstatus
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t timersrawinterruptstatusregister :  4; /* 3: 0, The register contains the unmasked interrupt status of all timers in the component.
0 每 either timer_intr or timer_intr_n is not active prior to masking
1 每 either timer_intr or timer_intr_n is active prior to masking*/
        uint32_t                     reserved_0 : 28; /*31: 4,                             NA*/
    } bit_field;
} T_TIMER_TIMERSRAWINTSTATUS;

//timerscomponentversion
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t timerscomponentversionregister : 32; /*31: 0, Current revision number of the DW_apb_timers component. */
    } bit_field;
} T_TIMER_TIMERSCOMPONENTVERSION;

//timer1loadcount2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t       timer1loadcount2register : 24; /*23: 0, Value to be loaded into Timer1. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER1LOADCOUNT2;

//timer2loadcount2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t       timer2loadcount2register : 24; /*23: 0, Value to be loaded into Timer2. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER2LOADCOUNT2;

//timer3loadcount2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t       timer3loadcount2register : 24; /*23: 0, Value to be loaded into Timer3. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER3LOADCOUNT2;

//timer4loadcount2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t       timer4loadcount2register : 24; /*23: 0, Value to be loaded into Timer4. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMER4LOADCOUNT2;

//Registers Mapping to the same address

typedef struct
{
    volatile         T_TIMER_TIMER1LOADCOUNT                timer1loadcount; /*  0x0,    RW, 0x00000000,     Timer1 Load Count Register*/
    volatile      T_TIMER_TIMER1CURRENTVALUE             timer1currentvalue; /*  0x4,    RO, 0x00FFFFFF,  Timer1 Current Value Register*/
    volatile        T_TIMER_TIMER1CONTROLREG               timer1controlreg; /*  0x8,    RW, 0x00000000,        Timer1 Control Register*/
    volatile               T_TIMER_TIMER1EOI                      timer1eoi; /*  0xc,    RO, 0x00000000, Timer1 End-of-Interrupt Register*/
    volatile         T_TIMER_TIMER1INTSTATUS                timer1intstatus; /* 0x10,    RO, 0x00000000, Timer1 Interrupt Status Register*/
    volatile         T_TIMER_TIMER2LOADCOUNT                timer2loadcount; /* 0x14,    RW, 0x00000000,     Timer2 Load Count Register*/
    volatile      T_TIMER_TIMER2CURRENTVALUE             timer2currentvalue; /* 0x18,    RO, 0x00FFFFFF,  Timer2 Current Value Register*/
    volatile        T_TIMER_TIMER2CONTROLREG               timer2controlreg; /* 0x1c,    RW, 0x00000000,        Timer2 Control Register*/
    volatile               T_TIMER_TIMER2EOI                      timer2eoi; /* 0x20,    RO, 0x00000000, Timer2 End-of-Interrupt Register*/
    volatile          T_TIMER_TIMER2NTSTATUS                 timer2ntstatus; /* 0x24,    RO, 0x00000000, Timer2 Interrupt Status Register*/
    volatile         T_TIMER_TIMER3LOADCOUNT                timer3loadcount; /* 0x28,    RW, 0x00000000,     Timer3 Load Count Register*/
    volatile      T_TIMER_TIMER3CURRENTVALUE             timer3currentvalue; /* 0x2c,    RO, 0x00FFFFFF,  Timer3 Current Value Register*/
    volatile        T_TIMER_TIMER3CONTROLREG               timer3controlreg; /* 0x30,    RW, 0x00000000,        Timer3 Control Register*/
    volatile               T_TIMER_TIMER3EOI                      timer3eoi; /* 0x34,    RO, 0x00000000, Timer3 End-of-Interrupt Register*/
    volatile         T_TIMER_TIMER3INTSTATUS                timer3intstatus; /* 0x38,    RO, 0x00000000, Timer3 Interrupt Status Register*/
    volatile         T_TIMER_TIMER4LOADCOUNT                timer4loadcount; /* 0x3c,    RW, 0x00000000,     Timer4 Load Count Register*/
    volatile      T_TIMER_TIMER4CURRENTVALUE             timer4currentvalue; /* 0x40,    RO, 0x00FFFFFF,  Timer4 Current Value Register*/
    volatile        T_TIMER_TIMER4CONTROLREG               timer4controlreg; /* 0x44,    RW, 0x00000000,        Timer4 Control Register*/
    volatile               T_TIMER_TIMER4EOI                      timer4eoi; /* 0x48,    RO, 0x00000000, Timer4 End-of-Interrupt Register*/
    volatile          T_TIMER_TIMER4NTSTATUS                 timer4ntstatus; /* 0x4c,    RO, 0x00000000, Timer4 Interrupt Status Register*/
    volatile                        uint32_t                 reserved_0[20];
    volatile         T_TIMER_TIMERSINTSTATUS                timersintstatus; /* 0xa0,    RO, 0x00000000, Timers Interrupt Status Register*/
    volatile               T_TIMER_TIMERSEOI                      timerseoi; /* 0xa4,    RO, 0x00000000, Timers End-of-Interrupt Register*/
    volatile      T_TIMER_TIMERSRAWINTSTATUS             timersrawintstatus; /* 0xa8,    RO, 0x00000000, Timers Raw Interrupt Status Register*/
    volatile  T_TIMER_TIMERSCOMPONENTVERSION         timerscomponentversion; /* 0xac,    RO, 0x3231302A, Timers Raw Interrupt Status Register*/
    volatile        T_TIMER_TIMER1LOADCOUNT2               timer1loadcount2; /* 0xb0,    RW, 0x00000000,   Timer1 Load Count 2 Register*/
    volatile        T_TIMER_TIMER2LOADCOUNT2               timer2loadcount2; /* 0xb4,    RW, 0x00000000,   Timer2 Load Count 2 Register*/
    volatile        T_TIMER_TIMER3LOADCOUNT2               timer3loadcount2; /* 0xb8,    RW, 0x00000000,   Timer3 Load Count 2 Register*/
    volatile        T_TIMER_TIMER4LOADCOUNT2               timer4loadcount2; /* 0xbc,    RW, 0x00000000,   Timer4 Load Count 2 Register*/
} T_HWP_TIMER_T;

#define hwp_timer ((T_HWP_TIMER_T*)REG_TIMER_BASE)


__STATIC_INLINE uint32_t timer_timer1loadcount_get(void)
{
    return hwp_timer->timer1loadcount.val;
}

__STATIC_INLINE void timer_timer1loadcount_set(uint32_t value)
{
    hwp_timer->timer1loadcount.val = value;
}

__STATIC_INLINE void timer_timer1loadcount_pack(uint32_t timer1loadcountregister)
{
    hwp_timer->timer1loadcount.val = (((uint32_t)timer1loadcountregister << 0));
}

__STATIC_INLINE void timer_timer1loadcount_unpack(uint32_t* timer1loadcountregister)
{
    T_TIMER_TIMER1LOADCOUNT localVal = hwp_timer->timer1loadcount;

    *timer1loadcountregister = localVal.bit_field.timer1loadcountregister;
}

__STATIC_INLINE uint32_t timer_timer1loadcountregister_getf(void)
{
    return hwp_timer->timer1loadcount.bit_field.timer1loadcountregister;
}

__STATIC_INLINE void timer_timer1loadcountregister_setf(uint32_t timer1loadcountregister)
{
    hwp_timer->timer1loadcount.bit_field.timer1loadcountregister = timer1loadcountregister;
}

__STATIC_INLINE uint32_t timer_timer1currentvalue_get(void)
{
    return hwp_timer->timer1currentvalue.val;
}

__STATIC_INLINE void timer_timer1currentvalue_unpack(uint32_t* timer1currentvalueregister)
{
    T_TIMER_TIMER1CURRENTVALUE localVal = hwp_timer->timer1currentvalue;

    *timer1currentvalueregister = localVal.bit_field.timer1currentvalueregister;
}

__STATIC_INLINE uint32_t timer_timer1currentvalueregister_getf(void)
{
    return hwp_timer->timer1currentvalue.bit_field.timer1currentvalueregister;
}

__STATIC_INLINE uint32_t timer_timer1controlreg_get(void)
{
    return hwp_timer->timer1controlreg.val;
}

__STATIC_INLINE void timer_timer1controlreg_set(uint32_t value)
{
    hwp_timer->timer1controlreg.val = value;
}

__STATIC_INLINE void timer_timer1controlreg_pack(uint8_t timer1pwm, uint8_t timer1interruptmask, uint8_t timer1mode, uint8_t timer1enable)
{
    hwp_timer->timer1controlreg.val = (((uint32_t)timer1pwm << 3) | ((uint32_t)timer1interruptmask << 2) | ((uint32_t)timer1mode << 1) | ((uint32_t)timer1enable << 0));
}

__STATIC_INLINE void timer_timer1controlreg_unpack(uint8_t* timer1pwm, uint8_t* timer1interruptmask, uint8_t* timer1mode, uint8_t* timer1enable)
{
    T_TIMER_TIMER1CONTROLREG localVal = hwp_timer->timer1controlreg;

    *timer1pwm = localVal.bit_field.timer1pwm;
    *timer1interruptmask = localVal.bit_field.timer1interruptmask;
    *timer1mode = localVal.bit_field.timer1mode;
    *timer1enable = localVal.bit_field.timer1enable;
}

__STATIC_INLINE uint8_t timer_timer1pwm_getf(void)
{
    return hwp_timer->timer1controlreg.bit_field.timer1pwm;
}

__STATIC_INLINE void timer_timer1pwm_setf(uint8_t timer1pwm)
{
    hwp_timer->timer1controlreg.bit_field.timer1pwm = timer1pwm;
}

__STATIC_INLINE uint8_t timer_timer1interruptmask_getf(void)
{
    return hwp_timer->timer1controlreg.bit_field.timer1interruptmask;
}

__STATIC_INLINE void timer_timer1interruptmask_setf(uint8_t timer1interruptmask)
{
    hwp_timer->timer1controlreg.bit_field.timer1interruptmask = timer1interruptmask;
}

__STATIC_INLINE uint8_t timer_timer1mode_getf(void)
{
    return hwp_timer->timer1controlreg.bit_field.timer1mode;
}

__STATIC_INLINE void timer_timer1mode_setf(uint8_t timer1mode)
{
    hwp_timer->timer1controlreg.bit_field.timer1mode = timer1mode;
}

__STATIC_INLINE uint8_t timer_timer1enable_getf(void)
{
    return hwp_timer->timer1controlreg.bit_field.timer1enable;
}

__STATIC_INLINE void timer_timer1enable_setf(uint8_t timer1enable)
{
    hwp_timer->timer1controlreg.bit_field.timer1enable = timer1enable;
}

__STATIC_INLINE uint32_t timer_timer1eoi_get(void)
{
    return hwp_timer->timer1eoi.val;
}

__STATIC_INLINE void timer_timer1eoi_unpack(uint8_t* timer1endofinterruptregister)
{
    T_TIMER_TIMER1EOI localVal = hwp_timer->timer1eoi;

    *timer1endofinterruptregister = localVal.bit_field.timer1endofinterruptregister;
}

__STATIC_INLINE uint8_t timer_timer1endofinterruptregister_getf(void)
{
    return hwp_timer->timer1eoi.bit_field.timer1endofinterruptregister;
}

__STATIC_INLINE uint32_t timer_timer1intstatus_get(void)
{
    return hwp_timer->timer1intstatus.val;
}

__STATIC_INLINE void timer_timer1intstatus_unpack(uint8_t* timer1interruptstatusregister)
{
    T_TIMER_TIMER1INTSTATUS localVal = hwp_timer->timer1intstatus;

    *timer1interruptstatusregister = localVal.bit_field.timer1interruptstatusregister;
}

__STATIC_INLINE uint8_t timer_timer1interruptstatusregister_getf(void)
{
    return hwp_timer->timer1intstatus.bit_field.timer1interruptstatusregister;
}

__STATIC_INLINE uint32_t timer_timer2loadcount_get(void)
{
    return hwp_timer->timer2loadcount.val;
}

__STATIC_INLINE void timer_timer2loadcount_set(uint32_t value)
{
    hwp_timer->timer2loadcount.val = value;
}

__STATIC_INLINE void timer_timer2loadcount_pack(uint32_t timer2loadcountregister)
{
    hwp_timer->timer2loadcount.val = (((uint32_t)timer2loadcountregister << 0));
}

__STATIC_INLINE void timer_timer2loadcount_unpack(uint32_t* timer2loadcountregister)
{
    T_TIMER_TIMER2LOADCOUNT localVal = hwp_timer->timer2loadcount;

    *timer2loadcountregister = localVal.bit_field.timer2loadcountregister;
}

__STATIC_INLINE uint32_t timer_timer2loadcountregister_getf(void)
{
    return hwp_timer->timer2loadcount.bit_field.timer2loadcountregister;
}

__STATIC_INLINE void timer_timer2loadcountregister_setf(uint32_t timer2loadcountregister)
{
    hwp_timer->timer2loadcount.bit_field.timer2loadcountregister = timer2loadcountregister;
}

__STATIC_INLINE uint32_t timer_timer2currentvalue_get(void)
{
    return hwp_timer->timer2currentvalue.val;
}

__STATIC_INLINE void timer_timer2currentvalue_unpack(uint32_t* timer2currentvalueregister)
{
    T_TIMER_TIMER2CURRENTVALUE localVal = hwp_timer->timer2currentvalue;

    *timer2currentvalueregister = localVal.bit_field.timer2currentvalueregister;
}

__STATIC_INLINE uint32_t timer_timer2currentvalueregister_getf(void)
{
    return hwp_timer->timer2currentvalue.bit_field.timer2currentvalueregister;
}

__STATIC_INLINE uint32_t timer_timer2controlreg_get(void)
{
    return hwp_timer->timer2controlreg.val;
}

__STATIC_INLINE void timer_timer2controlreg_set(uint32_t value)
{
    hwp_timer->timer2controlreg.val = value;
}

__STATIC_INLINE void timer_timer2controlreg_pack(uint8_t timer2pwm, uint8_t timer2interruptmask, uint8_t timer2mode, uint8_t timer2enable)
{
    hwp_timer->timer2controlreg.val = (((uint32_t)timer2pwm << 3) | ((uint32_t)timer2interruptmask << 2) | ((uint32_t)timer2mode << 1) | ((uint32_t)timer2enable << 0));
}

__STATIC_INLINE void timer_timer2controlreg_unpack(uint8_t* timer2pwm, uint8_t* timer2interruptmask, uint8_t* timer2mode, uint8_t* timer2enable)
{
    T_TIMER_TIMER2CONTROLREG localVal = hwp_timer->timer2controlreg;

    *timer2pwm = localVal.bit_field.timer2pwm;
    *timer2interruptmask = localVal.bit_field.timer2interruptmask;
    *timer2mode = localVal.bit_field.timer2mode;
    *timer2enable = localVal.bit_field.timer2enable;
}

__STATIC_INLINE uint8_t timer_timer2pwm_getf(void)
{
    return hwp_timer->timer2controlreg.bit_field.timer2pwm;
}

__STATIC_INLINE void timer_timer2pwm_setf(uint8_t timer2pwm)
{
    hwp_timer->timer2controlreg.bit_field.timer2pwm = timer2pwm;
}

__STATIC_INLINE uint8_t timer_timer2interruptmask_getf(void)
{
    return hwp_timer->timer2controlreg.bit_field.timer2interruptmask;
}

__STATIC_INLINE void timer_timer2interruptmask_setf(uint8_t timer2interruptmask)
{
    hwp_timer->timer2controlreg.bit_field.timer2interruptmask = timer2interruptmask;
}

__STATIC_INLINE uint8_t timer_timer2mode_getf(void)
{
    return hwp_timer->timer2controlreg.bit_field.timer2mode;
}

__STATIC_INLINE void timer_timer2mode_setf(uint8_t timer2mode)
{
    hwp_timer->timer2controlreg.bit_field.timer2mode = timer2mode;
}

__STATIC_INLINE uint8_t timer_timer2enable_getf(void)
{
    return hwp_timer->timer2controlreg.bit_field.timer2enable;
}

__STATIC_INLINE void timer_timer2enable_setf(uint8_t timer2enable)
{
    hwp_timer->timer2controlreg.bit_field.timer2enable = timer2enable;
}

__STATIC_INLINE uint32_t timer_timer2eoi_get(void)
{
    return hwp_timer->timer2eoi.val;
}

__STATIC_INLINE void timer_timer2eoi_unpack(uint8_t* timer2endofinterruptregister)
{
    T_TIMER_TIMER2EOI localVal = hwp_timer->timer2eoi;

    *timer2endofinterruptregister = localVal.bit_field.timer2endofinterruptregister;
}

__STATIC_INLINE uint8_t timer_timer2endofinterruptregister_getf(void)
{
    return hwp_timer->timer2eoi.bit_field.timer2endofinterruptregister;
}

__STATIC_INLINE uint32_t timer_timer2ntstatus_get(void)
{
    return hwp_timer->timer2ntstatus.val;
}

__STATIC_INLINE void timer_timer2ntstatus_unpack(uint8_t* timer2interruptstatusregister)
{
    T_TIMER_TIMER2NTSTATUS localVal = hwp_timer->timer2ntstatus;

    *timer2interruptstatusregister = localVal.bit_field.timer2interruptstatusregister;
}

__STATIC_INLINE uint8_t timer_timer2interruptstatusregister_getf(void)
{
    return hwp_timer->timer2ntstatus.bit_field.timer2interruptstatusregister;
}

__STATIC_INLINE uint32_t timer_timer3loadcount_get(void)
{
    return hwp_timer->timer3loadcount.val;
}

__STATIC_INLINE void timer_timer3loadcount_set(uint32_t value)
{
    hwp_timer->timer3loadcount.val = value;
}

__STATIC_INLINE void timer_timer3loadcount_pack(uint32_t timer3loadcountregister)
{
    hwp_timer->timer3loadcount.val = (((uint32_t)timer3loadcountregister << 0));
}

__STATIC_INLINE void timer_timer3loadcount_unpack(uint32_t* timer3loadcountregister)
{
    T_TIMER_TIMER3LOADCOUNT localVal = hwp_timer->timer3loadcount;

    *timer3loadcountregister = localVal.bit_field.timer3loadcountregister;
}

__STATIC_INLINE uint32_t timer_timer3loadcountregister_getf(void)
{
    return hwp_timer->timer3loadcount.bit_field.timer3loadcountregister;
}

__STATIC_INLINE void timer_timer3loadcountregister_setf(uint32_t timer3loadcountregister)
{
    hwp_timer->timer3loadcount.bit_field.timer3loadcountregister = timer3loadcountregister;
}

__STATIC_INLINE uint32_t timer_timer3currentvalue_get(void)
{
    return hwp_timer->timer3currentvalue.val;
}

__STATIC_INLINE void timer_timer3currentvalue_unpack(uint32_t* timer3currentvalueregister)
{
    T_TIMER_TIMER3CURRENTVALUE localVal = hwp_timer->timer3currentvalue;

    *timer3currentvalueregister = localVal.bit_field.timer3currentvalueregister;
}

__STATIC_INLINE uint32_t timer_timer3currentvalueregister_getf(void)
{
    return hwp_timer->timer3currentvalue.bit_field.timer3currentvalueregister;
}

__STATIC_INLINE uint32_t timer_timer3controlreg_get(void)
{
    return hwp_timer->timer3controlreg.val;
}

__STATIC_INLINE void timer_timer3controlreg_set(uint32_t value)
{
    hwp_timer->timer3controlreg.val = value;
}

__STATIC_INLINE void timer_timer3controlreg_pack(uint8_t timer3pwm, uint8_t timer3interruptmask, uint8_t timer3mode, uint8_t timer3enable)
{
    hwp_timer->timer3controlreg.val = (((uint32_t)timer3pwm << 3) | ((uint32_t)timer3interruptmask << 2) | ((uint32_t)timer3mode << 1) | ((uint32_t)timer3enable << 0));
}

__STATIC_INLINE void timer_timer3controlreg_unpack(uint8_t* timer3pwm, uint8_t* timer3interruptmask, uint8_t* timer3mode, uint8_t* timer3enable)
{
    T_TIMER_TIMER3CONTROLREG localVal = hwp_timer->timer3controlreg;

    *timer3pwm = localVal.bit_field.timer3pwm;
    *timer3interruptmask = localVal.bit_field.timer3interruptmask;
    *timer3mode = localVal.bit_field.timer3mode;
    *timer3enable = localVal.bit_field.timer3enable;
}

__STATIC_INLINE uint8_t timer_timer3pwm_getf(void)
{
    return hwp_timer->timer3controlreg.bit_field.timer3pwm;
}

__STATIC_INLINE void timer_timer3pwm_setf(uint8_t timer3pwm)
{
    hwp_timer->timer3controlreg.bit_field.timer3pwm = timer3pwm;
}

__STATIC_INLINE uint8_t timer_timer3interruptmask_getf(void)
{
    return hwp_timer->timer3controlreg.bit_field.timer3interruptmask;
}

__STATIC_INLINE void timer_timer3interruptmask_setf(uint8_t timer3interruptmask)
{
    hwp_timer->timer3controlreg.bit_field.timer3interruptmask = timer3interruptmask;
}

__STATIC_INLINE uint8_t timer_timer3mode_getf(void)
{
    return hwp_timer->timer3controlreg.bit_field.timer3mode;
}

__STATIC_INLINE void timer_timer3mode_setf(uint8_t timer3mode)
{
    hwp_timer->timer3controlreg.bit_field.timer3mode = timer3mode;
}

__STATIC_INLINE uint8_t timer_timer3enable_getf(void)
{
    return hwp_timer->timer3controlreg.bit_field.timer3enable;
}

__STATIC_INLINE void timer_timer3enable_setf(uint8_t timer3enable)
{
    hwp_timer->timer3controlreg.bit_field.timer3enable = timer3enable;
}

__STATIC_INLINE uint32_t timer_timer3eoi_get(void)
{
    return hwp_timer->timer3eoi.val;
}

__STATIC_INLINE void timer_timer3eoi_unpack(uint8_t* timer3endofinterruptregister)
{
    T_TIMER_TIMER3EOI localVal = hwp_timer->timer3eoi;

    *timer3endofinterruptregister = localVal.bit_field.timer3endofinterruptregister;
}

__STATIC_INLINE uint8_t timer_timer3endofinterruptregister_getf(void)
{
    return hwp_timer->timer3eoi.bit_field.timer3endofinterruptregister;
}

__STATIC_INLINE uint32_t timer_timer3intstatus_get(void)
{
    return hwp_timer->timer3intstatus.val;
}

__STATIC_INLINE void timer_timer3intstatus_unpack(uint8_t* timer3interruptstatusregister)
{
    T_TIMER_TIMER3INTSTATUS localVal = hwp_timer->timer3intstatus;

    *timer3interruptstatusregister = localVal.bit_field.timer3interruptstatusregister;
}

__STATIC_INLINE uint8_t timer_timer3interruptstatusregister_getf(void)
{
    return hwp_timer->timer3intstatus.bit_field.timer3interruptstatusregister;
}

__STATIC_INLINE uint32_t timer_timer4loadcount_get(void)
{
    return hwp_timer->timer4loadcount.val;
}

__STATIC_INLINE void timer_timer4loadcount_set(uint32_t value)
{
    hwp_timer->timer4loadcount.val = value;
}

__STATIC_INLINE void timer_timer4loadcount_pack(uint32_t timer4loadcountregister)
{
    hwp_timer->timer4loadcount.val = (((uint32_t)timer4loadcountregister << 0));
}

__STATIC_INLINE void timer_timer4loadcount_unpack(uint32_t* timer4loadcountregister)
{
    T_TIMER_TIMER4LOADCOUNT localVal = hwp_timer->timer4loadcount;

    *timer4loadcountregister = localVal.bit_field.timer4loadcountregister;
}

__STATIC_INLINE uint32_t timer_timer4loadcountregister_getf(void)
{
    return hwp_timer->timer4loadcount.bit_field.timer4loadcountregister;
}

__STATIC_INLINE void timer_timer4loadcountregister_setf(uint32_t timer4loadcountregister)
{
    hwp_timer->timer4loadcount.bit_field.timer4loadcountregister = timer4loadcountregister;
}

__STATIC_INLINE uint32_t timer_timer4currentvalue_get(void)
{
    return hwp_timer->timer4currentvalue.val;
}

__STATIC_INLINE void timer_timer4currentvalue_unpack(uint32_t* timer4currentvalueregister)
{
    T_TIMER_TIMER4CURRENTVALUE localVal = hwp_timer->timer4currentvalue;

    *timer4currentvalueregister = localVal.bit_field.timer4currentvalueregister;
}

__STATIC_INLINE uint32_t timer_timer4currentvalueregister_getf(void)
{
    return hwp_timer->timer4currentvalue.bit_field.timer4currentvalueregister;
}

__STATIC_INLINE uint32_t timer_timer4controlreg_get(void)
{
    return hwp_timer->timer4controlreg.val;
}

__STATIC_INLINE void timer_timer4controlreg_set(uint32_t value)
{
    hwp_timer->timer4controlreg.val = value;
}

__STATIC_INLINE void timer_timer4controlreg_pack(uint8_t timer4pwm, uint8_t timer4interruptmask, uint8_t timer4mode, uint8_t timer4enable)
{
    hwp_timer->timer4controlreg.val = (((uint32_t)timer4pwm << 3) | ((uint32_t)timer4interruptmask << 2) | ((uint32_t)timer4mode << 1) | ((uint32_t)timer4enable << 0));
}

__STATIC_INLINE void timer_timer4controlreg_unpack(uint8_t* timer4pwm, uint8_t* timer4interruptmask, uint8_t* timer4mode, uint8_t* timer4enable)
{
    T_TIMER_TIMER4CONTROLREG localVal = hwp_timer->timer4controlreg;

    *timer4pwm = localVal.bit_field.timer4pwm;
    *timer4interruptmask = localVal.bit_field.timer4interruptmask;
    *timer4mode = localVal.bit_field.timer4mode;
    *timer4enable = localVal.bit_field.timer4enable;
}

__STATIC_INLINE uint8_t timer_timer4pwm_getf(void)
{
    return hwp_timer->timer4controlreg.bit_field.timer4pwm;
}

__STATIC_INLINE void timer_timer4pwm_setf(uint8_t timer4pwm)
{
    hwp_timer->timer4controlreg.bit_field.timer4pwm = timer4pwm;
}

__STATIC_INLINE uint8_t timer_timer4interruptmask_getf(void)
{
    return hwp_timer->timer4controlreg.bit_field.timer4interruptmask;
}

__STATIC_INLINE void timer_timer4interruptmask_setf(uint8_t timer4interruptmask)
{
    hwp_timer->timer4controlreg.bit_field.timer4interruptmask = timer4interruptmask;
}

__STATIC_INLINE uint8_t timer_timer4mode_getf(void)
{
    return hwp_timer->timer4controlreg.bit_field.timer4mode;
}

__STATIC_INLINE void timer_timer4mode_setf(uint8_t timer4mode)
{
    hwp_timer->timer4controlreg.bit_field.timer4mode = timer4mode;
}

__STATIC_INLINE uint8_t timer_timer4enable_getf(void)
{
    return hwp_timer->timer4controlreg.bit_field.timer4enable;
}

__STATIC_INLINE void timer_timer4enable_setf(uint8_t timer4enable)
{
    hwp_timer->timer4controlreg.bit_field.timer4enable = timer4enable;
}

__STATIC_INLINE uint32_t timer_timer4eoi_get(void)
{
    return hwp_timer->timer4eoi.val;
}

__STATIC_INLINE void timer_timer4eoi_unpack(uint8_t* timer4endofinterruptregister)
{
    T_TIMER_TIMER4EOI localVal = hwp_timer->timer4eoi;

    *timer4endofinterruptregister = localVal.bit_field.timer4endofinterruptregister;
}

__STATIC_INLINE uint8_t timer_timer4endofinterruptregister_getf(void)
{
    return hwp_timer->timer4eoi.bit_field.timer4endofinterruptregister;
}

__STATIC_INLINE uint32_t timer_timer4ntstatus_get(void)
{
    return hwp_timer->timer4ntstatus.val;
}

__STATIC_INLINE void timer_timer4ntstatus_unpack(uint8_t* timer4interruptstatusregister)
{
    T_TIMER_TIMER4NTSTATUS localVal = hwp_timer->timer4ntstatus;

    *timer4interruptstatusregister = localVal.bit_field.timer4interruptstatusregister;
}

__STATIC_INLINE uint8_t timer_timer4interruptstatusregister_getf(void)
{
    return hwp_timer->timer4ntstatus.bit_field.timer4interruptstatusregister;
}

__STATIC_INLINE uint32_t timer_timersintstatus_get(void)
{
    return hwp_timer->timersintstatus.val;
}

__STATIC_INLINE void timer_timersintstatus_unpack(uint8_t* timerinterruptstatusregister)
{
    T_TIMER_TIMERSINTSTATUS localVal = hwp_timer->timersintstatus;

    *timerinterruptstatusregister = localVal.bit_field.timerinterruptstatusregister;
}

__STATIC_INLINE uint8_t timer_timerinterruptstatusregister_getf(void)
{
    return hwp_timer->timersintstatus.bit_field.timerinterruptstatusregister;
}

__STATIC_INLINE uint32_t timer_timerseoi_get(void)
{
    return hwp_timer->timerseoi.val;
}

__STATIC_INLINE void timer_timerseoi_unpack(uint8_t* timersendofinterruptregister)
{
    T_TIMER_TIMERSEOI localVal = hwp_timer->timerseoi;

    *timersendofinterruptregister = localVal.bit_field.timersendofinterruptregister;
}

__STATIC_INLINE uint8_t timer_timersendofinterruptregister_getf(void)
{
    return hwp_timer->timerseoi.bit_field.timersendofinterruptregister;
}

__STATIC_INLINE uint32_t timer_timersrawintstatus_get(void)
{
    return hwp_timer->timersrawintstatus.val;
}

__STATIC_INLINE void timer_timersrawintstatus_unpack(uint8_t* timersrawinterruptstatusregister)
{
    T_TIMER_TIMERSRAWINTSTATUS localVal = hwp_timer->timersrawintstatus;

    *timersrawinterruptstatusregister = localVal.bit_field.timersrawinterruptstatusregister;
}

__STATIC_INLINE uint8_t timer_timersrawinterruptstatusregister_getf(void)
{
    return hwp_timer->timersrawintstatus.bit_field.timersrawinterruptstatusregister;
}

__STATIC_INLINE uint32_t timer_timerscomponentversion_get(void)
{
    return hwp_timer->timerscomponentversion.val;
}

__STATIC_INLINE void timer_timerscomponentversion_unpack(uint32_t* timerscomponentversionregister)
{
    T_TIMER_TIMERSCOMPONENTVERSION localVal = hwp_timer->timerscomponentversion;

    *timerscomponentversionregister = localVal.bit_field.timerscomponentversionregister;
}

__STATIC_INLINE uint32_t timer_timerscomponentversionregister_getf(void)
{
    return hwp_timer->timerscomponentversion.bit_field.timerscomponentversionregister;
}

__STATIC_INLINE uint32_t timer_timer1loadcount2_get(void)
{
    return hwp_timer->timer1loadcount2.val;
}

__STATIC_INLINE void timer_timer1loadcount2_set(uint32_t value)
{
    hwp_timer->timer1loadcount2.val = value;
}

__STATIC_INLINE void timer_timer1loadcount2_pack(uint32_t timer1loadcount2register)
{
    hwp_timer->timer1loadcount2.val = (((uint32_t)timer1loadcount2register << 0));
}

__STATIC_INLINE void timer_timer1loadcount2_unpack(uint32_t* timer1loadcount2register)
{
    T_TIMER_TIMER1LOADCOUNT2 localVal = hwp_timer->timer1loadcount2;

    *timer1loadcount2register = localVal.bit_field.timer1loadcount2register;
}

__STATIC_INLINE uint32_t timer_timer1loadcount2register_getf(void)
{
    return hwp_timer->timer1loadcount2.bit_field.timer1loadcount2register;
}

__STATIC_INLINE void timer_timer1loadcount2register_setf(uint32_t timer1loadcount2register)
{
    hwp_timer->timer1loadcount2.bit_field.timer1loadcount2register = timer1loadcount2register;
}

__STATIC_INLINE uint32_t timer_timer2loadcount2_get(void)
{
    return hwp_timer->timer2loadcount2.val;
}

__STATIC_INLINE void timer_timer2loadcount2_set(uint32_t value)
{
    hwp_timer->timer2loadcount2.val = value;
}

__STATIC_INLINE void timer_timer2loadcount2_pack(uint32_t timer2loadcount2register)
{
    hwp_timer->timer2loadcount2.val = (((uint32_t)timer2loadcount2register << 0));
}

__STATIC_INLINE void timer_timer2loadcount2_unpack(uint32_t* timer2loadcount2register)
{
    T_TIMER_TIMER2LOADCOUNT2 localVal = hwp_timer->timer2loadcount2;

    *timer2loadcount2register = localVal.bit_field.timer2loadcount2register;
}

__STATIC_INLINE uint32_t timer_timer2loadcount2register_getf(void)
{
    return hwp_timer->timer2loadcount2.bit_field.timer2loadcount2register;
}

__STATIC_INLINE void timer_timer2loadcount2register_setf(uint32_t timer2loadcount2register)
{
    hwp_timer->timer2loadcount2.bit_field.timer2loadcount2register = timer2loadcount2register;
}

__STATIC_INLINE uint32_t timer_timer3loadcount2_get(void)
{
    return hwp_timer->timer3loadcount2.val;
}

__STATIC_INLINE void timer_timer3loadcount2_set(uint32_t value)
{
    hwp_timer->timer3loadcount2.val = value;
}

__STATIC_INLINE void timer_timer3loadcount2_pack(uint32_t timer3loadcount2register)
{
    hwp_timer->timer3loadcount2.val = (((uint32_t)timer3loadcount2register << 0));
}

__STATIC_INLINE void timer_timer3loadcount2_unpack(uint32_t* timer3loadcount2register)
{
    T_TIMER_TIMER3LOADCOUNT2 localVal = hwp_timer->timer3loadcount2;

    *timer3loadcount2register = localVal.bit_field.timer3loadcount2register;
}

__STATIC_INLINE uint32_t timer_timer3loadcount2register_getf(void)
{
    return hwp_timer->timer3loadcount2.bit_field.timer3loadcount2register;
}

__STATIC_INLINE void timer_timer3loadcount2register_setf(uint32_t timer3loadcount2register)
{
    hwp_timer->timer3loadcount2.bit_field.timer3loadcount2register = timer3loadcount2register;
}

__STATIC_INLINE uint32_t timer_timer4loadcount2_get(void)
{
    return hwp_timer->timer4loadcount2.val;
}

__STATIC_INLINE void timer_timer4loadcount2_set(uint32_t value)
{
    hwp_timer->timer4loadcount2.val = value;
}

__STATIC_INLINE void timer_timer4loadcount2_pack(uint32_t timer4loadcount2register)
{
    hwp_timer->timer4loadcount2.val = (((uint32_t)timer4loadcount2register << 0));
}

__STATIC_INLINE void timer_timer4loadcount2_unpack(uint32_t* timer4loadcount2register)
{
    T_TIMER_TIMER4LOADCOUNT2 localVal = hwp_timer->timer4loadcount2;

    *timer4loadcount2register = localVal.bit_field.timer4loadcount2register;
}

__STATIC_INLINE uint32_t timer_timer4loadcount2register_getf(void)
{
    return hwp_timer->timer4loadcount2.bit_field.timer4loadcount2register;
}

__STATIC_INLINE void timer_timer4loadcount2register_setf(uint32_t timer4loadcount2register)
{
    hwp_timer->timer4loadcount2.bit_field.timer4loadcount2register = timer4loadcount2register;
}


#ifdef __cpluscplus
}
#endif // __cpluscplus
#endif


