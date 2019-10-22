#include "proj_config.h"

#ifdef RF_ART2000
#if defined (LN881x)
  #include "base_addr_ln881x.h"
#elif defined (LN882x)
  #include "base_addr_ln882x.h"
#endif
#include "reg_rf_p0.h"
#include "reg_rf_p1.h"
#include "reg_sysc_awo.h"
#include "driver/ll/ll_rf_art2000.h"

#define RF_WRITE_DELAY_CYCLE         5

/**
 * @brief  Write value to the addr of RF.
 * @param  pageID: RF page index.
 *         addr: the address of RF interface register, this addr must be multiplied by 4.
 *         value: the value of RF interface register, bit width is 16 bits.
 * @return This function has no return value.
 */
void ll_rf_art2000_reg_write(uint8_t pageID, uint8_t addr, uint16_t value)
{
    int i;
    uint32_t rf_base = (pageID == 0) ? REG_RF_P0_BASE : REG_RF_P1_BASE;
    uint32_t *rf_addr = (uint32_t *)(rf_base + 4 * addr);

    *rf_addr = value;

    for(i = 0; i < RF_WRITE_DELAY_CYCLE; i++);
}


/**
 * @brief  read the value from the addr of RF.
 * @param  pageID: RF page index.
 *         addr: the address of RF interface register, this addr must be multiplied by 4.
 *
 * @return The value from the addr of RF.
 */
uint16_t ll_rf_art2000_reg_read(uint8_t pageID, uint8_t addr)
{
    uint32_t rf_base = (pageID == 0) ? REG_RF_P0_BASE : REG_RF_P1_BASE;
    uint32_t *rf_addr = (uint32_t *)(rf_base + 4 * addr);

    return (uint16_t)*rf_addr;
}

void ll_rf_art2000_sys_awo_init(void)
{
    //temperature compensation
    uint32_t val_l = sysc_awo_xtal40m_tcal_reg_l_get();

    // PMU
    sysc_awo_o_digldo_debug_mode_setf(0x01);
    sysc_awo_pmu_reg_set(0x81042086); //  (BUCK)
    sysc_awo_pmu_cfg_set(0x20006003);

    sysc_awo_r_vtrim_setf(0x00);        //00: 1.232 / 01: 1.216  / 10: 1.201 / 11: 1.185
    sysc_awo_o_digldo_norvdd_setf(0x00);//0x00->1.1V/ 0x01->1.05V/ 0x02->1.0V/ 0x03->0.95V/ 0x04->0.90V/ 0x05->0.85V/ 0x06->0.80V/ 0x07->1.2V

    sysc_awo_misc_set(0x00002C0D);
}


///////////////////////////////////////////////////////////////////////////////
////////////////////////////  dedicated service  ///////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Chip_Self_Calibration() on.
 */
void ll_rf_init_autocal_on(void)
{
    rf_p0_cpu_rf_en_dr_setf(1);
    rf_p0_cpu_rf_en_setf(1);
    rf_p0_rf_auto_cal_setf(1);
}
uint8_t ll_rf_art2000_rco32k_cbit_rpt_get(void)
{
    return rf_p0_rco32k_cbit_rpt_getf();
}

/**
 * @brief Chip_Self_Calibration() off.
 */
void ll_rf_init_autocal_off(void)
{
    rf_p0_rf_auto_cal_setf(0);
    rf_p0_cpu_rf_en_setf(0);
    rf_p0_cpu_rf_en_dr_setf(0);
}

void ll_rf_coPHY_cal_prepare(void)
{
    rf_p0_cpu_rf_en_dr_setf(1);
    rf_p0_cpu_rf_en_setf(1);
    rf_p0_cpu_rx_en_dr_setf(1);
    rf_p0_cpu_rx_en_setf(0);
    rf_p0_cpu_tx_en_dr_setf(1);
    rf_p0_cpu_tx_en_setf(0);

    rf_p0_cpu_cal_en_dr_setf(1);
    rf_p0_cpu_cal_en_setf(1);
    rf_p0_cpu_tmode_dr_setf(1);
    rf_p0_cpu_tmode_setf(1);
}

void ll_rf_chip_sel_channel(uint8_t freq_num)
{
    rf_p0_cpu_rfpll_vco_en_setf(1);
    rf_p0_cpu_rfpll_lf_en_setf(1);
    rf_p0_cpu_rfpll_presc_en_setf(1);

    rf_p0_cpu_rfpll_freq_num_dr_setf(1);
    rf_p0_cpu_rfpll_freq_num_setf(freq_num);
}

void ll_rf_chip_coPHY_tx_calibration_start(void)
{
	rf_p0_txbuff_iq_sel_setf (1); // RF PG0 0x73 bit12 --> 1
	rf_p0_cpu_rxlpf_chan_sel_setf (1); // RF PG0 0x0A bit12 --> 1
	rf_p0_pa_bpf_gain_setf (7);
	rf_p0_pa_imgcal_range_setf (5); // 7 max, 5 best.

	rf_p0_cpu_en_txdac_tximg_setf(1);
	rf_p0_cpu_en_txlpf_tximg_setf(1);
	rf_p0_cpu_en_tmx_tximg_setf(1);
	rf_p0_rf_tx_img_cal_en_setf(1);
}

void ll_rf_chip_tx_calibration_stop(void)
{

    rf_p0_rf_tx_img_cal_en_setf(0);

}

void ll_rf_chip_rx_cal_start(void)
{
    rf_p0_rf_rx_img_cal_en_setf(1);
}

void ll_rf_chip_rx_cal_stop(void)
{
    rf_p0_rf_rx_img_cal_en_setf(0);
}


void ll_rf_tx_img_q_set(uint8_t q)
{
	rf_p0_cpu_cal_tx_img_q_dr_setf(1);
    rf_p0_cpu_cal_tx_img_q_setf(q);
}

void ll_rf_tx_img_i_set(uint8_t i)
{
	rf_p0_cpu_cal_tx_img_i_dr_setf(1);
    rf_p0_cpu_cal_tx_img_i_setf(i);
}


void ll_rf_chip_desel_channel(void)
{
    rf_p0_cpu_rfpll_freq_num_setf(0);
    rf_p0_cpu_rfpll_freq_num_dr_setf(0);
}

void ll_rf_chip_trans_dpd_cal(void)
{
    rf_p0_rf_tx_dpd_cal_en_setf(1);

    __NOP();

    rf_p0_rf_tx_dpd_cal_en_setf(0);
}

void ll_rf_chip_coPHY_cal_finish(void)
{
    rf_p0_cpu_rf_en_setf(0);
    rf_p0_cpu_rf_en_dr_setf(0);
    rf_p0_cpu_rx_en_setf(0);
    rf_p0_cpu_rx_en_dr_setf(0);

    rf_p0_cpu_tx_en_setf(0);
    rf_p0_cpu_tx_en_dr_setf(0);

    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_cal_en_dr_setf(0);

    rf_p0_cpu_tmode_setf(0);
    rf_p0_cpu_tmode_dr_setf(0);
}

void ll_rf_generate_sin_wave(uint8_t freq_sel, uint8_t amp_sel)
{
    rf_p0_cpu_dac_sin_en_setf(1);
    rf_p0_cpu_dac_sin_freq_sel_setf(freq_sel);
    rf_p0_cpu_dac_sin_amp_sel_setf(amp_sel);
}

void ll_rf_chip_DAC_test_start(void)
{
    rf_p0_cpu_rf_en_dr_setf(1);
    rf_p0_cpu_rf_en_setf(1);
    rf_p0_cpu_rx_en_dr_setf(1);
    rf_p0_cpu_rx_en_setf(0);
    rf_p0_cpu_tx_en_dr_setf(1);
    rf_p0_cpu_tx_en_setf(1);
    rf_p0_cpu_cal_en_dr_setf(1);
    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_tmode_dr_setf(1);
    rf_p0_cpu_tmode_setf(1);
}

void ll_rf_chip_DAC_test_stop(void)
{
    rf_p0_cpu_dac_sin_en_setf(0);
    rf_p0_cpu_tmode_setf(0);
    rf_p0_cpu_tmode_dr_setf(0);
    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_cal_en_dr_setf(0);
    rf_p0_cpu_tx_en_setf(0);
    rf_p0_cpu_tx_en_dr_setf(0);
    rf_p0_cpu_rx_en_setf(0);
    rf_p0_cpu_rx_en_dr_setf(0);
    rf_p0_cpu_rf_en_setf(0);
    rf_p0_cpu_rf_en_dr_setf(0);
}

void ll_rf_chip_ADC_test_start(void)
{
    rf_p0_cpu_rf_en_dr_setf(1);
    rf_p0_cpu_rf_en_setf(1);
    rf_p0_cpu_rx_en_dr_setf(1);
    rf_p0_cpu_rx_en_setf(1);
    rf_p0_cpu_tx_en_dr_setf(1);
    rf_p0_cpu_tx_en_setf(0);
    rf_p0_cpu_cal_en_dr_setf(1);
    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_tmode_dr_setf(1);
    rf_p0_cpu_tmode_setf(1);
}

void ll_rf_chip_ADC_test_stop(void)
{
    rf_p0_cpu_dac_sin_en_setf(0);
    rf_p0_cpu_tmode_setf(0);
    rf_p0_cpu_tmode_dr_setf(0);
    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_cal_en_dr_setf(0);
    rf_p0_cpu_tx_en_setf(0);
    rf_p0_cpu_tx_en_dr_setf(0);
    rf_p0_cpu_rx_en_setf(0);
    rf_p0_cpu_rx_en_dr_setf(0);
    rf_p0_cpu_rf_en_setf(0);
    rf_p0_cpu_rf_en_dr_setf(0);
}

void ll_rf_chip_txfilter_test_start(void)
{
    rf_p0_cpu_rf_en_dr_setf(1);
    rf_p0_cpu_rf_en_setf(1);
    rf_p0_cpu_rx_en_dr_setf(1);
    rf_p0_cpu_rx_en_setf(0);
    rf_p0_cpu_tx_en_dr_setf(1);
    rf_p0_cpu_tx_en_setf(0);
    rf_p0_cpu_cal_en_dr_setf(1);
    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_tmode_dr_setf(1);
    rf_p0_cpu_tmode_setf(1);
}

void ll_rf_txfilter_test_stop(void)
{
    rf_p0_cpu_dac_sin_en_setf(0);
    rf_p0_cpu_tmode_setf(0);
    rf_p0_cpu_tmode_dr_setf(0);
    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_cal_en_dr_setf(0);
    rf_p0_cpu_tx_en_setf(0);
    rf_p0_cpu_tx_en_dr_setf(0);
    rf_p0_cpu_rx_en_setf(0);
    rf_p0_cpu_rx_en_dr_setf(0);
    rf_p0_cpu_rf_en_setf(0);
    rf_p0_cpu_rf_en_dr_setf(0);
}

void ll_rf_chip_Rx_Analog_Circuit_test_start(void)
{
    rf_p0_cpu_rf_en_dr_setf(1);
    rf_p0_cpu_rf_en_setf(1);
    rf_p0_cpu_rx_en_dr_setf(1);
    rf_p0_cpu_rx_en_setf(1);
    rf_p0_cpu_tx_en_dr_setf(1);
    rf_p0_cpu_tx_en_setf(0);
    rf_p0_cpu_cal_en_dr_setf(1);
    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_tmode_dr_setf(1);
    rf_p0_cpu_tmode_setf(2);
}

void ll_rf_chip_Rx_Analog_Circuit_test_stop(void)
{
    rf_p0_cpu_dac_sin_en_setf(0);
    rf_p0_cpu_tmode_setf(0);
    rf_p0_cpu_tmode_dr_setf(0);
    rf_p0_cpu_cal_en_setf(0);
    rf_p0_cpu_cal_en_dr_setf(0);
    rf_p0_cpu_tx_en_setf(0);
    rf_p0_cpu_tx_en_dr_setf(0);
    rf_p0_cpu_rx_en_setf(0);
    rf_p0_cpu_rx_en_dr_setf(0);
    rf_p0_cpu_rf_en_setf(0);
    rf_p0_cpu_rf_en_dr_setf(0);
}

#endif /* RF_ART2000 */
