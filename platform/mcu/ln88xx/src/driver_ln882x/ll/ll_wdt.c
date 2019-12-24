#include "reg_wdt.h"
#include "ll/ll_wdt.h"


/**
 * @brief Enable the watch dog. Once enabled it cannot be disabled.
 * @return This function has no return value.
 */
void LL_WDT_Enable(void)
{
    wdt_wdt_cr_set(wdt_wdt_cr_get() | 0x01);
}


/**
 * @brief Set the watch dog timeout period
 * @param  period: the period to trigger an wdt interrupt. For example WDT_PERIOD_3FF means the period wdt int trigger is 0x3ff cycles
 * @return This function has no return value.
 */
void LL_WDT_TimeoutPeriod(uint8_t period)
{
    wdt_top_setf(period);
}


/**
 * @brief Clears the watchdog interrupt. This can be used to clear the interrupt without restarting the watchdog counter.
 * @return return 1 when an interrupt is triggered.
 */
uint8_t LL_WDT_ClrIRQ(void)
{
    return wdt_interruptclearregister_getf();
}


/**
 * @brief Get the current value of the internal counter
 * @return return the current value of the internal counter.
 */
uint16_t LL_WDT_CurrentCounter(void)
{
    return wdt_wdt_ccvr_get();
}


/**
 * @brief To restart the WDT counter (and clear WDT interrupt.)
 * @return This function has no return value.
 */
void LL_WDT_Restart(void)
{
    wdt_wdt_crr_set(0x76);
}


/**
 * @brief To get the interrupt status of the WDT.
 * @return return the interrupt status. 0 means interrupt is inactive, 1 means interrupt is active.
 */
uint8_t LL_WDT_IntStatus(void)
{
    return wdt_interruptstatusregister_getf();
}

// NOTE: LL has no init function, but has register write function.
/**
 * @brief Reset mode.
 * 
 * @param mode 
 */
void LL_WDT_ResetModeSet(uint8_t mode)
{
    wdt_rmod_setf(mode);
}


/**
 * @brief Reset pulse length.
 * 
 * @param pulse_width 
 */
void LL_WDT_ResetPulseWidthSet(uint8_t pulse_width)
{
    wdt_rpl_setf(pulse_width);
}
