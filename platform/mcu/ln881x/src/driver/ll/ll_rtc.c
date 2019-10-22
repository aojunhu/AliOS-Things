#include "types.h"
#include "reg_rtc.h"
#include "driver/ll/ll_rtc.h"

/**
 * @brief  Get the current value of the internal counter.
 * @return return the interal counter of rtc.
 */
uint32_t LL_RTC_GetCurValue(void)
{
    return rtc_currentcountervalue_getf();
}

/**
 * @brief  Set the match counter of rtc.
 * @param  matchCounter: the match counter of rtc. 
 *         The rtc counter always count forward. when the load counter reach the match counter an interrupt will trigger.
 * @return This function has no return value.
 */
void LL_RTC_SetMatchCounter(uint32_t matchCounter)
{
    rtc_countermatch_setf(matchCounter);
}
uint32_t LL_RTC_GetMatchCounter(void)
{
    return rtc_countermatch_getf();
}

/**
 * @brief  Set the load counter of rtc.
 * @param  loadCounter: the load counter of rtc. It is the value where rtc start counting forward
 * @return This function has no return value.
 */
void LL_RTC_SetLoadCounter(uint32_t loadCounter)
{
    rtc_counterload_setf(loadCounter);
}

/**
 * @brief  To force the counter to wrap when a match occurs
 * @param  en: 1 to enable a wrap, 0 to disable a wrap
 * @return This function has no return value.
 */
void LL_RTC_Wrap(uint8_t en)
{
    rtc_rtc_wen_setf(en);
}

/**
 * @brief  Enable the RTC counter.
 * @param  en: 1 to enable the counter, 0 to disable the counter
 * @return This function has no return value.
 */
void LL_RTC_Enable(uint8_t en)
{
    rtc_rtc_en_setf(en);
}

/**
 * @brief  Set whether to mask the rtc interrupt or not
 * @param  en: 1 to mask the interrupt, 0 to unmask the interrupt
 * @return This function has no return value.
 */
void LL_RTC_IntMask(uint8_t en)
{
    rtc_rtc_mask_setf(en);
}

/**
 * @brief  Set whether to enable the rtc interrupt or not
 * @param  en: 1 to enable the interrupt, 0 to disable the interrupt
 * @return This function has no return value.
 */
void LL_RTC_IntEnable(uint8_t en)
{
    rtc_rtc_ien_setf(en);
}

/**
 * @brief  Get the status of rtc interrupt, after the mask
 * @return The interrupt status after the int mask. 1 means interrupt is active, 0 means interrupt is inactive.
 */
uint8_t LL_RTC_IntStatus(void)
{
    return rtc_rtc_stat_getf();
}

/**
 * @brief  Get the raw status of rtc interrupt, before the mask
 * @return The interrupt status before the int mask. 1 means interrupt is active, 0 means interrupt is inactive.
 */
uint8_t LL_RTC_IntRawStatus(void)
{
    return rtc_rtc_rstat_getf();
}

/**
 * @brief  Clear rtc interrupt
 * @return This function has no return value.
 */
void LL_RTC_ClearInt(void)
{
    rtc_rtc_eoi_getf();
}

