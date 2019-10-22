#ifndef __HAL_ADCC_H__
#define __HAL_ADCC_H__
#ifdef __cplusplus
    extern "C" {
#endif // __cplusplus

#include "types.h"

///////////////////////  Interrupt Bitmap  ///////////////////////
// FIXME: 中断比特位命名不规范
#define BATCH_INTR      (1<<0)
#define RT_INTR         (1<<1)
#define RT_FIFO_FULL    (1<<2)
#define RT_FIFO_EMPTY   (1<<3)

typedef enum
{
    RT_WATERMARK_0 = 0,//0=DMA Disable
    RT_WATERMARK_1 = 1,
    RT_WATERMARK_2 = 2,
    RT_WATERMARK_4 = 4,
    RT_WATERMARK_8 = 8,
} ADC_WaterMark;

typedef enum
{
    ADC_CH0 = 0x01, 
    ADC_CH1 = 0x02,
    ADC_CH2 = 0x04,
    ADC_CH3 = 0x08,
    ADC_CH4 = 0x10,
    ADC_CH5 = 0x20,
    ADC_CH6 = 0x40,
    ADC_CH7 = 0x80,
} ADC_ChannelIndex;


void HAL_ADC_RealTime_Enable(uint8_t en);
void HAL_ADC_Batch_Enable(uint8_t en);
uint16_t HAL_ADC_RealTime_Result(void);
uint16_t HAL_ADC_Result(uint8_t ch_index);
void adcc_realtime_isr(void);
void adcc_batch_isr(void);
void HAL_ADC_RealTime_Watermark(ADC_WaterMark num);
void HAL_ADC_Int_Enable(uint8_t map);
void HAL_ADC_Int_Clear(uint8_t map);
void HAL_ADC_RealTime(uint8_t chn_index);
void HAL_ADC_Batch(uint8_t chn_map, uint8_t avg_cnt);
void HAL_ADC_ChannelEnable(uint8_t ch_index);
void HAL_ADC_DivUp_Set(uint8_t en);
void HAL_ADC_ClkInv_Set(uint8_t clk_inv);
void HAL_ADC_Vref_Sel(uint8_t sel);
void HAL_ADC_DataSkip_Set(uint8_t skip);
void HAL_ADC_Div_Set(uint16_t clk_div);
void HAL_ADC_DMA_En(uint8_t en);
void HAL_ADC_AvgEn_Set(uint8_t en);
void HAL_ADC_AvgCnt_Set(uint8_t avg_cnt);
void HAL_ADC_PowerDown_Intv_Set(uint8_t pw);
void HAL_ADC_Start(uint32_t value);


#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __HAL_ADCC_H__
