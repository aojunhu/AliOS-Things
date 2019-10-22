#ifndef __LL_ADCC_H__
#define __LL_ADCC_H__
#ifdef __cplusplus
    extern "C" {
#endif // __cplusplus

#include "types.h"

/////////////////////////////////  MISC_CFG  //////////////////////////////////

/**
 * @brief Update ADCC clock division.
 *
 * @param clk_div
 */
void LL_ADC_Div_Set(uint16_t clk_div);

/**
 * @brief Enabel ADDC DMA.
 *
 * @param en
 */
void LL_ADC_DMA_En(uint8_t en);

// TODO: what?
/**
 * @brief
 *
 * @param avg_cnt
 */
void LL_ADC_AvgCnt_Set(uint8_t avg_cnt);

// TODO: what?
void LL_ADC_AvgEn_Set(uint8_t en);

void LL_ADC_DMA_Watermark_Set(uint8_t watermark);

void LL_ADC_Int_En(uint8_t bitmap);

void LL_ADC_PowerDown_Intv_Set(uint8_t pw);

void LL_ADC_DataSkip_Set(uint8_t skip);

void LL_ADC_Vref_Sel(uint8_t sel);

// FIXME: what?
void LL_ADC_ClkInv_Set(uint8_t clk_inv);

void LL_ADC_DivUp_Set(uint8_t en);

/////////////////////////////////  CHN_EN  ////////////////////////////////////

/**
 * @brief Enable ADDC channels, one bit for one channel.
 *
 * @param chans
 */
void LL_ADC_ChanEnable_Set(uint8_t chanmap);

/**
 * @brief Get ADDC enabled channels, one bit for one channel.
 *
 * @return uint8_t
 */
uint8_t LL_ADC_ChanEnable_Get(void);

////////////////////////////////  ADC_START  /////////////////////////////////

// TODO: rename to LL_ADC_RealTimeMode_Enable()

/**
 * @brief Enable/disable RealTime mode.
 * write 1 to enter RealTime mode.
 *
 * @param on
 */
void LL_ADC_ForeceOn(uint8_t on);

// TODO: rename to LL_ADC_BatchMode_Enable()
/**
 * @brief Enable/disable Batch mdoe.
 * write 1 to enter Batch mode.
 *
 * @param en
 */
void LL_ADC_MeasInit(uint8_t en);

/////////////////////////////////  INTR_CLR  //////////////////////////////////

/**
 * @brief Clear interrupt status of ADDC, one bit for one kind of interrupt.
 *
 * @param bitmap
 */
void LL_ADC_Int_Clear(uint8_t bitmap);

///////////////////////////////  INTR_STATUS  /////////////////////////////////

/**
 * @brief Raw interrupt status of ADC, each bit represents one interrupt,
 * only lower 4 bits are valid.
 *
 * @return uint8_t
 */
uint8_t LL_ADC_RawInt_Status(void);

/**
 * @brief Interrupt status of ADC, each bit represents one interrupt,
 * only lower 4 bits are valid.
 *
 * @return uint8_t
 */
uint8_t LL_ADC_Int_Status(void);

///////////////////////////////  CHNX_RESULT  /////////////////////////////////

/**
 * @brief Return result of chn0.
 *
 * @return uint16_t
 */
uint16_t LL_ADC_Chan0_Result(void);

uint16_t LL_ADC_Chan1_Result(void);

uint16_t LL_ADC_Chan2_Result(void);

uint16_t LL_ADC_Chan3_Result(void);

uint16_t LL_ADC_Chan4_Result(void);

uint16_t LL_ADC_Chan5_Result(void);

uint16_t LL_ADC_Chan6_Result(void);

uint16_t LL_ADC_Chan7_Result(void);

////////////////////////////////  RT_RESULT  //////////////////////////////////

/**
 * @brief Result of RT mode.
 *
 * @return uint16_t
 */
uint16_t LL_ADC_RealTime_Result(void);

////////////////////////////////  PD_STATUS  //////////////////////////////////

// FIXME: 1 -- power down?
/**
 * @brief ADC power down status.
 *
 * @return uint8_t
 */
uint8_t LL_ADC_PowerDown_Status(void);

void LL_ADC_Start(uint32_t value);


#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __LL_ADCC_H__
