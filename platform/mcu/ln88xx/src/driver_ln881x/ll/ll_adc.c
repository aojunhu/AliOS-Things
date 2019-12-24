#include "reg_adc.h"
#include "ll/ll_adc.h"

#include "reg_wdt.h"
#include "ll/ll_wdt.h"

/////////////////////////////////  MISC_CFG  //////////////////////////////////

/**
 * @brief Update ADC clock division.
 *
 * @param clk_div
 */
void LL_ADC_Div_Set(uint16_t clk_div)
{
    adcc_adc_div_para_m1_setf(clk_div);
    adcc_adcc_div_up_set(1);
}

/**
 * @brief Enabel ADDC DMA.
 *
 * @param en
 */
void LL_ADC_DMA_En(uint8_t en)
{
    adcc_adcc_dma_en_setf(en > 0 ? 1 : 0);
}

// TODO: what?
/**
 * @brief
 *
 * @param avg_cnt
 */
void LL_ADC_AvgCnt_Set(uint8_t avg_cnt)
{
    adcc_avg_cnt_setf(avg_cnt);
}

// TODO: what?
void LL_ADC_AvgEn_Set(uint8_t en)
{
    adcc_avg_en_setf(en > 0 ? 1 : 0);
}

void LL_ADC_DMA_Watermark_Set(uint8_t watermark)
{
    adcc_adcc_dma_watermark_setf(watermark);
}

void LL_ADC_Int_En(uint8_t bitmap)
{
    adcc_intr_en_setf(bitmap);
}

void LL_ADC_PowerDown_Intv_Set(uint8_t pw)
{
    adcc_pwrdn_intv_setf(pw);
}

void LL_ADC_DataSkip_Set(uint8_t skip)
{
    adcc_data_skip_setf(skip);
}

void LL_ADC_Vref_Sel(uint8_t sel)
{
    adcc_adc_vref_sel_setf(sel);
}

// FIXME: what?
void LL_ADC_ClkInv_Set(uint8_t clk_inv)
{
    adcc_adc_clk_inv_setf(clk_inv);
}

///////////////////////////////  ADC_DIV_UP  /////////////////////////////////
void LL_ADC_DivUp_Set(uint8_t en)
{
    adcc_adcc_div_up_set(en > 0);
}


/////////////////////////////////  CHN_EN  ////////////////////////////////////

/**
 * @brief Enable ADDC channels, one bit for one channel.
 *
 * @param chans
 */
void LL_ADC_ChanEnable_Set(uint8_t chanmap)
{
    adcc_chn_en_setf(chanmap);
}

/**
 * @brief Get ADDC enabled channels, one bit for one channel.
 *
 * @return uint8_t
 */
uint8_t LL_ADC_ChanEnable_Get(void)
{
    return adcc_chn_en_getf();
}

////////////////////////////////  ADC_START  /////////////////////////////////

// TODO: rename to LL_ADC_RealTimeMode_Enable()

/**
 * @brief Enable/disable RealTime mode.
 * write 1 to enter RealTime mode.
 *
 * @param on
 */
void LL_ADC_ForeceOn(uint8_t on)
{
    adcc_adc_force_on_setf(on > 0 ? 1 : 0);
}

// TODO: rename to LL_ADC_BatchMode_Enable()
/**
 * @brief Enable/disable Batch mdoe.
 * write 1 to enter Batch mode.
 *
 * @param en
 */
void LL_ADC_MeasInit(uint8_t en)
{
    adcc_adc_meas_init_setf(en > 0 ? 1 : 0);
}

/////////////////////////////////  INTR_CLR  //////////////////////////////////

/**
 * @brief Clear interrupt status of ADDC, one bit for one kind of interrupt.
 *
 * @param bitmap
 */
void LL_ADC_Int_Clear(uint8_t bitmap)
{
    adcc_intr_clr_set(bitmap);
}

///////////////////////////////  INTR_STATUS  /////////////////////////////////

/**
 * @brief Raw interrupt status of ADC, each bit represents one interrupt,
 * only lower 4 bits are valid.
 *
 * @return uint8_t
 */
uint8_t LL_ADC_RawInt_Status(void)
{
    return adcc_adcc_rawintr_getf();
}

/**
 * @brief Interrupt status of ADC, each bit represents one interrupt,
 * only lower 4 bits are valid.
 *
 * @return uint8_t
 */
uint8_t LL_ADC_Int_Status(void)
{
    return adcc_adcc_intr_getf();
}

///////////////////////////////  CHNX_RESULT  /////////////////////////////////

/**
 * @brief Return result of chn0.
 *
 * @return uint16_t
 */
uint16_t LL_ADC_Chan0_Result(void)
{
    return adcc_chn0_sum_getf();
}

uint16_t LL_ADC_Chan1_Result(void)
{
    return adcc_chn1_sum_getf();
}

uint16_t LL_ADC_Chan2_Result(void)
{
    return adcc_chn2_sum_getf();
}

uint16_t LL_ADC_Chan3_Result(void)
{
    return adcc_chn3_sum_getf();
}

uint16_t LL_ADC_Chan4_Result(void)
{
    return adcc_chn4_sum_getf();
}

uint16_t LL_ADC_Chan5_Result(void)
{
    return adcc_chn5_sum_getf();
}

uint16_t LL_ADC_Chan6_Result(void)
{
    return adcc_chn6_sum_getf();
}

uint16_t LL_ADC_Chan7_Result(void)
{
    return adcc_chn7_sum_getf();
}

////////////////////////////////  RT_RESULT  //////////////////////////////////

/**
 * @brief Result of RT mode.
 *
 * @return uint16_t
 */
uint16_t LL_ADC_RealTime_Result(void)
{
    return adcc_rt_rdata_getf();
}

////////////////////////////////  PD_STATUS  //////////////////////////////////

// FIXME: 1 -- power down?
/**
 * @brief ADC power down status.
 *
 * @return uint8_t
 */
uint8_t LL_ADC_PowerDown_Status(void)
{
    return adcc_adc_pd_getf();
}

void LL_ADC_Start(uint32_t value)
{
    adcc_adcc_start_set(value);
}

