
#include "hal/hal_rf_art2000.h"
#include "hal/hal_adc.h"
#include "drv/drv_adc_measure.h"

#define ADC_CLK_DIV    (95)

void drv_adc_init(void)
{
    HAL_ADC_Div_Set(ADC_CLK_DIV);
    HAL_ADC_DivUp_Set(1);

    HAL_ADC_AvgCnt_Set(3);
    HAL_ADC_AvgEn_Set(1); 
    HAL_ADC_PowerDown_Intv_Set(0); 
    HAL_ADC_DataSkip_Set(3);  //config adc setup time
    HAL_ADC_ChannelEnable(ADC_CH0); //channel select.ADC_CH0 ADC_CH1...ADC_CH7 
    HAL_ADC_Vref_Sel(0);      //used when the reference voltage is unstable
    HAL_ADC_ClkInv_Set(0);    //used to adjust timing when data alignment is problematic    
    HAL_ADC_Int_Enable(0);    //Disable interrupt    

    //Connect the temp detection resistor to ADC for temp measurement.
    hal_rf_art2000_write(0, 0x30, 0x19); 

    //Disable DMA  
    HAL_ADC_DMA_En(0);            
    HAL_ADC_RealTime_Watermark(RT_WATERMARK_0); 
    
    //Disable aways force on mode
    HAL_ADC_RealTime_Enable(0);
    
    //Start measurement once after init.
    HAL_ADC_Batch_Enable(1);//LL_ADCC_MeasInit(1);
    for(volatile uint32_t t = 0; t < 40*3; t++);//delay xx us
    HAL_ADC_Batch_Enable(0);//LL_ADCC_MeasInit(1); 
}

uint16_t drv_adc_read(uint8_t ch)
{
    uint16_t read_adc = 0;
    
    HAL_ADC_Batch_Enable(0);
    read_adc = HAL_ADC_Result(ch);
    for(volatile uint32_t t = 0; t < 40*3; t++);//delay xx us
    HAL_ADC_Batch_Enable(1); 
    
    return read_adc;
}


