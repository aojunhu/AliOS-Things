#include "driver/ll/ll_adcc.h"
#include "driver/hal/hal_adcc.h"
#include "driver/hal/hal_common.h"


void HAL_ADC_PowerDown_Intv_Set(uint8_t pw)
{
    LL_ADC_PowerDown_Intv_Set(pw);
}

void HAL_ADC_Div_Set(uint16_t clk_div)
{
    LL_ADC_Div_Set(clk_div);
}
void HAL_ADC_DMA_En(uint8_t en)
{
    LL_ADC_DMA_En(en);
};

void HAL_ADC_DataSkip_Set(uint8_t skip)
{
    LL_ADC_DataSkip_Set(skip);
}

void HAL_ADC_RealTime_Enable(uint8_t en)
{
    LL_ADC_ForeceOn(en);
}

void HAL_ADC_Batch_Enable(uint8_t en)
{
    LL_ADC_MeasInit(en);
}

void HAL_ADC_Start(uint32_t value)
{
    LL_ADC_Start(value);
};


uint16_t HAL_ADC_RealTime_Result(void)
{
    return LL_ADC_RealTime_Result();
}

uint16_t HAL_ADC_Result(uint8_t chn_index)
{
    uint16_t result;

    switch(chn_index) {
        case 0:
            result = LL_ADC_Chan0_Result();
            break;
        case 1:
            result = LL_ADC_Chan1_Result();
            break;
        case 2:
            result = LL_ADC_Chan2_Result();
            break;
        case 3:
            result = LL_ADC_Chan3_Result();
            break;
        case 4:
            result = LL_ADC_Chan4_Result();
            break;
        case 5:
            result = LL_ADC_Chan5_Result();
            break;
        case 6:
            result = LL_ADC_Chan6_Result();
            break;
        case 7:
            result = LL_ADC_Chan7_Result();
            break;
        default:
            break;
    }

    return result;
}

void HAL_ADC_RealTime_Watermark(ADC_WaterMark num)
{
    LL_ADC_DMA_Watermark_Set(num);
}

void HAL_ADC_Int_Enable(uint8_t map)
{
    LL_ADC_Int_En(map);
}

void HAL_ADC_Int_Clear(uint8_t map)
{
    LL_ADC_Int_Clear(map);
}

void HAL_ADC_RealTime(uint8_t chn_index)
{
    LL_ADC_ChanEnable_Set( 1 << chn_index);
    LL_ADC_ForeceOn(1);
}

void HAL_ADC_ChannelEnable(uint8_t chn_index)
{
    LL_ADC_ChanEnable_Set(chn_index);
}

void HAL_ADC_DivUp_Set(uint8_t en)
{
    LL_ADC_DivUp_Set(en);
}

void HAL_ADC_ClkInv_Set(uint8_t clk_inv)
{
    LL_ADC_ClkInv_Set(clk_inv);
};

void HAL_ADC_Vref_Sel(uint8_t sel)
{
    LL_ADC_Vref_Sel(sel);
}

void HAL_ADC_Batch(uint8_t chn_map, uint8_t avg_cnt)
{
    LL_ADC_ChanEnable_Set(chn_map);
    LL_ADC_AvgCnt_Set(avg_cnt);
    LL_ADC_AvgEn_Set(1);
    LL_ADC_MeasInit(1);
}

void HAL_ADC_AvgEn_Set(uint8_t en)
{
    LL_ADC_AvgEn_Set(en);
}

void HAL_ADC_AvgCnt_Set(uint8_t avg_cnt)
{
    LL_ADC_AvgCnt_Set(avg_cnt);
}


