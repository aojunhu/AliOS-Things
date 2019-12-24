#ifndef __HAL_RF_NEW_H__
#define __HAL_RF_NEW_H__

#ifdef __cplusplus
    extern "C" {
#endif /* __cplusplus */

#include <stdint.h>

typedef enum
{
    RF_CH_0 = 0,
    RF_CH_1,
    RF_CH_2,
    RF_CH_3,
    RF_CH_4,
    RF_CH_5,
    RF_CH_6,
    RF_CH_7,
    RF_CH_8,
    RF_CH_9,
    RF_CH_10,
    RF_CH_11,
    RF_CH_12,
    RF_CH_13,
    RF_CH_14,
    RF_CH_TOTAL,
    RF_CH_ERR = RF_CH_TOTAL,
}rf_channel_enum;

typedef enum
{
    RF_2388M,
    RF_2412M,
    RF_2417M,
    RF_2422M,
    RF_2427M,
    RF_2432M,
    RF_2437M,
    RF_2442M,
    RF_2447M,
    RF_2452M,
    RF_2457M,
    RF_2462M,
    RF_2467M,
    RF_2472M,
    RF_2484M,
}rf_freq_enum;


typedef enum
{
	SIN_FREQ_1_64 = 0,  /*1/64 freq*/
 	SIN_FREQ_1_32,  	/*1/32 freq*/
 	SIN_FREQ_1_16,  	/*1/16 freq*/
 	SIN_FREQ_1_8,  		/*1/8  freq*/
}rf_sin_freq;

typedef enum
{
	SIN_FREQ_100_percent = 0,  /*100% amp*/
 	SIN_FREQ_50_percent,  	   /*50% amp*/
 	SIN_FREQ_25_percent,  	   /*25% amp*/
 	SIN_FREQ_12p5_percent,     /*12.5% amp*/
}rf_sin_amp;

#define IQ_DC_CAL_POINT_TOTAL      7000
#define IQ_DC_CAL_POINT_IGNORE     200

typedef struct{
    uint16_t reg15_val;
    uint16_t reg16_val;
    uint16_t reg17_val;
}pll_capbank_t;

typedef struct
{
    uint8_t i_rmx_table[RF_CH_TOTAL];
    uint8_t q_rmx_table[RF_CH_TOTAL];
    pll_capbank_t capbank_list[RF_CH_TOTAL];
}rf_art2000_cal_param_t;

void hal_sys_awo_init(void);
void hal_rf_art2000_init(void);
void hal_rf_art2000_calibration(void);
rf_freq_enum hal_rf_art2000_channel_to_freq(rf_channel_enum channel);
rf_channel_enum hal_rf_art2000_freq_to_channel(rf_freq_enum freq);
void hal_rf_art2000_set_channel(rf_channel_enum channel);
rf_channel_enum hal_rf_art2000_get_channel(void);
void iq_dc_cal_one_ch_manual(rf_channel_enum channel);
void iq_dc_cal_one_ch_manual_DPD(rf_channel_enum channel);

void hal_rf_art2000_write(uint8_t pageID, uint8_t addr, uint16_t data);
uint16_t hal_rf_art2000_read(uint8_t pageID, uint8_t addr);


void hal_rf_art2000_start_auto_cal(void);
void hal_rf_art2000_stop_auto_cal(void);

void hal_rf_art2000_slect_adc(void);
void hal_rf_art2000_reset_rf(void);
void hal_rf_art2000_set_cal_rmx_i(uint16_t val);
void hal_rf_art2000_set_cal_rmx_q(uint16_t val);
uint8_t hal_rf_art2000_cal_rmx_i_report(void);
uint8_t hal_rf_art2000_cal_rmx_q_report(void);

void hal_phy_art2000_start_read_adc(void);
void hal_phy_art2000_set_adc_negate(void);
void hal_phy_art2000_disable_rx_en(void);

void hal_rf_art2000_auto_cal(void);
// void hal_rf_art2000_iq_dc_cal_manual(void); [rename to `hal_rf_art2000_rx_dc_cal()`]
void hal_rf_art2000_rx_dc_cal(void);
void hal_rf_art2000_pll_cal(void);
rf_art2000_cal_param_t * hal_rf_get_art2000_cal_param(void);
void hal_rf_art2000_set_single_cal_value(pll_capbank_t *cal_value);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __HAL_RF_NEW_H__ */
