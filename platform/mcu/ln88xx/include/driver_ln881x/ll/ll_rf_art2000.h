#ifndef __LL_RF_ART2000_H__
#define __LL_RF_ART2000_H__

#ifdef __cplusplus
    extern "C" {
#endif /* __cplusplus */

#include <stdint.h>

/**
 * @brief  Write value to the addr of RF.
 * @param  pageID: RF page index.
 *         addr: the address of RF interface register, this addr must be multiplied by 4. 
 *         value: the value of RF interface register, bit width is 16 bits. 
 * @return This function has no return value.
 */
void ll_rf_art2000_reg_write(uint8_t pageID, uint8_t addr, uint16_t value);

/**
 * @brief  read the value from the addr of RF.
 * @param  pageID: RF page index.
 *         addr: the address of RF interface register, this addr must be multiplied by 4. 
 * 
 * @return The value from the addr of RF.
 */
uint16_t ll_rf_art2000_reg_read(uint8_t pageID, uint8_t addr);
void ll_rf_art2000_sys_awo_init(void);
uint8_t ll_rf_art2000_rco32k_cbit_rpt_get(void);

///////////////////////////////////////////////////////////////////////////////
////////////////////////////  dedicated service  ///////////////////////////////
///////////////////////////////////////////////////////////////////////////////

void ll_rf_init_autocal_on(void);
void ll_rf_init_autocal_off(void);
void ll_rf_coPHY_cal_prepare(void);
void ll_rf_chip_sel_channel(uint8_t freq_num);
void ll_rf_chip_coPHY_tx_calibration_start(void);
void ll_rf_chip_tx_calibration_stop(void);

void ll_rf_chip_rx_cal_start(void);
void ll_rf_chip_rx_cal_stop(void);

void ll_rf_tx_img_q_set(uint8_t q);

void ll_rf_tx_img_i_set(uint8_t i);
void ll_rf_chip_desel_channel(void);

void ll_rf_chip_trans_dpd_cal(void);

void ll_rf_chip_coPHY_cal_finish(void);

void ll_rf_generate_sin_wave(uint8_t freq_sel, uint8_t amp_sel);

void ll_rf_chip_DAC_test_start(void);

void ll_rf_chip_DAC_test_stop(void);

void ll_rf_chip_ADC_test_start(void);

void ll_rf_chip_ADC_test_stop(void);

void ll_rf_chip_txfilter_test_start(void);

void ll_rf_txfilter_test_stop(void);

void ll_rf_chip_Rx_Analog_Circuit_test_start(void);

void ll_rf_chip_Rx_Analog_Circuit_test_stop(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __LL_RF_ART2000_H__ */
