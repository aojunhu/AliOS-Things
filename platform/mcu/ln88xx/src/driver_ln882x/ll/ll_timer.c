/**
 ****************************************************************************************
 *
 * @file ll_timer.c
 *
 * @brief LL timer driver.
 *
 * Copyright (C) LightningSemi electronics 2016-2017
 *
 *
 ****************************************************************************************
 */

#include "reg_timer.h"
#include "ll/ll_timer.h"

// same register interval is 5 bytes.
#define TIMERX_OFFSET   5


typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        timerXloadcountregister : 24; /*23: 0, Value to be loaded into Timer1. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMERXLOADCOUNT;


typedef union
{
    uint32_t val;
    struct
    {
        uint32_t     timerXcurrentvalueregister : 24; /*23: 0, Current Value of Timer1. When TIM_NEWMODE=0, this register is supported only when timer_N_clk is synchronous to pclk. Reading this register when using independent clocks results in an undefined value. When TIM_NEWMODE=1, no restrictions apply.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMERXCURRENTVALUE;


typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                   timerXenable :  1; /* 0: 0, Timer enable bit for Timer1: 0 -- disable, 1 --enable*/
        uint32_t                     timerXmode :  1; /* 1: 1, Timer mode for Timer1: 0--free-running mode, 1--user-defined count mode*/
        uint32_t            timerXinterruptmask :  1; /* 2: 2, Timer interrupt mask for Timer1: 0--not masked, 1--masked*/
        uint32_t                      timerXpwm :  1; /* 3: 3,                             NA*/
        uint32_t                     reserved_0 : 28; /*31: 4, Loaded into the counter as the loaded value, which is written coherently. Bits from RTC_CNT_WIDTH and above are read and written as 0 when RTC_CNT_WIDTH is less than 31.*/
    } bit_field;
} T_TIMER_TIMERXCONTROLREG;


typedef union
{
    uint32_t val;
    struct
    {
        uint32_t   timerXendofinterruptregister :  1; /* 0: 0, Reading from this register returns all zeroes (0) and clears the interrupt from Timer1.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMERXEOI;


typedef union
{
    uint32_t val;
    struct
    {
        uint32_t  timerXinterruptstatusregister :  1; /* 0: 0, Contains the interrupt status for Timer1.*/
        uint32_t                     reserved_0 : 31; /*31: 1,                             NA*/
    } bit_field;
} T_TIMER_TIMERXINTSTATUS;


typedef union
{
    uint32_t val;
    struct
    {
        uint32_t       timerXloadcount2register : 24; /*23: 0, Value to be loaded into Timer1. This is the value from which counting commences. Any value written to this register is loaded into the associated timer.*/
        uint32_t                     reserved_0 :  8; /*31:24,                             NA*/
    } bit_field;
} T_TIMER_TIMERXLOADCOUNT2;

/******************************************/
/**********  LoadCount Register  **********/
/******************************************/

/**
 * @brief Get timer loadcount.
 * 
 * @param index timer index.
 * @return uint32_t loadcount value.
 */
uint32_t LL_TIMER_LoadCount_Get(uint8_t index)
{
    return (((T_TIMER_TIMERXLOADCOUNT *) &hwp_timer->timer1loadcount ) + (index - 1) * TIMERX_OFFSET)->val;
}


/**
 * @brief Set timer loadcount.
 * 
 * @param index timer index.
 * @param loadcount loadcount value to be set.
 */
void LL_TIMER_LoadCount_Set(uint8_t index, uint32_t loadcount)
{
    (((T_TIMER_TIMERXLOADCOUNT *) &hwp_timer->timer1loadcount ) + (index - 1) * TIMERX_OFFSET)->val = loadcount;
}


/******************************************/
/********  CurrentValue Register  *********/
/******************************************/

/**
 * @brief Get timer currentvlaue.
 * 
 * @param index timer index.
 * @return uint32_t currentvalue.
 */
uint32_t LL_TIMER_CurrentValue_Get(uint8_t index)
{
    return ( ((T_TIMER_TIMERXCURRENTVALUE *) &hwp_timer->timer1currentvalue ) + (index - 1) * TIMERX_OFFSET )->val;
}


/******************************************/
/********    Control Register     *********/
/******************************************/

/**
 * @brief Get timer control register value.
 * 
 * @param index timer index.
 * @return uint32_t
 */
uint32_t LL_TIMER_Control_Get(uint8_t index)
{
    return ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
}


/**
 * @brief Set timer control register.
 * 
 * @param index timer index.
 * @param value 
 */
void LL_TIMER_Control_Set(uint8_t index, uint8_t value)
{
    ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val = value;
}


/**
 * @brief Enable/Disable timer.
 * 
 * @param index timer index.
 * @param enable 
 */
void LL_TIMER_Enable(uint8_t index, bool enable)
{
    uint32_t temp = ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
    if (enable) {
        temp |= TIMER_ENABLE_BIT;
    } else {
        temp &= ~TIMER_ENABLE_BIT;
    }
    ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val = temp;
}


/**
 * @brief Set timer mode, user-defined mode means "auto-reload", and free-running
 *  mode means "singl-shot".
 * 
 * @param index timer index.
 * @param mode 
 */
void LL_TIMER_Mode_Set(uint8_t index, uint8_t mode)
{
    uint32_t temp = ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
    if (mode) {
        temp |= TIMER_MODE_BIT;
    } else {
        temp &= ~TIMER_MODE_BIT;
    }
    ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val = temp;
}


/**
 * @brief Set timer interrupt mask.
 * 
 * @param index timer index.
 * @param mask 
 */
void LL_TIMER_IntMask_Set(uint8_t index, uint8_t mask)
{
    uint32_t temp = ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
    if (mask) {
        temp |= TIMER_INTERRUPT_MASK_BIT;
    } else {
        temp &= ~TIMER_INTERRUPT_MASK_BIT;
    }
    ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val = temp;
}


/**
 * @brief Enable/Disable PWM function.
 * 
 * @param index
 * @param enable 
 */
void LL_TIMER_PWM_Enable(uint8_t index, uint8_t enable)
{
    uint32_t temp = ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
    if (enable) {
        temp |= TIMER_PWM_BIT;
    } else {
        temp &= ~TIMER_PWM_BIT;
    }
    ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val = temp;
}


/**
 * @brief Check whether timer is enabled or disabled.
 * 
 * @param index 
 * @return uint8_t 
 */
uint8_t LL_TIMER_EnableStat_Get(uint8_t index)
{
    uint32_t temp = ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
    return (temp & TIMER_ENABLE_BIT);
}


/**
 * @brief Check timer mode.
 * 
 * @param index 
 * @return uint8_t 
 */
uint8_t LL_TIMER_Mode_Get(uint8_t index)
{
    uint32_t temp = ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
    return (temp & TIMER_MODE_BIT);
}


/**
 * @brief Check timer interrupt mask.
 * 
 * @param index 
 * @return uint8_t 
 */
uint8_t LL_TIMER_IntMask_Get(uint8_t index)
{
    uint32_t temp = ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
    return (temp & TIMER_INTERRUPT_MASK_BIT);
}


/**
 * @brief Check whether timer enable PWM function or not.
 * 
 * @param index 
 * @return uint8_t 
 */
uint8_t LL_TIMER_PWMStat_Get(uint8_t index)
{
    uint32_t temp = ( ((T_TIMER_TIMERXCONTROLREG *) &hwp_timer->timer1controlreg ) + (index - 1) * TIMERX_OFFSET )->val;
    return (temp & TIMER_PWM_BIT);
}



/******************************************/
/********      EOI Register       *********/
/******************************************/
/**
 * @brief Clear timer interrupt.
 * 
 * @param index 
 * @return uint8_t 
 */
uint8_t LL_TIMER_INT_Clear(uint8_t index)
{
    return ((T_TIMER_TIMERXEOI *)(&hwp_timer->timer1eoi + ( index - 1 ) * TIMERX_OFFSET))->val;
}


/******************************************/
/********   IntStatus Register    *********/
/******************************************/

/**
 * @brief Get timer interrupt status.
 * 
 * @param index 
 * @return uint8_t 
 */
uint8_t LL_TIMER_IntStat_Get(uint8_t index)
{
    return (uint8_t)( ((T_TIMER_TIMERXINTSTATUS *)&hwp_timer->timer1intstatus + ( index - 1 ) * TIMERX_OFFSET)->val );
}



/******************************************/
/*******   Global Timer Register    *******/
/******************************************/
/**
 * @brief Get all timer interrupt status, one bit for one timer.
 * 
 * @return uint8_t 
 */
uint8_t LL_TIMERS_IntStat_Get( void )
{
    return hwp_timer->timersintstatus.val;
}


/**
 * @brief Clear all timer interrupt.
 * 
 * @return uint8_t 
 */
void LL_TIMERS_INT_Clear( void )
{
    uint32_t temp =  hwp_timer->timerseoi.val;
    temp = temp;
}


/**
 * @brief Get the raw interrupt status of all timers.
 * 
 * @return uint8_t 
 */
uint8_t LL_TIMERS_RawIntStat_Get( void )
{
    return hwp_timer->timersrawintstatus.val;
}

#if 0
// no need to use this function.
/**
 * @brief Return timer component version.
 * 
 * @return uint32_t 
 */
uint32_t LL_TIMERS_ComponentVersion_Get()
{
    return hwp_timer->timerscomponentversion.val;
}
#endif

/***************  4个定时器的LoadCount2 寄存器 *********************/

/**
 * @brief Set loadcount2 for the specified timer.
 * 
 * @param index timer index.
 * @param loadcount2
 */
void LL_TIMER_LoadCount2_Set(uint8_t index, uint32_t loadcount2)
{
    ((T_TIMER_TIMERXLOADCOUNT2 *)&hwp_timer->timer1loadcount2 + (index - 1))->val = loadcount2;
}

/**
 * @brief Get loadcount2 of the specified timer.
 * 
 * @param index timer index.
 * @return uint32_t 
 */
uint32_t LL_TIMER_LoadCount2_Get(uint8_t index)
{
    return ((T_TIMER_TIMERXLOADCOUNT2 *)&hwp_timer->timer1loadcount2 + (index - 1))->val;
}

