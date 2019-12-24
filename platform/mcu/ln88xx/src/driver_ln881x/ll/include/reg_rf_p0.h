//-----------------------------------------------------------------------------
// The confidential and proprietary information contained in this file may     
// only be used by a person authorised under and to the extent permitted       
// by a subsisting licensing agreement from FASTASIC Limited.              
//                                                                             
//            (C) COPYRIGHT 2015-2018 FASTASIC Limited.                  
//                ALL RIGHTS RESERVED                                          
//                                                                             
// This entire notice must be reproduced on all copies of this file            
// and copies of this file may only be made by a person if such person is      
// permitted to do so under the terms of a subsisting license agreement        
// from FASTASIC Limited.                                                  
//-----------------------------------------------------------------------------
#ifndef __REG_RF_P0_H__
#define __REG_RF_P0_H__

#include "base_addr_ln881x.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "ln88xx.h"


//virsion
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                         rev_id :  4; /* 3: 0,                             NA*/
        uint32_t                     foundry_id :  2; /* 5: 4,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,                        Virsion*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_VIRSION;

//co_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               rf_tx_img_cal_en :  1; /* 0: 0,                             NA*/
        uint32_t               rf_rx_img_cal_en :  1; /* 1: 1,                             NA*/
        uint32_t               rf_tx_dpd_cal_en :  1; /* 2: 2,                             NA*/
        uint32_t                rf_sleep_cal_en :  1; /* 3: 3,                             NA*/
        uint32_t            rfpll_single_cal_en :  1; /* 4: 4,                             NA*/
        uint32_t                    rf_auto_cal :  1; /* 5: 5,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,                     CO_CAL_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CO_CAL_CFG;

//auto_cal_status_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             rf_rfpll_cal_ready :  1; /* 0: 0,                             NA*/
        uint32_t            rf_rco32k_cal_ready :  1; /* 1: 1,                             NA*/
        uint32_t               rf_tx_cal1_ready :  1; /* 2: 2,                             NA*/
        uint32_t               rf_tx_cal2_ready :  1; /* 3: 3,                             NA*/
        uint32_t               rf_tx_cal3_ready :  1; /* 4: 4,                             NA*/
        uint32_t         rf_tx_img_dc_cal_ready :  1; /* 5: 5,                             NA*/
        uint32_t               rf_rx_cal1_ready :  1; /* 6: 6,                             NA*/
        uint32_t               rf_rx_cal2_ready :  1; /* 7: 7,                             NA*/
        uint32_t               rf_rx_cal3_ready :  1; /* 8: 8,                             NA*/
        uint32_t               rf_rx_cal4_ready :  1; /* 9: 9,                             NA*/
        uint32_t             rf_sleep_cal_ready :  1; /*10:10,                             NA*/
        uint32_t      rf_rfpll_single_cal_ready :  1; /*11:11,                             NA*/
        uint32_t                     reserved_0 :  4; /*15:12,            AUTO_CAL_STATUS_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_AUTO_CAL_STATUS_RPT;

//auto_cal_overflow_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         rfpll_cal_overflow_rpt :  1; /* 0: 0,                             NA*/
        uint32_t        rco32k_cal_overflow_rpt :  1; /* 1: 1,                             NA*/
        uint32_t           tx_cal1_overflow_rpt :  1; /* 2: 2,                             NA*/
        uint32_t           tx_cal2_overflow_rpt :  1; /* 3: 3,                             NA*/
        uint32_t           tx_cal3_overflow_rpt :  1; /* 4: 4,                             NA*/
        uint32_t           tx_img_dc_cal_of_rpt :  1; /* 5: 5,                             NA*/
        uint32_t           rx_cal1_overflow_rpt :  1; /* 6: 6,                             NA*/
        uint32_t           rx_cal2_overflow_rpt :  1; /* 7: 7,                             NA*/
        uint32_t           rx_cal3_overflow_rpt :  1; /* 8: 8,                             NA*/
        uint32_t           rx_cal4_overflow_rpt :  1; /* 9: 9,                             NA*/
        uint32_t                     reserved_0 :  6; /*15:10,          AUTO_CAL_OVERFLOW_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_AUTO_CAL_OVERFLOW_RPT;

//rx_agc_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_rx_agc_dr :  1; /* 0: 0,                             NA*/
        uint32_t                       cpu_rx_b :  6; /* 6: 1,                             NA*/
        uint32_t                     reserved_0 :  9; /*15: 7,                     RX AGC_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_AGC_CFG;

//tx_agc_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_tx_agc_dr :  1; /* 0: 0,                             NA*/
        uint32_t                       cpu_tx_b :  6; /* 6: 1,                             NA*/
        uint32_t                     reserved_0 :  9; /*15: 7,                     TX AGC_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_AGC_CFG;

//rx_gain_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 cpu_rxlpf_gain :  4; /* 3: 0,                             NA*/
        uint32_t                   cpu_rmx_gain :  4; /* 7: 4,                             NA*/
        uint32_t                   cpu_lna_gain :  4; /*11: 8,                             NA*/
        uint32_t                   cpu_lna_tune :  3; /*14:12,                             NA*/
        uint32_t                 cpu_rx_gain_dr :  1; /*15:15,                    RX_GAIN_CFG*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_GAIN_CFG;

//tx_gain_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                    cpu_pa_gain :  2; /* 1: 0,                             NA*/
        uint32_t                 cpu_pa_da_gain :  2; /* 3: 2,                             NA*/
        uint32_t                   cpu_pa_ibase :  4; /* 7: 4,                             NA*/
        uint32_t                   cpu_tmx_gain :  3; /*10: 8,                             NA*/
        uint32_t                 cpu_txlpf_gain :  3; /*13:11,                             NA*/
        uint32_t                     reserved_0 :  1; /*14:14,                             NA*/
        uint32_t                 cpu_tx_gain_dr :  1; /*15:15,                    TX_GAIN_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_GAIN_CFG;

//enbale_rf
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     cpu_tmx_en :  1; /* 0: 0,                             NA*/
        uint32_t                      cpu_pa_en :  1; /* 1: 1,                             NA*/
        uint32_t                   cpu_txdac_en :  1; /* 2: 2,                             NA*/
        uint32_t                   cpu_txlpf_en :  1; /* 3: 3,                             NA*/
        uint32_t                     cpu_lna_en :  1; /* 4: 4,                             NA*/
        uint32_t                   cpu_rxadc_en :  1; /* 5: 5,                             NA*/
        uint32_t                   cpu_rxlpf_en :  1; /* 6: 6,                             NA*/
        uint32_t                     cpu_rmx_en :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  7; /*14: 8,                             NA*/
        uint32_t               cpu_rf_enable_dr :  1; /*15:15,                      ENABLE_RF*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_ENBALE_RF;

//enbale_clk
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             cpu_rfpll_presc_en :  1; /* 0: 0,                             NA*/
        uint32_t                cpu_rfpll_lf_en :  1; /* 1: 1,                             NA*/
        uint32_t               cpu_rfpll_vco_en :  1; /* 2: 2,                             NA*/
        uint32_t                     reserved_1 :  1; /* 3: 3,                             NA*/
        uint32_t                 cpu_xtal40m_en :  1; /* 4: 4,                             NA*/
        uint32_t                 cpu_xtal32k_en :  1; /* 5: 5,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,                     ENABLE_CLK*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_ENBALE_CLK;

//manual_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             cpu_rfpll_count_en :  1; /* 0: 0,                             NA*/
        uint32_t              cpu_rfpll_open_en :  1; /* 1: 1,                             NA*/
        uint32_t               cpu_rfpll_cal_en :  1; /* 2: 2,                             NA*/
        uint32_t            cpu_rco32k_count_en :  1; /* 3: 3,                             NA*/
        uint32_t                cpu_tmx_cal1_en :  1; /* 4: 4,                             NA*/
        uint32_t                cpu_tmx_cal2_en :  1; /* 5: 5,                             NA*/
        uint32_t              cpu_tmx_cal_reset :  1; /* 6: 6,                             NA*/
        uint32_t               cpu_txlpf_cal_en :  1; /* 7: 7,                             NA*/
        uint32_t                 cpu_rmx_cal_en :  1; /* 8: 8,                             NA*/
        uint32_t               cpu_rxlpf_cal_en :  1; /* 9: 9,                             NA*/
        uint32_t                cpu_pa_pdimg_en :  1; /*10:10,                             NA*/
        uint32_t            cpu_tximg_dc_cal_en :  1; /*11:11,                             NA*/
        uint32_t             cpu_rxlpf_chan_sel :  1; /*12:12,                             NA*/
        uint32_t                   cpu_rximg_en :  1; /*13:13,                             NA*/
        uint32_t                     cpu_dpd_en :  1; /*14:14,                             NA*/
        uint32_t              cpu_manual_cal_dr :  1; /*15:15,                 MANUAL_CAL_CFG*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_MANUAL_CAL_CFG;

//test_mode_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_adc_chsel :  2; /* 1: 0,                             NA*/
        uint32_t                  cpu_dac_chsel :  2; /* 3: 2,                             NA*/
        uint32_t                   cpu_chsel_dr :  1; /* 4: 4,                             NA*/
        uint32_t                 cpu_ad2da_loop :  1; /* 5: 5,                             NA*/
        uint32_t                  cpu_txbuff_en :  1; /* 6: 6,                             NA*/
        uint32_t                  cpu_txbuff_dr :  1; /* 7: 7,                             NA*/
        uint32_t           cpu_txdacbuff_ldo_en :  1; /* 8: 8,                             NA*/
        uint32_t           cpu_txdacbuff_ldo_dr :  1; /* 9: 9,                             NA*/
        uint32_t               cpu_tx_dc_cal_en :  1; /*10:10,                             NA*/
        uint32_t                tx_dc_cal_en_dr :  1; /*11:11,                             NA*/
        uint32_t            cpu_rxlpf_test_mode :  1; /*12:12,                             NA*/
        uint32_t         cpu_rxlpf_test_mode_dr :  1; /*13:13,                             NA*/
        uint32_t            cpu_txlpf_test_mode :  1; /*14:14,                             NA*/
        uint32_t         cpu_txlpf_test_mode_dr :  1; /*15:15,                  TEST_MODE_CFG*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TEST_MODE_CFG;

//dig_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              rfpll_auto_cal_bp :  1; /* 0: 0,                             NA*/
        uint32_t             rco32k_auto_cal_bp :  1; /* 1: 1,                             NA*/
        uint32_t                tmx_auto_cal_bp :  1; /* 2: 2,                             NA*/
        uint32_t              txlpf_auto_cal_bp :  1; /* 3: 3,                             NA*/
        uint32_t              txdac_auto_cal_bp :  1; /* 4: 4,                             NA*/
        uint32_t              tximg_auto_cal_bp :  1; /* 5: 5,                             NA*/
        uint32_t              rxlpf_auto_cal_bp :  1; /* 6: 6,                             NA*/
        uint32_t             dpd_rx_auto_cal_bp :  1; /* 7: 7,                             NA*/
        uint32_t                 rx_auto_cal_bp :  1; /* 8: 8,                             NA*/
        uint32_t              rximg_auto_cal_bp :  1; /* 9: 9,                             NA*/
        uint32_t          cpu_selfcal_rfpll_set :  2; /*11:10,                             NA*/
        uint32_t                    sys_div_sel :  2; /*13:12,                             NA*/
        uint32_t                rmx_pkd_div_sel :  2; /*15:14,                             NA*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_DIG_CFG1;

//dig_cfg2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                      cpu_tmode :  2; /* 1: 0,                             NA*/
        uint32_t                   cpu_tmode_dr :  1; /* 2: 2,                             NA*/
        uint32_t                     cpu_cal_en :  1; /* 3: 3,                             NA*/
        uint32_t                  cpu_cal_en_dr :  1; /* 4: 4,                             NA*/
        uint32_t                      cpu_tx_en :  1; /* 5: 5,                             NA*/
        uint32_t                   cpu_tx_en_dr :  1; /* 6: 6,                             NA*/
        uint32_t                      cpu_rx_en :  1; /* 7: 7,                             NA*/
        uint32_t                   cpu_rx_en_dr :  1; /* 8: 8,                             NA*/
        uint32_t                      cpu_rf_en :  1; /* 9: 9,                             NA*/
        uint32_t                   cpu_rf_en_dr :  1; /*10:10,                             NA*/
        uint32_t                  cpu_pa_en_sel :  1; /*11:11,                             NA*/
        uint32_t                  cpu_11bgn_ind :  2; /*13:12,                             NA*/
        uint32_t               cpu_11bgn_ind_dr :  1; /*14:14,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                       DIG_CFG2*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_DIG_CFG2;

//pa_dly_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                cpu_pa_delay_en :  1; /* 0: 0,                             NA*/
        uint32_t               cpu_pa_delay_cnt :  6; /* 6: 1,                             NA*/
        uint32_t                 cpu_pa_ramp_dr :  1; /* 7: 7,                             NA*/
        uint32_t          cpu_pa_ramp_delay_cnt :  6; /*13: 8,                             NA*/
        uint32_t               cpu_pa_ramp_time :  2; /*15:14,                     PA_DLY_CFG*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_DLY_CFG;

//dig_cfg3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 cpu_adc_en_dly :  7; /* 6: 0,                             NA*/
        uint32_t              cpu_adc_en_dly_bp :  1; /* 7: 7,                             NA*/
        uint32_t                 cpu_dac_en_dly :  7; /*14: 8,                             NA*/
        uint32_t              cpu_dac_en_dly_bp :  1; /*15:15,                       DIG_CFG3*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_DIG_CFG3;

//dac_sin_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 cpu_dac_sin_en :  1; /* 0: 0,                             NA*/
        uint32_t           cpu_dac_sin_freq_sel :  2; /* 2: 1,                             NA*/
        uint32_t            cpu_dac_sin_amp_sel :  2; /* 4: 3,                             NA*/
        uint32_t            cpu_dac_sawtooth_en :  1; /* 5: 5,                             NA*/
        uint32_t           cpu_adc_fifo_wr_addr :  3; /* 8: 6,                             NA*/
        uint32_t               cpu_adc_fifo_off :  1; /* 9: 9,                             NA*/
        uint32_t           cpu_dac_fifo_wr_addr :  3; /*12:10,                             NA*/
        uint32_t               cpu_dac_fifo_off :  1; /*13:13,                             NA*/
        uint32_t               cpu_txdac_dc_add :  1; /*14:14,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                             NA*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_DAC_SIN_CFG;

//dig_cfg4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          cpu_rfpll_freq_num_dr :  1; /* 0: 0,                             NA*/
        uint32_t             cpu_rfpll_freq_num :  5; /* 5: 1,                             NA*/
        uint32_t                cpu_dac_clk_sel :  1; /* 6: 6,                             NA*/
        uint32_t                cpu_dac_clk_inv :  1; /* 7: 7,                             NA*/
        uint32_t         cpu_rfpll_lock_rst_sel :  1; /* 8: 8,                             NA*/
        uint32_t                     reserved_0 :  7; /*15: 9,                       DIG_CFG4*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_DIG_CFG4;

//dig_sw_rst
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     dig_sw_rst :  1; /* 0: 0,                             NA*/
        uint32_t                   auto_cal_rst :  1; /* 1: 1,                             NA*/
        uint32_t                  intf_ctrl_rst :  1; /* 2: 2,                             NA*/
        uint32_t                     reserved_1 :  1; /* 3: 3,                             NA*/
        uint32_t                     rctune_rst :  1; /* 4: 4,                             NA*/
        uint32_t                  sleep_cnt_rst :  1; /* 5: 5,                             NA*/
        uint32_t               cpu_auto_cal_clr :  1; /* 6: 6,                             NA*/
        uint32_t                   adc_auto_rst :  1; /* 7: 7,                             NA*/
        uint32_t                   dac_auto_rst :  1; /* 8: 8,                             NA*/
        uint32_t                     reserved_0 :  7; /*15: 9,                     DIG_SW_RST*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_DIG_SW_RST;

//rx_gain_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 rxlpf_gain_rpt :  4; /* 3: 0,                             NA*/
        uint32_t                   rmx_gain_rpt :  4; /* 7: 4,                             NA*/
        uint32_t                   lna_gain_rpt :  4; /*11: 8,                             NA*/
        uint32_t                   lna_tune_rpt :  3; /*14:12,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                    RX_GAIN_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_GAIN_RPT;

//tx_gain_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                    pa_gain_rpt :  2; /* 1: 0,                             NA*/
        uint32_t                 pa_da_gain_rpt :  2; /* 3: 2,                             NA*/
        uint32_t                   pa_ibase_rpt :  4; /* 7: 4,                             NA*/
        uint32_t                   tmx_gain_rpt :  3; /*10: 8,                             NA*/
        uint32_t                 txlpf_gain_rpt :  3; /*13:11,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                    TX_GAIN_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_GAIN_RPT;

//pll_corn_en_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          rfpll_vco_corn_en_rpt :  1; /* 0: 0,                             NA*/
        uint32_t       rfpll_vco_lower_freq_rpt :  1; /* 1: 1,                             NA*/
        uint32_t          rfpll_vco_cb_fine_rpt :  3; /* 4: 2,                             NA*/
        uint32_t                     reserved_0 : 11; /*15: 5,                PLL_CORN_EN_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PLL_CORN_EN_RPT;

//pll_cal_value_p_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          rfpll_vco_cbank_p_rpt : 16; /*15: 0,            PLL_CAL_VALUE_P_RPT*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PLL_CAL_VALUE_P_RPT;

//pll_cal_value_n_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          rfpll_vco_cbank_n_rpt : 16; /*15: 0,            PLL_CAL_VALUE_N_RPT*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PLL_CAL_VALUE_N_RPT;

//rco32k_cal_value_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rco32k_cbit_rpt :  5; /* 4: 0,                             NA*/
        uint32_t                     reserved_1 :  3; /* 7: 5,                             NA*/
        uint32_t          sleep_rco32k_cbit_rpt :  5; /*12: 8,                             NA*/
        uint32_t                     reserved_0 :  3; /*15:13,           RCO32K_CAL_VALUE_RPT*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RCO32K_CAL_VALUE_RPT;

//tmx_cal_value_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cal_tmx_i_rpt :  8; /* 7: 0,                             NA*/
        uint32_t                  cal_tmx_q_rpt :  8; /*15: 8,              TMX_CAL_VALUE_RPT*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CAL_VALUE_RPT;

//txlpf_cal_value_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              txlpf_otrim_i_rpt :  6; /* 5: 0,                             NA*/
        uint32_t                     reserved_1 :  2; /* 7: 6,                             NA*/
        uint32_t              txlpf_otrim_q_rpt :  6; /*13: 8,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,            TXLPF_CAL_VALUE_RPT*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXLPF_CAL_VALUE_RPT;

//rmx_cal_value_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cal_rmx_i_rpt :  8; /* 7: 0,                             NA*/
        uint32_t                  cal_rmx_q_rpt :  8; /*15: 8,              RMX_CAL_VALUE_RPT*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RMX_CAL_VALUE_RPT;

//rxlpf_cal_value_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              rxlpf_otrim_i_rpt :  6; /* 5: 0,                             NA*/
        uint32_t                     reserved_1 :  2; /* 7: 6,                             NA*/
        uint32_t              rxlpf_otrim_q_rpt :  6; /*13: 8,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,            RXLPF_CAL_VALUE_RPT*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXLPF_CAL_VALUE_RPT;

//tximg_cal_value_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                cal_tximg_i_rpt :  6; /* 5: 0,                             NA*/
        uint32_t                     reserved_1 :  2; /* 7: 6,                             NA*/
        uint32_t                cal_tximg_q_rpt :  6; /*13: 8,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,            TXIMG_CAL_VALUE_RPT*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXIMG_CAL_VALUE_RPT;

//calout_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             rxlpf_calout_q_rpt :  1; /* 0: 0,                             NA*/
        uint32_t             rxlpf_calout_i_rpt :  1; /* 1: 1,                             NA*/
        uint32_t               tmx_calout_q_rpt :  1; /* 2: 2,                             NA*/
        uint32_t               tmx_calout_i_rpt :  1; /* 3: 3,                             NA*/
        uint32_t                    rmx_pkd_out :  1; /* 4: 4,                             NA*/
        uint32_t                     reserved_0 : 11; /*15: 5,                     CALOUT_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CALOUT_RPT;

//en_rf_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     tmx_en_rpt :  1; /* 0: 0,                             NA*/
        uint32_t                      pa_en_rpt :  1; /* 1: 1,                             NA*/
        uint32_t                   txdac_en_rpt :  1; /* 2: 2,                             NA*/
        uint32_t                   txlpf_en_rpt :  1; /* 3: 3,                             NA*/
        uint32_t                     lna_en_rpt :  1; /* 4: 4,                             NA*/
        uint32_t                   rxadc_en_rpt :  1; /* 5: 5,                             NA*/
        uint32_t                   rxlpf_en_rpt :  1; /* 6: 6,                             NA*/
        uint32_t                     rmx_en_rpt :  1; /* 7: 7,                             NA*/
        uint32_t             rfpll_presc_en_rpt :  1; /* 8: 8,                             NA*/
        uint32_t                rfpll_lf_en_rpt :  1; /* 9: 9,                             NA*/
        uint32_t               rfpll_vco_en_rpt :  1; /*10:10,                             NA*/
        uint32_t                  txbuff_en_rpt :  1; /*11:11,                             NA*/
        uint32_t           txdacbuff_ldo_en_rpt :  1; /*12:12,                             NA*/
        uint32_t                     reserved_0 :  3; /*15:13,                  ENABLE_RF_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_EN_RF_RPT;

//cal_cfg_rpt1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             rfpll_count_en_rpt :  1; /* 0: 0,                             NA*/
        uint32_t              rfpll_open_en_rpt :  1; /* 1: 1,                             NA*/
        uint32_t               rfpll_cal_en_rpt :  1; /* 2: 2,                             NA*/
        uint32_t            rco32k_count_en_rpt :  1; /* 3: 3,                             NA*/
        uint32_t                tmx_cal1_en_rpt :  1; /* 4: 4,                             NA*/
        uint32_t                tmx_cal2_en_rpt :  1; /* 5: 5,                             NA*/
        uint32_t               txlpf_cal_en_rpt :  1; /* 6: 6,                             NA*/
        uint32_t                 rmx_cal_en_rpt :  1; /* 7: 7,                             NA*/
        uint32_t               rxlpf_cal_en_rpt :  1; /* 8: 8,                             NA*/
        uint32_t                   pdimg_en_rpt :  1; /* 9: 9,                             NA*/
        uint32_t            tximg_dc_cal_en_rpt :  1; /*10:10,                             NA*/
        uint32_t             rxlpf_chan_sel_rpt :  1; /*11:11,                             NA*/
        uint32_t                   rximg_en_rpt :  1; /*12:12,                             NA*/
        uint32_t                     dpd_en_rpt :  1; /*13:13,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                    CAL_CFG_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CAL_CFG_RPT1;

//cal_cfg_rpt2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  adc_chsel_rpt :  2; /* 1: 0,                             NA*/
        uint32_t                  dac_chsel_rpt :  2; /* 3: 2,                             NA*/
        uint32_t            auto_cal_status_rpt :  4; /* 7: 4,                             NA*/
        uint32_t                xtal40m_dig_rpt :  1; /* 8: 8,                             NA*/
        uint32_t                rco32k_ckin_rpt :  1; /* 9: 9,                             NA*/
        uint32_t             syspll_dac_clk_rpt :  1; /*10:10,                             NA*/
        uint32_t                phy_dac_clk_rpt :  1; /*11:11,                             NA*/
        uint32_t             adc_sync_ck80m_rpt :  1; /*12:12,                             NA*/
        uint32_t                phy_adc_clk_rpt :  1; /*13:13,                             NA*/
        uint32_t            rxlpf_test_mode_rpt :  1; /*14:14,                             NA*/
        uint32_t            txlpf_test_mode_rpt :  1; /*15:15,                             NA*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CAL_CFG_RPT2;

//rx_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_en_tmx_rx :  1; /* 0: 0,                             NA*/
        uint32_t                   cpu_en_pa_rx :  1; /* 1: 1,                             NA*/
        uint32_t                cpu_en_txdac_rx :  1; /* 2: 2,                             NA*/
        uint32_t                cpu_en_txlpf_rx :  1; /* 3: 3,                             NA*/
        uint32_t                  cpu_en_lna_rx :  1; /* 4: 4,                             NA*/
        uint32_t                cpu_en_rxadc_rx :  1; /* 5: 5,                             NA*/
        uint32_t                cpu_en_rxlpf_rx :  1; /* 6: 6,                             NA*/
        uint32_t                  cpu_en_rmx_rx :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,                  RX_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_MODE_EN_CFG;

//tx_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_en_tmx_tx :  1; /* 0: 0,                             NA*/
        uint32_t                   cpu_en_pa_tx :  1; /* 1: 1,                             NA*/
        uint32_t                cpu_en_txdac_tx :  1; /* 2: 2,                             NA*/
        uint32_t                cpu_en_txlpf_tx :  1; /* 3: 3,                             NA*/
        uint32_t                  cpu_en_lna_tx :  1; /* 4: 4,                             NA*/
        uint32_t                cpu_en_rxadc_tx :  1; /* 5: 5,                             NA*/
        uint32_t                cpu_en_rxlpf_tx :  1; /* 6: 6,                             NA*/
        uint32_t                  cpu_en_rmx_tx :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,                  TX_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_MODE_EN_CFG;

//txdc1_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_en_tmx_txdc1 :  1; /* 0: 0,                             NA*/
        uint32_t                cpu_en_pa_txdc1 :  1; /* 1: 1,                             NA*/
        uint32_t             cpu_en_txdac_txdc1 :  1; /* 2: 2,                             NA*/
        uint32_t             cpu_en_txlpf_txdc1 :  1; /* 3: 3,                             NA*/
        uint32_t               cpu_en_lna_txdc1 :  1; /* 4: 4,                             NA*/
        uint32_t             cpu_en_rxadc_txdc1 :  1; /* 5: 5,                             NA*/
        uint32_t             cpu_en_rxlpf_txdc1 :  1; /* 6: 6,                             NA*/
        uint32_t               cpu_en_rmx_txdc1 :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,               TXDC1_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXDC1_MODE_EN_CFG;

//txdc2_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_en_tmx_txdc2 :  1; /* 0: 0,                             NA*/
        uint32_t                cpu_en_pa_txdc2 :  1; /* 1: 1,                             NA*/
        uint32_t             cpu_en_txdac_txdc2 :  1; /* 2: 2,                             NA*/
        uint32_t             cpu_en_txlpf_txdc2 :  1; /* 3: 3,                             NA*/
        uint32_t               cpu_en_lna_txdc2 :  1; /* 4: 4,                             NA*/
        uint32_t             cpu_en_rxadc_txdc2 :  1; /* 5: 5,                             NA*/
        uint32_t             cpu_en_rxlpf_txdc2 :  1; /* 6: 6,                             NA*/
        uint32_t               cpu_en_rmx_txdc2 :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,               TXDC2_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXDC2_MODE_EN_CFG;

//txdc3_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_en_tmx_txdc3 :  1; /* 0: 0,                             NA*/
        uint32_t                cpu_en_pa_txdc3 :  1; /* 1: 1,                             NA*/
        uint32_t             cpu_en_txdac_txdc3 :  1; /* 2: 2,                             NA*/
        uint32_t             cpu_en_txlpf_txdc3 :  1; /* 3: 3,                             NA*/
        uint32_t               cpu_en_lna_txdc3 :  1; /* 4: 4,                             NA*/
        uint32_t             cpu_en_rxadc_txdc3 :  1; /* 5: 5,                             NA*/
        uint32_t             cpu_en_rxlpf_txdc3 :  1; /* 6: 6,                             NA*/
        uint32_t               cpu_en_rmx_txdc3 :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,               TXDC3_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXDC3_MODE_EN_CFG;

//rxlpf_dc_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_en_tmx_rxdc1 :  1; /* 0: 0,                             NA*/
        uint32_t                cpu_en_pa_rxdc1 :  1; /* 1: 1,                             NA*/
        uint32_t             cpu_en_txdac_rxdc1 :  1; /* 2: 2,                             NA*/
        uint32_t             cpu_en_txlpf_rxdc1 :  1; /* 3: 3,                             NA*/
        uint32_t               cpu_en_lna_rxdc1 :  1; /* 4: 4,                             NA*/
        uint32_t             cpu_en_rxadc_rxdc1 :  1; /* 5: 5,                             NA*/
        uint32_t             cpu_en_rxlpf_rxdc1 :  1; /* 6: 6,                             NA*/
        uint32_t               cpu_en_rmx_rxdc1 :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,             RXLF_DC_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXLPF_DC_MODE_EN_CFG;

//rx_dc_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_en_tmx_rxdc3 :  1; /* 0: 0,                             NA*/
        uint32_t                cpu_en_pa_rxdc3 :  1; /* 1: 1,                             NA*/
        uint32_t             cpu_en_txdac_rxdc3 :  1; /* 2: 2,                             NA*/
        uint32_t             cpu_en_txlpf_rxdc3 :  1; /* 3: 3,                             NA*/
        uint32_t               cpu_en_lna_rxdc3 :  1; /* 4: 4,                             NA*/
        uint32_t             cpu_en_rxadc_rxdc3 :  1; /* 5: 5,                             NA*/
        uint32_t             cpu_en_rxlpf_rxdc3 :  1; /* 6: 6,                             NA*/
        uint32_t               cpu_en_rmx_rxdc3 :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,               RX_DC_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_DC_MODE_EN_CFG;

//tximg_dc_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_en_tmx_tximg :  1; /* 0: 0,                             NA*/
        uint32_t                cpu_en_pa_tximg :  1; /* 1: 1,                             NA*/
        uint32_t             cpu_en_txdac_tximg :  1; /* 2: 2,                             NA*/
        uint32_t             cpu_en_txlpf_tximg :  1; /* 3: 3,                             NA*/
        uint32_t               cpu_en_lna_tximg :  1; /* 4: 4,                             NA*/
        uint32_t             cpu_en_rxadc_tximg :  1; /* 5: 5,                             NA*/
        uint32_t             cpu_en_rxlpf_tximg :  1; /* 6: 6,                             NA*/
        uint32_t               cpu_en_rmx_tximg :  1; /* 7: 7,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,              TX_IMG_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXIMG_DC_MODE_EN_CFG;

//rximg_dc_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_en_tmx_rximg :  1; /* 0: 0,                             NA*/
        uint32_t                cpu_en_pa_rximg :  1; /* 1: 1,                             NA*/
        uint32_t             cpu_en_txdac_rximg :  1; /* 2: 2,                             NA*/
        uint32_t             cpu_en_txlpf_rximg :  1; /* 3: 3,                             NA*/
        uint32_t               cpu_en_lna_rximg :  1; /* 4: 4,                             NA*/
        uint32_t             cpu_en_rxadc_rximg :  1; /* 5: 5,                             NA*/
        uint32_t             cpu_en_rxlpf_rximg :  1; /* 6: 6,                             NA*/
        uint32_t               cpu_en_rmx_rximg :  1; /* 7: 7,                             NA*/
        uint32_t          cpu_rfpll_rx_lo_rximg :  1; /* 8: 8,                             NA*/
        uint32_t          cpu_rfpll_tx_lo_rximg :  1; /* 9: 9,                             NA*/
        uint32_t             cpu_rmx_gain_rximg :  4; /*13:10,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,              RX_IMG_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXIMG_DC_MODE_EN_CFG;

//dpd_dc_mode_en_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 cpu_en_tmx_dpd :  1; /* 0: 0,                             NA*/
        uint32_t                  cpu_en_pa_dpd :  1; /* 1: 1,                             NA*/
        uint32_t               cpu_en_txdac_dpd :  1; /* 2: 2,                             NA*/
        uint32_t               cpu_en_txlpf_dpd :  1; /* 3: 3,                             NA*/
        uint32_t                 cpu_en_lna_dpd :  1; /* 4: 4,                             NA*/
        uint32_t               cpu_en_rxadc_dpd :  1; /* 5: 5,                             NA*/
        uint32_t               cpu_en_rxlpf_dpd :  1; /* 6: 6,                             NA*/
        uint32_t                 cpu_en_rmx_dpd :  1; /* 7: 7,                             NA*/
        uint32_t            cpu_rfpll_rx_lo_dpd :  1; /* 8: 8,                             NA*/
        uint32_t            cpu_rfpll_tx_lo_dpd :  1; /* 9: 9,                             NA*/
        uint32_t               cpu_rmx_gain_dpd :  4; /*13:10,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 DPD_ENABLE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_DPD_DC_MODE_EN_CFG;

//pll_overflow_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              rfpll_freq_of_rpt : 16; /*15: 0,               PLL_OVERFLOW_RPT*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PLL_OVERFLOW_RPT;

//pa_otd_protect_out
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             pa_otd_protect_out :  1; /* 0: 0,                             NA*/
        uint32_t                     reserved_0 : 15; /*15: 1,                             NA*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_OTD_PROTECT_OUT;

//pa_otd_intr_clr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                pa_otd_intr_clr :  1; /* 0: 0,                             NA*/
        uint32_t                     reserved_0 : 15; /*15: 1,                             NA*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_OTD_INTR_CLR;

//iref
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                   cpu_ivref_en :  1; /* 0: 0,                             NA*/
        uint32_t                  ivref_vbg_bit :  3; /* 3: 1,                             NA*/
        uint32_t              bg_therm_sense_en :  1; /* 4: 4,                             NA*/
        uint32_t                            smd :  1; /* 5: 5,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,                           IREF*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_IREF;

//xtal_40m
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t       cpu_syspll_adc_clk80m_en :  1; /* 0: 0,                             NA*/
        uint32_t       cpu_syspll_adc_clk80m_dr :  1; /* 1: 1,                             NA*/
        uint32_t       cpu_syspll_dac_clk80m_en :  1; /* 2: 2,                             NA*/
        uint32_t       cpu_syspll_dac_clk80m_dr :  1; /* 3: 3,                             NA*/
        uint32_t      cpu_xtal40m_rfpll_fref_en :  1; /* 4: 4,                             NA*/
        uint32_t        cpu_xtal40m_pll_fref_dr :  1; /* 5: 5,                             NA*/
        uint32_t           xtal40m_mdll_fref_en :  1; /* 6: 6,                       XTAL_40M*/
        uint32_t                     reserved_0 :  9; /*15: 7,                             NA*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_XTAL_40M;

//rf_dummy1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                      rf_dummy1 : 16; /*15: 0,                      rf_dummy1*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RF_DUMMY1;

//rf_dummy2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                      rf_dummy2 : 16; /*15: 0,                      rf_dummy2*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RF_DUMMY2;

//clk_32k_sel
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 cpu_rco32k_sel :  1; /* 0: 0,                             NA*/
        uint32_t                      rf_dummy3 : 15; /*15: 1,                      rf_dummy3*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CLK_32K_SEL;

//rf_dummy4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                      rf_dummy4 : 16; /*15: 0,                      rf_dummy4*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RF_DUMMY4;

//rco32k_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     reserved_1 :  1; /* 0: 0,                             NA*/
        uint32_t           cpu_rco32k_cnt_cycle :  7; /* 7: 1,                             NA*/
        uint32_t       cpu_rco32k_cal_direction :  1; /* 8: 8,                             NA*/
        uint32_t            cpu_rco32k_overtime :  2; /*10: 9,                             NA*/
        uint32_t       cpu_rco32k_cal_value_sel :  1; /*11:11,                             NA*/
        uint32_t                     reserved_0 :  4; /*15:12,                 rco32k_CAL_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RCO32K_CAL_CFG;

//rco32k_cal_cbit_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                cpu_rco32k_cbit :  5; /* 4: 0,                             NA*/
        uint32_t             cpu_rco32k_cbit_dr :  1; /* 5: 5,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,                rco32k_CBIT_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RCO32K_CAL_CBIT_CFG;

//rco32k_cnt_low_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             rco32k_cnt_low_rpt : 16; /*15: 0,             rco32k_CNT_LOW_RPT*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RCO32K_CNT_LOW_RPT;

//rco32k_cnt_high_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t            rco32k_cnt_high_rpt :  2; /* 1: 0,                             NA*/
        uint32_t                     reserved_0 : 14; /*15: 2,            rco32k_CNT_HIGH_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RCO32K_CNT_HIGH_RPT;

//pll_sdm_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        rfpll_sdm_dither_bypass :  1; /* 0: 0,                             NA*/
        uint32_t          rfpll_sdm_int_dec_sel :  2; /* 2: 1,                             NA*/
        uint32_t         rfpll_sdm_clk_fbc_edge :  1; /* 3: 3,                             NA*/
        uint32_t             rfpll_refmulti2_en :  1; /* 4: 4,                             NA*/
        uint32_t                     reserved_1 :  1; /* 5: 5,                             NA*/
        uint32_t                  rfpll_vco_vpk :  2; /* 7: 6,                             NA*/
        uint32_t           rfpll_reserved_sdm_0 :  8; /*15: 8,                   PLL_SDM_CFG1*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PLL_SDM_CFG1;

//pll_sdm_cfg2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        cpu_rfpll_sdm_stage_sel :  2; /* 1: 0,                             NA*/
        uint32_t                     reserved_0 : 14; /*15: 2,                   PLL_SDM_CFG2*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PLL_SDM_CFG2;

//rfpll_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             rfpll_ldo_vco_vbit :  4; /* 3: 0,                             NA*/
        uint32_t           rfpll_ldo_presc_vbit :  4; /* 7: 4,                             NA*/
        uint32_t            rfpll_ldo_digi_vbit :  4; /*11: 8,                             NA*/
        uint32_t              rfpll_ldo_cp_vbit :  3; /*14:12,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                       PLL_CFG1*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CFG1;

//rfpll_cfg2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  rfpll_cp_ibit :  4; /* 3: 0,                             NA*/
        uint32_t                 rfpll_cp_delay :  2; /* 5: 4,                             NA*/
        uint32_t             cpu_rfpll_updn_enb :  1; /* 6: 6,                             NA*/
        uint32_t               rfpll_cp_ioffset :  6; /*12: 7,                             NA*/
        uint32_t               rfpll_cp_op_ibit :  3; /*15:13,                       PLL_CFG2*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CFG2;

//rfpll_cfg3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 rfpll_lpf_open :  1; /* 0: 0,                             NA*/
        uint32_t                   rfpll_lpf_c0 :  2; /* 2: 1,                             NA*/
        uint32_t                   rfpll_lpf_r1 :  3; /* 5: 3,                             NA*/
        uint32_t                   rfpll_lpf_c2 :  2; /* 7: 6,                             NA*/
        uint32_t              rfpll_sdm_clk_sel :  1; /* 8: 8,                             NA*/
        uint32_t                  rfpll_fbc_sel :  3; /*11: 9,                             NA*/
        uint32_t                rfpll_vco_tc_en :  1; /*12:12,                             NA*/
        uint32_t             rfpll_vco_bp_lo_fb :  1; /*13:13,                             NA*/
        uint32_t                rfpll_test_mode :  1; /*14:14,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                       PLL_CFG3*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CFG3;

//rfpll_cfg4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             rfpll_vco_div_vbit :  3; /* 2: 0,                             NA*/
        uint32_t               rfpll_vco_div_hv :  1; /* 3: 3,                             NA*/
        uint32_t             rfpll_vco_div_bias :  3; /* 6: 4,                             NA*/
        uint32_t               rfpll_calclk_sel :  1; /* 7: 7,                             NA*/
        uint32_t             cpu_rfpll_rx_lo_en :  1; /* 8: 8,                             NA*/
        uint32_t             cpu_rfpll_tx_lo_en :  1; /* 9: 9,                             NA*/
        uint32_t            cpu_rfpll_trx_lo_dr :  1; /*10:10,                             NA*/
        uint32_t                 rfpll_freq_sel :  1; /*11:11,                             NA*/
        uint32_t                    pll_test_en :  1; /*12:12,                             NA*/
        uint32_t              rfpll_vco_tc_cbit :  2; /*14:13,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                       PLL_CFG4*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CFG4;

//rfpll_cfg5
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        cpu_auto_rfpll_presc_en :  1; /* 0: 0,                             NA*/
        uint32_t           cpu_auto_rfpll_lf_en :  1; /* 1: 1,                             NA*/
        uint32_t          cpu_auto_rfpll_vco_en :  1; /* 2: 2,                             NA*/
        uint32_t        cpu_rfpll_buf_value_sel :  2; /* 4: 3,                             NA*/
        uint32_t            cpu_rfpll_sdm_rst_n :  1; /* 5: 5,                             NA*/
        uint32_t        cpu_rfpll_lock_boost_t2 :  1; /* 6: 6,                             NA*/
        uint32_t        cpu_rfpll_lock_boost_t1 :  1; /* 7: 7,                             NA*/
        uint32_t        cpu_rfpll_lock_boost_bp :  1; /* 8: 8,                             NA*/
        uint32_t                     reserved_0 :  3; /*11: 9,                             NA*/
        uint32_t            cpu_rfpll_cal_delay :  4; /*15:12,                       PLL_CFG5*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CFG5;

//rfpll_sdm_freq_low
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             rfpll_sdm_freq_low : 16; /*15: 0,               PLL_SDM_FREQ_LOW*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_SDM_FREQ_LOW;

//rfpll_sdm_freq_high
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t            rfpll_sdm_freq_high : 16; /*15: 0,              PLL_SDM_FREQ_HIGH*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_SDM_FREQ_HIGH;

//rfpll_cal_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t            cpu_rfpll_cnt_cycle : 12; /*11: 0,                             NA*/
        uint32_t        cpu_rfpll_cal_direction :  1; /*12:12,                             NA*/
        uint32_t             cpu_rfpll_overtime :  2; /*14:13,                             NA*/
        uint32_t        cpu_rfpll_cal_value_sel :  1; /*15:15,                   PLL_CAL_CFG1*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CAL_CFG1;

//rfpll_cal_cfg2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           cpu_rfpll_max_bit_th :  5; /* 4: 0,                             NA*/
        uint32_t           cpu_rfpll_min_bit_th :  5; /* 9: 5,                             NA*/
        uint32_t        cpu_rfpll_fine_cbit_set :  1; /*10:10,                             NA*/
        uint32_t                     reserved_0 :  5; /*15:11,                   PLL_CAL_CFG2*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CAL_CFG2;

//rfpll_cbank_dr_1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t       cpu_rfpll_vco_capbank_dr :  1; /* 0: 0,                             NA*/
        uint32_t          cpu_rfpll_vco_corn_en :  1; /* 1: 1,                             NA*/
        uint32_t       cpu_rfpll_vco_lower_freq :  1; /* 2: 2,                             NA*/
        uint32_t          cpu_rfpll_cbank_p_oct :  1; /* 3: 3,                             NA*/
        uint32_t         cpu_rfpll_cbank_p_quar :  1; /* 4: 4,                             NA*/
        uint32_t         cpu_rfpll_cbank_p_half :  1; /* 5: 5,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,               PLL_VCO_BAND_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CBANK_DR_1;

//rfpll_cbank_dr_2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        cpu_rfpll_vco_capbank_p : 16; /*15: 0,               PLL_VCO_BAND_CFG*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CBANK_DR_2;

//rfpll_cbank_dr_3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        cpu_rfpll_vco_capbank_n : 16; /*15: 0,               PLL_VCO_BAND_CFG*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_CBANK_DR_3;

//rfpll_rpt1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 rfpll_cnt_high : 16; /*15: 0,                       PLL_RPT1*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_RPT1;

//rfpll_rpt2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     rfpll_lock :  1; /* 0: 0,                             NA*/
        uint32_t                  rfpll_cnt_low :  1; /* 1: 1,                             NA*/
        uint32_t             rfpll_rx_lo_en_rpt :  1; /* 2: 2,                             NA*/
        uint32_t             rfpll_tx_lo_en_rpt :  1; /* 3: 3,                             NA*/
        uint32_t                     reserved_0 : 12; /*15: 4,                       PLL_RPT2*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RFPLL_RPT2;

//lna_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                         lna_cs :  3; /* 2: 0,                             NA*/
        uint32_t                     reserved_1 :  1; /* 3: 3,                             NA*/
        uint32_t                 lna_ldo_testen :  1; /* 4: 4,                             NA*/
        uint32_t                lna_2stage_vbit :  3; /* 7: 5,                             NA*/
        uint32_t                lna_bias_testen :  1; /* 8: 8,                             NA*/
        uint32_t           cpu_lna_guard_ldo_en :  1; /* 9: 9,                             NA*/
        uint32_t           cpu_lna_guard_ldo_dr :  1; /*10:10,                             NA*/
        uint32_t                     reserved_0 :  5; /*15:11,                       LNA_CFG1*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_LNA_CFG1;

//lna_cfg2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                        lna_cbp :  4; /* 3: 0,                             NA*/
        uint32_t                        lna_cbn :  4; /* 7: 4,                             NA*/
        uint32_t                     reserved_0 :  8; /*15: 8,                       LNA_CFG2*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_LNA_CFG2;

//lna_ldo_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             cpu_lna_ldo_st_sel :  1; /* 0: 0,                             NA*/
        uint32_t               cpu_lna_ldo_auto :  1; /* 1: 1,                             NA*/
        uint32_t                   cpu_lna_work :  1; /* 2: 2,                             NA*/
        uint32_t                  cpu_lna_clear :  1; /* 3: 3,                             NA*/
        uint32_t          cpu_lna_ldo_samp_time :  4; /* 7: 4,                             NA*/
        uint32_t        cpu_lna_ldo_prechg_time :  4; /*11: 8,                             NA*/
        uint32_t                     reserved_0 :  3; /*14:12,                             NA*/
        uint32_t            cpu_lna_ldo_cfg_vld :  1; /*15:15,                    LNA_LDO_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_LNA_LDO_CFG;

//rmx_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                    rmx_vlo_amp :  2; /* 1: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /* 2: 2,                             NA*/
        uint32_t                  rmx_cal_range :  3; /* 5: 3,                             NA*/
        uint32_t                 rmx_lobias_bit :  4; /* 9: 6,                             NA*/
        uint32_t                    rmx_op_ibit :  2; /*11:10,                             NA*/
        uint32_t                 rmx_ldo_testen :  1; /*12:12,                             NA*/
        uint32_t                   rmx_ldo_vbit :  3; /*15:13,                       RMX_CFG1*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RMX_CFG1;

//rmx_pkd_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 cpu_rmx_pkd_en :  1; /* 0: 0,                             NA*/
        uint32_t              cpu_rmx_pkd_reset :  1; /* 1: 1,                             NA*/
        uint32_t                     reserved_1 :  2; /* 3: 2,                             NA*/
        uint32_t                   rmx_pkd_vbit :  6; /* 9: 4,                             NA*/
        uint32_t                     reserved_0 :  6; /*15:10,                    RMX_PKD_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RMX_PKD_CFG;

//rmx_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        cpu_rmx_cal_direction_i :  1; /* 0: 0,                             NA*/
        uint32_t             cpu_rmx_overtime_i :  2; /* 2: 1,                             NA*/
        uint32_t        cpu_rmx_cal_value_sel_i :  1; /* 3: 3,                             NA*/
        uint32_t            cpu_rmx_cal_clk_sel :  2; /* 5: 4,                             NA*/
        uint32_t            cpu_rmx_cal_alg_sel :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_1 :  1; /* 7: 7,                             NA*/
        uint32_t        cpu_rmx_cal_direction_q :  1; /* 8: 8,                             NA*/
        uint32_t             cpu_rmx_overtime_q :  2; /*10: 9,                             NA*/
        uint32_t        cpu_rmx_cal_value_sel_q :  1; /*11:11,                             NA*/
        uint32_t                   rmx_cal_gain :  3; /*14:12,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                    RMX_CAL_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RMX_CAL_CFG;

//rx_dpd_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t     cpu_rx_dpd_cal_direction_i :  1; /* 0: 0,                             NA*/
        uint32_t          cpu_rx_dpd_overtime_i :  2; /* 2: 1,                             NA*/
        uint32_t     cpu_rx_dpd_cal_value_sel_i :  1; /* 3: 3,                             NA*/
        uint32_t         cpu_rx_dpd_cal_clk_sel :  2; /* 5: 4,                             NA*/
        uint32_t         cpu_rx_dpd_cal_alg_sel :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_2 :  1; /* 7: 7,                             NA*/
        uint32_t     cpu_rx_dpd_cal_direction_q :  1; /* 8: 8,                             NA*/
        uint32_t          cpu_rx_dpd_overtime_q :  2; /*10: 9,                             NA*/
        uint32_t     cpu_rx_dpd_cal_value_sel_q :  1; /*11:11,                             NA*/
        uint32_t                     reserved_1 :  2; /*13:12,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 RX_DPD_CAL_CFG*/
        uint32_t                     reserved_3 :  1; /*16:16,                               */
        uint32_t                     reserved_4 :  1; /*17:17,                               */
        uint32_t                     reserved_5 :  1; /*18:18,                               */
        uint32_t                     reserved_6 :  1; /*19:19,                               */
        uint32_t                     reserved_7 :  1; /*20:20,                               */
        uint32_t                     reserved_8 :  1; /*21:21,                               */
        uint32_t                     reserved_9 :  1; /*22:22,                               */
        uint32_t                    reserved_10 :  1; /*23:23,                               */
        uint32_t                    reserved_11 :  1; /*24:24,                               */
        uint32_t                    reserved_12 :  1; /*25:25,                               */
        uint32_t                    reserved_13 :  1; /*26:26,                               */
        uint32_t                    reserved_14 :  1; /*27:27,                               */
        uint32_t                    reserved_15 :  1; /*28:28,                               */
        uint32_t                    reserved_16 :  1; /*29:29,                               */
        uint32_t                    reserved_17 :  1; /*30:30,                               */
        uint32_t                    reserved_18 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_DPD_CAL_CFG;

//rximg_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t     cpu_rx_img_cal_direction_i :  1; /* 0: 0,                             NA*/
        uint32_t          cpu_rx_img_overtime_i :  2; /* 2: 1,                             NA*/
        uint32_t     cpu_rx_img_cal_value_sel_i :  1; /* 3: 3,                             NA*/
        uint32_t         cpu_rx_img_cal_clk_sel :  2; /* 5: 4,                             NA*/
        uint32_t         cpu_rx_img_cal_alg_sel :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_2 :  1; /* 7: 7,                             NA*/
        uint32_t     cpu_rx_img_cal_direction_q :  1; /* 8: 8,                             NA*/
        uint32_t          cpu_rx_img_overtime_q :  2; /*10: 9,                             NA*/
        uint32_t     cpu_rx_img_cal_value_sel_q :  1; /*11:11,                             NA*/
        uint32_t                     reserved_1 :  2; /*13:12,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                  RXIMG_CAL_CFG*/
        uint32_t                     reserved_3 :  1; /*16:16,                               */
        uint32_t                     reserved_4 :  1; /*17:17,                               */
        uint32_t                     reserved_5 :  1; /*18:18,                               */
        uint32_t                     reserved_6 :  1; /*19:19,                               */
        uint32_t                     reserved_7 :  1; /*20:20,                               */
        uint32_t                     reserved_8 :  1; /*21:21,                               */
        uint32_t                     reserved_9 :  1; /*22:22,                               */
        uint32_t                    reserved_10 :  1; /*23:23,                               */
        uint32_t                    reserved_11 :  1; /*24:24,                               */
        uint32_t                    reserved_12 :  1; /*25:25,                               */
        uint32_t                    reserved_13 :  1; /*26:26,                               */
        uint32_t                    reserved_14 :  1; /*27:27,                               */
        uint32_t                    reserved_15 :  1; /*28:28,                               */
        uint32_t                    reserved_16 :  1; /*29:29,                               */
        uint32_t                    reserved_17 :  1; /*30:30,                               */
        uint32_t                    reserved_18 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXIMG_CAL_CFG;

//cal_rmx_i_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_cal_rmx_i :  8; /* 7: 0,                             NA*/
        uint32_t               cpu_cal_rmx_i_dr :  1; /* 8: 8,                             NA*/
        uint32_t                     reserved_0 :  7; /*15: 9,                  CAL_RMX_I_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CAL_RMX_I_DR;

//cal_rmx_q_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_cal_rmx_q :  8; /* 7: 0,                             NA*/
        uint32_t               cpu_cal_rmx_q_dr :  1; /* 8: 8,                             NA*/
        uint32_t                     reserved_0 :  7; /*15: 9,                  CAL_RMX_Q_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CAL_RMX_Q_DR;

//rxlpf_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     rxlpf_resv :  2; /* 1: 0,                             NA*/
        uint32_t                    rxlpf_ibsel :  2; /* 3: 2,                             NA*/
        uint32_t                  rxlpf_atrim_q :  2; /* 5: 4,                             NA*/
        uint32_t                  rxlpf_atrim_i :  2; /* 7: 6,                             NA*/
        uint32_t                 rxlpf_ldo_vbit :  3; /*10: 8,                             NA*/
        uint32_t                  rxlpf_iq_swap :  1; /*11:11,                             NA*/
        uint32_t               rxlpf_otrim_step :  1; /*12:12,                             NA*/
        uint32_t                     rxlpf_coff :  1; /*13:13,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                     RXLPF_CFG1*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXLPF_CFG1;

//rxlpf_ctrim_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                cpu_rxlpf_ctrim :  5; /* 4: 0,                             NA*/
        uint32_t             cpu_rxlpf_ctrim_dr :  1; /* 5: 5,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,                RXLPF_CTRIM_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXLPF_CTRIM_DR;

//rxlpf_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t      cpu_rxlpf_cal_direction_i :  1; /* 0: 0,                             NA*/
        uint32_t           cpu_rxlpf_overtime_i :  2; /* 2: 1,                             NA*/
        uint32_t      cpu_rxlpf_cal_value_sel_i :  1; /* 3: 3,                             NA*/
        uint32_t          cpu_rxlpf_cal_clk_sel :  2; /* 5: 4,                             NA*/
        uint32_t          cpu_rxlpf_cal_alg_sel :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_2 :  1; /* 7: 7,                             NA*/
        uint32_t      cpu_rxlpf_cal_direction_q :  1; /* 8: 8,                             NA*/
        uint32_t           cpu_rxlpf_overtime_q :  2; /*10: 9,                             NA*/
        uint32_t      cpu_rxlpf_cal_value_sel_q :  1; /*11:11,                             NA*/
        uint32_t                     reserved_1 :  2; /*13:12,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                  RXLPF_CAL_CFG*/
        uint32_t                     reserved_3 :  1; /*16:16,                               */
        uint32_t                     reserved_4 :  1; /*17:17,                               */
        uint32_t                     reserved_5 :  1; /*18:18,                               */
        uint32_t                     reserved_6 :  1; /*19:19,                               */
        uint32_t                     reserved_7 :  1; /*20:20,                               */
        uint32_t                     reserved_8 :  1; /*21:21,                               */
        uint32_t                     reserved_9 :  1; /*22:22,                               */
        uint32_t                    reserved_10 :  1; /*23:23,                               */
        uint32_t                    reserved_11 :  1; /*24:24,                               */
        uint32_t                    reserved_12 :  1; /*25:25,                               */
        uint32_t                    reserved_13 :  1; /*26:26,                               */
        uint32_t                    reserved_14 :  1; /*27:27,                               */
        uint32_t                    reserved_15 :  1; /*28:28,                               */
        uint32_t                    reserved_16 :  1; /*29:29,                               */
        uint32_t                    reserved_17 :  1; /*30:30,                               */
        uint32_t                    reserved_18 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXLPF_CAL_CFG;

//rxlpf_otrim_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              cpu_rxlpf_otrim_i :  6; /* 5: 0,                             NA*/
        uint32_t           cpu_rxlpf_otrim_i_dr :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_1 :  1; /* 7: 7,                             NA*/
        uint32_t              cpu_rxlpf_otrim_q :  6; /*13: 8,                             NA*/
        uint32_t           cpu_rxlpf_otrim_q_dr :  1; /*14:14,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,             RXLPF_OTRIM_IQ_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXLPF_OTRIM_DR;

//rxlpf_cal_clk_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              cpu_rxlpf_cal_clk :  1; /* 0: 0,                             NA*/
        uint32_t           cpu_rxlpf_cal_clk_dr :  1; /* 1: 1,                             NA*/
        uint32_t                     reserved_0 : 14; /*15: 2,                  RXLPF_CAL_CLK*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXLPF_CAL_CLK_DR;

//rxadc_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                   adc_ldo_vbit :  3; /* 2: 0,                             NA*/
        uint32_t                 adc_ldo_testen :  1; /* 3: 3,                             NA*/
        uint32_t             adc_bypass_buff_en :  1; /* 4: 4,                             NA*/
        uint32_t                     adc_iso_en :  1; /* 5: 5,                             NA*/
        uint32_t                   adc_short_en :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_0 :  9; /*15: 7,                      RXADC_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RXADC_CFG;

//pa_ovd_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_pa_ovd_en :  1; /* 0: 0,                             NA*/
        uint32_t                 cpu_pa_ovd_rst :  1; /* 1: 1,                             NA*/
        uint32_t                    pa_ovd_rbit :  4; /* 5: 2,                             NA*/
        uint32_t                  pa_ldo_testen :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_0 :  3; /* 9: 7,                             NA*/
        uint32_t             pa_pwrimg_ldo_vbit :  3; /*12:10,                             NA*/
        uint32_t                  pa_ovd_refbit :  3; /*15:13,                     PA_OVD_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_OVD_CFG;

//pa_pkd_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_pa_pkd_en :  1; /* 0: 0,                             NA*/
        uint32_t                    pa_pkd_gain :  3; /* 3: 1,                             NA*/
        uint32_t                     reserved_0 : 12; /*15: 4,                     PA_PKD_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_PKD_CFG1;

//pa_tsen_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 cpu_pa_tsen_en :  1; /* 0: 0,                             NA*/
        uint32_t                  pa_thermo_bit :  2; /* 2: 1,                             NA*/
        uint32_t                cpu_pa_tsen_rst :  1; /* 3: 3,                             NA*/
        uint32_t          cpu_pa_thermo_div_sel :  2; /* 5: 4,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,            PA_THERMO_SENSE_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_TSEN_CFG;

//pa_rpt2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                     pa_ovd_out :  1; /* 0: 0,                             NA*/
        uint32_t                     reserved_2 :  1; /* 1: 1,                             NA*/
        uint32_t                     pa_pkd_out :  1; /* 2: 2,                             NA*/
        uint32_t            pa_thermo_sense_out :  1; /* 3: 3,                             NA*/
        uint32_t            pa_pkd_cal_overflow :  1; /* 4: 4,                             NA*/
        uint32_t                     reserved_1 :  1; /* 5: 5,                             NA*/
        uint32_t                 pa2rmx_att_rpt :  3; /* 8: 6,                             NA*/
        uint32_t                    pa_ramp_rpt :  4; /*12: 9,                             NA*/
        uint32_t                     reserved_0 :  3; /*15:13,                        PA_RPT2*/
        uint32_t                     reserved_3 :  1; /*16:16,                               */
        uint32_t                     reserved_4 :  1; /*17:17,                               */
        uint32_t                     reserved_5 :  1; /*18:18,                               */
        uint32_t                     reserved_6 :  1; /*19:19,                               */
        uint32_t                     reserved_7 :  1; /*20:20,                               */
        uint32_t                     reserved_8 :  1; /*21:21,                               */
        uint32_t                     reserved_9 :  1; /*22:22,                               */
        uint32_t                    reserved_10 :  1; /*23:23,                               */
        uint32_t                    reserved_11 :  1; /*24:24,                               */
        uint32_t                    reserved_12 :  1; /*25:25,                               */
        uint32_t                    reserved_13 :  1; /*26:26,                               */
        uint32_t                    reserved_14 :  1; /*27:27,                               */
        uint32_t                    reserved_15 :  1; /*28:28,                               */
        uint32_t                    reserved_16 :  1; /*29:29,                               */
        uint32_t                    reserved_17 :  1; /*30:30,                               */
        uint32_t                    reserved_18 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_RPT2;

//pa_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                    pa_bpf_ibit :  2; /* 1: 0,                             NA*/
        uint32_t                    pa_bpf_gain :  3; /* 4: 2,                             NA*/
        uint32_t                     reserved_2 :  2; /* 6: 5,                             NA*/
        uint32_t                     reserved_1 :  3; /* 9: 7,                             NA*/
        uint32_t                      pa_tp_sel :  3; /*12:10,                             NA*/
        uint32_t                     reserved_0 :  3; /*15:13,                        PA_CFG1*/
        uint32_t                     reserved_3 :  1; /*16:16,                               */
        uint32_t                     reserved_4 :  1; /*17:17,                               */
        uint32_t                     reserved_5 :  1; /*18:18,                               */
        uint32_t                     reserved_6 :  1; /*19:19,                               */
        uint32_t                     reserved_7 :  1; /*20:20,                               */
        uint32_t                     reserved_8 :  1; /*21:21,                               */
        uint32_t                     reserved_9 :  1; /*22:22,                               */
        uint32_t                    reserved_10 :  1; /*23:23,                               */
        uint32_t                    reserved_11 :  1; /*24:24,                               */
        uint32_t                    reserved_12 :  1; /*25:25,                               */
        uint32_t                    reserved_13 :  1; /*26:26,                               */
        uint32_t                    reserved_14 :  1; /*27:27,                               */
        uint32_t                    reserved_15 :  1; /*28:28,                               */
        uint32_t                    reserved_16 :  1; /*29:29,                               */
        uint32_t                    reserved_17 :  1; /*30:30,                               */
        uint32_t                    reserved_18 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_CFG1;

//pa_cfg2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                pa_imgcal_range :  3; /* 2: 0,                             NA*/
        uint32_t                 pa_imgcal_gain :  3; /* 5: 3,                             NA*/
        uint32_t                  pa_pdcal_gain :  3; /* 8: 6,                             NA*/
        uint32_t                 pa_pdcal_range :  3; /*11: 9,                             NA*/
        uint32_t                     reserved_0 :  4; /*15:12,                        PA_CFG2*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_CFG2;

//pa_cfg3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  pa_ldo_vbit_b :  3; /* 2: 0,                             NA*/
        uint32_t                 pa_vcas_ibit_b :  4; /* 6: 3,                             NA*/
        uint32_t              pa_vcas_hv_rbit_b :  3; /* 9: 7,                             NA*/
        uint32_t                 pa_vcas_rbit_b :  3; /*12:10,                             NA*/
        uint32_t                   pa_da_ibit_b :  3; /*15:13,                        PA_CFG3*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_CFG3;

//pa_cfg4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           cpu_pa2rmx_att_rximg :  3; /* 2: 0,                             NA*/
        uint32_t             cpu_pa2rmx_att_dpd :  3; /* 5: 3,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,                        PA_CFG4*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_CFG4;

//tmx_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tmx_lin_tune_b :  3; /* 2: 0,                             NA*/
        uint32_t                    tmx_ibase_b :  2; /* 4: 3,                             NA*/
        uint32_t                   tmx_op_vcm_b :  2; /* 6: 5,                             NA*/
        uint32_t                  tmx_op_ibit_b :  2; /* 8: 7,                             NA*/
        uint32_t               tmx_lobuf_vbit_b :  3; /*11: 9,                             NA*/
        uint32_t                  tmx_vol_amp_b :  2; /*13:12,                             NA*/
        uint32_t                 tmx_rc_range_b :  2; /*15:14,                       TMX_CFG1*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CFG1;

//tmx_cfg2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                    tmx_iq_swap :  1; /* 0: 0,                             NA*/
        uint32_t                 tmx_input_gain :  3; /* 3: 1,                             NA*/
        uint32_t                     reserved_0 :  2; /* 5: 4,                             NA*/
        uint32_t                  tmx_cal_range :  3; /* 8: 6,                             NA*/
        uint32_t                   tmx_cal_gain :  3; /*11: 9,                             NA*/
        uint32_t                 tmx_ldo_testen :  1; /*12:12,                             NA*/
        uint32_t                   tmx_ldo_vbit :  3; /*15:13,                       TMX_CFG2*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CFG2;

//tmx_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        cpu_tmx_cal_direction_i :  1; /* 0: 0,                             NA*/
        uint32_t             cpu_tmx_overtime_i :  2; /* 2: 1,                             NA*/
        uint32_t        cpu_tmx_cal_value_sel_i :  1; /* 3: 3,                             NA*/
        uint32_t            cpu_tmx_cal_clk_sel :  2; /* 5: 4,                             NA*/
        uint32_t            cpu_tmx_cal_alg_sel :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_1 :  1; /* 7: 7,                             NA*/
        uint32_t        cpu_tmx_cal_direction_q :  1; /* 8: 8,                             NA*/
        uint32_t             cpu_tmx_overtime_q :  2; /*10: 9,                             NA*/
        uint32_t        cpu_tmx_cal_value_sel_q :  1; /*11:11,                             NA*/
        uint32_t         cpu_tmx_offset_opt_sel :  2; /*13:12,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                    TMX_CAL_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CAL_CFG;

//tmx_cal_clk_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                cpu_tmx_cal_clk :  1; /* 0: 0,                             NA*/
        uint32_t             cpu_tmx_cal_clk_dr :  1; /* 1: 1,                             NA*/
        uint32_t                     reserved_0 : 14; /*15: 2,                    TMX_CAL_CLK*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CAL_CLK_DR;

//cal_tmx_i_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_cal_tmx_i :  8; /* 7: 0,                             NA*/
        uint32_t               cpu_cal_tmx_i_dr :  1; /* 8: 8,                             NA*/
        uint32_t                     reserved_0 :  7; /*15: 9,                  CAL_TMX_I_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CAL_TMX_I_DR;

//cal_tmx_q_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  cpu_cal_tmx_q :  8; /* 7: 0,                             NA*/
        uint32_t               cpu_cal_tmx_q_dr :  1; /* 8: 8,                             NA*/
        uint32_t                     reserved_0 :  7; /*15: 9,                  CAL_TMX_Q_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CAL_TMX_Q_DR;

//txlpf_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               txlpf_ldo_vbit_b :  3; /* 2: 0,                             NA*/
        uint32_t                     reserved_1 :  1; /* 3: 3,                             NA*/
        uint32_t                txlpf_atrim_i_b :  2; /* 5: 4,                             NA*/
        uint32_t                txlpf_atrim_q_b :  2; /* 7: 6,                             NA*/
        uint32_t                  txlpf_ibsel_b :  2; /* 9: 8,                             NA*/
        uint32_t                   txlpf_resv_b :  2; /*11:10,                             NA*/
        uint32_t                   txlpf_coff_b :  1; /*12:12,                             NA*/
        uint32_t                     reserved_0 :  3; /*15:13,                     TXLPF_CFG1*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXLPF_CFG1;

//txlpf_ctrim_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                cpu_txlpf_ctrim :  5; /* 4: 0,                             NA*/
        uint32_t             cpu_txlpf_ctrim_dr :  1; /* 5: 5,                             NA*/
        uint32_t                     reserved_0 : 10; /*15: 6,                TXLPF_CTRIM_CFG*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXLPF_CTRIM_DR;

//txlpf_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t      cpu_txlpf_cal_direction_i :  1; /* 0: 0,                             NA*/
        uint32_t           cpu_txlpf_overtime_i :  2; /* 2: 1,                             NA*/
        uint32_t      cpu_txlpf_cal_value_sel_i :  1; /* 3: 3,                             NA*/
        uint32_t          cpu_txlpf_cal_clk_sel :  2; /* 5: 4,                             NA*/
        uint32_t          cpu_txlpf_cal_alg_sel :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_1 :  1; /* 7: 7,                             NA*/
        uint32_t      cpu_txlpf_cal_direction_q :  1; /* 8: 8,                             NA*/
        uint32_t           cpu_txlpf_overtime_q :  2; /*10: 9,                             NA*/
        uint32_t      cpu_txlpf_cal_value_sel_q :  1; /*11:11,                             NA*/
        uint32_t       cpu_txlpf_offset_opt_sel :  2; /*13:12,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                  TXLPF_CAL_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXLPF_CAL_CFG;

//txlpf_otrim_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              cpu_txlpf_otrim_i :  6; /* 5: 0,                             NA*/
        uint32_t           cpu_txlpf_otrim_i_dr :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_1 :  1; /* 7: 7,                             NA*/
        uint32_t              cpu_txlpf_otrim_q :  6; /*13: 8,                             NA*/
        uint32_t           cpu_txlpf_otrim_q_dr :  1; /*14:14,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,             TXLPF_OTRIM_IQ_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXLPF_OTRIM_DR;

//tx_img_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t     cpu_tx_img_cal_direction_i :  1; /* 0: 0,                             NA*/
        uint32_t          cpu_tx_img_overtime_i :  2; /* 2: 1,                             NA*/
        uint32_t     cpu_tx_img_cal_value_sel_i :  1; /* 3: 3,                             NA*/
        uint32_t         cpu_tx_img_cal_clk_sel :  2; /* 5: 4,                             NA*/
        uint32_t         cpu_tx_img_cal_alg_sel :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_2 :  1; /* 7: 7,                             NA*/
        uint32_t     cpu_tx_img_cal_direction_q :  1; /* 8: 8,                             NA*/
        uint32_t          cpu_tx_img_overtime_q :  2; /*10: 9,                             NA*/
        uint32_t     cpu_tx_img_cal_value_sel_q :  1; /*11:11,                             NA*/
        uint32_t                     reserved_1 :  2; /*13:12,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                  TXIMG_CAL_CFG*/
        uint32_t                     reserved_3 :  1; /*16:16,                               */
        uint32_t                     reserved_4 :  1; /*17:17,                               */
        uint32_t                     reserved_5 :  1; /*18:18,                               */
        uint32_t                     reserved_6 :  1; /*19:19,                               */
        uint32_t                     reserved_7 :  1; /*20:20,                               */
        uint32_t                     reserved_8 :  1; /*21:21,                               */
        uint32_t                     reserved_9 :  1; /*22:22,                               */
        uint32_t                    reserved_10 :  1; /*23:23,                               */
        uint32_t                    reserved_11 :  1; /*24:24,                               */
        uint32_t                    reserved_12 :  1; /*25:25,                               */
        uint32_t                    reserved_13 :  1; /*26:26,                               */
        uint32_t                    reserved_14 :  1; /*27:27,                               */
        uint32_t                    reserved_15 :  1; /*28:28,                               */
        uint32_t                    reserved_16 :  1; /*29:29,                               */
        uint32_t                    reserved_17 :  1; /*30:30,                               */
        uint32_t                    reserved_18 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_IMG_CAL_CFG;

//cal_tx_img_dr
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_cal_tx_img_i :  6; /* 5: 0,                             NA*/
        uint32_t            cpu_cal_tx_img_i_dr :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_1 :  1; /* 7: 7,                             NA*/
        uint32_t               cpu_cal_tx_img_q :  6; /*13: 8,                             NA*/
        uint32_t            cpu_cal_tx_img_q_dr :  1; /*14:14,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,               CAL_TXIMG_IQ_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_CAL_TX_IMG_DR;

//txdac_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  dac_txbuf_vcm :  2; /* 1: 0,                             NA*/
        uint32_t                 dac_txbuf_gain :  2; /* 3: 2,                             NA*/
        uint32_t                      dac_ibsel :  2; /* 5: 4,                             NA*/
        uint32_t                       dac_resv :  2; /* 7: 6,                             NA*/
        uint32_t                   dac_ldo_vbit :  3; /*10: 8,                             NA*/
        uint32_t                 dac_ldo_testen :  1; /*11:11,                             NA*/
        uint32_t                  txbuff_iq_sel :  1; /*12:12,                             NA*/
        uint32_t                     reserved_0 :  3; /*15:13,                       DAC_CFG1*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXDAC_CFG;

//tmx_cb_cfg1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  tmx_cbp_2417m :  4; /* 3: 0,                             NA*/
        uint32_t                  tmx_cbn_2417m :  4; /* 7: 4,                             NA*/
        uint32_t                  tmx_cbp_2412m :  4; /*11: 8,                             NA*/
        uint32_t                  tmx_cbn_2412m :  4; /*15:12,                    TMX_CB_CFG1*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CB_CFG1;

//tmx_cb_cfg2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  tmx_cbp_2427m :  4; /* 3: 0,                             NA*/
        uint32_t                  tmx_cbn_2427m :  4; /* 7: 4,                             NA*/
        uint32_t                  tmx_cbp_2422m :  4; /*11: 8,                             NA*/
        uint32_t                  tmx_cbn_2422m :  4; /*15:12,                    TMX_CB_CFG2*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CB_CFG2;

//tmx_cb_cfg3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  tmx_cbp_2437m :  4; /* 3: 0,                             NA*/
        uint32_t                  tmx_cbn_2437m :  4; /* 7: 4,                             NA*/
        uint32_t                  tmx_cbp_2432m :  4; /*11: 8,                             NA*/
        uint32_t                  tmx_cbn_2432m :  4; /*15:12,                    TMX_CB_CFG3*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CB_CFG3;

//tmx_cb_cfg4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  tmx_cbp_2447m :  4; /* 3: 0,                             NA*/
        uint32_t                  tmx_cbn_2447m :  4; /* 7: 4,                             NA*/
        uint32_t                  tmx_cbp_2442m :  4; /*11: 8,                             NA*/
        uint32_t                  tmx_cbn_2442m :  4; /*15:12,                    TMX_CB_CFG4*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CB_CFG4;

//tmx_cb_cfg5
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  tmx_cbp_2457m :  4; /* 3: 0,                             NA*/
        uint32_t                  tmx_cbn_2457m :  4; /* 7: 4,                             NA*/
        uint32_t                  tmx_cbp_2452m :  4; /*11: 8,                             NA*/
        uint32_t                  tmx_cbn_2452m :  4; /*15:12,                    TMX_CB_CFG5*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CB_CFG5;

//tmx_cb_cfg6
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  tmx_cbp_2467m :  4; /* 3: 0,                             NA*/
        uint32_t                  tmx_cbn_2467m :  4; /* 7: 4,                             NA*/
        uint32_t                  tmx_cbp_2462m :  4; /*11: 8,                             NA*/
        uint32_t                  tmx_cbn_2462m :  4; /*15:12,                    TMX_CB_CFG6*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CB_CFG6;

//tmx_cb_cfg7
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  tmx_cbp_2477m :  4; /* 3: 0,                             NA*/
        uint32_t                  tmx_cbn_2477m :  4; /* 7: 4,                             NA*/
        uint32_t                  tmx_cbp_2472m :  4; /*11: 8,                             NA*/
        uint32_t                  tmx_cbn_2472m :  4; /*15:12,                    TMX_CB_CFG7*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CB_CFG7;

//tmx_cb_cfg8
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  tmx_cbp_2487m :  4; /* 3: 0,                             NA*/
        uint32_t                  tmx_cbn_2487m :  4; /* 7: 4,                             NA*/
        uint32_t                  tmx_cbp_2484m :  4; /*11: 8,                             NA*/
        uint32_t                  tmx_cbn_2484m :  4; /*15:12,                    TMX_CB_CFG8*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CB_CFG8;

//rctune_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               cpu_rctune_start :  1; /* 0: 0,                             NA*/
        uint32_t                    rctune_coff :  1; /* 1: 1,                             NA*/
        uint32_t                      rctune_en :  1; /* 2: 2,                             NA*/
        uint32_t              cpu_rc_tune_ck_dr :  1; /* 3: 3,                             NA*/
        uint32_t             cpu_rctune_dly_cnt : 12; /*15: 4,                    RC_TUNE_CFG*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RCTUNE_CFG;

//rctune_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rctune_lock_rpt :  1; /* 0: 0,                             NA*/
        uint32_t                rctune_code_rpt :  5; /* 5: 1,                             NA*/
        uint32_t                txlpf_ctrim_rpt :  5; /*10: 6,                             NA*/
        uint32_t                rxlpf_ctrim_rpt :  5; /*15:11,                   RC_TUNE_RPT1*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RCTUNE_RPT;

//lock_cnt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             cpu_rfpll_lock_cnt :  8; /* 7: 0,                             NA*/
        uint32_t              cpu_x40m_lock_cnt :  8; /*15: 8,                   CLK_LOCK_CNT*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_LOCK_CNT;

//x40m_lock_rpt
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                      x40m_lock :  1; /* 0: 0,                             NA*/
        uint32_t                     reserved_0 : 15; /*15: 1,                  X40M_LOCK_RPT*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_X40M_LOCK_RPT;

//ibase_offset_1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             ibase_offset_2412m :  5; /* 4: 0,                             NA*/
        uint32_t             ibase_offset_2417m :  5; /* 9: 5,                             NA*/
        uint32_t             ibase_offset_2422m :  5; /*14:10,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 IBASE_OFFSET_1*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_IBASE_OFFSET_1;

//ibase_offset_2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             ibase_offset_2427m :  5; /* 4: 0,                             NA*/
        uint32_t             ibase_offset_2432m :  5; /* 9: 5,                             NA*/
        uint32_t             ibase_offset_2437m :  5; /*14:10,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 IBASE_OFFSET_2*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_IBASE_OFFSET_2;

//ibase_offset_3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             ibase_offset_2442m :  5; /* 4: 0,                             NA*/
        uint32_t             ibase_offset_2447m :  5; /* 9: 5,                             NA*/
        uint32_t             ibase_offset_2452m :  5; /*14:10,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 IBASE_OFFSET_3*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_IBASE_OFFSET_3;

//ibase_offset_4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             ibase_offset_2457m :  5; /* 4: 0,                             NA*/
        uint32_t             ibase_offset_2462m :  5; /* 9: 5,                             NA*/
        uint32_t             ibase_offset_2467m :  5; /*14:10,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 IBASE_OFFSET_4*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_IBASE_OFFSET_4;

//ibase_offset_5
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             ibase_offset_2472m :  5; /* 4: 0,                             NA*/
        uint32_t             ibase_offset_2477m :  5; /* 9: 5,                             NA*/
        uint32_t             ibase_offset_2484m :  5; /*14:10,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 IBASE_OFFSET_5*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_IBASE_OFFSET_5;

//ibase_offset_6
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t             ibase_offset_2487m :  5; /* 4: 0,                             NA*/
        uint32_t                     reserved_0 : 11; /*15: 5,                 IBASE_OFFSET_6*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_IBASE_OFFSET_6;

//tx_dac_cal_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t      cpu_txdac_cal_direction_i :  1; /* 0: 0,                             NA*/
        uint32_t           cpu_txdac_overtime_i :  2; /* 2: 1,                             NA*/
        uint32_t      cpu_txdac_cal_value_sel_i :  1; /* 3: 3,                             NA*/
        uint32_t          cpu_txdac_cal_clk_sel :  2; /* 5: 4,                             NA*/
        uint32_t          cpu_txdac_cal_alg_sel :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_1 :  1; /* 7: 7,                             NA*/
        uint32_t      cpu_txdac_cal_direction_q :  1; /* 8: 8,                             NA*/
        uint32_t           cpu_txdac_overtime_q :  2; /*10: 9,                             NA*/
        uint32_t      cpu_txdac_cal_value_sel_q :  1; /*11:11,                             NA*/
        uint32_t       cpu_txdac_offset_opt_sel :  2; /*13:12,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                  TXDAC_CAL_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_DAC_CAL_CFG;

//tx_dac_cal_iq_cfg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                cpu_txdac_cal_i :  6; /* 5: 0,                             NA*/
        uint32_t             cpu_txdac_cal_i_dr :  1; /* 6: 6,                             NA*/
        uint32_t                     reserved_1 :  1; /* 7: 7,                             NA*/
        uint32_t                cpu_txdac_cal_q :  6; /*13: 8,                             NA*/
        uint32_t             cpu_txdac_cal_q_dr :  1; /*14:14,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,               TXDAC_CAL_IQ_CFG*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_DAC_CAL_IQ_CFG;

//pa_cfg3_g
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  pa_ldo_vbit_g :  3; /* 2: 0,                             NA*/
        uint32_t                 pa_vcas_ibit_g :  4; /* 6: 3,                             NA*/
        uint32_t              pa_vcas_hv_rbit_g :  3; /* 9: 7,                             NA*/
        uint32_t                 pa_vcas_rbit_g :  3; /*12:10,                             NA*/
        uint32_t                   pa_da_ibit_g :  3; /*15:13,                      PA_CFG3_G*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_CFG3_G;

//tmx_cfg1_g
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tmx_lin_tune_g :  3; /* 2: 0,                             NA*/
        uint32_t                    tmx_ibase_g :  2; /* 4: 3,                             NA*/
        uint32_t                   tmx_op_vcm_g :  2; /* 6: 5,                             NA*/
        uint32_t                  tmx_op_ibit_g :  2; /* 8: 7,                             NA*/
        uint32_t               tmx_lobuf_vbit_g :  3; /*11: 9,                             NA*/
        uint32_t                  tmx_vol_amp_g :  2; /*13:12,                             NA*/
        uint32_t                 tmx_rc_range_g :  2; /*15:14,                     TMX_CFG1_G*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CFG1_G;

//txlpf_cfg1_g
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               txlpf_ldo_vbit_g :  3; /* 2: 0,                             NA*/
        uint32_t                     reserved_1 :  1; /* 3: 3,                             NA*/
        uint32_t                txlpf_atrim_i_g :  2; /* 5: 4,                             NA*/
        uint32_t                txlpf_atrim_q_g :  2; /* 7: 6,                             NA*/
        uint32_t                  txlpf_ibsel_g :  2; /* 9: 8,                             NA*/
        uint32_t                   txlpf_resv_g :  2; /*11:10,                             NA*/
        uint32_t                   txlpf_coff_g :  1; /*12:12,                             NA*/
        uint32_t                     reserved_0 :  3; /*15:13,                   TXLPF_CFG1_G*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXLPF_CFG1_G;

//pa_cfg3_n
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  pa_ldo_vbit_n :  3; /* 2: 0,                             NA*/
        uint32_t                 pa_vcas_ibit_n :  4; /* 6: 3,                             NA*/
        uint32_t              pa_vcas_hv_rbit_n :  3; /* 9: 7,                             NA*/
        uint32_t                 pa_vcas_rbit_n :  3; /*12:10,                             NA*/
        uint32_t                   pa_da_ibit_n :  3; /*15:13,                      PA_CFG3_N*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_PA_CFG3_N;

//tmx_cfg1_n
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tmx_lin_tune_n :  3; /* 2: 0,                             NA*/
        uint32_t                    tmx_ibase_n :  2; /* 4: 3,                             NA*/
        uint32_t                   tmx_op_vcm_n :  2; /* 6: 5,                             NA*/
        uint32_t                  tmx_op_ibit_n :  2; /* 8: 7,                             NA*/
        uint32_t               tmx_lobuf_vbit_n :  3; /*11: 9,                             NA*/
        uint32_t                  tmx_vol_amp_n :  2; /*13:12,                             NA*/
        uint32_t                 tmx_rc_range_n :  2; /*15:14,                     TMX_CFG1_N*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TMX_CFG1_N;

//txlpf_cfg1_n
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               txlpf_ldo_vbit_n :  3; /* 2: 0,                             NA*/
        uint32_t                     reserved_1 :  1; /* 3: 3,                             NA*/
        uint32_t                txlpf_atrim_i_n :  2; /* 5: 4,                             NA*/
        uint32_t                txlpf_atrim_q_n :  2; /* 7: 6,                             NA*/
        uint32_t                  txlpf_ibsel_n :  2; /* 9: 8,                             NA*/
        uint32_t                   txlpf_resv_n :  2; /*11:10,                             NA*/
        uint32_t                   txlpf_coff_n :  1; /*12:12,                             NA*/
        uint32_t                     reserved_0 :  3; /*15:13,                   TXLPF_CFG1_N*/
        uint32_t                     reserved_2 :  1; /*16:16,                               */
        uint32_t                     reserved_3 :  1; /*17:17,                               */
        uint32_t                     reserved_4 :  1; /*18:18,                               */
        uint32_t                     reserved_5 :  1; /*19:19,                               */
        uint32_t                     reserved_6 :  1; /*20:20,                               */
        uint32_t                     reserved_7 :  1; /*21:21,                               */
        uint32_t                     reserved_8 :  1; /*22:22,                               */
        uint32_t                     reserved_9 :  1; /*23:23,                               */
        uint32_t                    reserved_10 :  1; /*24:24,                               */
        uint32_t                    reserved_11 :  1; /*25:25,                               */
        uint32_t                    reserved_12 :  1; /*26:26,                               */
        uint32_t                    reserved_13 :  1; /*27:27,                               */
        uint32_t                    reserved_14 :  1; /*28:28,                               */
        uint32_t                    reserved_15 :  1; /*29:29,                               */
        uint32_t                    reserved_16 :  1; /*30:30,                               */
        uint32_t                    reserved_17 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TXLPF_CFG1_N;

//rx_0db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 rx_0db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 RX_0dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_0DB_RF_GAIN;

//rx_2db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 rx_2db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 RX_2dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_2DB_RF_GAIN;

//rx_4db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 rx_4db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 RX_4dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_4DB_RF_GAIN;

//rx_6db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 rx_6db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 RX_6dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_6DB_RF_GAIN;

//rx_8db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 rx_8db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                 RX_8dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_8DB_RF_GAIN;

//rx_10db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_10db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_10dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_10DB_RF_GAIN;

//rx_12db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_12db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_12dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_12DB_RF_GAIN;

//rx_14db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_14db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_14dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_14DB_RF_GAIN;

//rx_16db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_16db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_16dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_16DB_RF_GAIN;

//rx_18db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_18db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_18dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_18DB_RF_GAIN;

//rx_20db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_20db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_20dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_20DB_RF_GAIN;

//rx_22db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_22db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_22dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_22DB_RF_GAIN;

//rx_24db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_24db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_24dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_24DB_RF_GAIN;

//rx_26db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_26db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_26dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_26DB_RF_GAIN;

//rx_28db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_28db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_28dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_28DB_RF_GAIN;

//rx_30db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_30db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_30dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_30DB_RF_GAIN;

//rx_32db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_32db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_32dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_32DB_RF_GAIN;

//rx_34db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_34db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_34dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_34DB_RF_GAIN;

//rx_36db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_36db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_36dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_36DB_RF_GAIN;

//rx_38db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_38db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_38dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_38DB_RF_GAIN;

//rx_40db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_40db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_40dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_40DB_RF_GAIN;

//rx_42db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_42db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_42dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_42DB_RF_GAIN;

//rx_44db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_44db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_44dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_44DB_RF_GAIN;

//rx_46db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_46db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_46dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_46DB_RF_GAIN;

//rx_48db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_48db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_48dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_48DB_RF_GAIN;

//rx_50db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_50db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_50dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_50DB_RF_GAIN;

//rx_52db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_52db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_52dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_52DB_RF_GAIN;

//rx_54db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_54db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_54dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_54DB_RF_GAIN;

//rx_56db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_56db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_56dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_56DB_RF_GAIN;

//rx_58db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_58db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_58dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_58DB_RF_GAIN;

//rx_60db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_60db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_60dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_60DB_RF_GAIN;

//rx_62db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_62db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_62dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_62DB_RF_GAIN;

//rx_64db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_64db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_64dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_64DB_RF_GAIN;

//rx_66db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_66db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_66dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_66DB_RF_GAIN;

//rx_68db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_68db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_68dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_68DB_RF_GAIN;

//rx_70db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_70db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_70dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_70DB_RF_GAIN;

//rx_72db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_72db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_72dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_72DB_RF_GAIN;

//rx_74db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_74db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_74dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_74DB_RF_GAIN;

//rx_76db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_76db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_76dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_76DB_RF_GAIN;

//rx_78db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_78db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_78dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_78DB_RF_GAIN;

//rx_80db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_80db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_80dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_80DB_RF_GAIN;

//rx_82db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_82db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_82dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_82DB_RF_GAIN;

//rx_84db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_84db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_84dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_84DB_RF_GAIN;

//rx_86db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_86db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_86dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_86DB_RF_GAIN;

//rx_88db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_88db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_88dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_88DB_RF_GAIN;

//rx_90db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                rx_90db_rf_gain : 15; /*14: 0,                             NA*/
        uint32_t                     reserved_0 :  1; /*15:15,                RX_90dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RX_90DB_RF_GAIN;

//tx_0db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_0db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_0dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_0DB_RF_GAIN;

//tx_1db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_1db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_1dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_1DB_RF_GAIN;

//tx_2db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_2db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_2dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_2DB_RF_GAIN;

//tx_3db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_3db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_3dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_3DB_RF_GAIN;

//tx_4db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_4db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_4dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_4DB_RF_GAIN;

//tx_5db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_5db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_5dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_5DB_RF_GAIN;

//tx_6db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_6db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_6dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_6DB_RF_GAIN;

//tx_7db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_7db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_7dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_7DB_RF_GAIN;

//tx_8db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_8db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_8dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_8DB_RF_GAIN;

//tx_9db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                 tx_9db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                 TX_9dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_9DB_RF_GAIN;

//tx_10db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_10db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_10dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_10DB_RF_GAIN;

//tx_11db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_11db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_11dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_11DB_RF_GAIN;

//tx_12db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_12db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_12dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_12DB_RF_GAIN;

//tx_13db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_13db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_13dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_13DB_RF_GAIN;

//tx_14db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_14db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_14dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_14DB_RF_GAIN;

//tx_15db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_15db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_15dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_15DB_RF_GAIN;

//tx_16db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_16db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_16dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_16DB_RF_GAIN;

//tx_17db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_17db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_17dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_17DB_RF_GAIN;

//tx_18db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_18db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_18dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_18DB_RF_GAIN;

//tx_19db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_19db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_19dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_19DB_RF_GAIN;

//tx_20db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_20db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_20dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_20DB_RF_GAIN;

//tx_21db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_21db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_21dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_21DB_RF_GAIN;

//tx_22db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_22db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_22dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_22DB_RF_GAIN;

//tx_23db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_23db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_23dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_23DB_RF_GAIN;

//tx_24db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_24db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_24dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_24DB_RF_GAIN;

//tx_25db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_25db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_25dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_25DB_RF_GAIN;

//tx_26db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_26db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_26dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_26DB_RF_GAIN;

//tx_27db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_27db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_27dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_27DB_RF_GAIN;

//tx_28db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_28db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_28dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_28DB_RF_GAIN;

//tx_29db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_29db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_29dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_29DB_RF_GAIN;

//tx_30db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_30db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_30dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_30DB_RF_GAIN;

//tx_31db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_31db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_31dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_31DB_RF_GAIN;

//tx_32db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_32db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_32dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_32DB_RF_GAIN;

//tx_33db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_33db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_33dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_33DB_RF_GAIN;

//tx_34db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_34db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_34dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_34DB_RF_GAIN;

//tx_35db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_35db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_35dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_35DB_RF_GAIN;

//tx_36db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_36db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_36dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_36DB_RF_GAIN;

//tx_37db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_37db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_37dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_37DB_RF_GAIN;

//tx_38db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_38db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_38dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_38DB_RF_GAIN;

//tx_39db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_39db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_39dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_39DB_RF_GAIN;

//tx_40db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_40db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_40dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_40DB_RF_GAIN;

//tx_41db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_41db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_41dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_41DB_RF_GAIN;

//tx_42db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_42db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_42dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_42DB_RF_GAIN;

//tx_43db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_43db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_43dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_43DB_RF_GAIN;

//tx_44db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_44db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_44dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_44DB_RF_GAIN;

//tx_45db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_45db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_45dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_45DB_RF_GAIN;

//tx_46db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_46db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_46dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_46DB_RF_GAIN;

//tx_47db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_47db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_47dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_47DB_RF_GAIN;

//tx_48db_rf_gain
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                tx_48db_rf_gain : 14; /*13: 0,                             NA*/
        uint32_t                     reserved_0 :  2; /*15:14,                TX_48dB_RF_GAIN*/
        uint32_t                     reserved_1 :  1; /*16:16,                               */
        uint32_t                     reserved_2 :  1; /*17:17,                               */
        uint32_t                     reserved_3 :  1; /*18:18,                               */
        uint32_t                     reserved_4 :  1; /*19:19,                               */
        uint32_t                     reserved_5 :  1; /*20:20,                               */
        uint32_t                     reserved_6 :  1; /*21:21,                               */
        uint32_t                     reserved_7 :  1; /*22:22,                               */
        uint32_t                     reserved_8 :  1; /*23:23,                               */
        uint32_t                     reserved_9 :  1; /*24:24,                               */
        uint32_t                    reserved_10 :  1; /*25:25,                               */
        uint32_t                    reserved_11 :  1; /*26:26,                               */
        uint32_t                    reserved_12 :  1; /*27:27,                               */
        uint32_t                    reserved_13 :  1; /*28:28,                               */
        uint32_t                    reserved_14 :  1; /*29:29,                               */
        uint32_t                    reserved_15 :  1; /*30:30,                               */
        uint32_t                    reserved_16 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_TX_48DB_RF_GAIN;

//rf_page
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                        rf_page : 16; /*15: 0,                        RF_PAGE*/
        uint32_t                     reserved_0 :  1; /*16:16,                               */
        uint32_t                     reserved_1 :  1; /*17:17,                               */
        uint32_t                     reserved_2 :  1; /*18:18,                               */
        uint32_t                     reserved_3 :  1; /*19:19,                               */
        uint32_t                     reserved_4 :  1; /*20:20,                               */
        uint32_t                     reserved_5 :  1; /*21:21,                               */
        uint32_t                     reserved_6 :  1; /*22:22,                               */
        uint32_t                     reserved_7 :  1; /*23:23,                               */
        uint32_t                     reserved_8 :  1; /*24:24,                               */
        uint32_t                     reserved_9 :  1; /*25:25,                               */
        uint32_t                    reserved_10 :  1; /*26:26,                               */
        uint32_t                    reserved_11 :  1; /*27:27,                               */
        uint32_t                    reserved_12 :  1; /*28:28,                               */
        uint32_t                    reserved_13 :  1; /*29:29,                               */
        uint32_t                    reserved_14 :  1; /*30:30,                               */
        uint32_t                    reserved_15 :  1; /*31:31,                               */
    } bit_field;
} T_RF_P0_RF_PAGE;

//Registers Mapping to the same address

typedef struct
{
    volatile                 T_RF_P0_VIRSION                        virsion; /*  0x0,    RO, 0x00000000,                             NA*/
    volatile              T_RF_P0_CO_CAL_CFG                     co_cal_cfg; /*  0x4,    RW, 0x00000000,                             NA*/
    volatile     T_RF_P0_AUTO_CAL_STATUS_RPT            auto_cal_status_rpt; /*  0x8,    RO, 0x00000000,                             NA*/
    volatile   T_RF_P0_AUTO_CAL_OVERFLOW_RPT          auto_cal_overflow_rpt; /*  0xc,    RO, 0x00000000,                             NA*/
    volatile              T_RF_P0_RX_AGC_CFG                     rx_agc_cfg; /* 0x10,    RW, 0x00000000,                             NA*/
    volatile              T_RF_P0_TX_AGC_CFG                     tx_agc_cfg; /* 0x14,    RW, 0x00000000,                             NA*/
    volatile             T_RF_P0_RX_GAIN_CFG                    rx_gain_cfg; /* 0x18,    RW, 0x000057FD,                             NA*/
    volatile             T_RF_P0_TX_GAIN_CFG                    tx_gain_cfg; /* 0x1c,    RW, 0x000006CF,                             NA*/
    volatile               T_RF_P0_ENBALE_RF                      enbale_rf; /* 0x20,    RW, 0x00000000,                             NA*/
    volatile              T_RF_P0_ENBALE_CLK                     enbale_clk; /* 0x24,    RW, 0x00000030,                             NA*/
    volatile          T_RF_P0_MANUAL_CAL_CFG                 manual_cal_cfg; /* 0x28,    RW, 0x00000000,                             NA*/
    volatile           T_RF_P0_TEST_MODE_CFG                  test_mode_cfg; /* 0x2c,    RW, 0x00000000,                             NA*/
    volatile                T_RF_P0_DIG_CFG1                       dig_cfg1; /* 0x30,    RW, 0x00004800,                             NA*/
    volatile                T_RF_P0_DIG_CFG2                       dig_cfg2; /* 0x34,    RW, 0x00000000,                             NA*/
    volatile              T_RF_P0_PA_DLY_CFG                     pa_dly_cfg; /* 0x38,    RW, 0x00000008,                             NA*/
    volatile                T_RF_P0_DIG_CFG3                       dig_cfg3; /* 0x3c,    RW, 0x00000808,                             NA*/
    volatile             T_RF_P0_DAC_SIN_CFG                    dac_sin_cfg; /* 0x40,    RW, 0x00000080,                             NA*/
    volatile                T_RF_P0_DIG_CFG4                       dig_cfg4; /* 0x44,    RW, 0x00000004,                             NA*/
    volatile              T_RF_P0_DIG_SW_RST                     dig_sw_rst; /* 0x48,    RW, 0x00000180,                             NA*/
    volatile             T_RF_P0_RX_GAIN_RPT                    rx_gain_rpt; /* 0x4c,    RO, 0x000057FE,                             NA*/
    volatile             T_RF_P0_TX_GAIN_RPT                    tx_gain_rpt; /* 0x50,    RO, 0x00002FBF,                             NA*/
    volatile         T_RF_P0_PLL_CORN_EN_RPT                pll_corn_en_rpt; /* 0x54,    RO, 0x00000000,                             NA*/
    volatile     T_RF_P0_PLL_CAL_VALUE_P_RPT            pll_cal_value_p_rpt; /* 0x58,    RO, 0x00000000,                             NA*/
    volatile     T_RF_P0_PLL_CAL_VALUE_N_RPT            pll_cal_value_n_rpt; /* 0x5c,    RO, 0x0000FFFF,                             NA*/
    volatile    T_RF_P0_RCO32K_CAL_VALUE_RPT           rco32k_cal_value_rpt; /* 0x60,    RO, 0x00001010,                             NA*/
    volatile       T_RF_P0_TMX_CAL_VALUE_RPT              tmx_cal_value_rpt; /* 0x64,    RO, 0x00008080,                             NA*/
    volatile     T_RF_P0_TXLPF_CAL_VALUE_RPT            txlpf_cal_value_rpt; /* 0x68,    RO, 0x00002020,                             NA*/
    volatile       T_RF_P0_RMX_CAL_VALUE_RPT              rmx_cal_value_rpt; /* 0x6c,    RO, 0x00008080,                             NA*/
    volatile     T_RF_P0_RXLPF_CAL_VALUE_RPT            rxlpf_cal_value_rpt; /* 0x70,    RO, 0x00002020,                             NA*/
    volatile     T_RF_P0_TXIMG_CAL_VALUE_RPT            tximg_cal_value_rpt; /* 0x74,    RO, 0x00002020,                             NA*/
    volatile              T_RF_P0_CALOUT_RPT                     calout_rpt; /* 0x78,    RO, 0x00000000,                             NA*/
    volatile               T_RF_P0_EN_RF_RPT                      en_rf_rpt; /* 0x7c,    RO, 0x00000000,                             NA*/
    volatile            T_RF_P0_CAL_CFG_RPT1                   cal_cfg_rpt1; /* 0x80,    RO, 0x00000000,                             NA*/
    volatile            T_RF_P0_CAL_CFG_RPT2                   cal_cfg_rpt2; /* 0x84,    RO, 0x0000000D,                             NA*/
    volatile          T_RF_P0_RX_MODE_EN_CFG                 rx_mode_en_cfg; /* 0x88,    RW, 0x000000F0,                             NA*/
    volatile          T_RF_P0_TX_MODE_EN_CFG                 tx_mode_en_cfg; /* 0x8c,    RW, 0x0000000F,                             NA*/
    volatile       T_RF_P0_TXDC1_MODE_EN_CFG              txdc1_mode_en_cfg; /* 0x90,    RW, 0x0000000D,                             NA*/
    volatile       T_RF_P0_TXDC2_MODE_EN_CFG              txdc2_mode_en_cfg; /* 0x94,    RW, 0x0000000D,                             NA*/
    volatile       T_RF_P0_TXDC3_MODE_EN_CFG              txdc3_mode_en_cfg; /* 0x98,    RW, 0x0000000D,                             NA*/
    volatile    T_RF_P0_RXLPF_DC_MODE_EN_CFG           rxlpf_dc_mode_en_cfg; /* 0x9c,    RW, 0x000000E0,                             NA*/
    volatile       T_RF_P0_RX_DC_MODE_EN_CFG              rx_dc_mode_en_cfg; /* 0xa0,    RW, 0x000000F0,                             NA*/
    volatile    T_RF_P0_TXIMG_DC_MODE_EN_CFG           tximg_dc_mode_en_cfg; /* 0xa4,    RW, 0x00000062,                             NA*/
    volatile    T_RF_P0_RXIMG_DC_MODE_EN_CFG           rximg_dc_mode_en_cfg; /* 0xa8,    RW, 0x00003BEF,                             NA*/
    volatile      T_RF_P0_DPD_DC_MODE_EN_CFG             dpd_dc_mode_en_cfg; /* 0xac,    RW, 0x000023EF,                             NA*/
    volatile        T_RF_P0_PLL_OVERFLOW_RPT               pll_overflow_rpt; /* 0xb0,    RO, 0x00000000,                             NA*/
    volatile      T_RF_P0_PA_OTD_PROTECT_OUT             pa_otd_protect_out; /* 0xb4,    RW, 0x00000000,                             NA*/
    volatile         T_RF_P0_PA_OTD_INTR_CLR                pa_otd_intr_clr; /* 0xb8,    RW, 0x00000000,                             NA*/
    volatile                        uint32_t                     reserved_0;
    volatile                    T_RF_P0_IREF                           iref; /* 0xc0,    RW, 0x00000009,                             NA*/
    volatile                T_RF_P0_XTAL_40M                       xtal_40m; /* 0xc4,    RW, 0x00000000,                             NA*/
    volatile               T_RF_P0_RF_DUMMY1                      rf_dummy1; /* 0xc8,    RW, 0x00000000,                             NA*/
    volatile               T_RF_P0_RF_DUMMY2                      rf_dummy2; /* 0xcc,    RW, 0x00000000,                             NA*/
    volatile             T_RF_P0_CLK_32K_SEL                    clk_32k_sel; /* 0xd0,    RW, 0x00000000,                             NA*/
    volatile               T_RF_P0_RF_DUMMY4                      rf_dummy4; /* 0xd4,    RW, 0x00000000,                             NA*/
    volatile          T_RF_P0_RCO32K_CAL_CFG                 rco32k_cal_cfg; /* 0xd8,    RW, 0x0000000A,                             NA*/
    volatile     T_RF_P0_RCO32K_CAL_CBIT_CFG            rco32k_cal_cbit_cfg; /* 0xdc,    RW, 0x0000000F,                             NA*/
    volatile      T_RF_P0_RCO32K_CNT_LOW_RPT             rco32k_cnt_low_rpt; /* 0xe0,    RO, 0x00000000,                             NA*/
    volatile     T_RF_P0_RCO32K_CNT_HIGH_RPT            rco32k_cnt_high_rpt; /* 0xe4,    RO, 0x00000000,                             NA*/
    volatile                        uint32_t                  reserved_1[2];
    volatile            T_RF_P0_PLL_SDM_CFG1                   pll_sdm_cfg1; /* 0xf0,    RW, 0x000000D8,                             NA*/
    volatile            T_RF_P0_PLL_SDM_CFG2                   pll_sdm_cfg2; /* 0xf4,    RW, 0x00000000,                             NA*/
    volatile              T_RF_P0_RFPLL_CFG1                     rfpll_cfg1; /* 0xf8,    RW, 0x00004A49,                             NA*/
    volatile              T_RF_P0_RFPLL_CFG2                     rfpll_cfg2; /* 0xfc,    RW, 0x00000A0B,                             NA*/
    volatile              T_RF_P0_RFPLL_CFG3                     rfpll_cfg3; /*0x100,    RW, 0x00001208,                             NA*/
    volatile              T_RF_P0_RFPLL_CFG4                     rfpll_cfg4; /*0x104,    RW, 0x00000144,                             NA*/
    volatile              T_RF_P0_RFPLL_CFG5                     rfpll_cfg5; /*0x108,    RW, 0x00008025,                             NA*/
    volatile      T_RF_P0_RFPLL_SDM_FREQ_LOW             rfpll_sdm_freq_low; /*0x10c,    RW, 0x00006666,                             NA*/
    volatile     T_RF_P0_RFPLL_SDM_FREQ_HIGH            rfpll_sdm_freq_high; /*0x110,    RW, 0x00001E26,                             NA*/
    volatile          T_RF_P0_RFPLL_CAL_CFG1                 rfpll_cal_cfg1; /*0x114,    RW, 0x00008080,                             NA*/
    volatile          T_RF_P0_RFPLL_CAL_CFG2                 rfpll_cal_cfg2; /*0x118,    RW, 0x0000004E,                             NA*/
    volatile        T_RF_P0_RFPLL_CBANK_DR_1               rfpll_cbank_dr_1; /*0x11c,    RW, 0x00000000,                             NA*/
    volatile        T_RF_P0_RFPLL_CBANK_DR_2               rfpll_cbank_dr_2; /*0x120,    RW, 0x00000000,                             NA*/
    volatile        T_RF_P0_RFPLL_CBANK_DR_3               rfpll_cbank_dr_3; /*0x124,    RW, 0x00000000,                             NA*/
    volatile              T_RF_P0_RFPLL_RPT1                     rfpll_rpt1; /*0x128,    RO, 0x00000000,                             NA*/
    volatile              T_RF_P0_RFPLL_RPT2                     rfpll_rpt2; /*0x12c,    RO, 0x00000000,                             NA*/
    volatile                T_RF_P0_LNA_CFG1                       lna_cfg1; /*0x130,    RW, 0x00000084,                             NA*/
    volatile                T_RF_P0_LNA_CFG2                       lna_cfg2; /*0x134,    RW, 0x00000080,                             NA*/
    volatile             T_RF_P0_LNA_LDO_CFG                    lna_ldo_cfg; /*0x138,    RW, 0x00000052,                             NA*/
    volatile                T_RF_P0_RMX_CFG1                       rmx_cfg1; /*0x13c,    RW, 0x0000821A,                             NA*/
    volatile             T_RF_P0_RMX_PKD_CFG                    rmx_pkd_cfg; /*0x140,    RW, 0x00000200,                             NA*/
    volatile             T_RF_P0_RMX_CAL_CFG                    rmx_cal_cfg; /*0x144,    RW, 0x00006020,                             NA*/
    volatile          T_RF_P0_RX_DPD_CAL_CFG                 rx_dpd_cal_cfg; /*0x148,    RW, 0x00000020,                             NA*/
    volatile           T_RF_P0_RXIMG_CAL_CFG                  rximg_cal_cfg; /*0x14c,    RW, 0x00000020,                             NA*/
    volatile            T_RF_P0_CAL_RMX_I_DR                   cal_rmx_i_dr; /*0x150,    RW, 0x00000080,                             NA*/
    volatile            T_RF_P0_CAL_RMX_Q_DR                   cal_rmx_q_dr; /*0x154,    RW, 0x00000080,                             NA*/
    volatile              T_RF_P0_RXLPF_CFG1                     rxlpf_cfg1; /*0x158,    RW, 0x00000400,                             NA*/
    volatile          T_RF_P0_RXLPF_CTRIM_DR                 rxlpf_ctrim_dr; /*0x15c,    RW, 0x0000000F,                             NA*/
    volatile           T_RF_P0_RXLPF_CAL_CFG                  rxlpf_cal_cfg; /*0x160,    RW, 0x00000020,                             NA*/
    volatile          T_RF_P0_RXLPF_OTRIM_DR                 rxlpf_otrim_dr; /*0x164,    RW, 0x00002020,                             NA*/
    volatile        T_RF_P0_RXLPF_CAL_CLK_DR               rxlpf_cal_clk_dr; /*0x168,    RW, 0x00000000,                             NA*/
    volatile               T_RF_P0_RXADC_CFG                      rxadc_cfg; /*0x16c,    RW, 0x00000004,                             NA*/
    volatile              T_RF_P0_PA_OVD_CFG                     pa_ovd_cfg; /*0x170,    RW, 0x00009021,                             NA*/
    volatile             T_RF_P0_PA_PKD_CFG1                    pa_pkd_cfg1; /*0x174,    RW, 0x00000009,                             NA*/
    volatile                        uint32_t                     reserved_2;
    volatile             T_RF_P0_PA_TSEN_CFG                    pa_tsen_cfg; /*0x17c,    RW, 0x00000005,                             NA*/
    volatile                        uint32_t                  reserved_3[2];
    volatile                 T_RF_P0_PA_RPT2                        pa_rpt2; /*0x188,    RO, 0x00000100,                             NA*/
    volatile                 T_RF_P0_PA_CFG1                        pa_cfg1; /*0x18c,    RW, 0x00000012,                             NA*/
    volatile                 T_RF_P0_PA_CFG2                        pa_cfg2; /*0x190,    RW, 0x00000924,                             NA*/
    volatile                 T_RF_P0_PA_CFG3                        pa_cfg3; /*0x194,    RW, 0x000098A4,                             NA*/
    volatile                 T_RF_P0_PA_CFG4                        pa_cfg4; /*0x198,    RW, 0x00000024,                             NA*/
    volatile                T_RF_P0_TMX_CFG1                       tmx_cfg1; /*0x19c,    RW, 0x0000EA55,                             NA*/
    volatile                T_RF_P0_TMX_CFG2                       tmx_cfg2; /*0x1a0,    RW, 0x00008C88,                             NA*/
    volatile             T_RF_P0_TMX_CAL_CFG                    tmx_cal_cfg; /*0x1a4,    RW, 0x00000020,                             NA*/
    volatile          T_RF_P0_TMX_CAL_CLK_DR                 tmx_cal_clk_dr; /*0x1a8,    RW, 0x00000000,                             NA*/
    volatile            T_RF_P0_CAL_TMX_I_DR                   cal_tmx_i_dr; /*0x1ac,    RW, 0x00000080,                             NA*/
    volatile            T_RF_P0_CAL_TMX_Q_DR                   cal_tmx_q_dr; /*0x1b0,    RW, 0x00000080,                             NA*/
    volatile              T_RF_P0_TXLPF_CFG1                     txlpf_cfg1; /*0x1b4,    RW, 0x00000004,                             NA*/
    volatile          T_RF_P0_TXLPF_CTRIM_DR                 txlpf_ctrim_dr; /*0x1b8,    RW, 0x0000000F,                             NA*/
    volatile           T_RF_P0_TXLPF_CAL_CFG                  txlpf_cal_cfg; /*0x1bc,    RW, 0x00000020,                             NA*/
    volatile          T_RF_P0_TXLPF_OTRIM_DR                 txlpf_otrim_dr; /*0x1c0,    RW, 0x00002020,                             NA*/
    volatile          T_RF_P0_TX_IMG_CAL_CFG                 tx_img_cal_cfg; /*0x1c4,    RW, 0x00000020,                             NA*/
    volatile           T_RF_P0_CAL_TX_IMG_DR                  cal_tx_img_dr; /*0x1c8,    RW, 0x00002020,                             NA*/
    volatile               T_RF_P0_TXDAC_CFG                      txdac_cfg; /*0x1cc,    RW, 0x00000412,                             NA*/
    volatile             T_RF_P0_TMX_CB_CFG1                    tmx_cb_cfg1; /*0x1d0,    RW, 0x00000F0F,                             NA*/
    volatile             T_RF_P0_TMX_CB_CFG2                    tmx_cb_cfg2; /*0x1d4,    RW, 0x00000F0F,                             NA*/
    volatile             T_RF_P0_TMX_CB_CFG3                    tmx_cb_cfg3; /*0x1d8,    RW, 0x00000F0C,                             NA*/
    volatile             T_RF_P0_TMX_CB_CFG4                    tmx_cb_cfg4; /*0x1dc,    RW, 0x00000C0C,                             NA*/
    volatile             T_RF_P0_TMX_CB_CFG5                    tmx_cb_cfg5; /*0x1e0,    RW, 0x00000C0C,                             NA*/
    volatile             T_RF_P0_TMX_CB_CFG6                    tmx_cb_cfg6; /*0x1e4,    RW, 0x0000F0F0,                             NA*/
    volatile             T_RF_P0_TMX_CB_CFG7                    tmx_cb_cfg7; /*0x1e8,    RW, 0x0000F0F0,                             NA*/
    volatile             T_RF_P0_TMX_CB_CFG8                    tmx_cb_cfg8; /*0x1ec,    RW, 0x0000F0F0,                             NA*/
    volatile              T_RF_P0_RCTUNE_CFG                     rctune_cfg; /*0x1f0,    RW, 0x00006400,                             NA*/
    volatile              T_RF_P0_RCTUNE_RPT                     rctune_rpt; /*0x1f4,    RO, 0x00008401,                             NA*/
    volatile                T_RF_P0_LOCK_CNT                       lock_cnt; /*0x1f8,    RW, 0x00005040,                             NA*/
    volatile           T_RF_P0_X40M_LOCK_RPT                  x40m_lock_rpt; /*0x1fc,    RO, 0x00000000,                             NA*/
    volatile          T_RF_P0_IBASE_OFFSET_1                 ibase_offset_1; /*0x200,    RW, 0x00000000,                             NA*/
    volatile          T_RF_P0_IBASE_OFFSET_2                 ibase_offset_2; /*0x204,    RW, 0x00000000,                             NA*/
    volatile          T_RF_P0_IBASE_OFFSET_3                 ibase_offset_3; /*0x208,    RW, 0x00000000,                             NA*/
    volatile          T_RF_P0_IBASE_OFFSET_4                 ibase_offset_4; /*0x20c,    RW, 0x00000000,                             NA*/
    volatile          T_RF_P0_IBASE_OFFSET_5                 ibase_offset_5; /*0x210,    RW, 0x00000000,                             NA*/
    volatile          T_RF_P0_IBASE_OFFSET_6                 ibase_offset_6; /*0x214,    RW, 0x00000000,                             NA*/
    volatile          T_RF_P0_TX_DAC_CAL_CFG                 tx_dac_cal_cfg; /*0x218,    RW, 0x00000020,                             NA*/
    volatile       T_RF_P0_TX_DAC_CAL_IQ_CFG              tx_dac_cal_iq_cfg; /*0x21c,    RW, 0x00002020,                             NA*/
    volatile               T_RF_P0_PA_CFG3_G                      pa_cfg3_g; /*0x220,    RW, 0x000098A4,                             NA*/
    volatile              T_RF_P0_TMX_CFG1_G                     tmx_cfg1_g; /*0x224,    RW, 0x0000EA55,                             NA*/
    volatile            T_RF_P0_TXLPF_CFG1_G                   txlpf_cfg1_g; /*0x228,    RW, 0x00000004,                             NA*/
    volatile               T_RF_P0_PA_CFG3_N                      pa_cfg3_n; /*0x22c,    RW, 0x000098A4,                             NA*/
    volatile              T_RF_P0_TMX_CFG1_N                     tmx_cfg1_n; /*0x230,    RW, 0x0000EA55,                             NA*/
    volatile            T_RF_P0_TXLPF_CFG1_N                   txlpf_cfg1_n; /*0x234,    RW, 0x00000004,                             NA*/
    volatile                        uint32_t                  reserved_4[2];
    volatile          T_RF_P0_RX_0DB_RF_GAIN                 rx_0db_rf_gain; /*0x240,    RW, 0x0000508B,                             NA*/
    volatile          T_RF_P0_RX_2DB_RF_GAIN                 rx_2db_rf_gain; /*0x244,    RW, 0x00005188,                             NA*/
    volatile          T_RF_P0_RX_4DB_RF_GAIN                 rx_4db_rf_gain; /*0x248,    RW, 0x00005277,                             NA*/
    volatile          T_RF_P0_RX_6DB_RF_GAIN                 rx_6db_rf_gain; /*0x24c,    RW, 0x00005366,                             NA*/
    volatile          T_RF_P0_RX_8DB_RF_GAIN                 rx_8db_rf_gain; /*0x250,    RW, 0x00005447,                             NA*/
    volatile         T_RF_P0_RX_10DB_RF_GAIN                rx_10db_rf_gain; /*0x254,    RW, 0x00005456,                             NA*/
    volatile         T_RF_P0_RX_12DB_RF_GAIN                rx_12db_rf_gain; /*0x258,    RW, 0x00005465,                             NA*/
    volatile         T_RF_P0_RX_14DB_RF_GAIN                rx_14db_rf_gain; /*0x25c,    RW, 0x00005546,                             NA*/
    volatile         T_RF_P0_RX_16DB_RF_GAIN                rx_16db_rf_gain; /*0x260,    RW, 0x00005547,                             NA*/
    volatile         T_RF_P0_RX_18DB_RF_GAIN                rx_18db_rf_gain; /*0x264,    RW, 0x00005548,                             NA*/
    volatile         T_RF_P0_RX_20DB_RF_GAIN                rx_20db_rf_gain; /*0x268,    RW, 0x00005549,                             NA*/
    volatile         T_RF_P0_RX_22DB_RF_GAIN                rx_22db_rf_gain; /*0x26c,    RW, 0x0000554A,                             NA*/
    volatile         T_RF_P0_RX_24DB_RF_GAIN                rx_24db_rf_gain; /*0x270,    RW, 0x00005559,                             NA*/
    volatile         T_RF_P0_RX_26DB_RF_GAIN                rx_26db_rf_gain; /*0x274,    RW, 0x00005568,                             NA*/
    volatile         T_RF_P0_RX_28DB_RF_GAIN                rx_28db_rf_gain; /*0x278,    RW, 0x00005649,                             NA*/
    volatile         T_RF_P0_RX_30DB_RF_GAIN                rx_30db_rf_gain; /*0x27c,    RW, 0x0000564A,                             NA*/
    volatile         T_RF_P0_RX_32DB_RF_GAIN                rx_32db_rf_gain; /*0x280,    RW, 0x0000564B,                             NA*/
    volatile         T_RF_P0_RX_34DB_RF_GAIN                rx_34db_rf_gain; /*0x284,    RW, 0x0000564C,                             NA*/
    volatile         T_RF_P0_RX_36DB_RF_GAIN                rx_36db_rf_gain; /*0x288,    RW, 0x0000564D,                             NA*/
    volatile         T_RF_P0_RX_38DB_RF_GAIN                rx_38db_rf_gain; /*0x28c,    RW, 0x0000564E,                             NA*/
    volatile         T_RF_P0_RX_40DB_RF_GAIN                rx_40db_rf_gain; /*0x290,    RW, 0x0000566D,                             NA*/
    volatile         T_RF_P0_RX_42DB_RF_GAIN                rx_42db_rf_gain; /*0x294,    RW, 0x0000573E,                             NA*/
    volatile         T_RF_P0_RX_44DB_RF_GAIN                rx_44db_rf_gain; /*0x298,    RW, 0x0000574D,                             NA*/
    volatile         T_RF_P0_RX_46DB_RF_GAIN                rx_46db_rf_gain; /*0x29c,    RW, 0x0000575C,                             NA*/
    volatile         T_RF_P0_RX_48DB_RF_GAIN                rx_48db_rf_gain; /*0x2a0,    RW, 0x0000576B,                             NA*/
    volatile         T_RF_P0_RX_50DB_RF_GAIN                rx_50db_rf_gain; /*0x2a4,    RW, 0x0000577A,                             NA*/
    volatile         T_RF_P0_RX_52DB_RF_GAIN                rx_52db_rf_gain; /*0x2a8,    RW, 0x00005789,                             NA*/
    volatile         T_RF_P0_RX_54DB_RF_GAIN                rx_54db_rf_gain; /*0x2ac,    RW, 0x00005798,                             NA*/
    volatile         T_RF_P0_RX_56DB_RF_GAIN                rx_56db_rf_gain; /*0x2b0,    RW, 0x000057A7,                             NA*/
    volatile         T_RF_P0_RX_58DB_RF_GAIN                rx_58db_rf_gain; /*0x2b4,    RW, 0x000057B6,                             NA*/
    volatile         T_RF_P0_RX_60DB_RF_GAIN                rx_60db_rf_gain; /*0x2b8,    RW, 0x000057C5,                             NA*/
    volatile         T_RF_P0_RX_62DB_RF_GAIN                rx_62db_rf_gain; /*0x2bc,    RW, 0x000057D4,                             NA*/
    volatile         T_RF_P0_RX_64DB_RF_GAIN                rx_64db_rf_gain; /*0x2c0,    RW, 0x000057E3,                             NA*/
    volatile         T_RF_P0_RX_66DB_RF_GAIN                rx_66db_rf_gain; /*0x2c4,    RW, 0x000057F2,                             NA*/
    volatile         T_RF_P0_RX_68DB_RF_GAIN                rx_68db_rf_gain; /*0x2c8,    RW, 0x000057F3,                             NA*/
    volatile         T_RF_P0_RX_70DB_RF_GAIN                rx_70db_rf_gain; /*0x2cc,    RW, 0x000057F4,                             NA*/
    volatile         T_RF_P0_RX_72DB_RF_GAIN                rx_72db_rf_gain; /*0x2d0,    RW, 0x000057F5,                             NA*/
    volatile         T_RF_P0_RX_74DB_RF_GAIN                rx_74db_rf_gain; /*0x2d4,    RW, 0x000057F6,                             NA*/
    volatile         T_RF_P0_RX_76DB_RF_GAIN                rx_76db_rf_gain; /*0x2d8,    RW, 0x000057F7,                             NA*/
    volatile         T_RF_P0_RX_78DB_RF_GAIN                rx_78db_rf_gain; /*0x2dc,    RW, 0x000057F8,                             NA*/
    volatile         T_RF_P0_RX_80DB_RF_GAIN                rx_80db_rf_gain; /*0x2e0,    RW, 0x000057F9,                             NA*/
    volatile         T_RF_P0_RX_82DB_RF_GAIN                rx_82db_rf_gain; /*0x2e4,    RW, 0x000057FA,                             NA*/
    volatile         T_RF_P0_RX_84DB_RF_GAIN                rx_84db_rf_gain; /*0x2e8,    RW, 0x000057FB,                             NA*/
    volatile         T_RF_P0_RX_86DB_RF_GAIN                rx_86db_rf_gain; /*0x2ec,    RW, 0x000057FC,                             NA*/
    volatile         T_RF_P0_RX_88DB_RF_GAIN                rx_88db_rf_gain; /*0x2f0,    RW, 0x000057FD,                             NA*/
    volatile         T_RF_P0_RX_90DB_RF_GAIN                rx_90db_rf_gain; /*0x2f4,    RW, 0x000057FE,                             NA*/
    volatile          T_RF_P0_TX_0DB_RF_GAIN                 tx_0db_rf_gain; /*0x2f8,    RW, 0x00002FB5,                             NA*/
    volatile          T_RF_P0_TX_1DB_RF_GAIN                 tx_1db_rf_gain; /*0x2fc,    RW, 0x000032B6,                             NA*/
    volatile          T_RF_P0_TX_2DB_RF_GAIN                 tx_2db_rf_gain; /*0x300,    RW, 0x00002AB6,                             NA*/
    volatile          T_RF_P0_TX_3DB_RF_GAIN                 tx_3db_rf_gain; /*0x304,    RW, 0x000033B6,                             NA*/
    volatile          T_RF_P0_TX_4DB_RF_GAIN                 tx_4db_rf_gain; /*0x308,    RW, 0x00002BB6,                             NA*/
    volatile          T_RF_P0_TX_5DB_RF_GAIN                 tx_5db_rf_gain; /*0x30c,    RW, 0x000034B6,                             NA*/
    volatile          T_RF_P0_TX_6DB_RF_GAIN                 tx_6db_rf_gain; /*0x310,    RW, 0x00002CB6,                             NA*/
    volatile          T_RF_P0_TX_7DB_RF_GAIN                 tx_7db_rf_gain; /*0x314,    RW, 0x000035B6,                             NA*/
    volatile          T_RF_P0_TX_8DB_RF_GAIN                 tx_8db_rf_gain; /*0x318,    RW, 0x00002DB6,                             NA*/
    volatile          T_RF_P0_TX_9DB_RF_GAIN                 tx_9db_rf_gain; /*0x31c,    RW, 0x000036B6,                             NA*/
    volatile         T_RF_P0_TX_10DB_RF_GAIN                tx_10db_rf_gain; /*0x320,    RW, 0x00002EB6,                             NA*/
    volatile         T_RF_P0_TX_11DB_RF_GAIN                tx_11db_rf_gain; /*0x324,    RW, 0x000037B6,                             NA*/
    volatile         T_RF_P0_TX_12DB_RF_GAIN                tx_12db_rf_gain; /*0x328,    RW, 0x00002FB6,                             NA*/
    volatile         T_RF_P0_TX_13DB_RF_GAIN                tx_13db_rf_gain; /*0x32c,    RW, 0x000032B7,                             NA*/
    volatile         T_RF_P0_TX_14DB_RF_GAIN                tx_14db_rf_gain; /*0x330,    RW, 0x00002AB7,                             NA*/
    volatile         T_RF_P0_TX_15DB_RF_GAIN                tx_15db_rf_gain; /*0x334,    RW, 0x000033B7,                             NA*/
    volatile         T_RF_P0_TX_16DB_RF_GAIN                tx_16db_rf_gain; /*0x338,    RW, 0x00002BB7,                             NA*/
    volatile         T_RF_P0_TX_17DB_RF_GAIN                tx_17db_rf_gain; /*0x33c,    RW, 0x000034B7,                             NA*/
    volatile         T_RF_P0_TX_18DB_RF_GAIN                tx_18db_rf_gain; /*0x340,    RW, 0x00002CB7,                             NA*/
    volatile         T_RF_P0_TX_19DB_RF_GAIN                tx_19db_rf_gain; /*0x344,    RW, 0x000035B7,                             NA*/
    volatile         T_RF_P0_TX_20DB_RF_GAIN                tx_20db_rf_gain; /*0x348,    RW, 0x00002DB7,                             NA*/
    volatile         T_RF_P0_TX_21DB_RF_GAIN                tx_21db_rf_gain; /*0x34c,    RW, 0x000036B7,                             NA*/
    volatile         T_RF_P0_TX_22DB_RF_GAIN                tx_22db_rf_gain; /*0x350,    RW, 0x00002EB7,                             NA*/
    volatile         T_RF_P0_TX_23DB_RF_GAIN                tx_23db_rf_gain; /*0x354,    RW, 0x000037B7,                             NA*/
    volatile         T_RF_P0_TX_24DB_RF_GAIN                tx_24db_rf_gain; /*0x358,    RW, 0x00002FB7,                             NA*/
    volatile         T_RF_P0_TX_25DB_RF_GAIN                tx_25db_rf_gain; /*0x35c,    RW, 0x000032BB,                             NA*/
    volatile         T_RF_P0_TX_26DB_RF_GAIN                tx_26db_rf_gain; /*0x360,    RW, 0x00002ABB,                             NA*/
    volatile         T_RF_P0_TX_27DB_RF_GAIN                tx_27db_rf_gain; /*0x364,    RW, 0x000033BB,                             NA*/
    volatile         T_RF_P0_TX_28DB_RF_GAIN                tx_28db_rf_gain; /*0x368,    RW, 0x00002BBB,                             NA*/
    volatile         T_RF_P0_TX_29DB_RF_GAIN                tx_29db_rf_gain; /*0x36c,    RW, 0x000034BB,                             NA*/
    volatile         T_RF_P0_TX_30DB_RF_GAIN                tx_30db_rf_gain; /*0x370,    RW, 0x00002CBB,                             NA*/
    volatile         T_RF_P0_TX_31DB_RF_GAIN                tx_31db_rf_gain; /*0x374,    RW, 0x000035BB,                             NA*/
    volatile         T_RF_P0_TX_32DB_RF_GAIN                tx_32db_rf_gain; /*0x378,    RW, 0x00002DBB,                             NA*/
    volatile         T_RF_P0_TX_33DB_RF_GAIN                tx_33db_rf_gain; /*0x37c,    RW, 0x000036BB,                             NA*/
    volatile                        uint32_t                 reserved_5[16];
    volatile         T_RF_P0_TX_34DB_RF_GAIN                tx_34db_rf_gain; /*0x3c0,    RW, 0x00002EBB,                             NA*/
    volatile         T_RF_P0_TX_35DB_RF_GAIN                tx_35db_rf_gain; /*0x3c4,    RW, 0x000037BB,                             NA*/
    volatile         T_RF_P0_TX_36DB_RF_GAIN                tx_36db_rf_gain; /*0x3c8,    RW, 0x00002FBB,                             NA*/
    volatile         T_RF_P0_TX_37DB_RF_GAIN                tx_37db_rf_gain; /*0x3cc,    RW, 0x000032BF,                             NA*/
    volatile         T_RF_P0_TX_38DB_RF_GAIN                tx_38db_rf_gain; /*0x3d0,    RW, 0x00002ABF,                             NA*/
    volatile         T_RF_P0_TX_39DB_RF_GAIN                tx_39db_rf_gain; /*0x3d4,    RW, 0x000033BF,                             NA*/
    volatile         T_RF_P0_TX_40DB_RF_GAIN                tx_40db_rf_gain; /*0x3d8,    RW, 0x00002BBF,                             NA*/
    volatile         T_RF_P0_TX_41DB_RF_GAIN                tx_41db_rf_gain; /*0x3dc,    RW, 0x000034BF,                             NA*/
    volatile         T_RF_P0_TX_42DB_RF_GAIN                tx_42db_rf_gain; /*0x3e0,    RW, 0x00002CBF,                             NA*/
    volatile         T_RF_P0_TX_43DB_RF_GAIN                tx_43db_rf_gain; /*0x3e4,    RW, 0x000035BF,                             NA*/
    volatile         T_RF_P0_TX_44DB_RF_GAIN                tx_44db_rf_gain; /*0x3e8,    RW, 0x00002DBF,                             NA*/
    volatile         T_RF_P0_TX_45DB_RF_GAIN                tx_45db_rf_gain; /*0x3ec,    RW, 0x000036BF,                             NA*/
    volatile         T_RF_P0_TX_46DB_RF_GAIN                tx_46db_rf_gain; /*0x3f0,    RW, 0x00002EBF,                             NA*/
    volatile         T_RF_P0_TX_47DB_RF_GAIN                tx_47db_rf_gain; /*0x3f4,    RW, 0x000037BF,                             NA*/
    volatile         T_RF_P0_TX_48DB_RF_GAIN                tx_48db_rf_gain; /*0x3f8,    RW, 0x00002FBF,                             NA*/
    volatile                 T_RF_P0_RF_PAGE                        rf_page; /*0x3fc,    RW, 0x00000000,                             NA*/
} T_HWP_RF_P0_T;

#define hwp_rf_p0 ((T_HWP_RF_P0_T*)REG_RF_P0_BASE)


__STATIC_INLINE uint32_t rf_p0_virsion_get(void)
{
    return hwp_rf_p0->virsion.val;
}

__STATIC_INLINE void rf_p0_virsion_unpack(uint8_t* foundry_id, uint8_t* rev_id)
{
    T_RF_P0_VIRSION localVal = hwp_rf_p0->virsion;

    *foundry_id = localVal.bit_field.foundry_id;
    *rev_id = localVal.bit_field.rev_id;
}

__STATIC_INLINE uint8_t rf_p0_foundry_id_getf(void)
{
    return hwp_rf_p0->virsion.bit_field.foundry_id;
}

__STATIC_INLINE uint8_t rf_p0_rev_id_getf(void)
{
    return hwp_rf_p0->virsion.bit_field.rev_id;
}

__STATIC_INLINE uint32_t rf_p0_co_cal_cfg_get(void)
{
    return hwp_rf_p0->co_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_co_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->co_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_co_cal_cfg_pack(uint8_t rf_auto_cal, uint8_t rfpll_single_cal_en, uint8_t rf_sleep_cal_en, uint8_t rf_tx_dpd_cal_en, uint8_t rf_rx_img_cal_en, uint8_t rf_tx_img_cal_en)
{
    hwp_rf_p0->co_cal_cfg.val = (((uint32_t)rf_auto_cal << 5) | ((uint32_t)rfpll_single_cal_en << 4) | ((uint32_t)rf_sleep_cal_en << 3) | ((uint32_t)rf_tx_dpd_cal_en << 2) | ((uint32_t)rf_rx_img_cal_en << 1) | ((uint32_t)rf_tx_img_cal_en << 0));
}

__STATIC_INLINE void rf_p0_co_cal_cfg_unpack(uint8_t* rf_auto_cal, uint8_t* rfpll_single_cal_en, uint8_t* rf_sleep_cal_en, uint8_t* rf_tx_dpd_cal_en, uint8_t* rf_rx_img_cal_en, uint8_t* rf_tx_img_cal_en)
{
    T_RF_P0_CO_CAL_CFG localVal = hwp_rf_p0->co_cal_cfg;

    *rf_auto_cal = localVal.bit_field.rf_auto_cal;
    *rfpll_single_cal_en = localVal.bit_field.rfpll_single_cal_en;
    *rf_sleep_cal_en = localVal.bit_field.rf_sleep_cal_en;
    *rf_tx_dpd_cal_en = localVal.bit_field.rf_tx_dpd_cal_en;
    *rf_rx_img_cal_en = localVal.bit_field.rf_rx_img_cal_en;
    *rf_tx_img_cal_en = localVal.bit_field.rf_tx_img_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_rf_auto_cal_getf(void)
{
    return hwp_rf_p0->co_cal_cfg.bit_field.rf_auto_cal;
}

__STATIC_INLINE void rf_p0_rf_auto_cal_setf(uint8_t rf_auto_cal)
{
    hwp_rf_p0->co_cal_cfg.bit_field.rf_auto_cal = rf_auto_cal;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_single_cal_en_getf(void)
{
    return hwp_rf_p0->co_cal_cfg.bit_field.rfpll_single_cal_en;
}

__STATIC_INLINE void rf_p0_rfpll_single_cal_en_setf(uint8_t rfpll_single_cal_en)
{
    hwp_rf_p0->co_cal_cfg.bit_field.rfpll_single_cal_en = rfpll_single_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_rf_sleep_cal_en_getf(void)
{
    return hwp_rf_p0->co_cal_cfg.bit_field.rf_sleep_cal_en;
}

__STATIC_INLINE void rf_p0_rf_sleep_cal_en_setf(uint8_t rf_sleep_cal_en)
{
    hwp_rf_p0->co_cal_cfg.bit_field.rf_sleep_cal_en = rf_sleep_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_rf_tx_dpd_cal_en_getf(void)
{
    return hwp_rf_p0->co_cal_cfg.bit_field.rf_tx_dpd_cal_en;
}

__STATIC_INLINE void rf_p0_rf_tx_dpd_cal_en_setf(uint8_t rf_tx_dpd_cal_en)
{
    hwp_rf_p0->co_cal_cfg.bit_field.rf_tx_dpd_cal_en = rf_tx_dpd_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_rf_rx_img_cal_en_getf(void)
{
    return hwp_rf_p0->co_cal_cfg.bit_field.rf_rx_img_cal_en;
}

__STATIC_INLINE void rf_p0_rf_rx_img_cal_en_setf(uint8_t rf_rx_img_cal_en)
{
    hwp_rf_p0->co_cal_cfg.bit_field.rf_rx_img_cal_en = rf_rx_img_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_rf_tx_img_cal_en_getf(void)
{
    return hwp_rf_p0->co_cal_cfg.bit_field.rf_tx_img_cal_en;
}

__STATIC_INLINE void rf_p0_rf_tx_img_cal_en_setf(uint8_t rf_tx_img_cal_en)
{
    hwp_rf_p0->co_cal_cfg.bit_field.rf_tx_img_cal_en = rf_tx_img_cal_en;
}

__STATIC_INLINE uint32_t rf_p0_auto_cal_status_rpt_get(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.val;
}

__STATIC_INLINE void rf_p0_auto_cal_status_rpt_unpack(uint8_t* rf_rfpll_single_cal_ready, uint8_t* rf_sleep_cal_ready, uint8_t* rf_rx_cal4_ready, uint8_t* rf_rx_cal3_ready, uint8_t* rf_rx_cal2_ready, uint8_t* rf_rx_cal1_ready, uint8_t* rf_tx_img_dc_cal_ready, uint8_t* rf_tx_cal3_ready, uint8_t* rf_tx_cal2_ready, uint8_t* rf_tx_cal1_ready, uint8_t* rf_rco32k_cal_ready, uint8_t* rf_rfpll_cal_ready)
{
    T_RF_P0_AUTO_CAL_STATUS_RPT localVal = hwp_rf_p0->auto_cal_status_rpt;

    *rf_rfpll_single_cal_ready = localVal.bit_field.rf_rfpll_single_cal_ready;
    *rf_sleep_cal_ready = localVal.bit_field.rf_sleep_cal_ready;
    *rf_rx_cal4_ready = localVal.bit_field.rf_rx_cal4_ready;
    *rf_rx_cal3_ready = localVal.bit_field.rf_rx_cal3_ready;
    *rf_rx_cal2_ready = localVal.bit_field.rf_rx_cal2_ready;
    *rf_rx_cal1_ready = localVal.bit_field.rf_rx_cal1_ready;
    *rf_tx_img_dc_cal_ready = localVal.bit_field.rf_tx_img_dc_cal_ready;
    *rf_tx_cal3_ready = localVal.bit_field.rf_tx_cal3_ready;
    *rf_tx_cal2_ready = localVal.bit_field.rf_tx_cal2_ready;
    *rf_tx_cal1_ready = localVal.bit_field.rf_tx_cal1_ready;
    *rf_rco32k_cal_ready = localVal.bit_field.rf_rco32k_cal_ready;
    *rf_rfpll_cal_ready = localVal.bit_field.rf_rfpll_cal_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_rfpll_single_cal_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_rfpll_single_cal_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_sleep_cal_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_sleep_cal_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_rx_cal4_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_rx_cal4_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_rx_cal3_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_rx_cal3_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_rx_cal2_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_rx_cal2_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_rx_cal1_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_rx_cal1_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_tx_img_dc_cal_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_tx_img_dc_cal_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_tx_cal3_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_tx_cal3_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_tx_cal2_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_tx_cal2_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_tx_cal1_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_tx_cal1_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_rco32k_cal_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_rco32k_cal_ready;
}

__STATIC_INLINE uint8_t rf_p0_rf_rfpll_cal_ready_getf(void)
{
    return hwp_rf_p0->auto_cal_status_rpt.bit_field.rf_rfpll_cal_ready;
}

__STATIC_INLINE uint32_t rf_p0_auto_cal_overflow_rpt_get(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.val;
}

__STATIC_INLINE void rf_p0_auto_cal_overflow_rpt_unpack(uint8_t* rx_cal4_overflow_rpt, uint8_t* rx_cal3_overflow_rpt, uint8_t* rx_cal2_overflow_rpt, uint8_t* rx_cal1_overflow_rpt, uint8_t* tx_img_dc_cal_of_rpt, uint8_t* tx_cal3_overflow_rpt, uint8_t* tx_cal2_overflow_rpt, uint8_t* tx_cal1_overflow_rpt, uint8_t* rco32k_cal_overflow_rpt, uint8_t* rfpll_cal_overflow_rpt)
{
    T_RF_P0_AUTO_CAL_OVERFLOW_RPT localVal = hwp_rf_p0->auto_cal_overflow_rpt;

    *rx_cal4_overflow_rpt = localVal.bit_field.rx_cal4_overflow_rpt;
    *rx_cal3_overflow_rpt = localVal.bit_field.rx_cal3_overflow_rpt;
    *rx_cal2_overflow_rpt = localVal.bit_field.rx_cal2_overflow_rpt;
    *rx_cal1_overflow_rpt = localVal.bit_field.rx_cal1_overflow_rpt;
    *tx_img_dc_cal_of_rpt = localVal.bit_field.tx_img_dc_cal_of_rpt;
    *tx_cal3_overflow_rpt = localVal.bit_field.tx_cal3_overflow_rpt;
    *tx_cal2_overflow_rpt = localVal.bit_field.tx_cal2_overflow_rpt;
    *tx_cal1_overflow_rpt = localVal.bit_field.tx_cal1_overflow_rpt;
    *rco32k_cal_overflow_rpt = localVal.bit_field.rco32k_cal_overflow_rpt;
    *rfpll_cal_overflow_rpt = localVal.bit_field.rfpll_cal_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rx_cal4_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.rx_cal4_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rx_cal3_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.rx_cal3_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rx_cal2_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.rx_cal2_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rx_cal1_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.rx_cal1_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tx_img_dc_cal_of_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.tx_img_dc_cal_of_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tx_cal3_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.tx_cal3_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tx_cal2_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.tx_cal2_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tx_cal1_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.tx_cal1_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rco32k_cal_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.rco32k_cal_overflow_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_cal_overflow_rpt_getf(void)
{
    return hwp_rf_p0->auto_cal_overflow_rpt.bit_field.rfpll_cal_overflow_rpt;
}

__STATIC_INLINE uint32_t rf_p0_rx_agc_cfg_get(void)
{
    return hwp_rf_p0->rx_agc_cfg.val;
}

__STATIC_INLINE void rf_p0_rx_agc_cfg_set(uint32_t value)
{
    hwp_rf_p0->rx_agc_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rx_agc_cfg_pack(uint8_t cpu_rx_b, uint8_t cpu_rx_agc_dr)
{
    hwp_rf_p0->rx_agc_cfg.val = (((uint32_t)cpu_rx_b << 1) | ((uint32_t)cpu_rx_agc_dr << 0));
}

__STATIC_INLINE void rf_p0_rx_agc_cfg_unpack(uint8_t* cpu_rx_b, uint8_t* cpu_rx_agc_dr)
{
    T_RF_P0_RX_AGC_CFG localVal = hwp_rf_p0->rx_agc_cfg;

    *cpu_rx_b = localVal.bit_field.cpu_rx_b;
    *cpu_rx_agc_dr = localVal.bit_field.cpu_rx_agc_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_b_getf(void)
{
    return hwp_rf_p0->rx_agc_cfg.bit_field.cpu_rx_b;
}

__STATIC_INLINE void rf_p0_cpu_rx_b_setf(uint8_t cpu_rx_b)
{
    hwp_rf_p0->rx_agc_cfg.bit_field.cpu_rx_b = cpu_rx_b;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_agc_dr_getf(void)
{
    return hwp_rf_p0->rx_agc_cfg.bit_field.cpu_rx_agc_dr;
}

__STATIC_INLINE void rf_p0_cpu_rx_agc_dr_setf(uint8_t cpu_rx_agc_dr)
{
    hwp_rf_p0->rx_agc_cfg.bit_field.cpu_rx_agc_dr = cpu_rx_agc_dr;
}

__STATIC_INLINE uint32_t rf_p0_tx_agc_cfg_get(void)
{
    return hwp_rf_p0->tx_agc_cfg.val;
}

__STATIC_INLINE void rf_p0_tx_agc_cfg_set(uint32_t value)
{
    hwp_rf_p0->tx_agc_cfg.val = value;
}

__STATIC_INLINE void rf_p0_tx_agc_cfg_pack(uint8_t cpu_tx_b, uint8_t cpu_tx_agc_dr)
{
    hwp_rf_p0->tx_agc_cfg.val = (((uint32_t)cpu_tx_b << 1) | ((uint32_t)cpu_tx_agc_dr << 0));
}

__STATIC_INLINE void rf_p0_tx_agc_cfg_unpack(uint8_t* cpu_tx_b, uint8_t* cpu_tx_agc_dr)
{
    T_RF_P0_TX_AGC_CFG localVal = hwp_rf_p0->tx_agc_cfg;

    *cpu_tx_b = localVal.bit_field.cpu_tx_b;
    *cpu_tx_agc_dr = localVal.bit_field.cpu_tx_agc_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_b_getf(void)
{
    return hwp_rf_p0->tx_agc_cfg.bit_field.cpu_tx_b;
}

__STATIC_INLINE void rf_p0_cpu_tx_b_setf(uint8_t cpu_tx_b)
{
    hwp_rf_p0->tx_agc_cfg.bit_field.cpu_tx_b = cpu_tx_b;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_agc_dr_getf(void)
{
    return hwp_rf_p0->tx_agc_cfg.bit_field.cpu_tx_agc_dr;
}

__STATIC_INLINE void rf_p0_cpu_tx_agc_dr_setf(uint8_t cpu_tx_agc_dr)
{
    hwp_rf_p0->tx_agc_cfg.bit_field.cpu_tx_agc_dr = cpu_tx_agc_dr;
}

__STATIC_INLINE uint32_t rf_p0_rx_gain_cfg_get(void)
{
    return hwp_rf_p0->rx_gain_cfg.val;
}

__STATIC_INLINE void rf_p0_rx_gain_cfg_set(uint32_t value)
{
    hwp_rf_p0->rx_gain_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rx_gain_cfg_pack(uint8_t cpu_rx_gain_dr, uint8_t cpu_lna_tune, uint8_t cpu_lna_gain, uint8_t cpu_rmx_gain, uint8_t cpu_rxlpf_gain)
{
    hwp_rf_p0->rx_gain_cfg.val = (((uint32_t)cpu_rx_gain_dr << 15) | ((uint32_t)cpu_lna_tune << 12) | ((uint32_t)cpu_lna_gain << 8) | ((uint32_t)cpu_rmx_gain << 4) | ((uint32_t)cpu_rxlpf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_gain_cfg_unpack(uint8_t* cpu_rx_gain_dr, uint8_t* cpu_lna_tune, uint8_t* cpu_lna_gain, uint8_t* cpu_rmx_gain, uint8_t* cpu_rxlpf_gain)
{
    T_RF_P0_RX_GAIN_CFG localVal = hwp_rf_p0->rx_gain_cfg;

    *cpu_rx_gain_dr = localVal.bit_field.cpu_rx_gain_dr;
    *cpu_lna_tune = localVal.bit_field.cpu_lna_tune;
    *cpu_lna_gain = localVal.bit_field.cpu_lna_gain;
    *cpu_rmx_gain = localVal.bit_field.cpu_rmx_gain;
    *cpu_rxlpf_gain = localVal.bit_field.cpu_rxlpf_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_gain_dr_getf(void)
{
    return hwp_rf_p0->rx_gain_cfg.bit_field.cpu_rx_gain_dr;
}

__STATIC_INLINE void rf_p0_cpu_rx_gain_dr_setf(uint8_t cpu_rx_gain_dr)
{
    hwp_rf_p0->rx_gain_cfg.bit_field.cpu_rx_gain_dr = cpu_rx_gain_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_tune_getf(void)
{
    return hwp_rf_p0->rx_gain_cfg.bit_field.cpu_lna_tune;
}

__STATIC_INLINE void rf_p0_cpu_lna_tune_setf(uint8_t cpu_lna_tune)
{
    hwp_rf_p0->rx_gain_cfg.bit_field.cpu_lna_tune = cpu_lna_tune;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_gain_getf(void)
{
    return hwp_rf_p0->rx_gain_cfg.bit_field.cpu_lna_gain;
}

__STATIC_INLINE void rf_p0_cpu_lna_gain_setf(uint8_t cpu_lna_gain)
{
    hwp_rf_p0->rx_gain_cfg.bit_field.cpu_lna_gain = cpu_lna_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_gain_getf(void)
{
    return hwp_rf_p0->rx_gain_cfg.bit_field.cpu_rmx_gain;
}

__STATIC_INLINE void rf_p0_cpu_rmx_gain_setf(uint8_t cpu_rmx_gain)
{
    hwp_rf_p0->rx_gain_cfg.bit_field.cpu_rmx_gain = cpu_rmx_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_gain_getf(void)
{
    return hwp_rf_p0->rx_gain_cfg.bit_field.cpu_rxlpf_gain;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_gain_setf(uint8_t cpu_rxlpf_gain)
{
    hwp_rf_p0->rx_gain_cfg.bit_field.cpu_rxlpf_gain = cpu_rxlpf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_gain_cfg_get(void)
{
    return hwp_rf_p0->tx_gain_cfg.val;
}

__STATIC_INLINE void rf_p0_tx_gain_cfg_set(uint32_t value)
{
    hwp_rf_p0->tx_gain_cfg.val = value;
}

__STATIC_INLINE void rf_p0_tx_gain_cfg_pack(uint8_t cpu_tx_gain_dr, uint8_t cpu_txlpf_gain, uint8_t cpu_tmx_gain, uint8_t cpu_pa_ibase, uint8_t cpu_pa_da_gain, uint8_t cpu_pa_gain)
{
    hwp_rf_p0->tx_gain_cfg.val = (((uint32_t)cpu_tx_gain_dr << 15) | ((uint32_t)cpu_txlpf_gain << 11) | ((uint32_t)cpu_tmx_gain << 8) | ((uint32_t)cpu_pa_ibase << 4) | ((uint32_t)cpu_pa_da_gain << 2) | ((uint32_t)cpu_pa_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_gain_cfg_unpack(uint8_t* cpu_tx_gain_dr, uint8_t* cpu_txlpf_gain, uint8_t* cpu_tmx_gain, uint8_t* cpu_pa_ibase, uint8_t* cpu_pa_da_gain, uint8_t* cpu_pa_gain)
{
    T_RF_P0_TX_GAIN_CFG localVal = hwp_rf_p0->tx_gain_cfg;

    *cpu_tx_gain_dr = localVal.bit_field.cpu_tx_gain_dr;
    *cpu_txlpf_gain = localVal.bit_field.cpu_txlpf_gain;
    *cpu_tmx_gain = localVal.bit_field.cpu_tmx_gain;
    *cpu_pa_ibase = localVal.bit_field.cpu_pa_ibase;
    *cpu_pa_da_gain = localVal.bit_field.cpu_pa_da_gain;
    *cpu_pa_gain = localVal.bit_field.cpu_pa_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_gain_dr_getf(void)
{
    return hwp_rf_p0->tx_gain_cfg.bit_field.cpu_tx_gain_dr;
}

__STATIC_INLINE void rf_p0_cpu_tx_gain_dr_setf(uint8_t cpu_tx_gain_dr)
{
    hwp_rf_p0->tx_gain_cfg.bit_field.cpu_tx_gain_dr = cpu_tx_gain_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_gain_getf(void)
{
    return hwp_rf_p0->tx_gain_cfg.bit_field.cpu_txlpf_gain;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_gain_setf(uint8_t cpu_txlpf_gain)
{
    hwp_rf_p0->tx_gain_cfg.bit_field.cpu_txlpf_gain = cpu_txlpf_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_gain_getf(void)
{
    return hwp_rf_p0->tx_gain_cfg.bit_field.cpu_tmx_gain;
}

__STATIC_INLINE void rf_p0_cpu_tmx_gain_setf(uint8_t cpu_tmx_gain)
{
    hwp_rf_p0->tx_gain_cfg.bit_field.cpu_tmx_gain = cpu_tmx_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_ibase_getf(void)
{
    return hwp_rf_p0->tx_gain_cfg.bit_field.cpu_pa_ibase;
}

__STATIC_INLINE void rf_p0_cpu_pa_ibase_setf(uint8_t cpu_pa_ibase)
{
    hwp_rf_p0->tx_gain_cfg.bit_field.cpu_pa_ibase = cpu_pa_ibase;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_da_gain_getf(void)
{
    return hwp_rf_p0->tx_gain_cfg.bit_field.cpu_pa_da_gain;
}

__STATIC_INLINE void rf_p0_cpu_pa_da_gain_setf(uint8_t cpu_pa_da_gain)
{
    hwp_rf_p0->tx_gain_cfg.bit_field.cpu_pa_da_gain = cpu_pa_da_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_gain_getf(void)
{
    return hwp_rf_p0->tx_gain_cfg.bit_field.cpu_pa_gain;
}

__STATIC_INLINE void rf_p0_cpu_pa_gain_setf(uint8_t cpu_pa_gain)
{
    hwp_rf_p0->tx_gain_cfg.bit_field.cpu_pa_gain = cpu_pa_gain;
}

__STATIC_INLINE uint32_t rf_p0_enbale_rf_get(void)
{
    return hwp_rf_p0->enbale_rf.val;
}

__STATIC_INLINE void rf_p0_enbale_rf_set(uint32_t value)
{
    hwp_rf_p0->enbale_rf.val = value;
}

__STATIC_INLINE void rf_p0_enbale_rf_pack(uint8_t cpu_rf_enable_dr, uint8_t cpu_rmx_en, uint8_t cpu_rxlpf_en, uint8_t cpu_rxadc_en, uint8_t cpu_lna_en, uint8_t cpu_txlpf_en, uint8_t cpu_txdac_en, uint8_t cpu_pa_en, uint8_t cpu_tmx_en)
{
    hwp_rf_p0->enbale_rf.val = (((uint32_t)cpu_rf_enable_dr << 15) | ((uint32_t)cpu_rmx_en << 7) | ((uint32_t)cpu_rxlpf_en << 6) | ((uint32_t)cpu_rxadc_en << 5) | ((uint32_t)cpu_lna_en << 4) | ((uint32_t)cpu_txlpf_en << 3) | ((uint32_t)cpu_txdac_en << 2) | ((uint32_t)cpu_pa_en << 1) | ((uint32_t)cpu_tmx_en << 0));
}

__STATIC_INLINE void rf_p0_enbale_rf_unpack(uint8_t* cpu_rf_enable_dr, uint8_t* cpu_rmx_en, uint8_t* cpu_rxlpf_en, uint8_t* cpu_rxadc_en, uint8_t* cpu_lna_en, uint8_t* cpu_txlpf_en, uint8_t* cpu_txdac_en, uint8_t* cpu_pa_en, uint8_t* cpu_tmx_en)
{
    T_RF_P0_ENBALE_RF localVal = hwp_rf_p0->enbale_rf;

    *cpu_rf_enable_dr = localVal.bit_field.cpu_rf_enable_dr;
    *cpu_rmx_en = localVal.bit_field.cpu_rmx_en;
    *cpu_rxlpf_en = localVal.bit_field.cpu_rxlpf_en;
    *cpu_rxadc_en = localVal.bit_field.cpu_rxadc_en;
    *cpu_lna_en = localVal.bit_field.cpu_lna_en;
    *cpu_txlpf_en = localVal.bit_field.cpu_txlpf_en;
    *cpu_txdac_en = localVal.bit_field.cpu_txdac_en;
    *cpu_pa_en = localVal.bit_field.cpu_pa_en;
    *cpu_tmx_en = localVal.bit_field.cpu_tmx_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rf_enable_dr_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_rf_enable_dr;
}

__STATIC_INLINE void rf_p0_cpu_rf_enable_dr_setf(uint8_t cpu_rf_enable_dr)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_rf_enable_dr = cpu_rf_enable_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_en_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_rmx_en;
}

__STATIC_INLINE void rf_p0_cpu_rmx_en_setf(uint8_t cpu_rmx_en)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_rmx_en = cpu_rmx_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_en_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_rxlpf_en;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_en_setf(uint8_t cpu_rxlpf_en)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_rxlpf_en = cpu_rxlpf_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxadc_en_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_rxadc_en;
}

__STATIC_INLINE void rf_p0_cpu_rxadc_en_setf(uint8_t cpu_rxadc_en)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_rxadc_en = cpu_rxadc_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_en_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_lna_en;
}

__STATIC_INLINE void rf_p0_cpu_lna_en_setf(uint8_t cpu_lna_en)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_lna_en = cpu_lna_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_en_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_txlpf_en;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_en_setf(uint8_t cpu_txlpf_en)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_txlpf_en = cpu_txlpf_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_en_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_txdac_en;
}

__STATIC_INLINE void rf_p0_cpu_txdac_en_setf(uint8_t cpu_txdac_en)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_txdac_en = cpu_txdac_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_en_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_pa_en;
}

__STATIC_INLINE void rf_p0_cpu_pa_en_setf(uint8_t cpu_pa_en)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_pa_en = cpu_pa_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_en_getf(void)
{
    return hwp_rf_p0->enbale_rf.bit_field.cpu_tmx_en;
}

__STATIC_INLINE void rf_p0_cpu_tmx_en_setf(uint8_t cpu_tmx_en)
{
    hwp_rf_p0->enbale_rf.bit_field.cpu_tmx_en = cpu_tmx_en;
}

__STATIC_INLINE uint32_t rf_p0_enbale_clk_get(void)
{
    return hwp_rf_p0->enbale_clk.val;
}

__STATIC_INLINE void rf_p0_enbale_clk_set(uint32_t value)
{
    hwp_rf_p0->enbale_clk.val = value;
}

__STATIC_INLINE void rf_p0_enbale_clk_pack(uint8_t cpu_xtal32k_en, uint8_t cpu_xtal40m_en, uint8_t cpu_rfpll_vco_en, uint8_t cpu_rfpll_lf_en, uint8_t cpu_rfpll_presc_en)
{
    hwp_rf_p0->enbale_clk.val = (((uint32_t)cpu_xtal32k_en << 5) | ((uint32_t)cpu_xtal40m_en << 4) | ((uint32_t)cpu_rfpll_vco_en << 2) | ((uint32_t)cpu_rfpll_lf_en << 1) | ((uint32_t)cpu_rfpll_presc_en << 0));
}

__STATIC_INLINE void rf_p0_enbale_clk_unpack(uint8_t* cpu_xtal32k_en, uint8_t* cpu_xtal40m_en, uint8_t* cpu_rfpll_vco_en, uint8_t* cpu_rfpll_lf_en, uint8_t* cpu_rfpll_presc_en)
{
    T_RF_P0_ENBALE_CLK localVal = hwp_rf_p0->enbale_clk;

    *cpu_xtal32k_en = localVal.bit_field.cpu_xtal32k_en;
    *cpu_xtal40m_en = localVal.bit_field.cpu_xtal40m_en;
    *cpu_rfpll_vco_en = localVal.bit_field.cpu_rfpll_vco_en;
    *cpu_rfpll_lf_en = localVal.bit_field.cpu_rfpll_lf_en;
    *cpu_rfpll_presc_en = localVal.bit_field.cpu_rfpll_presc_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_xtal32k_en_getf(void)
{
    return hwp_rf_p0->enbale_clk.bit_field.cpu_xtal32k_en;
}

__STATIC_INLINE void rf_p0_cpu_xtal32k_en_setf(uint8_t cpu_xtal32k_en)
{
    hwp_rf_p0->enbale_clk.bit_field.cpu_xtal32k_en = cpu_xtal32k_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_xtal40m_en_getf(void)
{
    return hwp_rf_p0->enbale_clk.bit_field.cpu_xtal40m_en;
}

__STATIC_INLINE void rf_p0_cpu_xtal40m_en_setf(uint8_t cpu_xtal40m_en)
{
    hwp_rf_p0->enbale_clk.bit_field.cpu_xtal40m_en = cpu_xtal40m_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_vco_en_getf(void)
{
    return hwp_rf_p0->enbale_clk.bit_field.cpu_rfpll_vco_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_vco_en_setf(uint8_t cpu_rfpll_vco_en)
{
    hwp_rf_p0->enbale_clk.bit_field.cpu_rfpll_vco_en = cpu_rfpll_vco_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_lf_en_getf(void)
{
    return hwp_rf_p0->enbale_clk.bit_field.cpu_rfpll_lf_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_lf_en_setf(uint8_t cpu_rfpll_lf_en)
{
    hwp_rf_p0->enbale_clk.bit_field.cpu_rfpll_lf_en = cpu_rfpll_lf_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_presc_en_getf(void)
{
    return hwp_rf_p0->enbale_clk.bit_field.cpu_rfpll_presc_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_presc_en_setf(uint8_t cpu_rfpll_presc_en)
{
    hwp_rf_p0->enbale_clk.bit_field.cpu_rfpll_presc_en = cpu_rfpll_presc_en;
}

__STATIC_INLINE uint32_t rf_p0_manual_cal_cfg_get(void)
{
    return hwp_rf_p0->manual_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_manual_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->manual_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_manual_cal_cfg_pack(uint8_t cpu_manual_cal_dr, uint8_t cpu_dpd_en, uint8_t cpu_rximg_en, uint8_t cpu_rxlpf_chan_sel, uint8_t cpu_tximg_dc_cal_en, uint8_t cpu_pa_pdimg_en, uint8_t cpu_rxlpf_cal_en, uint8_t cpu_rmx_cal_en, uint8_t cpu_txlpf_cal_en, uint8_t cpu_tmx_cal_reset, uint8_t cpu_tmx_cal2_en, uint8_t cpu_tmx_cal1_en, uint8_t cpu_rco32k_count_en, uint8_t cpu_rfpll_cal_en, uint8_t cpu_rfpll_open_en, uint8_t cpu_rfpll_count_en)
{
    hwp_rf_p0->manual_cal_cfg.val = (((uint32_t)cpu_manual_cal_dr << 15) | ((uint32_t)cpu_dpd_en << 14) | ((uint32_t)cpu_rximg_en << 13) | ((uint32_t)cpu_rxlpf_chan_sel << 12) | ((uint32_t)cpu_tximg_dc_cal_en << 11) | ((uint32_t)cpu_pa_pdimg_en << 10) | ((uint32_t)cpu_rxlpf_cal_en << 9) | ((uint32_t)cpu_rmx_cal_en << 8) | ((uint32_t)cpu_txlpf_cal_en << 7) | ((uint32_t)cpu_tmx_cal_reset << 6) | ((uint32_t)cpu_tmx_cal2_en << 5) | ((uint32_t)cpu_tmx_cal1_en << 4) | ((uint32_t)cpu_rco32k_count_en << 3) | ((uint32_t)cpu_rfpll_cal_en << 2) | ((uint32_t)cpu_rfpll_open_en << 1) | ((uint32_t)cpu_rfpll_count_en << 0));
}

__STATIC_INLINE void rf_p0_manual_cal_cfg_unpack(uint8_t* cpu_manual_cal_dr, uint8_t* cpu_dpd_en, uint8_t* cpu_rximg_en, uint8_t* cpu_rxlpf_chan_sel, uint8_t* cpu_tximg_dc_cal_en, uint8_t* cpu_pa_pdimg_en, uint8_t* cpu_rxlpf_cal_en, uint8_t* cpu_rmx_cal_en, uint8_t* cpu_txlpf_cal_en, uint8_t* cpu_tmx_cal_reset, uint8_t* cpu_tmx_cal2_en, uint8_t* cpu_tmx_cal1_en, uint8_t* cpu_rco32k_count_en, uint8_t* cpu_rfpll_cal_en, uint8_t* cpu_rfpll_open_en, uint8_t* cpu_rfpll_count_en)
{
    T_RF_P0_MANUAL_CAL_CFG localVal = hwp_rf_p0->manual_cal_cfg;

    *cpu_manual_cal_dr = localVal.bit_field.cpu_manual_cal_dr;
    *cpu_dpd_en = localVal.bit_field.cpu_dpd_en;
    *cpu_rximg_en = localVal.bit_field.cpu_rximg_en;
    *cpu_rxlpf_chan_sel = localVal.bit_field.cpu_rxlpf_chan_sel;
    *cpu_tximg_dc_cal_en = localVal.bit_field.cpu_tximg_dc_cal_en;
    *cpu_pa_pdimg_en = localVal.bit_field.cpu_pa_pdimg_en;
    *cpu_rxlpf_cal_en = localVal.bit_field.cpu_rxlpf_cal_en;
    *cpu_rmx_cal_en = localVal.bit_field.cpu_rmx_cal_en;
    *cpu_txlpf_cal_en = localVal.bit_field.cpu_txlpf_cal_en;
    *cpu_tmx_cal_reset = localVal.bit_field.cpu_tmx_cal_reset;
    *cpu_tmx_cal2_en = localVal.bit_field.cpu_tmx_cal2_en;
    *cpu_tmx_cal1_en = localVal.bit_field.cpu_tmx_cal1_en;
    *cpu_rco32k_count_en = localVal.bit_field.cpu_rco32k_count_en;
    *cpu_rfpll_cal_en = localVal.bit_field.cpu_rfpll_cal_en;
    *cpu_rfpll_open_en = localVal.bit_field.cpu_rfpll_open_en;
    *cpu_rfpll_count_en = localVal.bit_field.cpu_rfpll_count_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_manual_cal_dr_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_manual_cal_dr;
}

__STATIC_INLINE void rf_p0_cpu_manual_cal_dr_setf(uint8_t cpu_manual_cal_dr)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_manual_cal_dr = cpu_manual_cal_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dpd_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_dpd_en;
}

__STATIC_INLINE void rf_p0_cpu_dpd_en_setf(uint8_t cpu_dpd_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_dpd_en = cpu_dpd_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rximg_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rximg_en;
}

__STATIC_INLINE void rf_p0_cpu_rximg_en_setf(uint8_t cpu_rximg_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rximg_en = cpu_rximg_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_chan_sel_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rxlpf_chan_sel;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_chan_sel_setf(uint8_t cpu_rxlpf_chan_sel)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rxlpf_chan_sel = cpu_rxlpf_chan_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tximg_dc_cal_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_tximg_dc_cal_en;
}

__STATIC_INLINE void rf_p0_cpu_tximg_dc_cal_en_setf(uint8_t cpu_tximg_dc_cal_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_tximg_dc_cal_en = cpu_tximg_dc_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_pdimg_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_pa_pdimg_en;
}

__STATIC_INLINE void rf_p0_cpu_pa_pdimg_en_setf(uint8_t cpu_pa_pdimg_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_pa_pdimg_en = cpu_pa_pdimg_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rxlpf_cal_en;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_en_setf(uint8_t cpu_rxlpf_cal_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rxlpf_cal_en = cpu_rxlpf_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_cal_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rmx_cal_en;
}

__STATIC_INLINE void rf_p0_cpu_rmx_cal_en_setf(uint8_t cpu_rmx_cal_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rmx_cal_en = cpu_rmx_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_cal_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_txlpf_cal_en;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_cal_en_setf(uint8_t cpu_txlpf_cal_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_txlpf_cal_en = cpu_txlpf_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_reset_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_tmx_cal_reset;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_reset_setf(uint8_t cpu_tmx_cal_reset)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_tmx_cal_reset = cpu_tmx_cal_reset;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal2_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_tmx_cal2_en;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal2_en_setf(uint8_t cpu_tmx_cal2_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_tmx_cal2_en = cpu_tmx_cal2_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal1_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_tmx_cal1_en;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal1_en_setf(uint8_t cpu_tmx_cal1_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_tmx_cal1_en = cpu_tmx_cal1_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rco32k_count_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rco32k_count_en;
}

__STATIC_INLINE void rf_p0_cpu_rco32k_count_en_setf(uint8_t cpu_rco32k_count_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rco32k_count_en = cpu_rco32k_count_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_cal_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rfpll_cal_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_cal_en_setf(uint8_t cpu_rfpll_cal_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rfpll_cal_en = cpu_rfpll_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_open_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rfpll_open_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_open_en_setf(uint8_t cpu_rfpll_open_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rfpll_open_en = cpu_rfpll_open_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_count_en_getf(void)
{
    return hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rfpll_count_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_count_en_setf(uint8_t cpu_rfpll_count_en)
{
    hwp_rf_p0->manual_cal_cfg.bit_field.cpu_rfpll_count_en = cpu_rfpll_count_en;
}

__STATIC_INLINE uint32_t rf_p0_test_mode_cfg_get(void)
{
    return hwp_rf_p0->test_mode_cfg.val;
}

__STATIC_INLINE void rf_p0_test_mode_cfg_set(uint32_t value)
{
    hwp_rf_p0->test_mode_cfg.val = value;
}

__STATIC_INLINE void rf_p0_test_mode_cfg_pack(uint8_t cpu_txlpf_test_mode_dr, uint8_t cpu_txlpf_test_mode, uint8_t cpu_rxlpf_test_mode_dr, uint8_t cpu_rxlpf_test_mode, uint8_t tx_dc_cal_en_dr, uint8_t cpu_tx_dc_cal_en, uint8_t cpu_txdacbuff_ldo_dr, uint8_t cpu_txdacbuff_ldo_en, uint8_t cpu_txbuff_dr, uint8_t cpu_txbuff_en, uint8_t cpu_ad2da_loop, uint8_t cpu_chsel_dr, uint8_t cpu_dac_chsel, uint8_t cpu_adc_chsel)
{
    hwp_rf_p0->test_mode_cfg.val = (((uint32_t)cpu_txlpf_test_mode_dr << 15) | ((uint32_t)cpu_txlpf_test_mode << 14) | ((uint32_t)cpu_rxlpf_test_mode_dr << 13) | ((uint32_t)cpu_rxlpf_test_mode << 12) | ((uint32_t)tx_dc_cal_en_dr << 11) | ((uint32_t)cpu_tx_dc_cal_en << 10) | ((uint32_t)cpu_txdacbuff_ldo_dr << 9) | ((uint32_t)cpu_txdacbuff_ldo_en << 8) | ((uint32_t)cpu_txbuff_dr << 7) | ((uint32_t)cpu_txbuff_en << 6) | ((uint32_t)cpu_ad2da_loop << 5) | ((uint32_t)cpu_chsel_dr << 4) | ((uint32_t)cpu_dac_chsel << 2) | ((uint32_t)cpu_adc_chsel << 0));
}

__STATIC_INLINE void rf_p0_test_mode_cfg_unpack(uint8_t* cpu_txlpf_test_mode_dr, uint8_t* cpu_txlpf_test_mode, uint8_t* cpu_rxlpf_test_mode_dr, uint8_t* cpu_rxlpf_test_mode, uint8_t* tx_dc_cal_en_dr, uint8_t* cpu_tx_dc_cal_en, uint8_t* cpu_txdacbuff_ldo_dr, uint8_t* cpu_txdacbuff_ldo_en, uint8_t* cpu_txbuff_dr, uint8_t* cpu_txbuff_en, uint8_t* cpu_ad2da_loop, uint8_t* cpu_chsel_dr, uint8_t* cpu_dac_chsel, uint8_t* cpu_adc_chsel)
{
    T_RF_P0_TEST_MODE_CFG localVal = hwp_rf_p0->test_mode_cfg;

    *cpu_txlpf_test_mode_dr = localVal.bit_field.cpu_txlpf_test_mode_dr;
    *cpu_txlpf_test_mode = localVal.bit_field.cpu_txlpf_test_mode;
    *cpu_rxlpf_test_mode_dr = localVal.bit_field.cpu_rxlpf_test_mode_dr;
    *cpu_rxlpf_test_mode = localVal.bit_field.cpu_rxlpf_test_mode;
    *tx_dc_cal_en_dr = localVal.bit_field.tx_dc_cal_en_dr;
    *cpu_tx_dc_cal_en = localVal.bit_field.cpu_tx_dc_cal_en;
    *cpu_txdacbuff_ldo_dr = localVal.bit_field.cpu_txdacbuff_ldo_dr;
    *cpu_txdacbuff_ldo_en = localVal.bit_field.cpu_txdacbuff_ldo_en;
    *cpu_txbuff_dr = localVal.bit_field.cpu_txbuff_dr;
    *cpu_txbuff_en = localVal.bit_field.cpu_txbuff_en;
    *cpu_ad2da_loop = localVal.bit_field.cpu_ad2da_loop;
    *cpu_chsel_dr = localVal.bit_field.cpu_chsel_dr;
    *cpu_dac_chsel = localVal.bit_field.cpu_dac_chsel;
    *cpu_adc_chsel = localVal.bit_field.cpu_adc_chsel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_test_mode_dr_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_txlpf_test_mode_dr;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_test_mode_dr_setf(uint8_t cpu_txlpf_test_mode_dr)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_txlpf_test_mode_dr = cpu_txlpf_test_mode_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_test_mode_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_txlpf_test_mode;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_test_mode_setf(uint8_t cpu_txlpf_test_mode)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_txlpf_test_mode = cpu_txlpf_test_mode;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_test_mode_dr_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_rxlpf_test_mode_dr;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_test_mode_dr_setf(uint8_t cpu_rxlpf_test_mode_dr)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_rxlpf_test_mode_dr = cpu_rxlpf_test_mode_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_test_mode_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_rxlpf_test_mode;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_test_mode_setf(uint8_t cpu_rxlpf_test_mode)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_rxlpf_test_mode = cpu_rxlpf_test_mode;
}

__STATIC_INLINE uint8_t rf_p0_tx_dc_cal_en_dr_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.tx_dc_cal_en_dr;
}

__STATIC_INLINE void rf_p0_tx_dc_cal_en_dr_setf(uint8_t tx_dc_cal_en_dr)
{
    hwp_rf_p0->test_mode_cfg.bit_field.tx_dc_cal_en_dr = tx_dc_cal_en_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_dc_cal_en_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_tx_dc_cal_en;
}

__STATIC_INLINE void rf_p0_cpu_tx_dc_cal_en_setf(uint8_t cpu_tx_dc_cal_en)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_tx_dc_cal_en = cpu_tx_dc_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdacbuff_ldo_dr_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_txdacbuff_ldo_dr;
}

__STATIC_INLINE void rf_p0_cpu_txdacbuff_ldo_dr_setf(uint8_t cpu_txdacbuff_ldo_dr)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_txdacbuff_ldo_dr = cpu_txdacbuff_ldo_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdacbuff_ldo_en_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_txdacbuff_ldo_en;
}

__STATIC_INLINE void rf_p0_cpu_txdacbuff_ldo_en_setf(uint8_t cpu_txdacbuff_ldo_en)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_txdacbuff_ldo_en = cpu_txdacbuff_ldo_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txbuff_dr_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_txbuff_dr;
}

__STATIC_INLINE void rf_p0_cpu_txbuff_dr_setf(uint8_t cpu_txbuff_dr)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_txbuff_dr = cpu_txbuff_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txbuff_en_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_txbuff_en;
}

__STATIC_INLINE void rf_p0_cpu_txbuff_en_setf(uint8_t cpu_txbuff_en)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_txbuff_en = cpu_txbuff_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_ad2da_loop_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_ad2da_loop;
}

__STATIC_INLINE void rf_p0_cpu_ad2da_loop_setf(uint8_t cpu_ad2da_loop)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_ad2da_loop = cpu_ad2da_loop;
}

__STATIC_INLINE uint8_t rf_p0_cpu_chsel_dr_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_chsel_dr;
}

__STATIC_INLINE void rf_p0_cpu_chsel_dr_setf(uint8_t cpu_chsel_dr)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_chsel_dr = cpu_chsel_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_chsel_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_dac_chsel;
}

__STATIC_INLINE void rf_p0_cpu_dac_chsel_setf(uint8_t cpu_dac_chsel)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_dac_chsel = cpu_dac_chsel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_adc_chsel_getf(void)
{
    return hwp_rf_p0->test_mode_cfg.bit_field.cpu_adc_chsel;
}

__STATIC_INLINE void rf_p0_cpu_adc_chsel_setf(uint8_t cpu_adc_chsel)
{
    hwp_rf_p0->test_mode_cfg.bit_field.cpu_adc_chsel = cpu_adc_chsel;
}

__STATIC_INLINE uint32_t rf_p0_dig_cfg1_get(void)
{
    return hwp_rf_p0->dig_cfg1.val;
}

__STATIC_INLINE void rf_p0_dig_cfg1_set(uint32_t value)
{
    hwp_rf_p0->dig_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_dig_cfg1_pack(uint8_t rmx_pkd_div_sel, uint8_t sys_div_sel, uint8_t cpu_selfcal_rfpll_set, uint8_t rximg_auto_cal_bp, uint8_t rx_auto_cal_bp, uint8_t dpd_rx_auto_cal_bp, uint8_t rxlpf_auto_cal_bp, uint8_t tximg_auto_cal_bp, uint8_t txdac_auto_cal_bp, uint8_t txlpf_auto_cal_bp, uint8_t tmx_auto_cal_bp, uint8_t rco32k_auto_cal_bp, uint8_t rfpll_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.val = (((uint32_t)rmx_pkd_div_sel << 14) | ((uint32_t)sys_div_sel << 12) | ((uint32_t)cpu_selfcal_rfpll_set << 10) | ((uint32_t)rximg_auto_cal_bp << 9) | ((uint32_t)rx_auto_cal_bp << 8) | ((uint32_t)dpd_rx_auto_cal_bp << 7) | ((uint32_t)rxlpf_auto_cal_bp << 6) | ((uint32_t)tximg_auto_cal_bp << 5) | ((uint32_t)txdac_auto_cal_bp << 4) | ((uint32_t)txlpf_auto_cal_bp << 3) | ((uint32_t)tmx_auto_cal_bp << 2) | ((uint32_t)rco32k_auto_cal_bp << 1) | ((uint32_t)rfpll_auto_cal_bp << 0));
}

__STATIC_INLINE void rf_p0_dig_cfg1_unpack(uint8_t* rmx_pkd_div_sel, uint8_t* sys_div_sel, uint8_t* cpu_selfcal_rfpll_set, uint8_t* rximg_auto_cal_bp, uint8_t* rx_auto_cal_bp, uint8_t* dpd_rx_auto_cal_bp, uint8_t* rxlpf_auto_cal_bp, uint8_t* tximg_auto_cal_bp, uint8_t* txdac_auto_cal_bp, uint8_t* txlpf_auto_cal_bp, uint8_t* tmx_auto_cal_bp, uint8_t* rco32k_auto_cal_bp, uint8_t* rfpll_auto_cal_bp)
{
    T_RF_P0_DIG_CFG1 localVal = hwp_rf_p0->dig_cfg1;

    *rmx_pkd_div_sel = localVal.bit_field.rmx_pkd_div_sel;
    *sys_div_sel = localVal.bit_field.sys_div_sel;
    *cpu_selfcal_rfpll_set = localVal.bit_field.cpu_selfcal_rfpll_set;
    *rximg_auto_cal_bp = localVal.bit_field.rximg_auto_cal_bp;
    *rx_auto_cal_bp = localVal.bit_field.rx_auto_cal_bp;
    *dpd_rx_auto_cal_bp = localVal.bit_field.dpd_rx_auto_cal_bp;
    *rxlpf_auto_cal_bp = localVal.bit_field.rxlpf_auto_cal_bp;
    *tximg_auto_cal_bp = localVal.bit_field.tximg_auto_cal_bp;
    *txdac_auto_cal_bp = localVal.bit_field.txdac_auto_cal_bp;
    *txlpf_auto_cal_bp = localVal.bit_field.txlpf_auto_cal_bp;
    *tmx_auto_cal_bp = localVal.bit_field.tmx_auto_cal_bp;
    *rco32k_auto_cal_bp = localVal.bit_field.rco32k_auto_cal_bp;
    *rfpll_auto_cal_bp = localVal.bit_field.rfpll_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_rmx_pkd_div_sel_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.rmx_pkd_div_sel;
}

__STATIC_INLINE void rf_p0_rmx_pkd_div_sel_setf(uint8_t rmx_pkd_div_sel)
{
    hwp_rf_p0->dig_cfg1.bit_field.rmx_pkd_div_sel = rmx_pkd_div_sel;
}

__STATIC_INLINE uint8_t rf_p0_sys_div_sel_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.sys_div_sel;
}

__STATIC_INLINE void rf_p0_sys_div_sel_setf(uint8_t sys_div_sel)
{
    hwp_rf_p0->dig_cfg1.bit_field.sys_div_sel = sys_div_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_selfcal_rfpll_set_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.cpu_selfcal_rfpll_set;
}

__STATIC_INLINE void rf_p0_cpu_selfcal_rfpll_set_setf(uint8_t cpu_selfcal_rfpll_set)
{
    hwp_rf_p0->dig_cfg1.bit_field.cpu_selfcal_rfpll_set = cpu_selfcal_rfpll_set;
}

__STATIC_INLINE uint8_t rf_p0_rximg_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.rximg_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_rximg_auto_cal_bp_setf(uint8_t rximg_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.rximg_auto_cal_bp = rximg_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_rx_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.rx_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_rx_auto_cal_bp_setf(uint8_t rx_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.rx_auto_cal_bp = rx_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_dpd_rx_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.dpd_rx_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_dpd_rx_auto_cal_bp_setf(uint8_t dpd_rx_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.dpd_rx_auto_cal_bp = dpd_rx_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.rxlpf_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_rxlpf_auto_cal_bp_setf(uint8_t rxlpf_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.rxlpf_auto_cal_bp = rxlpf_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_tximg_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.tximg_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_tximg_auto_cal_bp_setf(uint8_t tximg_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.tximg_auto_cal_bp = tximg_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_txdac_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.txdac_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_txdac_auto_cal_bp_setf(uint8_t txdac_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.txdac_auto_cal_bp = txdac_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.txlpf_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_txlpf_auto_cal_bp_setf(uint8_t txlpf_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.txlpf_auto_cal_bp = txlpf_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_tmx_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.tmx_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_tmx_auto_cal_bp_setf(uint8_t tmx_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.tmx_auto_cal_bp = tmx_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_rco32k_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.rco32k_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_rco32k_auto_cal_bp_setf(uint8_t rco32k_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.rco32k_auto_cal_bp = rco32k_auto_cal_bp;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_auto_cal_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg1.bit_field.rfpll_auto_cal_bp;
}

__STATIC_INLINE void rf_p0_rfpll_auto_cal_bp_setf(uint8_t rfpll_auto_cal_bp)
{
    hwp_rf_p0->dig_cfg1.bit_field.rfpll_auto_cal_bp = rfpll_auto_cal_bp;
}

__STATIC_INLINE uint32_t rf_p0_dig_cfg2_get(void)
{
    return hwp_rf_p0->dig_cfg2.val;
}

__STATIC_INLINE void rf_p0_dig_cfg2_set(uint32_t value)
{
    hwp_rf_p0->dig_cfg2.val = value;
}

__STATIC_INLINE void rf_p0_dig_cfg2_pack(uint8_t cpu_11bgn_ind_dr, uint8_t cpu_11bgn_ind, uint8_t cpu_pa_en_sel, uint8_t cpu_rf_en_dr, uint8_t cpu_rf_en, uint8_t cpu_rx_en_dr, uint8_t cpu_rx_en, uint8_t cpu_tx_en_dr, uint8_t cpu_tx_en, uint8_t cpu_cal_en_dr, uint8_t cpu_cal_en, uint8_t cpu_tmode_dr, uint8_t cpu_tmode)
{
    hwp_rf_p0->dig_cfg2.val = (((uint32_t)cpu_11bgn_ind_dr << 14) | ((uint32_t)cpu_11bgn_ind << 12) | ((uint32_t)cpu_pa_en_sel << 11) | ((uint32_t)cpu_rf_en_dr << 10) | ((uint32_t)cpu_rf_en << 9) | ((uint32_t)cpu_rx_en_dr << 8) | ((uint32_t)cpu_rx_en << 7) | ((uint32_t)cpu_tx_en_dr << 6) | ((uint32_t)cpu_tx_en << 5) | ((uint32_t)cpu_cal_en_dr << 4) | ((uint32_t)cpu_cal_en << 3) | ((uint32_t)cpu_tmode_dr << 2) | ((uint32_t)cpu_tmode << 0));
}

__STATIC_INLINE void rf_p0_dig_cfg2_unpack(uint8_t* cpu_11bgn_ind_dr, uint8_t* cpu_11bgn_ind, uint8_t* cpu_pa_en_sel, uint8_t* cpu_rf_en_dr, uint8_t* cpu_rf_en, uint8_t* cpu_rx_en_dr, uint8_t* cpu_rx_en, uint8_t* cpu_tx_en_dr, uint8_t* cpu_tx_en, uint8_t* cpu_cal_en_dr, uint8_t* cpu_cal_en, uint8_t* cpu_tmode_dr, uint8_t* cpu_tmode)
{
    T_RF_P0_DIG_CFG2 localVal = hwp_rf_p0->dig_cfg2;

    *cpu_11bgn_ind_dr = localVal.bit_field.cpu_11bgn_ind_dr;
    *cpu_11bgn_ind = localVal.bit_field.cpu_11bgn_ind;
    *cpu_pa_en_sel = localVal.bit_field.cpu_pa_en_sel;
    *cpu_rf_en_dr = localVal.bit_field.cpu_rf_en_dr;
    *cpu_rf_en = localVal.bit_field.cpu_rf_en;
    *cpu_rx_en_dr = localVal.bit_field.cpu_rx_en_dr;
    *cpu_rx_en = localVal.bit_field.cpu_rx_en;
    *cpu_tx_en_dr = localVal.bit_field.cpu_tx_en_dr;
    *cpu_tx_en = localVal.bit_field.cpu_tx_en;
    *cpu_cal_en_dr = localVal.bit_field.cpu_cal_en_dr;
    *cpu_cal_en = localVal.bit_field.cpu_cal_en;
    *cpu_tmode_dr = localVal.bit_field.cpu_tmode_dr;
    *cpu_tmode = localVal.bit_field.cpu_tmode;
}

__STATIC_INLINE uint8_t rf_p0_cpu_11bgn_ind_dr_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_11bgn_ind_dr;
}

__STATIC_INLINE void rf_p0_cpu_11bgn_ind_dr_setf(uint8_t cpu_11bgn_ind_dr)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_11bgn_ind_dr = cpu_11bgn_ind_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_11bgn_ind_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_11bgn_ind;
}

__STATIC_INLINE void rf_p0_cpu_11bgn_ind_setf(uint8_t cpu_11bgn_ind)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_11bgn_ind = cpu_11bgn_ind;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_en_sel_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_pa_en_sel;
}

__STATIC_INLINE void rf_p0_cpu_pa_en_sel_setf(uint8_t cpu_pa_en_sel)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_pa_en_sel = cpu_pa_en_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rf_en_dr_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_rf_en_dr;
}

__STATIC_INLINE void rf_p0_cpu_rf_en_dr_setf(uint8_t cpu_rf_en_dr)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_rf_en_dr = cpu_rf_en_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rf_en_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_rf_en;
}

__STATIC_INLINE void rf_p0_cpu_rf_en_setf(uint8_t cpu_rf_en)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_rf_en = cpu_rf_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_en_dr_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_rx_en_dr;
}

__STATIC_INLINE void rf_p0_cpu_rx_en_dr_setf(uint8_t cpu_rx_en_dr)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_rx_en_dr = cpu_rx_en_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_en_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_rx_en;
}

__STATIC_INLINE void rf_p0_cpu_rx_en_setf(uint8_t cpu_rx_en)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_rx_en = cpu_rx_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_en_dr_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_tx_en_dr;
}

__STATIC_INLINE void rf_p0_cpu_tx_en_dr_setf(uint8_t cpu_tx_en_dr)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_tx_en_dr = cpu_tx_en_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_en_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_tx_en;
}

__STATIC_INLINE void rf_p0_cpu_tx_en_setf(uint8_t cpu_tx_en)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_tx_en = cpu_tx_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_en_dr_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_cal_en_dr;
}

__STATIC_INLINE void rf_p0_cpu_cal_en_dr_setf(uint8_t cpu_cal_en_dr)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_cal_en_dr = cpu_cal_en_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_en_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_cal_en;
}

__STATIC_INLINE void rf_p0_cpu_cal_en_setf(uint8_t cpu_cal_en)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_cal_en = cpu_cal_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmode_dr_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_tmode_dr;
}

__STATIC_INLINE void rf_p0_cpu_tmode_dr_setf(uint8_t cpu_tmode_dr)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_tmode_dr = cpu_tmode_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmode_getf(void)
{
    return hwp_rf_p0->dig_cfg2.bit_field.cpu_tmode;
}

__STATIC_INLINE void rf_p0_cpu_tmode_setf(uint8_t cpu_tmode)
{
    hwp_rf_p0->dig_cfg2.bit_field.cpu_tmode = cpu_tmode;
}

__STATIC_INLINE uint32_t rf_p0_pa_dly_cfg_get(void)
{
    return hwp_rf_p0->pa_dly_cfg.val;
}

__STATIC_INLINE void rf_p0_pa_dly_cfg_set(uint32_t value)
{
    hwp_rf_p0->pa_dly_cfg.val = value;
}

__STATIC_INLINE void rf_p0_pa_dly_cfg_pack(uint8_t cpu_pa_ramp_time, uint8_t cpu_pa_ramp_delay_cnt, uint8_t cpu_pa_ramp_dr, uint8_t cpu_pa_delay_cnt, uint8_t cpu_pa_delay_en)
{
    hwp_rf_p0->pa_dly_cfg.val = (((uint32_t)cpu_pa_ramp_time << 14) | ((uint32_t)cpu_pa_ramp_delay_cnt << 8) | ((uint32_t)cpu_pa_ramp_dr << 7) | ((uint32_t)cpu_pa_delay_cnt << 1) | ((uint32_t)cpu_pa_delay_en << 0));
}

__STATIC_INLINE void rf_p0_pa_dly_cfg_unpack(uint8_t* cpu_pa_ramp_time, uint8_t* cpu_pa_ramp_delay_cnt, uint8_t* cpu_pa_ramp_dr, uint8_t* cpu_pa_delay_cnt, uint8_t* cpu_pa_delay_en)
{
    T_RF_P0_PA_DLY_CFG localVal = hwp_rf_p0->pa_dly_cfg;

    *cpu_pa_ramp_time = localVal.bit_field.cpu_pa_ramp_time;
    *cpu_pa_ramp_delay_cnt = localVal.bit_field.cpu_pa_ramp_delay_cnt;
    *cpu_pa_ramp_dr = localVal.bit_field.cpu_pa_ramp_dr;
    *cpu_pa_delay_cnt = localVal.bit_field.cpu_pa_delay_cnt;
    *cpu_pa_delay_en = localVal.bit_field.cpu_pa_delay_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_ramp_time_getf(void)
{
    return hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_ramp_time;
}

__STATIC_INLINE void rf_p0_cpu_pa_ramp_time_setf(uint8_t cpu_pa_ramp_time)
{
    hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_ramp_time = cpu_pa_ramp_time;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_ramp_delay_cnt_getf(void)
{
    return hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_ramp_delay_cnt;
}

__STATIC_INLINE void rf_p0_cpu_pa_ramp_delay_cnt_setf(uint8_t cpu_pa_ramp_delay_cnt)
{
    hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_ramp_delay_cnt = cpu_pa_ramp_delay_cnt;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_ramp_dr_getf(void)
{
    return hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_ramp_dr;
}

__STATIC_INLINE void rf_p0_cpu_pa_ramp_dr_setf(uint8_t cpu_pa_ramp_dr)
{
    hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_ramp_dr = cpu_pa_ramp_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_delay_cnt_getf(void)
{
    return hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_delay_cnt;
}

__STATIC_INLINE void rf_p0_cpu_pa_delay_cnt_setf(uint8_t cpu_pa_delay_cnt)
{
    hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_delay_cnt = cpu_pa_delay_cnt;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_delay_en_getf(void)
{
    return hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_delay_en;
}

__STATIC_INLINE void rf_p0_cpu_pa_delay_en_setf(uint8_t cpu_pa_delay_en)
{
    hwp_rf_p0->pa_dly_cfg.bit_field.cpu_pa_delay_en = cpu_pa_delay_en;
}

__STATIC_INLINE uint32_t rf_p0_dig_cfg3_get(void)
{
    return hwp_rf_p0->dig_cfg3.val;
}

__STATIC_INLINE void rf_p0_dig_cfg3_set(uint32_t value)
{
    hwp_rf_p0->dig_cfg3.val = value;
}

__STATIC_INLINE void rf_p0_dig_cfg3_pack(uint8_t cpu_dac_en_dly_bp, uint8_t cpu_dac_en_dly, uint8_t cpu_adc_en_dly_bp, uint8_t cpu_adc_en_dly)
{
    hwp_rf_p0->dig_cfg3.val = (((uint32_t)cpu_dac_en_dly_bp << 15) | ((uint32_t)cpu_dac_en_dly << 8) | ((uint32_t)cpu_adc_en_dly_bp << 7) | ((uint32_t)cpu_adc_en_dly << 0));
}

__STATIC_INLINE void rf_p0_dig_cfg3_unpack(uint8_t* cpu_dac_en_dly_bp, uint8_t* cpu_dac_en_dly, uint8_t* cpu_adc_en_dly_bp, uint8_t* cpu_adc_en_dly)
{
    T_RF_P0_DIG_CFG3 localVal = hwp_rf_p0->dig_cfg3;

    *cpu_dac_en_dly_bp = localVal.bit_field.cpu_dac_en_dly_bp;
    *cpu_dac_en_dly = localVal.bit_field.cpu_dac_en_dly;
    *cpu_adc_en_dly_bp = localVal.bit_field.cpu_adc_en_dly_bp;
    *cpu_adc_en_dly = localVal.bit_field.cpu_adc_en_dly;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_en_dly_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg3.bit_field.cpu_dac_en_dly_bp;
}

__STATIC_INLINE void rf_p0_cpu_dac_en_dly_bp_setf(uint8_t cpu_dac_en_dly_bp)
{
    hwp_rf_p0->dig_cfg3.bit_field.cpu_dac_en_dly_bp = cpu_dac_en_dly_bp;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_en_dly_getf(void)
{
    return hwp_rf_p0->dig_cfg3.bit_field.cpu_dac_en_dly;
}

__STATIC_INLINE void rf_p0_cpu_dac_en_dly_setf(uint8_t cpu_dac_en_dly)
{
    hwp_rf_p0->dig_cfg3.bit_field.cpu_dac_en_dly = cpu_dac_en_dly;
}

__STATIC_INLINE uint8_t rf_p0_cpu_adc_en_dly_bp_getf(void)
{
    return hwp_rf_p0->dig_cfg3.bit_field.cpu_adc_en_dly_bp;
}

__STATIC_INLINE void rf_p0_cpu_adc_en_dly_bp_setf(uint8_t cpu_adc_en_dly_bp)
{
    hwp_rf_p0->dig_cfg3.bit_field.cpu_adc_en_dly_bp = cpu_adc_en_dly_bp;
}

__STATIC_INLINE uint8_t rf_p0_cpu_adc_en_dly_getf(void)
{
    return hwp_rf_p0->dig_cfg3.bit_field.cpu_adc_en_dly;
}

__STATIC_INLINE void rf_p0_cpu_adc_en_dly_setf(uint8_t cpu_adc_en_dly)
{
    hwp_rf_p0->dig_cfg3.bit_field.cpu_adc_en_dly = cpu_adc_en_dly;
}

__STATIC_INLINE uint32_t rf_p0_dac_sin_cfg_get(void)
{
    return hwp_rf_p0->dac_sin_cfg.val;
}

__STATIC_INLINE void rf_p0_dac_sin_cfg_set(uint32_t value)
{
    hwp_rf_p0->dac_sin_cfg.val = value;
}

__STATIC_INLINE void rf_p0_dac_sin_cfg_pack(uint8_t cpu_txdac_dc_add, uint8_t cpu_dac_fifo_off, uint8_t cpu_dac_fifo_wr_addr, uint8_t cpu_adc_fifo_off, uint8_t cpu_adc_fifo_wr_addr, uint8_t cpu_dac_sawtooth_en, uint8_t cpu_dac_sin_amp_sel, uint8_t cpu_dac_sin_freq_sel, uint8_t cpu_dac_sin_en)
{
    hwp_rf_p0->dac_sin_cfg.val = (((uint32_t)cpu_txdac_dc_add << 14) | ((uint32_t)cpu_dac_fifo_off << 13) | ((uint32_t)cpu_dac_fifo_wr_addr << 10) | ((uint32_t)cpu_adc_fifo_off << 9) | ((uint32_t)cpu_adc_fifo_wr_addr << 6) | ((uint32_t)cpu_dac_sawtooth_en << 5) | ((uint32_t)cpu_dac_sin_amp_sel << 3) | ((uint32_t)cpu_dac_sin_freq_sel << 1) | ((uint32_t)cpu_dac_sin_en << 0));
}

__STATIC_INLINE void rf_p0_dac_sin_cfg_unpack(uint8_t* cpu_txdac_dc_add, uint8_t* cpu_dac_fifo_off, uint8_t* cpu_dac_fifo_wr_addr, uint8_t* cpu_adc_fifo_off, uint8_t* cpu_adc_fifo_wr_addr, uint8_t* cpu_dac_sawtooth_en, uint8_t* cpu_dac_sin_amp_sel, uint8_t* cpu_dac_sin_freq_sel, uint8_t* cpu_dac_sin_en)
{
    T_RF_P0_DAC_SIN_CFG localVal = hwp_rf_p0->dac_sin_cfg;

    *cpu_txdac_dc_add = localVal.bit_field.cpu_txdac_dc_add;
    *cpu_dac_fifo_off = localVal.bit_field.cpu_dac_fifo_off;
    *cpu_dac_fifo_wr_addr = localVal.bit_field.cpu_dac_fifo_wr_addr;
    *cpu_adc_fifo_off = localVal.bit_field.cpu_adc_fifo_off;
    *cpu_adc_fifo_wr_addr = localVal.bit_field.cpu_adc_fifo_wr_addr;
    *cpu_dac_sawtooth_en = localVal.bit_field.cpu_dac_sawtooth_en;
    *cpu_dac_sin_amp_sel = localVal.bit_field.cpu_dac_sin_amp_sel;
    *cpu_dac_sin_freq_sel = localVal.bit_field.cpu_dac_sin_freq_sel;
    *cpu_dac_sin_en = localVal.bit_field.cpu_dac_sin_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_dc_add_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_txdac_dc_add;
}

__STATIC_INLINE void rf_p0_cpu_txdac_dc_add_setf(uint8_t cpu_txdac_dc_add)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_txdac_dc_add = cpu_txdac_dc_add;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_fifo_off_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_fifo_off;
}

__STATIC_INLINE void rf_p0_cpu_dac_fifo_off_setf(uint8_t cpu_dac_fifo_off)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_fifo_off = cpu_dac_fifo_off;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_fifo_wr_addr_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_fifo_wr_addr;
}

__STATIC_INLINE void rf_p0_cpu_dac_fifo_wr_addr_setf(uint8_t cpu_dac_fifo_wr_addr)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_fifo_wr_addr = cpu_dac_fifo_wr_addr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_adc_fifo_off_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_adc_fifo_off;
}

__STATIC_INLINE void rf_p0_cpu_adc_fifo_off_setf(uint8_t cpu_adc_fifo_off)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_adc_fifo_off = cpu_adc_fifo_off;
}

__STATIC_INLINE uint8_t rf_p0_cpu_adc_fifo_wr_addr_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_adc_fifo_wr_addr;
}

__STATIC_INLINE void rf_p0_cpu_adc_fifo_wr_addr_setf(uint8_t cpu_adc_fifo_wr_addr)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_adc_fifo_wr_addr = cpu_adc_fifo_wr_addr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_sawtooth_en_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_sawtooth_en;
}

__STATIC_INLINE void rf_p0_cpu_dac_sawtooth_en_setf(uint8_t cpu_dac_sawtooth_en)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_sawtooth_en = cpu_dac_sawtooth_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_sin_amp_sel_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_sin_amp_sel;
}

__STATIC_INLINE void rf_p0_cpu_dac_sin_amp_sel_setf(uint8_t cpu_dac_sin_amp_sel)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_sin_amp_sel = cpu_dac_sin_amp_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_sin_freq_sel_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_sin_freq_sel;
}

__STATIC_INLINE void rf_p0_cpu_dac_sin_freq_sel_setf(uint8_t cpu_dac_sin_freq_sel)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_sin_freq_sel = cpu_dac_sin_freq_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_sin_en_getf(void)
{
    return hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_sin_en;
}

__STATIC_INLINE void rf_p0_cpu_dac_sin_en_setf(uint8_t cpu_dac_sin_en)
{
    hwp_rf_p0->dac_sin_cfg.bit_field.cpu_dac_sin_en = cpu_dac_sin_en;
}

__STATIC_INLINE uint32_t rf_p0_dig_cfg4_get(void)
{
    return hwp_rf_p0->dig_cfg4.val;
}

__STATIC_INLINE void rf_p0_dig_cfg4_set(uint32_t value)
{
    hwp_rf_p0->dig_cfg4.val = value;
}

__STATIC_INLINE void rf_p0_dig_cfg4_pack(uint8_t cpu_rfpll_lock_rst_sel, uint8_t cpu_dac_clk_inv, uint8_t cpu_dac_clk_sel, uint8_t cpu_rfpll_freq_num, uint8_t cpu_rfpll_freq_num_dr)
{
    hwp_rf_p0->dig_cfg4.val = (((uint32_t)cpu_rfpll_lock_rst_sel << 8) | ((uint32_t)cpu_dac_clk_inv << 7) | ((uint32_t)cpu_dac_clk_sel << 6) | ((uint32_t)cpu_rfpll_freq_num << 1) | ((uint32_t)cpu_rfpll_freq_num_dr << 0));
}

__STATIC_INLINE void rf_p0_dig_cfg4_unpack(uint8_t* cpu_rfpll_lock_rst_sel, uint8_t* cpu_dac_clk_inv, uint8_t* cpu_dac_clk_sel, uint8_t* cpu_rfpll_freq_num, uint8_t* cpu_rfpll_freq_num_dr)
{
    T_RF_P0_DIG_CFG4 localVal = hwp_rf_p0->dig_cfg4;

    *cpu_rfpll_lock_rst_sel = localVal.bit_field.cpu_rfpll_lock_rst_sel;
    *cpu_dac_clk_inv = localVal.bit_field.cpu_dac_clk_inv;
    *cpu_dac_clk_sel = localVal.bit_field.cpu_dac_clk_sel;
    *cpu_rfpll_freq_num = localVal.bit_field.cpu_rfpll_freq_num;
    *cpu_rfpll_freq_num_dr = localVal.bit_field.cpu_rfpll_freq_num_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_lock_rst_sel_getf(void)
{
    return hwp_rf_p0->dig_cfg4.bit_field.cpu_rfpll_lock_rst_sel;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_lock_rst_sel_setf(uint8_t cpu_rfpll_lock_rst_sel)
{
    hwp_rf_p0->dig_cfg4.bit_field.cpu_rfpll_lock_rst_sel = cpu_rfpll_lock_rst_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_clk_inv_getf(void)
{
    return hwp_rf_p0->dig_cfg4.bit_field.cpu_dac_clk_inv;
}

__STATIC_INLINE void rf_p0_cpu_dac_clk_inv_setf(uint8_t cpu_dac_clk_inv)
{
    hwp_rf_p0->dig_cfg4.bit_field.cpu_dac_clk_inv = cpu_dac_clk_inv;
}

__STATIC_INLINE uint8_t rf_p0_cpu_dac_clk_sel_getf(void)
{
    return hwp_rf_p0->dig_cfg4.bit_field.cpu_dac_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_dac_clk_sel_setf(uint8_t cpu_dac_clk_sel)
{
    hwp_rf_p0->dig_cfg4.bit_field.cpu_dac_clk_sel = cpu_dac_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_freq_num_getf(void)
{
    return hwp_rf_p0->dig_cfg4.bit_field.cpu_rfpll_freq_num;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_freq_num_setf(uint8_t cpu_rfpll_freq_num)
{
    hwp_rf_p0->dig_cfg4.bit_field.cpu_rfpll_freq_num = cpu_rfpll_freq_num;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_freq_num_dr_getf(void)
{
    return hwp_rf_p0->dig_cfg4.bit_field.cpu_rfpll_freq_num_dr;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_freq_num_dr_setf(uint8_t cpu_rfpll_freq_num_dr)
{
    hwp_rf_p0->dig_cfg4.bit_field.cpu_rfpll_freq_num_dr = cpu_rfpll_freq_num_dr;
}

__STATIC_INLINE uint32_t rf_p0_dig_sw_rst_get(void)
{
    return hwp_rf_p0->dig_sw_rst.val;
}

__STATIC_INLINE void rf_p0_dig_sw_rst_set(uint32_t value)
{
    hwp_rf_p0->dig_sw_rst.val = value;
}

__STATIC_INLINE void rf_p0_dig_sw_rst_pack(uint8_t dac_auto_rst, uint8_t adc_auto_rst, uint8_t cpu_auto_cal_clr, uint8_t sleep_cnt_rst, uint8_t rctune_rst, uint8_t intf_ctrl_rst, uint8_t auto_cal_rst, uint8_t dig_sw_rst)
{
    hwp_rf_p0->dig_sw_rst.val = (((uint32_t)dac_auto_rst << 8) | ((uint32_t)adc_auto_rst << 7) | ((uint32_t)cpu_auto_cal_clr << 6) | ((uint32_t)sleep_cnt_rst << 5) | ((uint32_t)rctune_rst << 4) | ((uint32_t)intf_ctrl_rst << 2) | ((uint32_t)auto_cal_rst << 1) | ((uint32_t)dig_sw_rst << 0));
}

__STATIC_INLINE void rf_p0_dig_sw_rst_unpack(uint8_t* dac_auto_rst, uint8_t* adc_auto_rst, uint8_t* cpu_auto_cal_clr, uint8_t* sleep_cnt_rst, uint8_t* rctune_rst, uint8_t* intf_ctrl_rst, uint8_t* auto_cal_rst, uint8_t* dig_sw_rst)
{
    T_RF_P0_DIG_SW_RST localVal = hwp_rf_p0->dig_sw_rst;

    *dac_auto_rst = localVal.bit_field.dac_auto_rst;
    *adc_auto_rst = localVal.bit_field.adc_auto_rst;
    *cpu_auto_cal_clr = localVal.bit_field.cpu_auto_cal_clr;
    *sleep_cnt_rst = localVal.bit_field.sleep_cnt_rst;
    *rctune_rst = localVal.bit_field.rctune_rst;
    *intf_ctrl_rst = localVal.bit_field.intf_ctrl_rst;
    *auto_cal_rst = localVal.bit_field.auto_cal_rst;
    *dig_sw_rst = localVal.bit_field.dig_sw_rst;
}

__STATIC_INLINE uint8_t rf_p0_dac_auto_rst_getf(void)
{
    return hwp_rf_p0->dig_sw_rst.bit_field.dac_auto_rst;
}

__STATIC_INLINE void rf_p0_dac_auto_rst_setf(uint8_t dac_auto_rst)
{
    hwp_rf_p0->dig_sw_rst.bit_field.dac_auto_rst = dac_auto_rst;
}

__STATIC_INLINE uint8_t rf_p0_adc_auto_rst_getf(void)
{
    return hwp_rf_p0->dig_sw_rst.bit_field.adc_auto_rst;
}

__STATIC_INLINE void rf_p0_adc_auto_rst_setf(uint8_t adc_auto_rst)
{
    hwp_rf_p0->dig_sw_rst.bit_field.adc_auto_rst = adc_auto_rst;
}

__STATIC_INLINE uint8_t rf_p0_cpu_auto_cal_clr_getf(void)
{
    return hwp_rf_p0->dig_sw_rst.bit_field.cpu_auto_cal_clr;
}

__STATIC_INLINE void rf_p0_cpu_auto_cal_clr_setf(uint8_t cpu_auto_cal_clr)
{
    hwp_rf_p0->dig_sw_rst.bit_field.cpu_auto_cal_clr = cpu_auto_cal_clr;
}

__STATIC_INLINE uint8_t rf_p0_sleep_cnt_rst_getf(void)
{
    return hwp_rf_p0->dig_sw_rst.bit_field.sleep_cnt_rst;
}

__STATIC_INLINE void rf_p0_sleep_cnt_rst_setf(uint8_t sleep_cnt_rst)
{
    hwp_rf_p0->dig_sw_rst.bit_field.sleep_cnt_rst = sleep_cnt_rst;
}

__STATIC_INLINE uint8_t rf_p0_rctune_rst_getf(void)
{
    return hwp_rf_p0->dig_sw_rst.bit_field.rctune_rst;
}

__STATIC_INLINE void rf_p0_rctune_rst_setf(uint8_t rctune_rst)
{
    hwp_rf_p0->dig_sw_rst.bit_field.rctune_rst = rctune_rst;
}

__STATIC_INLINE uint8_t rf_p0_intf_ctrl_rst_getf(void)
{
    return hwp_rf_p0->dig_sw_rst.bit_field.intf_ctrl_rst;
}

__STATIC_INLINE void rf_p0_intf_ctrl_rst_setf(uint8_t intf_ctrl_rst)
{
    hwp_rf_p0->dig_sw_rst.bit_field.intf_ctrl_rst = intf_ctrl_rst;
}

__STATIC_INLINE uint8_t rf_p0_auto_cal_rst_getf(void)
{
    return hwp_rf_p0->dig_sw_rst.bit_field.auto_cal_rst;
}

__STATIC_INLINE void rf_p0_auto_cal_rst_setf(uint8_t auto_cal_rst)
{
    hwp_rf_p0->dig_sw_rst.bit_field.auto_cal_rst = auto_cal_rst;
}

__STATIC_INLINE uint8_t rf_p0_dig_sw_rst_getf(void)
{
    return hwp_rf_p0->dig_sw_rst.bit_field.dig_sw_rst;
}

__STATIC_INLINE void rf_p0_dig_sw_rst_setf(uint8_t dig_sw_rst)
{
    hwp_rf_p0->dig_sw_rst.bit_field.dig_sw_rst = dig_sw_rst;
}

__STATIC_INLINE uint32_t rf_p0_rx_gain_rpt_get(void)
{
    return hwp_rf_p0->rx_gain_rpt.val;
}

__STATIC_INLINE void rf_p0_rx_gain_rpt_unpack(uint8_t* lna_tune_rpt, uint8_t* lna_gain_rpt, uint8_t* rmx_gain_rpt, uint8_t* rxlpf_gain_rpt)
{
    T_RF_P0_RX_GAIN_RPT localVal = hwp_rf_p0->rx_gain_rpt;

    *lna_tune_rpt = localVal.bit_field.lna_tune_rpt;
    *lna_gain_rpt = localVal.bit_field.lna_gain_rpt;
    *rmx_gain_rpt = localVal.bit_field.rmx_gain_rpt;
    *rxlpf_gain_rpt = localVal.bit_field.rxlpf_gain_rpt;
}

__STATIC_INLINE uint8_t rf_p0_lna_tune_rpt_getf(void)
{
    return hwp_rf_p0->rx_gain_rpt.bit_field.lna_tune_rpt;
}

__STATIC_INLINE uint8_t rf_p0_lna_gain_rpt_getf(void)
{
    return hwp_rf_p0->rx_gain_rpt.bit_field.lna_gain_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rmx_gain_rpt_getf(void)
{
    return hwp_rf_p0->rx_gain_rpt.bit_field.rmx_gain_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_gain_rpt_getf(void)
{
    return hwp_rf_p0->rx_gain_rpt.bit_field.rxlpf_gain_rpt;
}

__STATIC_INLINE uint32_t rf_p0_tx_gain_rpt_get(void)
{
    return hwp_rf_p0->tx_gain_rpt.val;
}

__STATIC_INLINE void rf_p0_tx_gain_rpt_unpack(uint8_t* txlpf_gain_rpt, uint8_t* tmx_gain_rpt, uint8_t* pa_ibase_rpt, uint8_t* pa_da_gain_rpt, uint8_t* pa_gain_rpt)
{
    T_RF_P0_TX_GAIN_RPT localVal = hwp_rf_p0->tx_gain_rpt;

    *txlpf_gain_rpt = localVal.bit_field.txlpf_gain_rpt;
    *tmx_gain_rpt = localVal.bit_field.tmx_gain_rpt;
    *pa_ibase_rpt = localVal.bit_field.pa_ibase_rpt;
    *pa_da_gain_rpt = localVal.bit_field.pa_da_gain_rpt;
    *pa_gain_rpt = localVal.bit_field.pa_gain_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_gain_rpt_getf(void)
{
    return hwp_rf_p0->tx_gain_rpt.bit_field.txlpf_gain_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tmx_gain_rpt_getf(void)
{
    return hwp_rf_p0->tx_gain_rpt.bit_field.tmx_gain_rpt;
}

__STATIC_INLINE uint8_t rf_p0_pa_ibase_rpt_getf(void)
{
    return hwp_rf_p0->tx_gain_rpt.bit_field.pa_ibase_rpt;
}

__STATIC_INLINE uint8_t rf_p0_pa_da_gain_rpt_getf(void)
{
    return hwp_rf_p0->tx_gain_rpt.bit_field.pa_da_gain_rpt;
}

__STATIC_INLINE uint8_t rf_p0_pa_gain_rpt_getf(void)
{
    return hwp_rf_p0->tx_gain_rpt.bit_field.pa_gain_rpt;
}

__STATIC_INLINE uint32_t rf_p0_pll_corn_en_rpt_get(void)
{
    return hwp_rf_p0->pll_corn_en_rpt.val;
}

__STATIC_INLINE void rf_p0_pll_corn_en_rpt_unpack(uint8_t* rfpll_vco_cb_fine_rpt, uint8_t* rfpll_vco_lower_freq_rpt, uint8_t* rfpll_vco_corn_en_rpt)
{
    T_RF_P0_PLL_CORN_EN_RPT localVal = hwp_rf_p0->pll_corn_en_rpt;

    *rfpll_vco_cb_fine_rpt = localVal.bit_field.rfpll_vco_cb_fine_rpt;
    *rfpll_vco_lower_freq_rpt = localVal.bit_field.rfpll_vco_lower_freq_rpt;
    *rfpll_vco_corn_en_rpt = localVal.bit_field.rfpll_vco_corn_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_cb_fine_rpt_getf(void)
{
    return hwp_rf_p0->pll_corn_en_rpt.bit_field.rfpll_vco_cb_fine_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_lower_freq_rpt_getf(void)
{
    return hwp_rf_p0->pll_corn_en_rpt.bit_field.rfpll_vco_lower_freq_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_corn_en_rpt_getf(void)
{
    return hwp_rf_p0->pll_corn_en_rpt.bit_field.rfpll_vco_corn_en_rpt;
}

__STATIC_INLINE uint32_t rf_p0_pll_cal_value_p_rpt_get(void)
{
    return hwp_rf_p0->pll_cal_value_p_rpt.val;
}

__STATIC_INLINE void rf_p0_pll_cal_value_p_rpt_unpack(uint16_t* rfpll_vco_cbank_p_rpt)
{
    T_RF_P0_PLL_CAL_VALUE_P_RPT localVal = hwp_rf_p0->pll_cal_value_p_rpt;

    *rfpll_vco_cbank_p_rpt = localVal.bit_field.rfpll_vco_cbank_p_rpt;
}

__STATIC_INLINE uint16_t rf_p0_rfpll_vco_cbank_p_rpt_getf(void)
{
    return hwp_rf_p0->pll_cal_value_p_rpt.bit_field.rfpll_vco_cbank_p_rpt;
}

__STATIC_INLINE uint32_t rf_p0_pll_cal_value_n_rpt_get(void)
{
    return hwp_rf_p0->pll_cal_value_n_rpt.val;
}

__STATIC_INLINE void rf_p0_pll_cal_value_n_rpt_unpack(uint16_t* rfpll_vco_cbank_n_rpt)
{
    T_RF_P0_PLL_CAL_VALUE_N_RPT localVal = hwp_rf_p0->pll_cal_value_n_rpt;

    *rfpll_vco_cbank_n_rpt = localVal.bit_field.rfpll_vco_cbank_n_rpt;
}

__STATIC_INLINE uint16_t rf_p0_rfpll_vco_cbank_n_rpt_getf(void)
{
    return hwp_rf_p0->pll_cal_value_n_rpt.bit_field.rfpll_vco_cbank_n_rpt;
}

__STATIC_INLINE uint32_t rf_p0_rco32k_cal_value_rpt_get(void)
{
    return hwp_rf_p0->rco32k_cal_value_rpt.val;
}

__STATIC_INLINE void rf_p0_rco32k_cal_value_rpt_unpack(uint8_t* sleep_rco32k_cbit_rpt, uint8_t* rco32k_cbit_rpt)
{
    T_RF_P0_RCO32K_CAL_VALUE_RPT localVal = hwp_rf_p0->rco32k_cal_value_rpt;

    *sleep_rco32k_cbit_rpt = localVal.bit_field.sleep_rco32k_cbit_rpt;
    *rco32k_cbit_rpt = localVal.bit_field.rco32k_cbit_rpt;
}

__STATIC_INLINE uint8_t rf_p0_sleep_rco32k_cbit_rpt_getf(void)
{
    return hwp_rf_p0->rco32k_cal_value_rpt.bit_field.sleep_rco32k_cbit_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rco32k_cbit_rpt_getf(void)
{
    return hwp_rf_p0->rco32k_cal_value_rpt.bit_field.rco32k_cbit_rpt;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cal_value_rpt_get(void)
{
    return hwp_rf_p0->tmx_cal_value_rpt.val;
}

__STATIC_INLINE void rf_p0_tmx_cal_value_rpt_unpack(uint8_t* cal_tmx_q_rpt, uint8_t* cal_tmx_i_rpt)
{
    T_RF_P0_TMX_CAL_VALUE_RPT localVal = hwp_rf_p0->tmx_cal_value_rpt;

    *cal_tmx_q_rpt = localVal.bit_field.cal_tmx_q_rpt;
    *cal_tmx_i_rpt = localVal.bit_field.cal_tmx_i_rpt;
}

__STATIC_INLINE uint8_t rf_p0_cal_tmx_q_rpt_getf(void)
{
    return hwp_rf_p0->tmx_cal_value_rpt.bit_field.cal_tmx_q_rpt;
}

__STATIC_INLINE uint8_t rf_p0_cal_tmx_i_rpt_getf(void)
{
    return hwp_rf_p0->tmx_cal_value_rpt.bit_field.cal_tmx_i_rpt;
}

__STATIC_INLINE uint32_t rf_p0_txlpf_cal_value_rpt_get(void)
{
    return hwp_rf_p0->txlpf_cal_value_rpt.val;
}

__STATIC_INLINE void rf_p0_txlpf_cal_value_rpt_unpack(uint8_t* txlpf_otrim_q_rpt, uint8_t* txlpf_otrim_i_rpt)
{
    T_RF_P0_TXLPF_CAL_VALUE_RPT localVal = hwp_rf_p0->txlpf_cal_value_rpt;

    *txlpf_otrim_q_rpt = localVal.bit_field.txlpf_otrim_q_rpt;
    *txlpf_otrim_i_rpt = localVal.bit_field.txlpf_otrim_i_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_otrim_q_rpt_getf(void)
{
    return hwp_rf_p0->txlpf_cal_value_rpt.bit_field.txlpf_otrim_q_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_otrim_i_rpt_getf(void)
{
    return hwp_rf_p0->txlpf_cal_value_rpt.bit_field.txlpf_otrim_i_rpt;
}

__STATIC_INLINE uint32_t rf_p0_rmx_cal_value_rpt_get(void)
{
    return hwp_rf_p0->rmx_cal_value_rpt.val;
}

__STATIC_INLINE void rf_p0_rmx_cal_value_rpt_unpack(uint8_t* cal_rmx_q_rpt, uint8_t* cal_rmx_i_rpt)
{
    T_RF_P0_RMX_CAL_VALUE_RPT localVal = hwp_rf_p0->rmx_cal_value_rpt;

    *cal_rmx_q_rpt = localVal.bit_field.cal_rmx_q_rpt;
    *cal_rmx_i_rpt = localVal.bit_field.cal_rmx_i_rpt;
}

__STATIC_INLINE uint8_t rf_p0_cal_rmx_q_rpt_getf(void)
{
    return hwp_rf_p0->rmx_cal_value_rpt.bit_field.cal_rmx_q_rpt;
}

__STATIC_INLINE uint8_t rf_p0_cal_rmx_i_rpt_getf(void)
{
    return hwp_rf_p0->rmx_cal_value_rpt.bit_field.cal_rmx_i_rpt;
}

__STATIC_INLINE uint32_t rf_p0_rxlpf_cal_value_rpt_get(void)
{
    return hwp_rf_p0->rxlpf_cal_value_rpt.val;
}

__STATIC_INLINE void rf_p0_rxlpf_cal_value_rpt_unpack(uint8_t* rxlpf_otrim_q_rpt, uint8_t* rxlpf_otrim_i_rpt)
{
    T_RF_P0_RXLPF_CAL_VALUE_RPT localVal = hwp_rf_p0->rxlpf_cal_value_rpt;

    *rxlpf_otrim_q_rpt = localVal.bit_field.rxlpf_otrim_q_rpt;
    *rxlpf_otrim_i_rpt = localVal.bit_field.rxlpf_otrim_i_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_otrim_q_rpt_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_value_rpt.bit_field.rxlpf_otrim_q_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_otrim_i_rpt_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_value_rpt.bit_field.rxlpf_otrim_i_rpt;
}

__STATIC_INLINE uint32_t rf_p0_tximg_cal_value_rpt_get(void)
{
    return hwp_rf_p0->tximg_cal_value_rpt.val;
}

__STATIC_INLINE void rf_p0_tximg_cal_value_rpt_unpack(uint8_t* cal_tximg_q_rpt, uint8_t* cal_tximg_i_rpt)
{
    T_RF_P0_TXIMG_CAL_VALUE_RPT localVal = hwp_rf_p0->tximg_cal_value_rpt;

    *cal_tximg_q_rpt = localVal.bit_field.cal_tximg_q_rpt;
    *cal_tximg_i_rpt = localVal.bit_field.cal_tximg_i_rpt;
}

__STATIC_INLINE uint8_t rf_p0_cal_tximg_q_rpt_getf(void)
{
    return hwp_rf_p0->tximg_cal_value_rpt.bit_field.cal_tximg_q_rpt;
}

__STATIC_INLINE uint8_t rf_p0_cal_tximg_i_rpt_getf(void)
{
    return hwp_rf_p0->tximg_cal_value_rpt.bit_field.cal_tximg_i_rpt;
}

__STATIC_INLINE uint32_t rf_p0_calout_rpt_get(void)
{
    return hwp_rf_p0->calout_rpt.val;
}

__STATIC_INLINE void rf_p0_calout_rpt_unpack(uint8_t* rmx_pkd_out, uint8_t* tmx_calout_i_rpt, uint8_t* tmx_calout_q_rpt, uint8_t* rxlpf_calout_i_rpt, uint8_t* rxlpf_calout_q_rpt)
{
    T_RF_P0_CALOUT_RPT localVal = hwp_rf_p0->calout_rpt;

    *rmx_pkd_out = localVal.bit_field.rmx_pkd_out;
    *tmx_calout_i_rpt = localVal.bit_field.tmx_calout_i_rpt;
    *tmx_calout_q_rpt = localVal.bit_field.tmx_calout_q_rpt;
    *rxlpf_calout_i_rpt = localVal.bit_field.rxlpf_calout_i_rpt;
    *rxlpf_calout_q_rpt = localVal.bit_field.rxlpf_calout_q_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rmx_pkd_out_getf(void)
{
    return hwp_rf_p0->calout_rpt.bit_field.rmx_pkd_out;
}

__STATIC_INLINE uint8_t rf_p0_tmx_calout_i_rpt_getf(void)
{
    return hwp_rf_p0->calout_rpt.bit_field.tmx_calout_i_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tmx_calout_q_rpt_getf(void)
{
    return hwp_rf_p0->calout_rpt.bit_field.tmx_calout_q_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_calout_i_rpt_getf(void)
{
    return hwp_rf_p0->calout_rpt.bit_field.rxlpf_calout_i_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_calout_q_rpt_getf(void)
{
    return hwp_rf_p0->calout_rpt.bit_field.rxlpf_calout_q_rpt;
}

__STATIC_INLINE uint32_t rf_p0_en_rf_rpt_get(void)
{
    return hwp_rf_p0->en_rf_rpt.val;
}

__STATIC_INLINE void rf_p0_en_rf_rpt_unpack(uint8_t* txdacbuff_ldo_en_rpt, uint8_t* txbuff_en_rpt, uint8_t* rfpll_vco_en_rpt, uint8_t* rfpll_lf_en_rpt, uint8_t* rfpll_presc_en_rpt, uint8_t* rmx_en_rpt, uint8_t* rxlpf_en_rpt, uint8_t* rxadc_en_rpt, uint8_t* lna_en_rpt, uint8_t* txlpf_en_rpt, uint8_t* txdac_en_rpt, uint8_t* pa_en_rpt, uint8_t* tmx_en_rpt)
{
    T_RF_P0_EN_RF_RPT localVal = hwp_rf_p0->en_rf_rpt;

    *txdacbuff_ldo_en_rpt = localVal.bit_field.txdacbuff_ldo_en_rpt;
    *txbuff_en_rpt = localVal.bit_field.txbuff_en_rpt;
    *rfpll_vco_en_rpt = localVal.bit_field.rfpll_vco_en_rpt;
    *rfpll_lf_en_rpt = localVal.bit_field.rfpll_lf_en_rpt;
    *rfpll_presc_en_rpt = localVal.bit_field.rfpll_presc_en_rpt;
    *rmx_en_rpt = localVal.bit_field.rmx_en_rpt;
    *rxlpf_en_rpt = localVal.bit_field.rxlpf_en_rpt;
    *rxadc_en_rpt = localVal.bit_field.rxadc_en_rpt;
    *lna_en_rpt = localVal.bit_field.lna_en_rpt;
    *txlpf_en_rpt = localVal.bit_field.txlpf_en_rpt;
    *txdac_en_rpt = localVal.bit_field.txdac_en_rpt;
    *pa_en_rpt = localVal.bit_field.pa_en_rpt;
    *tmx_en_rpt = localVal.bit_field.tmx_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txdacbuff_ldo_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.txdacbuff_ldo_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txbuff_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.txbuff_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.rfpll_vco_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_lf_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.rfpll_lf_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_presc_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.rfpll_presc_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rmx_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.rmx_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.rxlpf_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxadc_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.rxadc_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_lna_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.lna_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.txlpf_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txdac_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.txdac_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_pa_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.pa_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tmx_en_rpt_getf(void)
{
    return hwp_rf_p0->en_rf_rpt.bit_field.tmx_en_rpt;
}

__STATIC_INLINE uint32_t rf_p0_cal_cfg_rpt1_get(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.val;
}

__STATIC_INLINE void rf_p0_cal_cfg_rpt1_unpack(uint8_t* dpd_en_rpt, uint8_t* rximg_en_rpt, uint8_t* rxlpf_chan_sel_rpt, uint8_t* tximg_dc_cal_en_rpt, uint8_t* pdimg_en_rpt, uint8_t* rxlpf_cal_en_rpt, uint8_t* rmx_cal_en_rpt, uint8_t* txlpf_cal_en_rpt, uint8_t* tmx_cal2_en_rpt, uint8_t* tmx_cal1_en_rpt, uint8_t* rco32k_count_en_rpt, uint8_t* rfpll_cal_en_rpt, uint8_t* rfpll_open_en_rpt, uint8_t* rfpll_count_en_rpt)
{
    T_RF_P0_CAL_CFG_RPT1 localVal = hwp_rf_p0->cal_cfg_rpt1;

    *dpd_en_rpt = localVal.bit_field.dpd_en_rpt;
    *rximg_en_rpt = localVal.bit_field.rximg_en_rpt;
    *rxlpf_chan_sel_rpt = localVal.bit_field.rxlpf_chan_sel_rpt;
    *tximg_dc_cal_en_rpt = localVal.bit_field.tximg_dc_cal_en_rpt;
    *pdimg_en_rpt = localVal.bit_field.pdimg_en_rpt;
    *rxlpf_cal_en_rpt = localVal.bit_field.rxlpf_cal_en_rpt;
    *rmx_cal_en_rpt = localVal.bit_field.rmx_cal_en_rpt;
    *txlpf_cal_en_rpt = localVal.bit_field.txlpf_cal_en_rpt;
    *tmx_cal2_en_rpt = localVal.bit_field.tmx_cal2_en_rpt;
    *tmx_cal1_en_rpt = localVal.bit_field.tmx_cal1_en_rpt;
    *rco32k_count_en_rpt = localVal.bit_field.rco32k_count_en_rpt;
    *rfpll_cal_en_rpt = localVal.bit_field.rfpll_cal_en_rpt;
    *rfpll_open_en_rpt = localVal.bit_field.rfpll_open_en_rpt;
    *rfpll_count_en_rpt = localVal.bit_field.rfpll_count_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_dpd_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.dpd_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rximg_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.rximg_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_chan_sel_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.rxlpf_chan_sel_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tximg_dc_cal_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.tximg_dc_cal_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_pdimg_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.pdimg_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_cal_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.rxlpf_cal_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rmx_cal_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.rmx_cal_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_cal_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.txlpf_cal_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cal2_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.tmx_cal2_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cal1_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.tmx_cal1_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rco32k_count_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.rco32k_count_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_cal_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.rfpll_cal_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_open_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.rfpll_open_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_count_en_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt1.bit_field.rfpll_count_en_rpt;
}

__STATIC_INLINE uint32_t rf_p0_cal_cfg_rpt2_get(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.val;
}

__STATIC_INLINE void rf_p0_cal_cfg_rpt2_unpack(uint8_t* txlpf_test_mode_rpt, uint8_t* rxlpf_test_mode_rpt, uint8_t* phy_adc_clk_rpt, uint8_t* adc_sync_ck80m_rpt, uint8_t* phy_dac_clk_rpt, uint8_t* syspll_dac_clk_rpt, uint8_t* rco32k_ckin_rpt, uint8_t* xtal40m_dig_rpt, uint8_t* auto_cal_status_rpt, uint8_t* dac_chsel_rpt, uint8_t* adc_chsel_rpt)
{
    T_RF_P0_CAL_CFG_RPT2 localVal = hwp_rf_p0->cal_cfg_rpt2;

    *txlpf_test_mode_rpt = localVal.bit_field.txlpf_test_mode_rpt;
    *rxlpf_test_mode_rpt = localVal.bit_field.rxlpf_test_mode_rpt;
    *phy_adc_clk_rpt = localVal.bit_field.phy_adc_clk_rpt;
    *adc_sync_ck80m_rpt = localVal.bit_field.adc_sync_ck80m_rpt;
    *phy_dac_clk_rpt = localVal.bit_field.phy_dac_clk_rpt;
    *syspll_dac_clk_rpt = localVal.bit_field.syspll_dac_clk_rpt;
    *rco32k_ckin_rpt = localVal.bit_field.rco32k_ckin_rpt;
    *xtal40m_dig_rpt = localVal.bit_field.xtal40m_dig_rpt;
    *auto_cal_status_rpt = localVal.bit_field.auto_cal_status_rpt;
    *dac_chsel_rpt = localVal.bit_field.dac_chsel_rpt;
    *adc_chsel_rpt = localVal.bit_field.adc_chsel_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_test_mode_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.txlpf_test_mode_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_test_mode_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.rxlpf_test_mode_rpt;
}

__STATIC_INLINE uint8_t rf_p0_phy_adc_clk_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.phy_adc_clk_rpt;
}

__STATIC_INLINE uint8_t rf_p0_adc_sync_ck80m_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.adc_sync_ck80m_rpt;
}

__STATIC_INLINE uint8_t rf_p0_phy_dac_clk_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.phy_dac_clk_rpt;
}

__STATIC_INLINE uint8_t rf_p0_syspll_dac_clk_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.syspll_dac_clk_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rco32k_ckin_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.rco32k_ckin_rpt;
}

__STATIC_INLINE uint8_t rf_p0_xtal40m_dig_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.xtal40m_dig_rpt;
}

__STATIC_INLINE uint8_t rf_p0_auto_cal_status_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.auto_cal_status_rpt;
}

__STATIC_INLINE uint8_t rf_p0_dac_chsel_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.dac_chsel_rpt;
}

__STATIC_INLINE uint8_t rf_p0_adc_chsel_rpt_getf(void)
{
    return hwp_rf_p0->cal_cfg_rpt2.bit_field.adc_chsel_rpt;
}

__STATIC_INLINE uint32_t rf_p0_rx_mode_en_cfg_get(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_rx_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->rx_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rx_mode_en_cfg_pack(uint8_t cpu_en_rmx_rx, uint8_t cpu_en_rxlpf_rx, uint8_t cpu_en_rxadc_rx, uint8_t cpu_en_lna_rx, uint8_t cpu_en_txlpf_rx, uint8_t cpu_en_txdac_rx, uint8_t cpu_en_pa_rx, uint8_t cpu_en_tmx_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.val = (((uint32_t)cpu_en_rmx_rx << 7) | ((uint32_t)cpu_en_rxlpf_rx << 6) | ((uint32_t)cpu_en_rxadc_rx << 5) | ((uint32_t)cpu_en_lna_rx << 4) | ((uint32_t)cpu_en_txlpf_rx << 3) | ((uint32_t)cpu_en_txdac_rx << 2) | ((uint32_t)cpu_en_pa_rx << 1) | ((uint32_t)cpu_en_tmx_rx << 0));
}

__STATIC_INLINE void rf_p0_rx_mode_en_cfg_unpack(uint8_t* cpu_en_rmx_rx, uint8_t* cpu_en_rxlpf_rx, uint8_t* cpu_en_rxadc_rx, uint8_t* cpu_en_lna_rx, uint8_t* cpu_en_txlpf_rx, uint8_t* cpu_en_txdac_rx, uint8_t* cpu_en_pa_rx, uint8_t* cpu_en_tmx_rx)
{
    T_RF_P0_RX_MODE_EN_CFG localVal = hwp_rf_p0->rx_mode_en_cfg;

    *cpu_en_rmx_rx = localVal.bit_field.cpu_en_rmx_rx;
    *cpu_en_rxlpf_rx = localVal.bit_field.cpu_en_rxlpf_rx;
    *cpu_en_rxadc_rx = localVal.bit_field.cpu_en_rxadc_rx;
    *cpu_en_lna_rx = localVal.bit_field.cpu_en_lna_rx;
    *cpu_en_txlpf_rx = localVal.bit_field.cpu_en_txlpf_rx;
    *cpu_en_txdac_rx = localVal.bit_field.cpu_en_txdac_rx;
    *cpu_en_pa_rx = localVal.bit_field.cpu_en_pa_rx;
    *cpu_en_tmx_rx = localVal.bit_field.cpu_en_tmx_rx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_rx_getf(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_rmx_rx;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_rx_setf(uint8_t cpu_en_rmx_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_rmx_rx = cpu_en_rmx_rx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_rx_getf(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_rxlpf_rx;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_rx_setf(uint8_t cpu_en_rxlpf_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_rxlpf_rx = cpu_en_rxlpf_rx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_rx_getf(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_rxadc_rx;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_rx_setf(uint8_t cpu_en_rxadc_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_rxadc_rx = cpu_en_rxadc_rx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_rx_getf(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_lna_rx;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_rx_setf(uint8_t cpu_en_lna_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_lna_rx = cpu_en_lna_rx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_rx_getf(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_txlpf_rx;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_rx_setf(uint8_t cpu_en_txlpf_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_txlpf_rx = cpu_en_txlpf_rx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_rx_getf(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_txdac_rx;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_rx_setf(uint8_t cpu_en_txdac_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_txdac_rx = cpu_en_txdac_rx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_rx_getf(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_pa_rx;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_rx_setf(uint8_t cpu_en_pa_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_pa_rx = cpu_en_pa_rx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_rx_getf(void)
{
    return hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_tmx_rx;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_rx_setf(uint8_t cpu_en_tmx_rx)
{
    hwp_rf_p0->rx_mode_en_cfg.bit_field.cpu_en_tmx_rx = cpu_en_tmx_rx;
}

__STATIC_INLINE uint32_t rf_p0_tx_mode_en_cfg_get(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_tx_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->tx_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_tx_mode_en_cfg_pack(uint8_t cpu_en_rmx_tx, uint8_t cpu_en_rxlpf_tx, uint8_t cpu_en_rxadc_tx, uint8_t cpu_en_lna_tx, uint8_t cpu_en_txlpf_tx, uint8_t cpu_en_txdac_tx, uint8_t cpu_en_pa_tx, uint8_t cpu_en_tmx_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.val = (((uint32_t)cpu_en_rmx_tx << 7) | ((uint32_t)cpu_en_rxlpf_tx << 6) | ((uint32_t)cpu_en_rxadc_tx << 5) | ((uint32_t)cpu_en_lna_tx << 4) | ((uint32_t)cpu_en_txlpf_tx << 3) | ((uint32_t)cpu_en_txdac_tx << 2) | ((uint32_t)cpu_en_pa_tx << 1) | ((uint32_t)cpu_en_tmx_tx << 0));
}

__STATIC_INLINE void rf_p0_tx_mode_en_cfg_unpack(uint8_t* cpu_en_rmx_tx, uint8_t* cpu_en_rxlpf_tx, uint8_t* cpu_en_rxadc_tx, uint8_t* cpu_en_lna_tx, uint8_t* cpu_en_txlpf_tx, uint8_t* cpu_en_txdac_tx, uint8_t* cpu_en_pa_tx, uint8_t* cpu_en_tmx_tx)
{
    T_RF_P0_TX_MODE_EN_CFG localVal = hwp_rf_p0->tx_mode_en_cfg;

    *cpu_en_rmx_tx = localVal.bit_field.cpu_en_rmx_tx;
    *cpu_en_rxlpf_tx = localVal.bit_field.cpu_en_rxlpf_tx;
    *cpu_en_rxadc_tx = localVal.bit_field.cpu_en_rxadc_tx;
    *cpu_en_lna_tx = localVal.bit_field.cpu_en_lna_tx;
    *cpu_en_txlpf_tx = localVal.bit_field.cpu_en_txlpf_tx;
    *cpu_en_txdac_tx = localVal.bit_field.cpu_en_txdac_tx;
    *cpu_en_pa_tx = localVal.bit_field.cpu_en_pa_tx;
    *cpu_en_tmx_tx = localVal.bit_field.cpu_en_tmx_tx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_tx_getf(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_rmx_tx;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_tx_setf(uint8_t cpu_en_rmx_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_rmx_tx = cpu_en_rmx_tx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_tx_getf(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_rxlpf_tx;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_tx_setf(uint8_t cpu_en_rxlpf_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_rxlpf_tx = cpu_en_rxlpf_tx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_tx_getf(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_rxadc_tx;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_tx_setf(uint8_t cpu_en_rxadc_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_rxadc_tx = cpu_en_rxadc_tx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_tx_getf(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_lna_tx;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_tx_setf(uint8_t cpu_en_lna_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_lna_tx = cpu_en_lna_tx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_tx_getf(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_txlpf_tx;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_tx_setf(uint8_t cpu_en_txlpf_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_txlpf_tx = cpu_en_txlpf_tx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_tx_getf(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_txdac_tx;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_tx_setf(uint8_t cpu_en_txdac_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_txdac_tx = cpu_en_txdac_tx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_tx_getf(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_pa_tx;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_tx_setf(uint8_t cpu_en_pa_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_pa_tx = cpu_en_pa_tx;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_tx_getf(void)
{
    return hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_tmx_tx;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_tx_setf(uint8_t cpu_en_tmx_tx)
{
    hwp_rf_p0->tx_mode_en_cfg.bit_field.cpu_en_tmx_tx = cpu_en_tmx_tx;
}

__STATIC_INLINE uint32_t rf_p0_txdc1_mode_en_cfg_get(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_txdc1_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->txdc1_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_txdc1_mode_en_cfg_pack(uint8_t cpu_en_rmx_txdc1, uint8_t cpu_en_rxlpf_txdc1, uint8_t cpu_en_rxadc_txdc1, uint8_t cpu_en_lna_txdc1, uint8_t cpu_en_txlpf_txdc1, uint8_t cpu_en_txdac_txdc1, uint8_t cpu_en_pa_txdc1, uint8_t cpu_en_tmx_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.val = (((uint32_t)cpu_en_rmx_txdc1 << 7) | ((uint32_t)cpu_en_rxlpf_txdc1 << 6) | ((uint32_t)cpu_en_rxadc_txdc1 << 5) | ((uint32_t)cpu_en_lna_txdc1 << 4) | ((uint32_t)cpu_en_txlpf_txdc1 << 3) | ((uint32_t)cpu_en_txdac_txdc1 << 2) | ((uint32_t)cpu_en_pa_txdc1 << 1) | ((uint32_t)cpu_en_tmx_txdc1 << 0));
}

__STATIC_INLINE void rf_p0_txdc1_mode_en_cfg_unpack(uint8_t* cpu_en_rmx_txdc1, uint8_t* cpu_en_rxlpf_txdc1, uint8_t* cpu_en_rxadc_txdc1, uint8_t* cpu_en_lna_txdc1, uint8_t* cpu_en_txlpf_txdc1, uint8_t* cpu_en_txdac_txdc1, uint8_t* cpu_en_pa_txdc1, uint8_t* cpu_en_tmx_txdc1)
{
    T_RF_P0_TXDC1_MODE_EN_CFG localVal = hwp_rf_p0->txdc1_mode_en_cfg;

    *cpu_en_rmx_txdc1 = localVal.bit_field.cpu_en_rmx_txdc1;
    *cpu_en_rxlpf_txdc1 = localVal.bit_field.cpu_en_rxlpf_txdc1;
    *cpu_en_rxadc_txdc1 = localVal.bit_field.cpu_en_rxadc_txdc1;
    *cpu_en_lna_txdc1 = localVal.bit_field.cpu_en_lna_txdc1;
    *cpu_en_txlpf_txdc1 = localVal.bit_field.cpu_en_txlpf_txdc1;
    *cpu_en_txdac_txdc1 = localVal.bit_field.cpu_en_txdac_txdc1;
    *cpu_en_pa_txdc1 = localVal.bit_field.cpu_en_pa_txdc1;
    *cpu_en_tmx_txdc1 = localVal.bit_field.cpu_en_tmx_txdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_txdc1_getf(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_rmx_txdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_txdc1_setf(uint8_t cpu_en_rmx_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_rmx_txdc1 = cpu_en_rmx_txdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_txdc1_getf(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_rxlpf_txdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_txdc1_setf(uint8_t cpu_en_rxlpf_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_rxlpf_txdc1 = cpu_en_rxlpf_txdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_txdc1_getf(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_rxadc_txdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_txdc1_setf(uint8_t cpu_en_rxadc_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_rxadc_txdc1 = cpu_en_rxadc_txdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_txdc1_getf(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_lna_txdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_txdc1_setf(uint8_t cpu_en_lna_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_lna_txdc1 = cpu_en_lna_txdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_txdc1_getf(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_txlpf_txdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_txdc1_setf(uint8_t cpu_en_txlpf_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_txlpf_txdc1 = cpu_en_txlpf_txdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_txdc1_getf(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_txdac_txdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_txdc1_setf(uint8_t cpu_en_txdac_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_txdac_txdc1 = cpu_en_txdac_txdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_txdc1_getf(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_pa_txdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_txdc1_setf(uint8_t cpu_en_pa_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_pa_txdc1 = cpu_en_pa_txdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_txdc1_getf(void)
{
    return hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_tmx_txdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_txdc1_setf(uint8_t cpu_en_tmx_txdc1)
{
    hwp_rf_p0->txdc1_mode_en_cfg.bit_field.cpu_en_tmx_txdc1 = cpu_en_tmx_txdc1;
}

__STATIC_INLINE uint32_t rf_p0_txdc2_mode_en_cfg_get(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_txdc2_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->txdc2_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_txdc2_mode_en_cfg_pack(uint8_t cpu_en_rmx_txdc2, uint8_t cpu_en_rxlpf_txdc2, uint8_t cpu_en_rxadc_txdc2, uint8_t cpu_en_lna_txdc2, uint8_t cpu_en_txlpf_txdc2, uint8_t cpu_en_txdac_txdc2, uint8_t cpu_en_pa_txdc2, uint8_t cpu_en_tmx_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.val = (((uint32_t)cpu_en_rmx_txdc2 << 7) | ((uint32_t)cpu_en_rxlpf_txdc2 << 6) | ((uint32_t)cpu_en_rxadc_txdc2 << 5) | ((uint32_t)cpu_en_lna_txdc2 << 4) | ((uint32_t)cpu_en_txlpf_txdc2 << 3) | ((uint32_t)cpu_en_txdac_txdc2 << 2) | ((uint32_t)cpu_en_pa_txdc2 << 1) | ((uint32_t)cpu_en_tmx_txdc2 << 0));
}

__STATIC_INLINE void rf_p0_txdc2_mode_en_cfg_unpack(uint8_t* cpu_en_rmx_txdc2, uint8_t* cpu_en_rxlpf_txdc2, uint8_t* cpu_en_rxadc_txdc2, uint8_t* cpu_en_lna_txdc2, uint8_t* cpu_en_txlpf_txdc2, uint8_t* cpu_en_txdac_txdc2, uint8_t* cpu_en_pa_txdc2, uint8_t* cpu_en_tmx_txdc2)
{
    T_RF_P0_TXDC2_MODE_EN_CFG localVal = hwp_rf_p0->txdc2_mode_en_cfg;

    *cpu_en_rmx_txdc2 = localVal.bit_field.cpu_en_rmx_txdc2;
    *cpu_en_rxlpf_txdc2 = localVal.bit_field.cpu_en_rxlpf_txdc2;
    *cpu_en_rxadc_txdc2 = localVal.bit_field.cpu_en_rxadc_txdc2;
    *cpu_en_lna_txdc2 = localVal.bit_field.cpu_en_lna_txdc2;
    *cpu_en_txlpf_txdc2 = localVal.bit_field.cpu_en_txlpf_txdc2;
    *cpu_en_txdac_txdc2 = localVal.bit_field.cpu_en_txdac_txdc2;
    *cpu_en_pa_txdc2 = localVal.bit_field.cpu_en_pa_txdc2;
    *cpu_en_tmx_txdc2 = localVal.bit_field.cpu_en_tmx_txdc2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_txdc2_getf(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_rmx_txdc2;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_txdc2_setf(uint8_t cpu_en_rmx_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_rmx_txdc2 = cpu_en_rmx_txdc2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_txdc2_getf(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_rxlpf_txdc2;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_txdc2_setf(uint8_t cpu_en_rxlpf_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_rxlpf_txdc2 = cpu_en_rxlpf_txdc2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_txdc2_getf(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_rxadc_txdc2;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_txdc2_setf(uint8_t cpu_en_rxadc_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_rxadc_txdc2 = cpu_en_rxadc_txdc2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_txdc2_getf(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_lna_txdc2;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_txdc2_setf(uint8_t cpu_en_lna_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_lna_txdc2 = cpu_en_lna_txdc2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_txdc2_getf(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_txlpf_txdc2;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_txdc2_setf(uint8_t cpu_en_txlpf_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_txlpf_txdc2 = cpu_en_txlpf_txdc2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_txdc2_getf(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_txdac_txdc2;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_txdc2_setf(uint8_t cpu_en_txdac_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_txdac_txdc2 = cpu_en_txdac_txdc2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_txdc2_getf(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_pa_txdc2;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_txdc2_setf(uint8_t cpu_en_pa_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_pa_txdc2 = cpu_en_pa_txdc2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_txdc2_getf(void)
{
    return hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_tmx_txdc2;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_txdc2_setf(uint8_t cpu_en_tmx_txdc2)
{
    hwp_rf_p0->txdc2_mode_en_cfg.bit_field.cpu_en_tmx_txdc2 = cpu_en_tmx_txdc2;
}

__STATIC_INLINE uint32_t rf_p0_txdc3_mode_en_cfg_get(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_txdc3_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->txdc3_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_txdc3_mode_en_cfg_pack(uint8_t cpu_en_rmx_txdc3, uint8_t cpu_en_rxlpf_txdc3, uint8_t cpu_en_rxadc_txdc3, uint8_t cpu_en_lna_txdc3, uint8_t cpu_en_txlpf_txdc3, uint8_t cpu_en_txdac_txdc3, uint8_t cpu_en_pa_txdc3, uint8_t cpu_en_tmx_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.val = (((uint32_t)cpu_en_rmx_txdc3 << 7) | ((uint32_t)cpu_en_rxlpf_txdc3 << 6) | ((uint32_t)cpu_en_rxadc_txdc3 << 5) | ((uint32_t)cpu_en_lna_txdc3 << 4) | ((uint32_t)cpu_en_txlpf_txdc3 << 3) | ((uint32_t)cpu_en_txdac_txdc3 << 2) | ((uint32_t)cpu_en_pa_txdc3 << 1) | ((uint32_t)cpu_en_tmx_txdc3 << 0));
}

__STATIC_INLINE void rf_p0_txdc3_mode_en_cfg_unpack(uint8_t* cpu_en_rmx_txdc3, uint8_t* cpu_en_rxlpf_txdc3, uint8_t* cpu_en_rxadc_txdc3, uint8_t* cpu_en_lna_txdc3, uint8_t* cpu_en_txlpf_txdc3, uint8_t* cpu_en_txdac_txdc3, uint8_t* cpu_en_pa_txdc3, uint8_t* cpu_en_tmx_txdc3)
{
    T_RF_P0_TXDC3_MODE_EN_CFG localVal = hwp_rf_p0->txdc3_mode_en_cfg;

    *cpu_en_rmx_txdc3 = localVal.bit_field.cpu_en_rmx_txdc3;
    *cpu_en_rxlpf_txdc3 = localVal.bit_field.cpu_en_rxlpf_txdc3;
    *cpu_en_rxadc_txdc3 = localVal.bit_field.cpu_en_rxadc_txdc3;
    *cpu_en_lna_txdc3 = localVal.bit_field.cpu_en_lna_txdc3;
    *cpu_en_txlpf_txdc3 = localVal.bit_field.cpu_en_txlpf_txdc3;
    *cpu_en_txdac_txdc3 = localVal.bit_field.cpu_en_txdac_txdc3;
    *cpu_en_pa_txdc3 = localVal.bit_field.cpu_en_pa_txdc3;
    *cpu_en_tmx_txdc3 = localVal.bit_field.cpu_en_tmx_txdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_txdc3_getf(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_rmx_txdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_txdc3_setf(uint8_t cpu_en_rmx_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_rmx_txdc3 = cpu_en_rmx_txdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_txdc3_getf(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_rxlpf_txdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_txdc3_setf(uint8_t cpu_en_rxlpf_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_rxlpf_txdc3 = cpu_en_rxlpf_txdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_txdc3_getf(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_rxadc_txdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_txdc3_setf(uint8_t cpu_en_rxadc_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_rxadc_txdc3 = cpu_en_rxadc_txdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_txdc3_getf(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_lna_txdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_txdc3_setf(uint8_t cpu_en_lna_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_lna_txdc3 = cpu_en_lna_txdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_txdc3_getf(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_txlpf_txdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_txdc3_setf(uint8_t cpu_en_txlpf_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_txlpf_txdc3 = cpu_en_txlpf_txdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_txdc3_getf(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_txdac_txdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_txdc3_setf(uint8_t cpu_en_txdac_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_txdac_txdc3 = cpu_en_txdac_txdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_txdc3_getf(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_pa_txdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_txdc3_setf(uint8_t cpu_en_pa_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_pa_txdc3 = cpu_en_pa_txdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_txdc3_getf(void)
{
    return hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_tmx_txdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_txdc3_setf(uint8_t cpu_en_tmx_txdc3)
{
    hwp_rf_p0->txdc3_mode_en_cfg.bit_field.cpu_en_tmx_txdc3 = cpu_en_tmx_txdc3;
}

__STATIC_INLINE uint32_t rf_p0_rxlpf_dc_mode_en_cfg_get(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_rxlpf_dc_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rxlpf_dc_mode_en_cfg_pack(uint8_t cpu_en_rmx_rxdc1, uint8_t cpu_en_rxlpf_rxdc1, uint8_t cpu_en_rxadc_rxdc1, uint8_t cpu_en_lna_rxdc1, uint8_t cpu_en_txlpf_rxdc1, uint8_t cpu_en_txdac_rxdc1, uint8_t cpu_en_pa_rxdc1, uint8_t cpu_en_tmx_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.val = (((uint32_t)cpu_en_rmx_rxdc1 << 7) | ((uint32_t)cpu_en_rxlpf_rxdc1 << 6) | ((uint32_t)cpu_en_rxadc_rxdc1 << 5) | ((uint32_t)cpu_en_lna_rxdc1 << 4) | ((uint32_t)cpu_en_txlpf_rxdc1 << 3) | ((uint32_t)cpu_en_txdac_rxdc1 << 2) | ((uint32_t)cpu_en_pa_rxdc1 << 1) | ((uint32_t)cpu_en_tmx_rxdc1 << 0));
}

__STATIC_INLINE void rf_p0_rxlpf_dc_mode_en_cfg_unpack(uint8_t* cpu_en_rmx_rxdc1, uint8_t* cpu_en_rxlpf_rxdc1, uint8_t* cpu_en_rxadc_rxdc1, uint8_t* cpu_en_lna_rxdc1, uint8_t* cpu_en_txlpf_rxdc1, uint8_t* cpu_en_txdac_rxdc1, uint8_t* cpu_en_pa_rxdc1, uint8_t* cpu_en_tmx_rxdc1)
{
    T_RF_P0_RXLPF_DC_MODE_EN_CFG localVal = hwp_rf_p0->rxlpf_dc_mode_en_cfg;

    *cpu_en_rmx_rxdc1 = localVal.bit_field.cpu_en_rmx_rxdc1;
    *cpu_en_rxlpf_rxdc1 = localVal.bit_field.cpu_en_rxlpf_rxdc1;
    *cpu_en_rxadc_rxdc1 = localVal.bit_field.cpu_en_rxadc_rxdc1;
    *cpu_en_lna_rxdc1 = localVal.bit_field.cpu_en_lna_rxdc1;
    *cpu_en_txlpf_rxdc1 = localVal.bit_field.cpu_en_txlpf_rxdc1;
    *cpu_en_txdac_rxdc1 = localVal.bit_field.cpu_en_txdac_rxdc1;
    *cpu_en_pa_rxdc1 = localVal.bit_field.cpu_en_pa_rxdc1;
    *cpu_en_tmx_rxdc1 = localVal.bit_field.cpu_en_tmx_rxdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_rxdc1_getf(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_rmx_rxdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_rxdc1_setf(uint8_t cpu_en_rmx_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_rmx_rxdc1 = cpu_en_rmx_rxdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_rxdc1_getf(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_rxdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_rxdc1_setf(uint8_t cpu_en_rxlpf_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_rxdc1 = cpu_en_rxlpf_rxdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_rxdc1_getf(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_rxadc_rxdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_rxdc1_setf(uint8_t cpu_en_rxadc_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_rxadc_rxdc1 = cpu_en_rxadc_rxdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_rxdc1_getf(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_lna_rxdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_rxdc1_setf(uint8_t cpu_en_lna_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_lna_rxdc1 = cpu_en_lna_rxdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_rxdc1_getf(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_txlpf_rxdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_rxdc1_setf(uint8_t cpu_en_txlpf_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_txlpf_rxdc1 = cpu_en_txlpf_rxdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_rxdc1_getf(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_txdac_rxdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_rxdc1_setf(uint8_t cpu_en_txdac_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_txdac_rxdc1 = cpu_en_txdac_rxdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_rxdc1_getf(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_pa_rxdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_rxdc1_setf(uint8_t cpu_en_pa_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_pa_rxdc1 = cpu_en_pa_rxdc1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_rxdc1_getf(void)
{
    return hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_tmx_rxdc1;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_rxdc1_setf(uint8_t cpu_en_tmx_rxdc1)
{
    hwp_rf_p0->rxlpf_dc_mode_en_cfg.bit_field.cpu_en_tmx_rxdc1 = cpu_en_tmx_rxdc1;
}

__STATIC_INLINE uint32_t rf_p0_rx_dc_mode_en_cfg_get(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_rx_dc_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rx_dc_mode_en_cfg_pack(uint8_t cpu_en_rmx_rxdc3, uint8_t cpu_en_rxlpf_rxdc3, uint8_t cpu_en_rxadc_rxdc3, uint8_t cpu_en_lna_rxdc3, uint8_t cpu_en_txlpf_rxdc3, uint8_t cpu_en_txdac_rxdc3, uint8_t cpu_en_pa_rxdc3, uint8_t cpu_en_tmx_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.val = (((uint32_t)cpu_en_rmx_rxdc3 << 7) | ((uint32_t)cpu_en_rxlpf_rxdc3 << 6) | ((uint32_t)cpu_en_rxadc_rxdc3 << 5) | ((uint32_t)cpu_en_lna_rxdc3 << 4) | ((uint32_t)cpu_en_txlpf_rxdc3 << 3) | ((uint32_t)cpu_en_txdac_rxdc3 << 2) | ((uint32_t)cpu_en_pa_rxdc3 << 1) | ((uint32_t)cpu_en_tmx_rxdc3 << 0));
}

__STATIC_INLINE void rf_p0_rx_dc_mode_en_cfg_unpack(uint8_t* cpu_en_rmx_rxdc3, uint8_t* cpu_en_rxlpf_rxdc3, uint8_t* cpu_en_rxadc_rxdc3, uint8_t* cpu_en_lna_rxdc3, uint8_t* cpu_en_txlpf_rxdc3, uint8_t* cpu_en_txdac_rxdc3, uint8_t* cpu_en_pa_rxdc3, uint8_t* cpu_en_tmx_rxdc3)
{
    T_RF_P0_RX_DC_MODE_EN_CFG localVal = hwp_rf_p0->rx_dc_mode_en_cfg;

    *cpu_en_rmx_rxdc3 = localVal.bit_field.cpu_en_rmx_rxdc3;
    *cpu_en_rxlpf_rxdc3 = localVal.bit_field.cpu_en_rxlpf_rxdc3;
    *cpu_en_rxadc_rxdc3 = localVal.bit_field.cpu_en_rxadc_rxdc3;
    *cpu_en_lna_rxdc3 = localVal.bit_field.cpu_en_lna_rxdc3;
    *cpu_en_txlpf_rxdc3 = localVal.bit_field.cpu_en_txlpf_rxdc3;
    *cpu_en_txdac_rxdc3 = localVal.bit_field.cpu_en_txdac_rxdc3;
    *cpu_en_pa_rxdc3 = localVal.bit_field.cpu_en_pa_rxdc3;
    *cpu_en_tmx_rxdc3 = localVal.bit_field.cpu_en_tmx_rxdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_rxdc3_getf(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_rmx_rxdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_rxdc3_setf(uint8_t cpu_en_rmx_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_rmx_rxdc3 = cpu_en_rmx_rxdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_rxdc3_getf(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_rxdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_rxdc3_setf(uint8_t cpu_en_rxlpf_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_rxdc3 = cpu_en_rxlpf_rxdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_rxdc3_getf(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_rxadc_rxdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_rxdc3_setf(uint8_t cpu_en_rxadc_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_rxadc_rxdc3 = cpu_en_rxadc_rxdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_rxdc3_getf(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_lna_rxdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_rxdc3_setf(uint8_t cpu_en_lna_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_lna_rxdc3 = cpu_en_lna_rxdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_rxdc3_getf(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_txlpf_rxdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_rxdc3_setf(uint8_t cpu_en_txlpf_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_txlpf_rxdc3 = cpu_en_txlpf_rxdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_rxdc3_getf(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_txdac_rxdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_rxdc3_setf(uint8_t cpu_en_txdac_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_txdac_rxdc3 = cpu_en_txdac_rxdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_rxdc3_getf(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_pa_rxdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_rxdc3_setf(uint8_t cpu_en_pa_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_pa_rxdc3 = cpu_en_pa_rxdc3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_rxdc3_getf(void)
{
    return hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_tmx_rxdc3;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_rxdc3_setf(uint8_t cpu_en_tmx_rxdc3)
{
    hwp_rf_p0->rx_dc_mode_en_cfg.bit_field.cpu_en_tmx_rxdc3 = cpu_en_tmx_rxdc3;
}

__STATIC_INLINE uint32_t rf_p0_tximg_dc_mode_en_cfg_get(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_tximg_dc_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_tximg_dc_mode_en_cfg_pack(uint8_t cpu_en_rmx_tximg, uint8_t cpu_en_rxlpf_tximg, uint8_t cpu_en_rxadc_tximg, uint8_t cpu_en_lna_tximg, uint8_t cpu_en_txlpf_tximg, uint8_t cpu_en_txdac_tximg, uint8_t cpu_en_pa_tximg, uint8_t cpu_en_tmx_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.val = (((uint32_t)cpu_en_rmx_tximg << 7) | ((uint32_t)cpu_en_rxlpf_tximg << 6) | ((uint32_t)cpu_en_rxadc_tximg << 5) | ((uint32_t)cpu_en_lna_tximg << 4) | ((uint32_t)cpu_en_txlpf_tximg << 3) | ((uint32_t)cpu_en_txdac_tximg << 2) | ((uint32_t)cpu_en_pa_tximg << 1) | ((uint32_t)cpu_en_tmx_tximg << 0));
}

__STATIC_INLINE void rf_p0_tximg_dc_mode_en_cfg_unpack(uint8_t* cpu_en_rmx_tximg, uint8_t* cpu_en_rxlpf_tximg, uint8_t* cpu_en_rxadc_tximg, uint8_t* cpu_en_lna_tximg, uint8_t* cpu_en_txlpf_tximg, uint8_t* cpu_en_txdac_tximg, uint8_t* cpu_en_pa_tximg, uint8_t* cpu_en_tmx_tximg)
{
    T_RF_P0_TXIMG_DC_MODE_EN_CFG localVal = hwp_rf_p0->tximg_dc_mode_en_cfg;

    *cpu_en_rmx_tximg = localVal.bit_field.cpu_en_rmx_tximg;
    *cpu_en_rxlpf_tximg = localVal.bit_field.cpu_en_rxlpf_tximg;
    *cpu_en_rxadc_tximg = localVal.bit_field.cpu_en_rxadc_tximg;
    *cpu_en_lna_tximg = localVal.bit_field.cpu_en_lna_tximg;
    *cpu_en_txlpf_tximg = localVal.bit_field.cpu_en_txlpf_tximg;
    *cpu_en_txdac_tximg = localVal.bit_field.cpu_en_txdac_tximg;
    *cpu_en_pa_tximg = localVal.bit_field.cpu_en_pa_tximg;
    *cpu_en_tmx_tximg = localVal.bit_field.cpu_en_tmx_tximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_tximg_getf(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_rmx_tximg;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_tximg_setf(uint8_t cpu_en_rmx_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_rmx_tximg = cpu_en_rmx_tximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_tximg_getf(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_tximg;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_tximg_setf(uint8_t cpu_en_rxlpf_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_tximg = cpu_en_rxlpf_tximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_tximg_getf(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_rxadc_tximg;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_tximg_setf(uint8_t cpu_en_rxadc_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_rxadc_tximg = cpu_en_rxadc_tximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_tximg_getf(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_lna_tximg;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_tximg_setf(uint8_t cpu_en_lna_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_lna_tximg = cpu_en_lna_tximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_tximg_getf(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_txlpf_tximg;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_tximg_setf(uint8_t cpu_en_txlpf_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_txlpf_tximg = cpu_en_txlpf_tximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_tximg_getf(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_txdac_tximg;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_tximg_setf(uint8_t cpu_en_txdac_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_txdac_tximg = cpu_en_txdac_tximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_tximg_getf(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_pa_tximg;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_tximg_setf(uint8_t cpu_en_pa_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_pa_tximg = cpu_en_pa_tximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_tximg_getf(void)
{
    return hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_tmx_tximg;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_tximg_setf(uint8_t cpu_en_tmx_tximg)
{
    hwp_rf_p0->tximg_dc_mode_en_cfg.bit_field.cpu_en_tmx_tximg = cpu_en_tmx_tximg;
}

__STATIC_INLINE uint32_t rf_p0_rximg_dc_mode_en_cfg_get(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_rximg_dc_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rximg_dc_mode_en_cfg_pack(uint8_t cpu_rmx_gain_rximg, uint8_t cpu_rfpll_tx_lo_rximg, uint8_t cpu_rfpll_rx_lo_rximg, uint8_t cpu_en_rmx_rximg, uint8_t cpu_en_rxlpf_rximg, uint8_t cpu_en_rxadc_rximg, uint8_t cpu_en_lna_rximg, uint8_t cpu_en_txlpf_rximg, uint8_t cpu_en_txdac_rximg, uint8_t cpu_en_pa_rximg, uint8_t cpu_en_tmx_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.val = (((uint32_t)cpu_rmx_gain_rximg << 10) | ((uint32_t)cpu_rfpll_tx_lo_rximg << 9) | ((uint32_t)cpu_rfpll_rx_lo_rximg << 8) | ((uint32_t)cpu_en_rmx_rximg << 7) | ((uint32_t)cpu_en_rxlpf_rximg << 6) | ((uint32_t)cpu_en_rxadc_rximg << 5) | ((uint32_t)cpu_en_lna_rximg << 4) | ((uint32_t)cpu_en_txlpf_rximg << 3) | ((uint32_t)cpu_en_txdac_rximg << 2) | ((uint32_t)cpu_en_pa_rximg << 1) | ((uint32_t)cpu_en_tmx_rximg << 0));
}

__STATIC_INLINE void rf_p0_rximg_dc_mode_en_cfg_unpack(uint8_t* cpu_rmx_gain_rximg, uint8_t* cpu_rfpll_tx_lo_rximg, uint8_t* cpu_rfpll_rx_lo_rximg, uint8_t* cpu_en_rmx_rximg, uint8_t* cpu_en_rxlpf_rximg, uint8_t* cpu_en_rxadc_rximg, uint8_t* cpu_en_lna_rximg, uint8_t* cpu_en_txlpf_rximg, uint8_t* cpu_en_txdac_rximg, uint8_t* cpu_en_pa_rximg, uint8_t* cpu_en_tmx_rximg)
{
    T_RF_P0_RXIMG_DC_MODE_EN_CFG localVal = hwp_rf_p0->rximg_dc_mode_en_cfg;

    *cpu_rmx_gain_rximg = localVal.bit_field.cpu_rmx_gain_rximg;
    *cpu_rfpll_tx_lo_rximg = localVal.bit_field.cpu_rfpll_tx_lo_rximg;
    *cpu_rfpll_rx_lo_rximg = localVal.bit_field.cpu_rfpll_rx_lo_rximg;
    *cpu_en_rmx_rximg = localVal.bit_field.cpu_en_rmx_rximg;
    *cpu_en_rxlpf_rximg = localVal.bit_field.cpu_en_rxlpf_rximg;
    *cpu_en_rxadc_rximg = localVal.bit_field.cpu_en_rxadc_rximg;
    *cpu_en_lna_rximg = localVal.bit_field.cpu_en_lna_rximg;
    *cpu_en_txlpf_rximg = localVal.bit_field.cpu_en_txlpf_rximg;
    *cpu_en_txdac_rximg = localVal.bit_field.cpu_en_txdac_rximg;
    *cpu_en_pa_rximg = localVal.bit_field.cpu_en_pa_rximg;
    *cpu_en_tmx_rximg = localVal.bit_field.cpu_en_tmx_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_gain_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_rmx_gain_rximg;
}

__STATIC_INLINE void rf_p0_cpu_rmx_gain_rximg_setf(uint8_t cpu_rmx_gain_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_rmx_gain_rximg = cpu_rmx_gain_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_tx_lo_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_rfpll_tx_lo_rximg;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_tx_lo_rximg_setf(uint8_t cpu_rfpll_tx_lo_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_rfpll_tx_lo_rximg = cpu_rfpll_tx_lo_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_rx_lo_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_rfpll_rx_lo_rximg;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_rx_lo_rximg_setf(uint8_t cpu_rfpll_rx_lo_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_rfpll_rx_lo_rximg = cpu_rfpll_rx_lo_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_rmx_rximg;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_rximg_setf(uint8_t cpu_en_rmx_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_rmx_rximg = cpu_en_rmx_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_rximg;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_rximg_setf(uint8_t cpu_en_rxlpf_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_rximg = cpu_en_rxlpf_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_rxadc_rximg;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_rximg_setf(uint8_t cpu_en_rxadc_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_rxadc_rximg = cpu_en_rxadc_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_lna_rximg;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_rximg_setf(uint8_t cpu_en_lna_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_lna_rximg = cpu_en_lna_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_txlpf_rximg;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_rximg_setf(uint8_t cpu_en_txlpf_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_txlpf_rximg = cpu_en_txlpf_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_txdac_rximg;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_rximg_setf(uint8_t cpu_en_txdac_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_txdac_rximg = cpu_en_txdac_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_pa_rximg;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_rximg_setf(uint8_t cpu_en_pa_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_pa_rximg = cpu_en_pa_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_rximg_getf(void)
{
    return hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_tmx_rximg;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_rximg_setf(uint8_t cpu_en_tmx_rximg)
{
    hwp_rf_p0->rximg_dc_mode_en_cfg.bit_field.cpu_en_tmx_rximg = cpu_en_tmx_rximg;
}

__STATIC_INLINE uint32_t rf_p0_dpd_dc_mode_en_cfg_get(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.val;
}

__STATIC_INLINE void rf_p0_dpd_dc_mode_en_cfg_set(uint32_t value)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.val = value;
}

__STATIC_INLINE void rf_p0_dpd_dc_mode_en_cfg_pack(uint8_t cpu_rmx_gain_dpd, uint8_t cpu_rfpll_tx_lo_dpd, uint8_t cpu_rfpll_rx_lo_dpd, uint8_t cpu_en_rmx_dpd, uint8_t cpu_en_rxlpf_dpd, uint8_t cpu_en_rxadc_dpd, uint8_t cpu_en_lna_dpd, uint8_t cpu_en_txlpf_dpd, uint8_t cpu_en_txdac_dpd, uint8_t cpu_en_pa_dpd, uint8_t cpu_en_tmx_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.val = (((uint32_t)cpu_rmx_gain_dpd << 10) | ((uint32_t)cpu_rfpll_tx_lo_dpd << 9) | ((uint32_t)cpu_rfpll_rx_lo_dpd << 8) | ((uint32_t)cpu_en_rmx_dpd << 7) | ((uint32_t)cpu_en_rxlpf_dpd << 6) | ((uint32_t)cpu_en_rxadc_dpd << 5) | ((uint32_t)cpu_en_lna_dpd << 4) | ((uint32_t)cpu_en_txlpf_dpd << 3) | ((uint32_t)cpu_en_txdac_dpd << 2) | ((uint32_t)cpu_en_pa_dpd << 1) | ((uint32_t)cpu_en_tmx_dpd << 0));
}

__STATIC_INLINE void rf_p0_dpd_dc_mode_en_cfg_unpack(uint8_t* cpu_rmx_gain_dpd, uint8_t* cpu_rfpll_tx_lo_dpd, uint8_t* cpu_rfpll_rx_lo_dpd, uint8_t* cpu_en_rmx_dpd, uint8_t* cpu_en_rxlpf_dpd, uint8_t* cpu_en_rxadc_dpd, uint8_t* cpu_en_lna_dpd, uint8_t* cpu_en_txlpf_dpd, uint8_t* cpu_en_txdac_dpd, uint8_t* cpu_en_pa_dpd, uint8_t* cpu_en_tmx_dpd)
{
    T_RF_P0_DPD_DC_MODE_EN_CFG localVal = hwp_rf_p0->dpd_dc_mode_en_cfg;

    *cpu_rmx_gain_dpd = localVal.bit_field.cpu_rmx_gain_dpd;
    *cpu_rfpll_tx_lo_dpd = localVal.bit_field.cpu_rfpll_tx_lo_dpd;
    *cpu_rfpll_rx_lo_dpd = localVal.bit_field.cpu_rfpll_rx_lo_dpd;
    *cpu_en_rmx_dpd = localVal.bit_field.cpu_en_rmx_dpd;
    *cpu_en_rxlpf_dpd = localVal.bit_field.cpu_en_rxlpf_dpd;
    *cpu_en_rxadc_dpd = localVal.bit_field.cpu_en_rxadc_dpd;
    *cpu_en_lna_dpd = localVal.bit_field.cpu_en_lna_dpd;
    *cpu_en_txlpf_dpd = localVal.bit_field.cpu_en_txlpf_dpd;
    *cpu_en_txdac_dpd = localVal.bit_field.cpu_en_txdac_dpd;
    *cpu_en_pa_dpd = localVal.bit_field.cpu_en_pa_dpd;
    *cpu_en_tmx_dpd = localVal.bit_field.cpu_en_tmx_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_gain_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_rmx_gain_dpd;
}

__STATIC_INLINE void rf_p0_cpu_rmx_gain_dpd_setf(uint8_t cpu_rmx_gain_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_rmx_gain_dpd = cpu_rmx_gain_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_tx_lo_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_rfpll_tx_lo_dpd;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_tx_lo_dpd_setf(uint8_t cpu_rfpll_tx_lo_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_rfpll_tx_lo_dpd = cpu_rfpll_tx_lo_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_rx_lo_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_rfpll_rx_lo_dpd;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_rx_lo_dpd_setf(uint8_t cpu_rfpll_rx_lo_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_rfpll_rx_lo_dpd = cpu_rfpll_rx_lo_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rmx_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_rmx_dpd;
}

__STATIC_INLINE void rf_p0_cpu_en_rmx_dpd_setf(uint8_t cpu_en_rmx_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_rmx_dpd = cpu_en_rmx_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxlpf_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_dpd;
}

__STATIC_INLINE void rf_p0_cpu_en_rxlpf_dpd_setf(uint8_t cpu_en_rxlpf_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_rxlpf_dpd = cpu_en_rxlpf_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_rxadc_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_rxadc_dpd;
}

__STATIC_INLINE void rf_p0_cpu_en_rxadc_dpd_setf(uint8_t cpu_en_rxadc_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_rxadc_dpd = cpu_en_rxadc_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_lna_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_lna_dpd;
}

__STATIC_INLINE void rf_p0_cpu_en_lna_dpd_setf(uint8_t cpu_en_lna_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_lna_dpd = cpu_en_lna_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txlpf_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_txlpf_dpd;
}

__STATIC_INLINE void rf_p0_cpu_en_txlpf_dpd_setf(uint8_t cpu_en_txlpf_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_txlpf_dpd = cpu_en_txlpf_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_txdac_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_txdac_dpd;
}

__STATIC_INLINE void rf_p0_cpu_en_txdac_dpd_setf(uint8_t cpu_en_txdac_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_txdac_dpd = cpu_en_txdac_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_pa_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_pa_dpd;
}

__STATIC_INLINE void rf_p0_cpu_en_pa_dpd_setf(uint8_t cpu_en_pa_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_pa_dpd = cpu_en_pa_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_en_tmx_dpd_getf(void)
{
    return hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_tmx_dpd;
}

__STATIC_INLINE void rf_p0_cpu_en_tmx_dpd_setf(uint8_t cpu_en_tmx_dpd)
{
    hwp_rf_p0->dpd_dc_mode_en_cfg.bit_field.cpu_en_tmx_dpd = cpu_en_tmx_dpd;
}

__STATIC_INLINE uint32_t rf_p0_pll_overflow_rpt_get(void)
{
    return hwp_rf_p0->pll_overflow_rpt.val;
}

__STATIC_INLINE void rf_p0_pll_overflow_rpt_unpack(uint16_t* rfpll_freq_of_rpt)
{
    T_RF_P0_PLL_OVERFLOW_RPT localVal = hwp_rf_p0->pll_overflow_rpt;

    *rfpll_freq_of_rpt = localVal.bit_field.rfpll_freq_of_rpt;
}

__STATIC_INLINE uint16_t rf_p0_rfpll_freq_of_rpt_getf(void)
{
    return hwp_rf_p0->pll_overflow_rpt.bit_field.rfpll_freq_of_rpt;
}

__STATIC_INLINE uint32_t rf_p0_pa_otd_protect_out_get(void)
{
    return hwp_rf_p0->pa_otd_protect_out.val;
}

__STATIC_INLINE void rf_p0_pa_otd_protect_out_set(uint32_t value)
{
    hwp_rf_p0->pa_otd_protect_out.val = value;
}

__STATIC_INLINE void rf_p0_pa_otd_protect_out_pack(uint8_t pa_otd_protect_out)
{
    hwp_rf_p0->pa_otd_protect_out.val = (((uint32_t)pa_otd_protect_out << 0));
}

__STATIC_INLINE uint32_t rf_p0_pa_otd_intr_clr_get(void)
{
    return hwp_rf_p0->pa_otd_intr_clr.val;
}

__STATIC_INLINE void rf_p0_pa_otd_intr_clr_set(uint32_t value)
{
    hwp_rf_p0->pa_otd_intr_clr.val = value;
}

__STATIC_INLINE void rf_p0_pa_otd_intr_clr_pack(uint8_t pa_otd_intr_clr)
{
    hwp_rf_p0->pa_otd_intr_clr.val = (((uint32_t)pa_otd_intr_clr << 0));
}

__STATIC_INLINE uint32_t rf_p0_iref_get(void)
{
    return hwp_rf_p0->iref.val;
}

__STATIC_INLINE void rf_p0_iref_set(uint32_t value)
{
    hwp_rf_p0->iref.val = value;
}

__STATIC_INLINE void rf_p0_iref_pack(uint8_t smd, uint8_t bg_therm_sense_en, uint8_t ivref_vbg_bit, uint8_t cpu_ivref_en)
{
    hwp_rf_p0->iref.val = (((uint32_t)smd << 5) | ((uint32_t)bg_therm_sense_en << 4) | ((uint32_t)ivref_vbg_bit << 1) | ((uint32_t)cpu_ivref_en << 0));
}

__STATIC_INLINE void rf_p0_iref_unpack(uint8_t* smd, uint8_t* bg_therm_sense_en, uint8_t* ivref_vbg_bit, uint8_t* cpu_ivref_en)
{
    T_RF_P0_IREF localVal = hwp_rf_p0->iref;

    *smd = localVal.bit_field.smd;
    *bg_therm_sense_en = localVal.bit_field.bg_therm_sense_en;
    *ivref_vbg_bit = localVal.bit_field.ivref_vbg_bit;
    *cpu_ivref_en = localVal.bit_field.cpu_ivref_en;
}

__STATIC_INLINE uint8_t rf_p0_smd_getf(void)
{
    return hwp_rf_p0->iref.bit_field.smd;
}

__STATIC_INLINE void rf_p0_smd_setf(uint8_t smd)
{
    hwp_rf_p0->iref.bit_field.smd = smd;
}

__STATIC_INLINE uint8_t rf_p0_bg_therm_sense_en_getf(void)
{
    return hwp_rf_p0->iref.bit_field.bg_therm_sense_en;
}

__STATIC_INLINE void rf_p0_bg_therm_sense_en_setf(uint8_t bg_therm_sense_en)
{
    hwp_rf_p0->iref.bit_field.bg_therm_sense_en = bg_therm_sense_en;
}

__STATIC_INLINE uint8_t rf_p0_ivref_vbg_bit_getf(void)
{
    return hwp_rf_p0->iref.bit_field.ivref_vbg_bit;
}

__STATIC_INLINE void rf_p0_ivref_vbg_bit_setf(uint8_t ivref_vbg_bit)
{
    hwp_rf_p0->iref.bit_field.ivref_vbg_bit = ivref_vbg_bit;
}

__STATIC_INLINE uint8_t rf_p0_cpu_ivref_en_getf(void)
{
    return hwp_rf_p0->iref.bit_field.cpu_ivref_en;
}

__STATIC_INLINE void rf_p0_cpu_ivref_en_setf(uint8_t cpu_ivref_en)
{
    hwp_rf_p0->iref.bit_field.cpu_ivref_en = cpu_ivref_en;
}

__STATIC_INLINE uint32_t rf_p0_xtal_40m_get(void)
{
    return hwp_rf_p0->xtal_40m.val;
}

__STATIC_INLINE void rf_p0_xtal_40m_set(uint32_t value)
{
    hwp_rf_p0->xtal_40m.val = value;
}

__STATIC_INLINE void rf_p0_xtal_40m_pack(uint8_t xtal40m_mdll_fref_en, uint8_t cpu_xtal40m_pll_fref_dr, uint8_t cpu_xtal40m_rfpll_fref_en, uint8_t cpu_syspll_dac_clk80m_dr, uint8_t cpu_syspll_dac_clk80m_en, uint8_t cpu_syspll_adc_clk80m_dr, uint8_t cpu_syspll_adc_clk80m_en)
{
    hwp_rf_p0->xtal_40m.val = (((uint32_t)xtal40m_mdll_fref_en << 6) | ((uint32_t)cpu_xtal40m_pll_fref_dr << 5) | ((uint32_t)cpu_xtal40m_rfpll_fref_en << 4) | ((uint32_t)cpu_syspll_dac_clk80m_dr << 3) | ((uint32_t)cpu_syspll_dac_clk80m_en << 2) | ((uint32_t)cpu_syspll_adc_clk80m_dr << 1) | ((uint32_t)cpu_syspll_adc_clk80m_en << 0));
}

__STATIC_INLINE void rf_p0_xtal_40m_unpack(uint8_t* xtal40m_mdll_fref_en, uint8_t* cpu_xtal40m_pll_fref_dr, uint8_t* cpu_xtal40m_rfpll_fref_en, uint8_t* cpu_syspll_dac_clk80m_dr, uint8_t* cpu_syspll_dac_clk80m_en, uint8_t* cpu_syspll_adc_clk80m_dr, uint8_t* cpu_syspll_adc_clk80m_en)
{
    T_RF_P0_XTAL_40M localVal = hwp_rf_p0->xtal_40m;

    *xtal40m_mdll_fref_en = localVal.bit_field.xtal40m_mdll_fref_en;
    *cpu_xtal40m_pll_fref_dr = localVal.bit_field.cpu_xtal40m_pll_fref_dr;
    *cpu_xtal40m_rfpll_fref_en = localVal.bit_field.cpu_xtal40m_rfpll_fref_en;
    *cpu_syspll_dac_clk80m_dr = localVal.bit_field.cpu_syspll_dac_clk80m_dr;
    *cpu_syspll_dac_clk80m_en = localVal.bit_field.cpu_syspll_dac_clk80m_en;
    *cpu_syspll_adc_clk80m_dr = localVal.bit_field.cpu_syspll_adc_clk80m_dr;
    *cpu_syspll_adc_clk80m_en = localVal.bit_field.cpu_syspll_adc_clk80m_en;
}

__STATIC_INLINE uint8_t rf_p0_xtal40m_mdll_fref_en_getf(void)
{
    return hwp_rf_p0->xtal_40m.bit_field.xtal40m_mdll_fref_en;
}

__STATIC_INLINE void rf_p0_xtal40m_mdll_fref_en_setf(uint8_t xtal40m_mdll_fref_en)
{
    hwp_rf_p0->xtal_40m.bit_field.xtal40m_mdll_fref_en = xtal40m_mdll_fref_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_xtal40m_pll_fref_dr_getf(void)
{
    return hwp_rf_p0->xtal_40m.bit_field.cpu_xtal40m_pll_fref_dr;
}

__STATIC_INLINE void rf_p0_cpu_xtal40m_pll_fref_dr_setf(uint8_t cpu_xtal40m_pll_fref_dr)
{
    hwp_rf_p0->xtal_40m.bit_field.cpu_xtal40m_pll_fref_dr = cpu_xtal40m_pll_fref_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_xtal40m_rfpll_fref_en_getf(void)
{
    return hwp_rf_p0->xtal_40m.bit_field.cpu_xtal40m_rfpll_fref_en;
}

__STATIC_INLINE void rf_p0_cpu_xtal40m_rfpll_fref_en_setf(uint8_t cpu_xtal40m_rfpll_fref_en)
{
    hwp_rf_p0->xtal_40m.bit_field.cpu_xtal40m_rfpll_fref_en = cpu_xtal40m_rfpll_fref_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_syspll_dac_clk80m_dr_getf(void)
{
    return hwp_rf_p0->xtal_40m.bit_field.cpu_syspll_dac_clk80m_dr;
}

__STATIC_INLINE void rf_p0_cpu_syspll_dac_clk80m_dr_setf(uint8_t cpu_syspll_dac_clk80m_dr)
{
    hwp_rf_p0->xtal_40m.bit_field.cpu_syspll_dac_clk80m_dr = cpu_syspll_dac_clk80m_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_syspll_dac_clk80m_en_getf(void)
{
    return hwp_rf_p0->xtal_40m.bit_field.cpu_syspll_dac_clk80m_en;
}

__STATIC_INLINE void rf_p0_cpu_syspll_dac_clk80m_en_setf(uint8_t cpu_syspll_dac_clk80m_en)
{
    hwp_rf_p0->xtal_40m.bit_field.cpu_syspll_dac_clk80m_en = cpu_syspll_dac_clk80m_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_syspll_adc_clk80m_dr_getf(void)
{
    return hwp_rf_p0->xtal_40m.bit_field.cpu_syspll_adc_clk80m_dr;
}

__STATIC_INLINE void rf_p0_cpu_syspll_adc_clk80m_dr_setf(uint8_t cpu_syspll_adc_clk80m_dr)
{
    hwp_rf_p0->xtal_40m.bit_field.cpu_syspll_adc_clk80m_dr = cpu_syspll_adc_clk80m_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_syspll_adc_clk80m_en_getf(void)
{
    return hwp_rf_p0->xtal_40m.bit_field.cpu_syspll_adc_clk80m_en;
}

__STATIC_INLINE void rf_p0_cpu_syspll_adc_clk80m_en_setf(uint8_t cpu_syspll_adc_clk80m_en)
{
    hwp_rf_p0->xtal_40m.bit_field.cpu_syspll_adc_clk80m_en = cpu_syspll_adc_clk80m_en;
}

__STATIC_INLINE uint32_t rf_p0_rf_dummy1_get(void)
{
    return hwp_rf_p0->rf_dummy1.val;
}

__STATIC_INLINE void rf_p0_rf_dummy1_set(uint32_t value)
{
    hwp_rf_p0->rf_dummy1.val = value;
}

__STATIC_INLINE void rf_p0_rf_dummy1_pack(uint16_t rf_dummy1)
{
    hwp_rf_p0->rf_dummy1.val = (((uint32_t)rf_dummy1 << 0));
}

__STATIC_INLINE void rf_p0_rf_dummy1_unpack(uint16_t* rf_dummy1)
{
    T_RF_P0_RF_DUMMY1 localVal = hwp_rf_p0->rf_dummy1;

    *rf_dummy1 = localVal.bit_field.rf_dummy1;
}

__STATIC_INLINE uint16_t rf_p0_rf_dummy1_getf(void)
{
    return hwp_rf_p0->rf_dummy1.bit_field.rf_dummy1;
}

__STATIC_INLINE void rf_p0_rf_dummy1_setf(uint16_t rf_dummy1)
{
    hwp_rf_p0->rf_dummy1.bit_field.rf_dummy1 = rf_dummy1;
}

__STATIC_INLINE uint32_t rf_p0_rf_dummy2_get(void)
{
    return hwp_rf_p0->rf_dummy2.val;
}

__STATIC_INLINE void rf_p0_rf_dummy2_set(uint32_t value)
{
    hwp_rf_p0->rf_dummy2.val = value;
}

__STATIC_INLINE void rf_p0_rf_dummy2_pack(uint16_t rf_dummy2)
{
    hwp_rf_p0->rf_dummy2.val = (((uint32_t)rf_dummy2 << 0));
}

__STATIC_INLINE void rf_p0_rf_dummy2_unpack(uint16_t* rf_dummy2)
{
    T_RF_P0_RF_DUMMY2 localVal = hwp_rf_p0->rf_dummy2;

    *rf_dummy2 = localVal.bit_field.rf_dummy2;
}

__STATIC_INLINE uint16_t rf_p0_rf_dummy2_getf(void)
{
    return hwp_rf_p0->rf_dummy2.bit_field.rf_dummy2;
}

__STATIC_INLINE void rf_p0_rf_dummy2_setf(uint16_t rf_dummy2)
{
    hwp_rf_p0->rf_dummy2.bit_field.rf_dummy2 = rf_dummy2;
}

__STATIC_INLINE uint32_t rf_p0_clk_32k_sel_get(void)
{
    return hwp_rf_p0->clk_32k_sel.val;
}

__STATIC_INLINE void rf_p0_clk_32k_sel_set(uint32_t value)
{
    hwp_rf_p0->clk_32k_sel.val = value;
}

__STATIC_INLINE void rf_p0_clk_32k_sel_pack(uint16_t rf_dummy3, uint8_t cpu_rco32k_sel)
{
    hwp_rf_p0->clk_32k_sel.val = (((uint32_t)rf_dummy3 << 1) | ((uint32_t)cpu_rco32k_sel << 0));
}

__STATIC_INLINE void rf_p0_clk_32k_sel_unpack(uint16_t* rf_dummy3, uint8_t* cpu_rco32k_sel)
{
    T_RF_P0_CLK_32K_SEL localVal = hwp_rf_p0->clk_32k_sel;

    *rf_dummy3 = localVal.bit_field.rf_dummy3;
    *cpu_rco32k_sel = localVal.bit_field.cpu_rco32k_sel;
}

__STATIC_INLINE uint16_t rf_p0_rf_dummy3_getf(void)
{
    return hwp_rf_p0->clk_32k_sel.bit_field.rf_dummy3;
}

__STATIC_INLINE void rf_p0_rf_dummy3_setf(uint16_t rf_dummy3)
{
    hwp_rf_p0->clk_32k_sel.bit_field.rf_dummy3 = rf_dummy3;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rco32k_sel_getf(void)
{
    return hwp_rf_p0->clk_32k_sel.bit_field.cpu_rco32k_sel;
}

__STATIC_INLINE void rf_p0_cpu_rco32k_sel_setf(uint8_t cpu_rco32k_sel)
{
    hwp_rf_p0->clk_32k_sel.bit_field.cpu_rco32k_sel = cpu_rco32k_sel;
}

__STATIC_INLINE uint32_t rf_p0_rf_dummy4_get(void)
{
    return hwp_rf_p0->rf_dummy4.val;
}

__STATIC_INLINE void rf_p0_rf_dummy4_set(uint32_t value)
{
    hwp_rf_p0->rf_dummy4.val = value;
}

__STATIC_INLINE void rf_p0_rf_dummy4_pack(uint16_t rf_dummy4)
{
    hwp_rf_p0->rf_dummy4.val = (((uint32_t)rf_dummy4 << 0));
}

__STATIC_INLINE void rf_p0_rf_dummy4_unpack(uint16_t* rf_dummy4)
{
    T_RF_P0_RF_DUMMY4 localVal = hwp_rf_p0->rf_dummy4;

    *rf_dummy4 = localVal.bit_field.rf_dummy4;
}

__STATIC_INLINE uint16_t rf_p0_rf_dummy4_getf(void)
{
    return hwp_rf_p0->rf_dummy4.bit_field.rf_dummy4;
}

__STATIC_INLINE void rf_p0_rf_dummy4_setf(uint16_t rf_dummy4)
{
    hwp_rf_p0->rf_dummy4.bit_field.rf_dummy4 = rf_dummy4;
}

__STATIC_INLINE uint32_t rf_p0_rco32k_cal_cfg_get(void)
{
    return hwp_rf_p0->rco32k_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_rco32k_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->rco32k_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rco32k_cal_cfg_pack(uint8_t cpu_rco32k_cal_value_sel, uint8_t cpu_rco32k_overtime, uint8_t cpu_rco32k_cal_direction, uint8_t cpu_rco32k_cnt_cycle)
{
    hwp_rf_p0->rco32k_cal_cfg.val = (((uint32_t)cpu_rco32k_cal_value_sel << 11) | ((uint32_t)cpu_rco32k_overtime << 9) | ((uint32_t)cpu_rco32k_cal_direction << 8) | ((uint32_t)cpu_rco32k_cnt_cycle << 1));
}

__STATIC_INLINE void rf_p0_rco32k_cal_cfg_unpack(uint8_t* cpu_rco32k_cal_value_sel, uint8_t* cpu_rco32k_overtime, uint8_t* cpu_rco32k_cal_direction, uint8_t* cpu_rco32k_cnt_cycle)
{
    T_RF_P0_RCO32K_CAL_CFG localVal = hwp_rf_p0->rco32k_cal_cfg;

    *cpu_rco32k_cal_value_sel = localVal.bit_field.cpu_rco32k_cal_value_sel;
    *cpu_rco32k_overtime = localVal.bit_field.cpu_rco32k_overtime;
    *cpu_rco32k_cal_direction = localVal.bit_field.cpu_rco32k_cal_direction;
    *cpu_rco32k_cnt_cycle = localVal.bit_field.cpu_rco32k_cnt_cycle;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rco32k_cal_value_sel_getf(void)
{
    return hwp_rf_p0->rco32k_cal_cfg.bit_field.cpu_rco32k_cal_value_sel;
}

__STATIC_INLINE void rf_p0_cpu_rco32k_cal_value_sel_setf(uint8_t cpu_rco32k_cal_value_sel)
{
    hwp_rf_p0->rco32k_cal_cfg.bit_field.cpu_rco32k_cal_value_sel = cpu_rco32k_cal_value_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rco32k_overtime_getf(void)
{
    return hwp_rf_p0->rco32k_cal_cfg.bit_field.cpu_rco32k_overtime;
}

__STATIC_INLINE void rf_p0_cpu_rco32k_overtime_setf(uint8_t cpu_rco32k_overtime)
{
    hwp_rf_p0->rco32k_cal_cfg.bit_field.cpu_rco32k_overtime = cpu_rco32k_overtime;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rco32k_cal_direction_getf(void)
{
    return hwp_rf_p0->rco32k_cal_cfg.bit_field.cpu_rco32k_cal_direction;
}

__STATIC_INLINE void rf_p0_cpu_rco32k_cal_direction_setf(uint8_t cpu_rco32k_cal_direction)
{
    hwp_rf_p0->rco32k_cal_cfg.bit_field.cpu_rco32k_cal_direction = cpu_rco32k_cal_direction;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rco32k_cnt_cycle_getf(void)
{
    return hwp_rf_p0->rco32k_cal_cfg.bit_field.cpu_rco32k_cnt_cycle;
}

__STATIC_INLINE void rf_p0_cpu_rco32k_cnt_cycle_setf(uint8_t cpu_rco32k_cnt_cycle)
{
    hwp_rf_p0->rco32k_cal_cfg.bit_field.cpu_rco32k_cnt_cycle = cpu_rco32k_cnt_cycle;
}

__STATIC_INLINE uint32_t rf_p0_rco32k_cal_cbit_cfg_get(void)
{
    return hwp_rf_p0->rco32k_cal_cbit_cfg.val;
}

__STATIC_INLINE void rf_p0_rco32k_cal_cbit_cfg_set(uint32_t value)
{
    hwp_rf_p0->rco32k_cal_cbit_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rco32k_cal_cbit_cfg_pack(uint8_t cpu_rco32k_cbit_dr, uint8_t cpu_rco32k_cbit)
{
    hwp_rf_p0->rco32k_cal_cbit_cfg.val = (((uint32_t)cpu_rco32k_cbit_dr << 5) | ((uint32_t)cpu_rco32k_cbit << 0));
}

__STATIC_INLINE void rf_p0_rco32k_cal_cbit_cfg_unpack(uint8_t* cpu_rco32k_cbit_dr, uint8_t* cpu_rco32k_cbit)
{
    T_RF_P0_RCO32K_CAL_CBIT_CFG localVal = hwp_rf_p0->rco32k_cal_cbit_cfg;

    *cpu_rco32k_cbit_dr = localVal.bit_field.cpu_rco32k_cbit_dr;
    *cpu_rco32k_cbit = localVal.bit_field.cpu_rco32k_cbit;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rco32k_cbit_dr_getf(void)
{
    return hwp_rf_p0->rco32k_cal_cbit_cfg.bit_field.cpu_rco32k_cbit_dr;
}

__STATIC_INLINE void rf_p0_cpu_rco32k_cbit_dr_setf(uint8_t cpu_rco32k_cbit_dr)
{
    hwp_rf_p0->rco32k_cal_cbit_cfg.bit_field.cpu_rco32k_cbit_dr = cpu_rco32k_cbit_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rco32k_cbit_getf(void)
{
    return hwp_rf_p0->rco32k_cal_cbit_cfg.bit_field.cpu_rco32k_cbit;
}

__STATIC_INLINE void rf_p0_cpu_rco32k_cbit_setf(uint8_t cpu_rco32k_cbit)
{
    hwp_rf_p0->rco32k_cal_cbit_cfg.bit_field.cpu_rco32k_cbit = cpu_rco32k_cbit;
}

__STATIC_INLINE uint32_t rf_p0_rco32k_cnt_low_rpt_get(void)
{
    return hwp_rf_p0->rco32k_cnt_low_rpt.val;
}

__STATIC_INLINE void rf_p0_rco32k_cnt_low_rpt_unpack(uint16_t* rco32k_cnt_low_rpt)
{
    T_RF_P0_RCO32K_CNT_LOW_RPT localVal = hwp_rf_p0->rco32k_cnt_low_rpt;

    *rco32k_cnt_low_rpt = localVal.bit_field.rco32k_cnt_low_rpt;
}

__STATIC_INLINE uint16_t rf_p0_rco32k_cnt_low_rpt_getf(void)
{
    return hwp_rf_p0->rco32k_cnt_low_rpt.bit_field.rco32k_cnt_low_rpt;
}

__STATIC_INLINE uint32_t rf_p0_rco32k_cnt_high_rpt_get(void)
{
    return hwp_rf_p0->rco32k_cnt_high_rpt.val;
}

__STATIC_INLINE void rf_p0_rco32k_cnt_high_rpt_unpack(uint8_t* rco32k_cnt_high_rpt)
{
    T_RF_P0_RCO32K_CNT_HIGH_RPT localVal = hwp_rf_p0->rco32k_cnt_high_rpt;

    *rco32k_cnt_high_rpt = localVal.bit_field.rco32k_cnt_high_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rco32k_cnt_high_rpt_getf(void)
{
    return hwp_rf_p0->rco32k_cnt_high_rpt.bit_field.rco32k_cnt_high_rpt;
}

__STATIC_INLINE uint32_t rf_p0_pll_sdm_cfg1_get(void)
{
    return hwp_rf_p0->pll_sdm_cfg1.val;
}

__STATIC_INLINE void rf_p0_pll_sdm_cfg1_set(uint32_t value)
{
    hwp_rf_p0->pll_sdm_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_pll_sdm_cfg1_pack(uint8_t rfpll_vco_vpk, uint8_t rfpll_refmulti2_en, uint8_t rfpll_sdm_clk_fbc_edge, uint8_t rfpll_sdm_int_dec_sel, uint8_t rfpll_sdm_dither_bypass)
{
    hwp_rf_p0->pll_sdm_cfg1.val = (((uint32_t)rfpll_vco_vpk << 6) | ((uint32_t)rfpll_refmulti2_en << 4) | ((uint32_t)rfpll_sdm_clk_fbc_edge << 3) | ((uint32_t)rfpll_sdm_int_dec_sel << 1) | ((uint32_t)rfpll_sdm_dither_bypass << 0));
}

__STATIC_INLINE void rf_p0_pll_sdm_cfg1_unpack(uint8_t* rfpll_vco_vpk, uint8_t* rfpll_refmulti2_en, uint8_t* rfpll_sdm_clk_fbc_edge, uint8_t* rfpll_sdm_int_dec_sel, uint8_t* rfpll_sdm_dither_bypass)
{
    T_RF_P0_PLL_SDM_CFG1 localVal = hwp_rf_p0->pll_sdm_cfg1;

    *rfpll_vco_vpk = localVal.bit_field.rfpll_vco_vpk;
    *rfpll_refmulti2_en = localVal.bit_field.rfpll_refmulti2_en;
    *rfpll_sdm_clk_fbc_edge = localVal.bit_field.rfpll_sdm_clk_fbc_edge;
    *rfpll_sdm_int_dec_sel = localVal.bit_field.rfpll_sdm_int_dec_sel;
    *rfpll_sdm_dither_bypass = localVal.bit_field.rfpll_sdm_dither_bypass;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_vpk_getf(void)
{
    return hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_vco_vpk;
}

__STATIC_INLINE void rf_p0_rfpll_vco_vpk_setf(uint8_t rfpll_vco_vpk)
{
    hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_vco_vpk = rfpll_vco_vpk;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_refmulti2_en_getf(void)
{
    return hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_refmulti2_en;
}

__STATIC_INLINE void rf_p0_rfpll_refmulti2_en_setf(uint8_t rfpll_refmulti2_en)
{
    hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_refmulti2_en = rfpll_refmulti2_en;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_sdm_clk_fbc_edge_getf(void)
{
    return hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_sdm_clk_fbc_edge;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_clk_fbc_edge_setf(uint8_t rfpll_sdm_clk_fbc_edge)
{
    hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_sdm_clk_fbc_edge = rfpll_sdm_clk_fbc_edge;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_sdm_int_dec_sel_getf(void)
{
    return hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_sdm_int_dec_sel;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_int_dec_sel_setf(uint8_t rfpll_sdm_int_dec_sel)
{
    hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_sdm_int_dec_sel = rfpll_sdm_int_dec_sel;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_sdm_dither_bypass_getf(void)
{
    return hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_sdm_dither_bypass;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_dither_bypass_setf(uint8_t rfpll_sdm_dither_bypass)
{
    hwp_rf_p0->pll_sdm_cfg1.bit_field.rfpll_sdm_dither_bypass = rfpll_sdm_dither_bypass;
}

__STATIC_INLINE uint32_t rf_p0_pll_sdm_cfg2_get(void)
{
    return hwp_rf_p0->pll_sdm_cfg2.val;
}

__STATIC_INLINE void rf_p0_pll_sdm_cfg2_set(uint32_t value)
{
    hwp_rf_p0->pll_sdm_cfg2.val = value;
}

__STATIC_INLINE void rf_p0_pll_sdm_cfg2_pack(uint8_t cpu_rfpll_sdm_stage_sel)
{
    hwp_rf_p0->pll_sdm_cfg2.val = (((uint32_t)cpu_rfpll_sdm_stage_sel << 0));
}

__STATIC_INLINE void rf_p0_pll_sdm_cfg2_unpack(uint8_t* cpu_rfpll_sdm_stage_sel)
{
    T_RF_P0_PLL_SDM_CFG2 localVal = hwp_rf_p0->pll_sdm_cfg2;

    *cpu_rfpll_sdm_stage_sel = localVal.bit_field.cpu_rfpll_sdm_stage_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_sdm_stage_sel_getf(void)
{
    return hwp_rf_p0->pll_sdm_cfg2.bit_field.cpu_rfpll_sdm_stage_sel;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_sdm_stage_sel_setf(uint8_t cpu_rfpll_sdm_stage_sel)
{
    hwp_rf_p0->pll_sdm_cfg2.bit_field.cpu_rfpll_sdm_stage_sel = cpu_rfpll_sdm_stage_sel;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cfg1_get(void)
{
    return hwp_rf_p0->rfpll_cfg1.val;
}

__STATIC_INLINE void rf_p0_rfpll_cfg1_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cfg1_pack(uint8_t rfpll_ldo_cp_vbit, uint8_t rfpll_ldo_digi_vbit, uint8_t rfpll_ldo_presc_vbit, uint8_t rfpll_ldo_vco_vbit)
{
    hwp_rf_p0->rfpll_cfg1.val = (((uint32_t)rfpll_ldo_cp_vbit << 12) | ((uint32_t)rfpll_ldo_digi_vbit << 8) | ((uint32_t)rfpll_ldo_presc_vbit << 4) | ((uint32_t)rfpll_ldo_vco_vbit << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cfg1_unpack(uint8_t* rfpll_ldo_cp_vbit, uint8_t* rfpll_ldo_digi_vbit, uint8_t* rfpll_ldo_presc_vbit, uint8_t* rfpll_ldo_vco_vbit)
{
    T_RF_P0_RFPLL_CFG1 localVal = hwp_rf_p0->rfpll_cfg1;

    *rfpll_ldo_cp_vbit = localVal.bit_field.rfpll_ldo_cp_vbit;
    *rfpll_ldo_digi_vbit = localVal.bit_field.rfpll_ldo_digi_vbit;
    *rfpll_ldo_presc_vbit = localVal.bit_field.rfpll_ldo_presc_vbit;
    *rfpll_ldo_vco_vbit = localVal.bit_field.rfpll_ldo_vco_vbit;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_ldo_cp_vbit_getf(void)
{
    return hwp_rf_p0->rfpll_cfg1.bit_field.rfpll_ldo_cp_vbit;
}

__STATIC_INLINE void rf_p0_rfpll_ldo_cp_vbit_setf(uint8_t rfpll_ldo_cp_vbit)
{
    hwp_rf_p0->rfpll_cfg1.bit_field.rfpll_ldo_cp_vbit = rfpll_ldo_cp_vbit;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_ldo_digi_vbit_getf(void)
{
    return hwp_rf_p0->rfpll_cfg1.bit_field.rfpll_ldo_digi_vbit;
}

__STATIC_INLINE void rf_p0_rfpll_ldo_digi_vbit_setf(uint8_t rfpll_ldo_digi_vbit)
{
    hwp_rf_p0->rfpll_cfg1.bit_field.rfpll_ldo_digi_vbit = rfpll_ldo_digi_vbit;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_ldo_presc_vbit_getf(void)
{
    return hwp_rf_p0->rfpll_cfg1.bit_field.rfpll_ldo_presc_vbit;
}

__STATIC_INLINE void rf_p0_rfpll_ldo_presc_vbit_setf(uint8_t rfpll_ldo_presc_vbit)
{
    hwp_rf_p0->rfpll_cfg1.bit_field.rfpll_ldo_presc_vbit = rfpll_ldo_presc_vbit;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_ldo_vco_vbit_getf(void)
{
    return hwp_rf_p0->rfpll_cfg1.bit_field.rfpll_ldo_vco_vbit;
}

__STATIC_INLINE void rf_p0_rfpll_ldo_vco_vbit_setf(uint8_t rfpll_ldo_vco_vbit)
{
    hwp_rf_p0->rfpll_cfg1.bit_field.rfpll_ldo_vco_vbit = rfpll_ldo_vco_vbit;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cfg2_get(void)
{
    return hwp_rf_p0->rfpll_cfg2.val;
}

__STATIC_INLINE void rf_p0_rfpll_cfg2_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cfg2.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cfg2_pack(uint8_t rfpll_cp_op_ibit, uint8_t rfpll_cp_ioffset, uint8_t cpu_rfpll_updn_enb, uint8_t rfpll_cp_delay, uint8_t rfpll_cp_ibit)
{
    hwp_rf_p0->rfpll_cfg2.val = (((uint32_t)rfpll_cp_op_ibit << 13) | ((uint32_t)rfpll_cp_ioffset << 7) | ((uint32_t)cpu_rfpll_updn_enb << 6) | ((uint32_t)rfpll_cp_delay << 4) | ((uint32_t)rfpll_cp_ibit << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cfg2_unpack(uint8_t* rfpll_cp_op_ibit, uint8_t* rfpll_cp_ioffset, uint8_t* cpu_rfpll_updn_enb, uint8_t* rfpll_cp_delay, uint8_t* rfpll_cp_ibit)
{
    T_RF_P0_RFPLL_CFG2 localVal = hwp_rf_p0->rfpll_cfg2;

    *rfpll_cp_op_ibit = localVal.bit_field.rfpll_cp_op_ibit;
    *rfpll_cp_ioffset = localVal.bit_field.rfpll_cp_ioffset;
    *cpu_rfpll_updn_enb = localVal.bit_field.cpu_rfpll_updn_enb;
    *rfpll_cp_delay = localVal.bit_field.rfpll_cp_delay;
    *rfpll_cp_ibit = localVal.bit_field.rfpll_cp_ibit;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_cp_op_ibit_getf(void)
{
    return hwp_rf_p0->rfpll_cfg2.bit_field.rfpll_cp_op_ibit;
}

__STATIC_INLINE void rf_p0_rfpll_cp_op_ibit_setf(uint8_t rfpll_cp_op_ibit)
{
    hwp_rf_p0->rfpll_cfg2.bit_field.rfpll_cp_op_ibit = rfpll_cp_op_ibit;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_cp_ioffset_getf(void)
{
    return hwp_rf_p0->rfpll_cfg2.bit_field.rfpll_cp_ioffset;
}

__STATIC_INLINE void rf_p0_rfpll_cp_ioffset_setf(uint8_t rfpll_cp_ioffset)
{
    hwp_rf_p0->rfpll_cfg2.bit_field.rfpll_cp_ioffset = rfpll_cp_ioffset;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_updn_enb_getf(void)
{
    return hwp_rf_p0->rfpll_cfg2.bit_field.cpu_rfpll_updn_enb;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_updn_enb_setf(uint8_t cpu_rfpll_updn_enb)
{
    hwp_rf_p0->rfpll_cfg2.bit_field.cpu_rfpll_updn_enb = cpu_rfpll_updn_enb;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_cp_delay_getf(void)
{
    return hwp_rf_p0->rfpll_cfg2.bit_field.rfpll_cp_delay;
}

__STATIC_INLINE void rf_p0_rfpll_cp_delay_setf(uint8_t rfpll_cp_delay)
{
    hwp_rf_p0->rfpll_cfg2.bit_field.rfpll_cp_delay = rfpll_cp_delay;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_cp_ibit_getf(void)
{
    return hwp_rf_p0->rfpll_cfg2.bit_field.rfpll_cp_ibit;
}

__STATIC_INLINE void rf_p0_rfpll_cp_ibit_setf(uint8_t rfpll_cp_ibit)
{
    hwp_rf_p0->rfpll_cfg2.bit_field.rfpll_cp_ibit = rfpll_cp_ibit;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cfg3_get(void)
{
    return hwp_rf_p0->rfpll_cfg3.val;
}

__STATIC_INLINE void rf_p0_rfpll_cfg3_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cfg3.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cfg3_pack(uint8_t rfpll_test_mode, uint8_t rfpll_vco_bp_lo_fb, uint8_t rfpll_vco_tc_en, uint8_t rfpll_fbc_sel, uint8_t rfpll_sdm_clk_sel, uint8_t rfpll_lpf_c2, uint8_t rfpll_lpf_r1, uint8_t rfpll_lpf_c0, uint8_t rfpll_lpf_open)
{
    hwp_rf_p0->rfpll_cfg3.val = (((uint32_t)rfpll_test_mode << 14) | ((uint32_t)rfpll_vco_bp_lo_fb << 13) | ((uint32_t)rfpll_vco_tc_en << 12) | ((uint32_t)rfpll_fbc_sel << 9) | ((uint32_t)rfpll_sdm_clk_sel << 8) | ((uint32_t)rfpll_lpf_c2 << 6) | ((uint32_t)rfpll_lpf_r1 << 3) | ((uint32_t)rfpll_lpf_c0 << 1) | ((uint32_t)rfpll_lpf_open << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cfg3_unpack(uint8_t* rfpll_test_mode, uint8_t* rfpll_vco_bp_lo_fb, uint8_t* rfpll_vco_tc_en, uint8_t* rfpll_fbc_sel, uint8_t* rfpll_sdm_clk_sel, uint8_t* rfpll_lpf_c2, uint8_t* rfpll_lpf_r1, uint8_t* rfpll_lpf_c0, uint8_t* rfpll_lpf_open)
{
    T_RF_P0_RFPLL_CFG3 localVal = hwp_rf_p0->rfpll_cfg3;

    *rfpll_test_mode = localVal.bit_field.rfpll_test_mode;
    *rfpll_vco_bp_lo_fb = localVal.bit_field.rfpll_vco_bp_lo_fb;
    *rfpll_vco_tc_en = localVal.bit_field.rfpll_vco_tc_en;
    *rfpll_fbc_sel = localVal.bit_field.rfpll_fbc_sel;
    *rfpll_sdm_clk_sel = localVal.bit_field.rfpll_sdm_clk_sel;
    *rfpll_lpf_c2 = localVal.bit_field.rfpll_lpf_c2;
    *rfpll_lpf_r1 = localVal.bit_field.rfpll_lpf_r1;
    *rfpll_lpf_c0 = localVal.bit_field.rfpll_lpf_c0;
    *rfpll_lpf_open = localVal.bit_field.rfpll_lpf_open;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_test_mode_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_test_mode;
}

__STATIC_INLINE void rf_p0_rfpll_test_mode_setf(uint8_t rfpll_test_mode)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_test_mode = rfpll_test_mode;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_bp_lo_fb_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_vco_bp_lo_fb;
}

__STATIC_INLINE void rf_p0_rfpll_vco_bp_lo_fb_setf(uint8_t rfpll_vco_bp_lo_fb)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_vco_bp_lo_fb = rfpll_vco_bp_lo_fb;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_tc_en_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_vco_tc_en;
}

__STATIC_INLINE void rf_p0_rfpll_vco_tc_en_setf(uint8_t rfpll_vco_tc_en)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_vco_tc_en = rfpll_vco_tc_en;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_fbc_sel_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_fbc_sel;
}

__STATIC_INLINE void rf_p0_rfpll_fbc_sel_setf(uint8_t rfpll_fbc_sel)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_fbc_sel = rfpll_fbc_sel;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_sdm_clk_sel_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_sdm_clk_sel;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_clk_sel_setf(uint8_t rfpll_sdm_clk_sel)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_sdm_clk_sel = rfpll_sdm_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_lpf_c2_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_lpf_c2;
}

__STATIC_INLINE void rf_p0_rfpll_lpf_c2_setf(uint8_t rfpll_lpf_c2)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_lpf_c2 = rfpll_lpf_c2;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_lpf_r1_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_lpf_r1;
}

__STATIC_INLINE void rf_p0_rfpll_lpf_r1_setf(uint8_t rfpll_lpf_r1)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_lpf_r1 = rfpll_lpf_r1;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_lpf_c0_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_lpf_c0;
}

__STATIC_INLINE void rf_p0_rfpll_lpf_c0_setf(uint8_t rfpll_lpf_c0)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_lpf_c0 = rfpll_lpf_c0;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_lpf_open_getf(void)
{
    return hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_lpf_open;
}

__STATIC_INLINE void rf_p0_rfpll_lpf_open_setf(uint8_t rfpll_lpf_open)
{
    hwp_rf_p0->rfpll_cfg3.bit_field.rfpll_lpf_open = rfpll_lpf_open;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cfg4_get(void)
{
    return hwp_rf_p0->rfpll_cfg4.val;
}

__STATIC_INLINE void rf_p0_rfpll_cfg4_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cfg4.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cfg4_pack(uint8_t rfpll_vco_tc_cbit, uint8_t pll_test_en, uint8_t rfpll_freq_sel, uint8_t cpu_rfpll_trx_lo_dr, uint8_t cpu_rfpll_tx_lo_en, uint8_t cpu_rfpll_rx_lo_en, uint8_t rfpll_calclk_sel, uint8_t rfpll_vco_div_bias, uint8_t rfpll_vco_div_hv, uint8_t rfpll_vco_div_vbit)
{
    hwp_rf_p0->rfpll_cfg4.val = (((uint32_t)rfpll_vco_tc_cbit << 13) | ((uint32_t)pll_test_en << 12) | ((uint32_t)rfpll_freq_sel << 11) | ((uint32_t)cpu_rfpll_trx_lo_dr << 10) | ((uint32_t)cpu_rfpll_tx_lo_en << 9) | ((uint32_t)cpu_rfpll_rx_lo_en << 8) | ((uint32_t)rfpll_calclk_sel << 7) | ((uint32_t)rfpll_vco_div_bias << 4) | ((uint32_t)rfpll_vco_div_hv << 3) | ((uint32_t)rfpll_vco_div_vbit << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cfg4_unpack(uint8_t* rfpll_vco_tc_cbit, uint8_t* pll_test_en, uint8_t* rfpll_freq_sel, uint8_t* cpu_rfpll_trx_lo_dr, uint8_t* cpu_rfpll_tx_lo_en, uint8_t* cpu_rfpll_rx_lo_en, uint8_t* rfpll_calclk_sel, uint8_t* rfpll_vco_div_bias, uint8_t* rfpll_vco_div_hv, uint8_t* rfpll_vco_div_vbit)
{
    T_RF_P0_RFPLL_CFG4 localVal = hwp_rf_p0->rfpll_cfg4;

    *rfpll_vco_tc_cbit = localVal.bit_field.rfpll_vco_tc_cbit;
    *pll_test_en = localVal.bit_field.pll_test_en;
    *rfpll_freq_sel = localVal.bit_field.rfpll_freq_sel;
    *cpu_rfpll_trx_lo_dr = localVal.bit_field.cpu_rfpll_trx_lo_dr;
    *cpu_rfpll_tx_lo_en = localVal.bit_field.cpu_rfpll_tx_lo_en;
    *cpu_rfpll_rx_lo_en = localVal.bit_field.cpu_rfpll_rx_lo_en;
    *rfpll_calclk_sel = localVal.bit_field.rfpll_calclk_sel;
    *rfpll_vco_div_bias = localVal.bit_field.rfpll_vco_div_bias;
    *rfpll_vco_div_hv = localVal.bit_field.rfpll_vco_div_hv;
    *rfpll_vco_div_vbit = localVal.bit_field.rfpll_vco_div_vbit;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_tc_cbit_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_vco_tc_cbit;
}

__STATIC_INLINE void rf_p0_rfpll_vco_tc_cbit_setf(uint8_t rfpll_vco_tc_cbit)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_vco_tc_cbit = rfpll_vco_tc_cbit;
}

__STATIC_INLINE uint8_t rf_p0_pll_test_en_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.pll_test_en;
}

__STATIC_INLINE void rf_p0_pll_test_en_setf(uint8_t pll_test_en)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.pll_test_en = pll_test_en;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_freq_sel_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_freq_sel;
}

__STATIC_INLINE void rf_p0_rfpll_freq_sel_setf(uint8_t rfpll_freq_sel)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_freq_sel = rfpll_freq_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_trx_lo_dr_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.cpu_rfpll_trx_lo_dr;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_trx_lo_dr_setf(uint8_t cpu_rfpll_trx_lo_dr)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.cpu_rfpll_trx_lo_dr = cpu_rfpll_trx_lo_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_tx_lo_en_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.cpu_rfpll_tx_lo_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_tx_lo_en_setf(uint8_t cpu_rfpll_tx_lo_en)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.cpu_rfpll_tx_lo_en = cpu_rfpll_tx_lo_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_rx_lo_en_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.cpu_rfpll_rx_lo_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_rx_lo_en_setf(uint8_t cpu_rfpll_rx_lo_en)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.cpu_rfpll_rx_lo_en = cpu_rfpll_rx_lo_en;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_calclk_sel_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_calclk_sel;
}

__STATIC_INLINE void rf_p0_rfpll_calclk_sel_setf(uint8_t rfpll_calclk_sel)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_calclk_sel = rfpll_calclk_sel;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_div_bias_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_vco_div_bias;
}

__STATIC_INLINE void rf_p0_rfpll_vco_div_bias_setf(uint8_t rfpll_vco_div_bias)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_vco_div_bias = rfpll_vco_div_bias;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_div_hv_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_vco_div_hv;
}

__STATIC_INLINE void rf_p0_rfpll_vco_div_hv_setf(uint8_t rfpll_vco_div_hv)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_vco_div_hv = rfpll_vco_div_hv;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_vco_div_vbit_getf(void)
{
    return hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_vco_div_vbit;
}

__STATIC_INLINE void rf_p0_rfpll_vco_div_vbit_setf(uint8_t rfpll_vco_div_vbit)
{
    hwp_rf_p0->rfpll_cfg4.bit_field.rfpll_vco_div_vbit = rfpll_vco_div_vbit;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cfg5_get(void)
{
    return hwp_rf_p0->rfpll_cfg5.val;
}

__STATIC_INLINE void rf_p0_rfpll_cfg5_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cfg5.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cfg5_pack(uint8_t cpu_rfpll_cal_delay, uint8_t cpu_rfpll_lock_boost_bp, uint8_t cpu_rfpll_lock_boost_t1, uint8_t cpu_rfpll_lock_boost_t2, uint8_t cpu_rfpll_sdm_rst_n, uint8_t cpu_rfpll_buf_value_sel, uint8_t cpu_auto_rfpll_vco_en, uint8_t cpu_auto_rfpll_lf_en, uint8_t cpu_auto_rfpll_presc_en)
{
    hwp_rf_p0->rfpll_cfg5.val = (((uint32_t)cpu_rfpll_cal_delay << 12) | ((uint32_t)cpu_rfpll_lock_boost_bp << 8) | ((uint32_t)cpu_rfpll_lock_boost_t1 << 7) | ((uint32_t)cpu_rfpll_lock_boost_t2 << 6) | ((uint32_t)cpu_rfpll_sdm_rst_n << 5) | ((uint32_t)cpu_rfpll_buf_value_sel << 3) | ((uint32_t)cpu_auto_rfpll_vco_en << 2) | ((uint32_t)cpu_auto_rfpll_lf_en << 1) | ((uint32_t)cpu_auto_rfpll_presc_en << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cfg5_unpack(uint8_t* cpu_rfpll_cal_delay, uint8_t* cpu_rfpll_lock_boost_bp, uint8_t* cpu_rfpll_lock_boost_t1, uint8_t* cpu_rfpll_lock_boost_t2, uint8_t* cpu_rfpll_sdm_rst_n, uint8_t* cpu_rfpll_buf_value_sel, uint8_t* cpu_auto_rfpll_vco_en, uint8_t* cpu_auto_rfpll_lf_en, uint8_t* cpu_auto_rfpll_presc_en)
{
    T_RF_P0_RFPLL_CFG5 localVal = hwp_rf_p0->rfpll_cfg5;

    *cpu_rfpll_cal_delay = localVal.bit_field.cpu_rfpll_cal_delay;
    *cpu_rfpll_lock_boost_bp = localVal.bit_field.cpu_rfpll_lock_boost_bp;
    *cpu_rfpll_lock_boost_t1 = localVal.bit_field.cpu_rfpll_lock_boost_t1;
    *cpu_rfpll_lock_boost_t2 = localVal.bit_field.cpu_rfpll_lock_boost_t2;
    *cpu_rfpll_sdm_rst_n = localVal.bit_field.cpu_rfpll_sdm_rst_n;
    *cpu_rfpll_buf_value_sel = localVal.bit_field.cpu_rfpll_buf_value_sel;
    *cpu_auto_rfpll_vco_en = localVal.bit_field.cpu_auto_rfpll_vco_en;
    *cpu_auto_rfpll_lf_en = localVal.bit_field.cpu_auto_rfpll_lf_en;
    *cpu_auto_rfpll_presc_en = localVal.bit_field.cpu_auto_rfpll_presc_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_cal_delay_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_cal_delay;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_cal_delay_setf(uint8_t cpu_rfpll_cal_delay)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_cal_delay = cpu_rfpll_cal_delay;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_lock_boost_bp_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_lock_boost_bp;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_lock_boost_bp_setf(uint8_t cpu_rfpll_lock_boost_bp)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_lock_boost_bp = cpu_rfpll_lock_boost_bp;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_lock_boost_t1_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_lock_boost_t1;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_lock_boost_t1_setf(uint8_t cpu_rfpll_lock_boost_t1)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_lock_boost_t1 = cpu_rfpll_lock_boost_t1;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_lock_boost_t2_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_lock_boost_t2;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_lock_boost_t2_setf(uint8_t cpu_rfpll_lock_boost_t2)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_lock_boost_t2 = cpu_rfpll_lock_boost_t2;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_sdm_rst_n_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_sdm_rst_n;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_sdm_rst_n_setf(uint8_t cpu_rfpll_sdm_rst_n)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_sdm_rst_n = cpu_rfpll_sdm_rst_n;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_buf_value_sel_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_buf_value_sel;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_buf_value_sel_setf(uint8_t cpu_rfpll_buf_value_sel)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_rfpll_buf_value_sel = cpu_rfpll_buf_value_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_auto_rfpll_vco_en_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_auto_rfpll_vco_en;
}

__STATIC_INLINE void rf_p0_cpu_auto_rfpll_vco_en_setf(uint8_t cpu_auto_rfpll_vco_en)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_auto_rfpll_vco_en = cpu_auto_rfpll_vco_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_auto_rfpll_lf_en_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_auto_rfpll_lf_en;
}

__STATIC_INLINE void rf_p0_cpu_auto_rfpll_lf_en_setf(uint8_t cpu_auto_rfpll_lf_en)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_auto_rfpll_lf_en = cpu_auto_rfpll_lf_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_auto_rfpll_presc_en_getf(void)
{
    return hwp_rf_p0->rfpll_cfg5.bit_field.cpu_auto_rfpll_presc_en;
}

__STATIC_INLINE void rf_p0_cpu_auto_rfpll_presc_en_setf(uint8_t cpu_auto_rfpll_presc_en)
{
    hwp_rf_p0->rfpll_cfg5.bit_field.cpu_auto_rfpll_presc_en = cpu_auto_rfpll_presc_en;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_sdm_freq_low_get(void)
{
    return hwp_rf_p0->rfpll_sdm_freq_low.val;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_freq_low_set(uint32_t value)
{
    hwp_rf_p0->rfpll_sdm_freq_low.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_freq_low_pack(uint16_t rfpll_sdm_freq_low)
{
    hwp_rf_p0->rfpll_sdm_freq_low.val = (((uint32_t)rfpll_sdm_freq_low << 0));
}

__STATIC_INLINE void rf_p0_rfpll_sdm_freq_low_unpack(uint16_t* rfpll_sdm_freq_low)
{
    T_RF_P0_RFPLL_SDM_FREQ_LOW localVal = hwp_rf_p0->rfpll_sdm_freq_low;

    *rfpll_sdm_freq_low = localVal.bit_field.rfpll_sdm_freq_low;
}

__STATIC_INLINE uint16_t rf_p0_rfpll_sdm_freq_low_getf(void)
{
    return hwp_rf_p0->rfpll_sdm_freq_low.bit_field.rfpll_sdm_freq_low;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_freq_low_setf(uint16_t rfpll_sdm_freq_low)
{
    hwp_rf_p0->rfpll_sdm_freq_low.bit_field.rfpll_sdm_freq_low = rfpll_sdm_freq_low;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_sdm_freq_high_get(void)
{
    return hwp_rf_p0->rfpll_sdm_freq_high.val;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_freq_high_set(uint32_t value)
{
    hwp_rf_p0->rfpll_sdm_freq_high.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_freq_high_pack(uint16_t rfpll_sdm_freq_high)
{
    hwp_rf_p0->rfpll_sdm_freq_high.val = (((uint32_t)rfpll_sdm_freq_high << 0));
}

__STATIC_INLINE void rf_p0_rfpll_sdm_freq_high_unpack(uint16_t* rfpll_sdm_freq_high)
{
    T_RF_P0_RFPLL_SDM_FREQ_HIGH localVal = hwp_rf_p0->rfpll_sdm_freq_high;

    *rfpll_sdm_freq_high = localVal.bit_field.rfpll_sdm_freq_high;
}

__STATIC_INLINE uint16_t rf_p0_rfpll_sdm_freq_high_getf(void)
{
    return hwp_rf_p0->rfpll_sdm_freq_high.bit_field.rfpll_sdm_freq_high;
}

__STATIC_INLINE void rf_p0_rfpll_sdm_freq_high_setf(uint16_t rfpll_sdm_freq_high)
{
    hwp_rf_p0->rfpll_sdm_freq_high.bit_field.rfpll_sdm_freq_high = rfpll_sdm_freq_high;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cal_cfg1_get(void)
{
    return hwp_rf_p0->rfpll_cal_cfg1.val;
}

__STATIC_INLINE void rf_p0_rfpll_cal_cfg1_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cal_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cal_cfg1_pack(uint8_t cpu_rfpll_cal_value_sel, uint8_t cpu_rfpll_overtime, uint8_t cpu_rfpll_cal_direction, uint16_t cpu_rfpll_cnt_cycle)
{
    hwp_rf_p0->rfpll_cal_cfg1.val = (((uint32_t)cpu_rfpll_cal_value_sel << 15) | ((uint32_t)cpu_rfpll_overtime << 13) | ((uint32_t)cpu_rfpll_cal_direction << 12) | ((uint32_t)cpu_rfpll_cnt_cycle << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cal_cfg1_unpack(uint8_t* cpu_rfpll_cal_value_sel, uint8_t* cpu_rfpll_overtime, uint8_t* cpu_rfpll_cal_direction, uint16_t* cpu_rfpll_cnt_cycle)
{
    T_RF_P0_RFPLL_CAL_CFG1 localVal = hwp_rf_p0->rfpll_cal_cfg1;

    *cpu_rfpll_cal_value_sel = localVal.bit_field.cpu_rfpll_cal_value_sel;
    *cpu_rfpll_overtime = localVal.bit_field.cpu_rfpll_overtime;
    *cpu_rfpll_cal_direction = localVal.bit_field.cpu_rfpll_cal_direction;
    *cpu_rfpll_cnt_cycle = localVal.bit_field.cpu_rfpll_cnt_cycle;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_cal_value_sel_getf(void)
{
    return hwp_rf_p0->rfpll_cal_cfg1.bit_field.cpu_rfpll_cal_value_sel;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_cal_value_sel_setf(uint8_t cpu_rfpll_cal_value_sel)
{
    hwp_rf_p0->rfpll_cal_cfg1.bit_field.cpu_rfpll_cal_value_sel = cpu_rfpll_cal_value_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_overtime_getf(void)
{
    return hwp_rf_p0->rfpll_cal_cfg1.bit_field.cpu_rfpll_overtime;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_overtime_setf(uint8_t cpu_rfpll_overtime)
{
    hwp_rf_p0->rfpll_cal_cfg1.bit_field.cpu_rfpll_overtime = cpu_rfpll_overtime;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_cal_direction_getf(void)
{
    return hwp_rf_p0->rfpll_cal_cfg1.bit_field.cpu_rfpll_cal_direction;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_cal_direction_setf(uint8_t cpu_rfpll_cal_direction)
{
    hwp_rf_p0->rfpll_cal_cfg1.bit_field.cpu_rfpll_cal_direction = cpu_rfpll_cal_direction;
}

__STATIC_INLINE uint16_t rf_p0_cpu_rfpll_cnt_cycle_getf(void)
{
    return hwp_rf_p0->rfpll_cal_cfg1.bit_field.cpu_rfpll_cnt_cycle;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_cnt_cycle_setf(uint16_t cpu_rfpll_cnt_cycle)
{
    hwp_rf_p0->rfpll_cal_cfg1.bit_field.cpu_rfpll_cnt_cycle = cpu_rfpll_cnt_cycle;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cal_cfg2_get(void)
{
    return hwp_rf_p0->rfpll_cal_cfg2.val;
}

__STATIC_INLINE void rf_p0_rfpll_cal_cfg2_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cal_cfg2.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cal_cfg2_pack(uint8_t cpu_rfpll_fine_cbit_set, uint8_t cpu_rfpll_min_bit_th, uint8_t cpu_rfpll_max_bit_th)
{
    hwp_rf_p0->rfpll_cal_cfg2.val = (((uint32_t)cpu_rfpll_fine_cbit_set << 10) | ((uint32_t)cpu_rfpll_min_bit_th << 5) | ((uint32_t)cpu_rfpll_max_bit_th << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cal_cfg2_unpack(uint8_t* cpu_rfpll_fine_cbit_set, uint8_t* cpu_rfpll_min_bit_th, uint8_t* cpu_rfpll_max_bit_th)
{
    T_RF_P0_RFPLL_CAL_CFG2 localVal = hwp_rf_p0->rfpll_cal_cfg2;

    *cpu_rfpll_fine_cbit_set = localVal.bit_field.cpu_rfpll_fine_cbit_set;
    *cpu_rfpll_min_bit_th = localVal.bit_field.cpu_rfpll_min_bit_th;
    *cpu_rfpll_max_bit_th = localVal.bit_field.cpu_rfpll_max_bit_th;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_fine_cbit_set_getf(void)
{
    return hwp_rf_p0->rfpll_cal_cfg2.bit_field.cpu_rfpll_fine_cbit_set;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_fine_cbit_set_setf(uint8_t cpu_rfpll_fine_cbit_set)
{
    hwp_rf_p0->rfpll_cal_cfg2.bit_field.cpu_rfpll_fine_cbit_set = cpu_rfpll_fine_cbit_set;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_min_bit_th_getf(void)
{
    return hwp_rf_p0->rfpll_cal_cfg2.bit_field.cpu_rfpll_min_bit_th;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_min_bit_th_setf(uint8_t cpu_rfpll_min_bit_th)
{
    hwp_rf_p0->rfpll_cal_cfg2.bit_field.cpu_rfpll_min_bit_th = cpu_rfpll_min_bit_th;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_max_bit_th_getf(void)
{
    return hwp_rf_p0->rfpll_cal_cfg2.bit_field.cpu_rfpll_max_bit_th;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_max_bit_th_setf(uint8_t cpu_rfpll_max_bit_th)
{
    hwp_rf_p0->rfpll_cal_cfg2.bit_field.cpu_rfpll_max_bit_th = cpu_rfpll_max_bit_th;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cbank_dr_1_get(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_1.val;
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_1_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cbank_dr_1.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_1_pack(uint8_t cpu_rfpll_cbank_p_half, uint8_t cpu_rfpll_cbank_p_quar, uint8_t cpu_rfpll_cbank_p_oct, uint8_t cpu_rfpll_vco_lower_freq, uint8_t cpu_rfpll_vco_corn_en, uint8_t cpu_rfpll_vco_capbank_dr)
{
    hwp_rf_p0->rfpll_cbank_dr_1.val = (((uint32_t)cpu_rfpll_cbank_p_half << 5) | ((uint32_t)cpu_rfpll_cbank_p_quar << 4) | ((uint32_t)cpu_rfpll_cbank_p_oct << 3) | ((uint32_t)cpu_rfpll_vco_lower_freq << 2) | ((uint32_t)cpu_rfpll_vco_corn_en << 1) | ((uint32_t)cpu_rfpll_vco_capbank_dr << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_1_unpack(uint8_t* cpu_rfpll_cbank_p_half, uint8_t* cpu_rfpll_cbank_p_quar, uint8_t* cpu_rfpll_cbank_p_oct, uint8_t* cpu_rfpll_vco_lower_freq, uint8_t* cpu_rfpll_vco_corn_en, uint8_t* cpu_rfpll_vco_capbank_dr)
{
    T_RF_P0_RFPLL_CBANK_DR_1 localVal = hwp_rf_p0->rfpll_cbank_dr_1;

    *cpu_rfpll_cbank_p_half = localVal.bit_field.cpu_rfpll_cbank_p_half;
    *cpu_rfpll_cbank_p_quar = localVal.bit_field.cpu_rfpll_cbank_p_quar;
    *cpu_rfpll_cbank_p_oct = localVal.bit_field.cpu_rfpll_cbank_p_oct;
    *cpu_rfpll_vco_lower_freq = localVal.bit_field.cpu_rfpll_vco_lower_freq;
    *cpu_rfpll_vco_corn_en = localVal.bit_field.cpu_rfpll_vco_corn_en;
    *cpu_rfpll_vco_capbank_dr = localVal.bit_field.cpu_rfpll_vco_capbank_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_cbank_p_half_getf(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_cbank_p_half;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_cbank_p_half_setf(uint8_t cpu_rfpll_cbank_p_half)
{
    hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_cbank_p_half = cpu_rfpll_cbank_p_half;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_cbank_p_quar_getf(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_cbank_p_quar;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_cbank_p_quar_setf(uint8_t cpu_rfpll_cbank_p_quar)
{
    hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_cbank_p_quar = cpu_rfpll_cbank_p_quar;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_cbank_p_oct_getf(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_cbank_p_oct;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_cbank_p_oct_setf(uint8_t cpu_rfpll_cbank_p_oct)
{
    hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_cbank_p_oct = cpu_rfpll_cbank_p_oct;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_vco_lower_freq_getf(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_vco_lower_freq;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_vco_lower_freq_setf(uint8_t cpu_rfpll_vco_lower_freq)
{
    hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_vco_lower_freq = cpu_rfpll_vco_lower_freq;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_vco_corn_en_getf(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_vco_corn_en;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_vco_corn_en_setf(uint8_t cpu_rfpll_vco_corn_en)
{
    hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_vco_corn_en = cpu_rfpll_vco_corn_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_vco_capbank_dr_getf(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_vco_capbank_dr;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_vco_capbank_dr_setf(uint8_t cpu_rfpll_vco_capbank_dr)
{
    hwp_rf_p0->rfpll_cbank_dr_1.bit_field.cpu_rfpll_vco_capbank_dr = cpu_rfpll_vco_capbank_dr;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cbank_dr_2_get(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_2.val;
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_2_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cbank_dr_2.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_2_pack(uint16_t cpu_rfpll_vco_capbank_p)
{
    hwp_rf_p0->rfpll_cbank_dr_2.val = (((uint32_t)cpu_rfpll_vco_capbank_p << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_2_unpack(uint16_t* cpu_rfpll_vco_capbank_p)
{
    T_RF_P0_RFPLL_CBANK_DR_2 localVal = hwp_rf_p0->rfpll_cbank_dr_2;

    *cpu_rfpll_vco_capbank_p = localVal.bit_field.cpu_rfpll_vco_capbank_p;
}

__STATIC_INLINE uint16_t rf_p0_cpu_rfpll_vco_capbank_p_getf(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_2.bit_field.cpu_rfpll_vco_capbank_p;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_vco_capbank_p_setf(uint16_t cpu_rfpll_vco_capbank_p)
{
    hwp_rf_p0->rfpll_cbank_dr_2.bit_field.cpu_rfpll_vco_capbank_p = cpu_rfpll_vco_capbank_p;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_cbank_dr_3_get(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_3.val;
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_3_set(uint32_t value)
{
    hwp_rf_p0->rfpll_cbank_dr_3.val = value;
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_3_pack(uint16_t cpu_rfpll_vco_capbank_n)
{
    hwp_rf_p0->rfpll_cbank_dr_3.val = (((uint32_t)cpu_rfpll_vco_capbank_n << 0));
}

__STATIC_INLINE void rf_p0_rfpll_cbank_dr_3_unpack(uint16_t* cpu_rfpll_vco_capbank_n)
{
    T_RF_P0_RFPLL_CBANK_DR_3 localVal = hwp_rf_p0->rfpll_cbank_dr_3;

    *cpu_rfpll_vco_capbank_n = localVal.bit_field.cpu_rfpll_vco_capbank_n;
}

__STATIC_INLINE uint16_t rf_p0_cpu_rfpll_vco_capbank_n_getf(void)
{
    return hwp_rf_p0->rfpll_cbank_dr_3.bit_field.cpu_rfpll_vco_capbank_n;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_vco_capbank_n_setf(uint16_t cpu_rfpll_vco_capbank_n)
{
    hwp_rf_p0->rfpll_cbank_dr_3.bit_field.cpu_rfpll_vco_capbank_n = cpu_rfpll_vco_capbank_n;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_rpt1_get(void)
{
    return hwp_rf_p0->rfpll_rpt1.val;
}

__STATIC_INLINE void rf_p0_rfpll_rpt1_unpack(uint16_t* rfpll_cnt_high)
{
    T_RF_P0_RFPLL_RPT1 localVal = hwp_rf_p0->rfpll_rpt1;

    *rfpll_cnt_high = localVal.bit_field.rfpll_cnt_high;
}

__STATIC_INLINE uint16_t rf_p0_rfpll_cnt_high_getf(void)
{
    return hwp_rf_p0->rfpll_rpt1.bit_field.rfpll_cnt_high;
}

__STATIC_INLINE uint32_t rf_p0_rfpll_rpt2_get(void)
{
    return hwp_rf_p0->rfpll_rpt2.val;
}

__STATIC_INLINE void rf_p0_rfpll_rpt2_unpack(uint8_t* rfpll_tx_lo_en_rpt, uint8_t* rfpll_rx_lo_en_rpt, uint8_t* rfpll_cnt_low, uint8_t* rfpll_lock)
{
    T_RF_P0_RFPLL_RPT2 localVal = hwp_rf_p0->rfpll_rpt2;

    *rfpll_tx_lo_en_rpt = localVal.bit_field.rfpll_tx_lo_en_rpt;
    *rfpll_rx_lo_en_rpt = localVal.bit_field.rfpll_rx_lo_en_rpt;
    *rfpll_cnt_low = localVal.bit_field.rfpll_cnt_low;
    *rfpll_lock = localVal.bit_field.rfpll_lock;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_tx_lo_en_rpt_getf(void)
{
    return hwp_rf_p0->rfpll_rpt2.bit_field.rfpll_tx_lo_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_rx_lo_en_rpt_getf(void)
{
    return hwp_rf_p0->rfpll_rpt2.bit_field.rfpll_rx_lo_en_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_cnt_low_getf(void)
{
    return hwp_rf_p0->rfpll_rpt2.bit_field.rfpll_cnt_low;
}

__STATIC_INLINE uint8_t rf_p0_rfpll_lock_getf(void)
{
    return hwp_rf_p0->rfpll_rpt2.bit_field.rfpll_lock;
}

__STATIC_INLINE uint32_t rf_p0_lna_cfg1_get(void)
{
    return hwp_rf_p0->lna_cfg1.val;
}

__STATIC_INLINE void rf_p0_lna_cfg1_set(uint32_t value)
{
    hwp_rf_p0->lna_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_lna_cfg1_pack(uint8_t cpu_lna_guard_ldo_dr, uint8_t cpu_lna_guard_ldo_en, uint8_t lna_bias_testen, uint8_t lna_2stage_vbit, uint8_t lna_ldo_testen, uint8_t lna_cs)
{
    hwp_rf_p0->lna_cfg1.val = (((uint32_t)cpu_lna_guard_ldo_dr << 10) | ((uint32_t)cpu_lna_guard_ldo_en << 9) | ((uint32_t)lna_bias_testen << 8) | ((uint32_t)lna_2stage_vbit << 5) | ((uint32_t)lna_ldo_testen << 4) | ((uint32_t)lna_cs << 0));
}

__STATIC_INLINE void rf_p0_lna_cfg1_unpack(uint8_t* cpu_lna_guard_ldo_dr, uint8_t* cpu_lna_guard_ldo_en, uint8_t* lna_bias_testen, uint8_t* lna_2stage_vbit, uint8_t* lna_ldo_testen, uint8_t* lna_cs)
{
    T_RF_P0_LNA_CFG1 localVal = hwp_rf_p0->lna_cfg1;

    *cpu_lna_guard_ldo_dr = localVal.bit_field.cpu_lna_guard_ldo_dr;
    *cpu_lna_guard_ldo_en = localVal.bit_field.cpu_lna_guard_ldo_en;
    *lna_bias_testen = localVal.bit_field.lna_bias_testen;
    *lna_2stage_vbit = localVal.bit_field.lna_2stage_vbit;
    *lna_ldo_testen = localVal.bit_field.lna_ldo_testen;
    *lna_cs = localVal.bit_field.lna_cs;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_guard_ldo_dr_getf(void)
{
    return hwp_rf_p0->lna_cfg1.bit_field.cpu_lna_guard_ldo_dr;
}

__STATIC_INLINE void rf_p0_cpu_lna_guard_ldo_dr_setf(uint8_t cpu_lna_guard_ldo_dr)
{
    hwp_rf_p0->lna_cfg1.bit_field.cpu_lna_guard_ldo_dr = cpu_lna_guard_ldo_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_guard_ldo_en_getf(void)
{
    return hwp_rf_p0->lna_cfg1.bit_field.cpu_lna_guard_ldo_en;
}

__STATIC_INLINE void rf_p0_cpu_lna_guard_ldo_en_setf(uint8_t cpu_lna_guard_ldo_en)
{
    hwp_rf_p0->lna_cfg1.bit_field.cpu_lna_guard_ldo_en = cpu_lna_guard_ldo_en;
}

__STATIC_INLINE uint8_t rf_p0_lna_bias_testen_getf(void)
{
    return hwp_rf_p0->lna_cfg1.bit_field.lna_bias_testen;
}

__STATIC_INLINE void rf_p0_lna_bias_testen_setf(uint8_t lna_bias_testen)
{
    hwp_rf_p0->lna_cfg1.bit_field.lna_bias_testen = lna_bias_testen;
}

__STATIC_INLINE uint8_t rf_p0_lna_2stage_vbit_getf(void)
{
    return hwp_rf_p0->lna_cfg1.bit_field.lna_2stage_vbit;
}

__STATIC_INLINE void rf_p0_lna_2stage_vbit_setf(uint8_t lna_2stage_vbit)
{
    hwp_rf_p0->lna_cfg1.bit_field.lna_2stage_vbit = lna_2stage_vbit;
}

__STATIC_INLINE uint8_t rf_p0_lna_ldo_testen_getf(void)
{
    return hwp_rf_p0->lna_cfg1.bit_field.lna_ldo_testen;
}

__STATIC_INLINE void rf_p0_lna_ldo_testen_setf(uint8_t lna_ldo_testen)
{
    hwp_rf_p0->lna_cfg1.bit_field.lna_ldo_testen = lna_ldo_testen;
}

__STATIC_INLINE uint8_t rf_p0_lna_cs_getf(void)
{
    return hwp_rf_p0->lna_cfg1.bit_field.lna_cs;
}

__STATIC_INLINE void rf_p0_lna_cs_setf(uint8_t lna_cs)
{
    hwp_rf_p0->lna_cfg1.bit_field.lna_cs = lna_cs;
}

__STATIC_INLINE uint32_t rf_p0_lna_cfg2_get(void)
{
    return hwp_rf_p0->lna_cfg2.val;
}

__STATIC_INLINE void rf_p0_lna_cfg2_set(uint32_t value)
{
    hwp_rf_p0->lna_cfg2.val = value;
}

__STATIC_INLINE void rf_p0_lna_cfg2_pack(uint8_t lna_cbn, uint8_t lna_cbp)
{
    hwp_rf_p0->lna_cfg2.val = (((uint32_t)lna_cbn << 4) | ((uint32_t)lna_cbp << 0));
}

__STATIC_INLINE void rf_p0_lna_cfg2_unpack(uint8_t* lna_cbn, uint8_t* lna_cbp)
{
    T_RF_P0_LNA_CFG2 localVal = hwp_rf_p0->lna_cfg2;

    *lna_cbn = localVal.bit_field.lna_cbn;
    *lna_cbp = localVal.bit_field.lna_cbp;
}

__STATIC_INLINE uint8_t rf_p0_lna_cbn_getf(void)
{
    return hwp_rf_p0->lna_cfg2.bit_field.lna_cbn;
}

__STATIC_INLINE void rf_p0_lna_cbn_setf(uint8_t lna_cbn)
{
    hwp_rf_p0->lna_cfg2.bit_field.lna_cbn = lna_cbn;
}

__STATIC_INLINE uint8_t rf_p0_lna_cbp_getf(void)
{
    return hwp_rf_p0->lna_cfg2.bit_field.lna_cbp;
}

__STATIC_INLINE void rf_p0_lna_cbp_setf(uint8_t lna_cbp)
{
    hwp_rf_p0->lna_cfg2.bit_field.lna_cbp = lna_cbp;
}

__STATIC_INLINE uint32_t rf_p0_lna_ldo_cfg_get(void)
{
    return hwp_rf_p0->lna_ldo_cfg.val;
}

__STATIC_INLINE void rf_p0_lna_ldo_cfg_set(uint32_t value)
{
    hwp_rf_p0->lna_ldo_cfg.val = value;
}

__STATIC_INLINE void rf_p0_lna_ldo_cfg_pack(uint8_t cpu_lna_ldo_cfg_vld, uint8_t cpu_lna_ldo_prechg_time, uint8_t cpu_lna_ldo_samp_time, uint8_t cpu_lna_clear, uint8_t cpu_lna_work, uint8_t cpu_lna_ldo_auto, uint8_t cpu_lna_ldo_st_sel)
{
    hwp_rf_p0->lna_ldo_cfg.val = (((uint32_t)cpu_lna_ldo_cfg_vld << 15) | ((uint32_t)cpu_lna_ldo_prechg_time << 8) | ((uint32_t)cpu_lna_ldo_samp_time << 4) | ((uint32_t)cpu_lna_clear << 3) | ((uint32_t)cpu_lna_work << 2) | ((uint32_t)cpu_lna_ldo_auto << 1) | ((uint32_t)cpu_lna_ldo_st_sel << 0));
}

__STATIC_INLINE void rf_p0_lna_ldo_cfg_unpack(uint8_t* cpu_lna_ldo_cfg_vld, uint8_t* cpu_lna_ldo_prechg_time, uint8_t* cpu_lna_ldo_samp_time, uint8_t* cpu_lna_clear, uint8_t* cpu_lna_work, uint8_t* cpu_lna_ldo_auto, uint8_t* cpu_lna_ldo_st_sel)
{
    T_RF_P0_LNA_LDO_CFG localVal = hwp_rf_p0->lna_ldo_cfg;

    *cpu_lna_ldo_cfg_vld = localVal.bit_field.cpu_lna_ldo_cfg_vld;
    *cpu_lna_ldo_prechg_time = localVal.bit_field.cpu_lna_ldo_prechg_time;
    *cpu_lna_ldo_samp_time = localVal.bit_field.cpu_lna_ldo_samp_time;
    *cpu_lna_clear = localVal.bit_field.cpu_lna_clear;
    *cpu_lna_work = localVal.bit_field.cpu_lna_work;
    *cpu_lna_ldo_auto = localVal.bit_field.cpu_lna_ldo_auto;
    *cpu_lna_ldo_st_sel = localVal.bit_field.cpu_lna_ldo_st_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_ldo_cfg_vld_getf(void)
{
    return hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_cfg_vld;
}

__STATIC_INLINE void rf_p0_cpu_lna_ldo_cfg_vld_setf(uint8_t cpu_lna_ldo_cfg_vld)
{
    hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_cfg_vld = cpu_lna_ldo_cfg_vld;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_ldo_prechg_time_getf(void)
{
    return hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_prechg_time;
}

__STATIC_INLINE void rf_p0_cpu_lna_ldo_prechg_time_setf(uint8_t cpu_lna_ldo_prechg_time)
{
    hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_prechg_time = cpu_lna_ldo_prechg_time;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_ldo_samp_time_getf(void)
{
    return hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_samp_time;
}

__STATIC_INLINE void rf_p0_cpu_lna_ldo_samp_time_setf(uint8_t cpu_lna_ldo_samp_time)
{
    hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_samp_time = cpu_lna_ldo_samp_time;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_clear_getf(void)
{
    return hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_clear;
}

__STATIC_INLINE void rf_p0_cpu_lna_clear_setf(uint8_t cpu_lna_clear)
{
    hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_clear = cpu_lna_clear;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_work_getf(void)
{
    return hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_work;
}

__STATIC_INLINE void rf_p0_cpu_lna_work_setf(uint8_t cpu_lna_work)
{
    hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_work = cpu_lna_work;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_ldo_auto_getf(void)
{
    return hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_auto;
}

__STATIC_INLINE void rf_p0_cpu_lna_ldo_auto_setf(uint8_t cpu_lna_ldo_auto)
{
    hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_auto = cpu_lna_ldo_auto;
}

__STATIC_INLINE uint8_t rf_p0_cpu_lna_ldo_st_sel_getf(void)
{
    return hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_st_sel;
}

__STATIC_INLINE void rf_p0_cpu_lna_ldo_st_sel_setf(uint8_t cpu_lna_ldo_st_sel)
{
    hwp_rf_p0->lna_ldo_cfg.bit_field.cpu_lna_ldo_st_sel = cpu_lna_ldo_st_sel;
}

__STATIC_INLINE uint32_t rf_p0_rmx_cfg1_get(void)
{
    return hwp_rf_p0->rmx_cfg1.val;
}

__STATIC_INLINE void rf_p0_rmx_cfg1_set(uint32_t value)
{
    hwp_rf_p0->rmx_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_rmx_cfg1_pack(uint8_t rmx_ldo_vbit, uint8_t rmx_ldo_testen, uint8_t rmx_op_ibit, uint8_t rmx_lobias_bit, uint8_t rmx_cal_range, uint8_t rmx_vlo_amp)
{
    hwp_rf_p0->rmx_cfg1.val = (((uint32_t)rmx_ldo_vbit << 13) | ((uint32_t)rmx_ldo_testen << 12) | ((uint32_t)rmx_op_ibit << 10) | ((uint32_t)rmx_lobias_bit << 6) | ((uint32_t)rmx_cal_range << 3) | ((uint32_t)rmx_vlo_amp << 0));
}

__STATIC_INLINE void rf_p0_rmx_cfg1_unpack(uint8_t* rmx_ldo_vbit, uint8_t* rmx_ldo_testen, uint8_t* rmx_op_ibit, uint8_t* rmx_lobias_bit, uint8_t* rmx_cal_range, uint8_t* rmx_vlo_amp)
{
    T_RF_P0_RMX_CFG1 localVal = hwp_rf_p0->rmx_cfg1;

    *rmx_ldo_vbit = localVal.bit_field.rmx_ldo_vbit;
    *rmx_ldo_testen = localVal.bit_field.rmx_ldo_testen;
    *rmx_op_ibit = localVal.bit_field.rmx_op_ibit;
    *rmx_lobias_bit = localVal.bit_field.rmx_lobias_bit;
    *rmx_cal_range = localVal.bit_field.rmx_cal_range;
    *rmx_vlo_amp = localVal.bit_field.rmx_vlo_amp;
}

__STATIC_INLINE uint8_t rf_p0_rmx_ldo_vbit_getf(void)
{
    return hwp_rf_p0->rmx_cfg1.bit_field.rmx_ldo_vbit;
}

__STATIC_INLINE void rf_p0_rmx_ldo_vbit_setf(uint8_t rmx_ldo_vbit)
{
    hwp_rf_p0->rmx_cfg1.bit_field.rmx_ldo_vbit = rmx_ldo_vbit;
}

__STATIC_INLINE uint8_t rf_p0_rmx_ldo_testen_getf(void)
{
    return hwp_rf_p0->rmx_cfg1.bit_field.rmx_ldo_testen;
}

__STATIC_INLINE void rf_p0_rmx_ldo_testen_setf(uint8_t rmx_ldo_testen)
{
    hwp_rf_p0->rmx_cfg1.bit_field.rmx_ldo_testen = rmx_ldo_testen;
}

__STATIC_INLINE uint8_t rf_p0_rmx_op_ibit_getf(void)
{
    return hwp_rf_p0->rmx_cfg1.bit_field.rmx_op_ibit;
}

__STATIC_INLINE void rf_p0_rmx_op_ibit_setf(uint8_t rmx_op_ibit)
{
    hwp_rf_p0->rmx_cfg1.bit_field.rmx_op_ibit = rmx_op_ibit;
}

__STATIC_INLINE uint8_t rf_p0_rmx_lobias_bit_getf(void)
{
    return hwp_rf_p0->rmx_cfg1.bit_field.rmx_lobias_bit;
}

__STATIC_INLINE void rf_p0_rmx_lobias_bit_setf(uint8_t rmx_lobias_bit)
{
    hwp_rf_p0->rmx_cfg1.bit_field.rmx_lobias_bit = rmx_lobias_bit;
}

__STATIC_INLINE uint8_t rf_p0_rmx_cal_range_getf(void)
{
    return hwp_rf_p0->rmx_cfg1.bit_field.rmx_cal_range;
}

__STATIC_INLINE void rf_p0_rmx_cal_range_setf(uint8_t rmx_cal_range)
{
    hwp_rf_p0->rmx_cfg1.bit_field.rmx_cal_range = rmx_cal_range;
}

__STATIC_INLINE uint8_t rf_p0_rmx_vlo_amp_getf(void)
{
    return hwp_rf_p0->rmx_cfg1.bit_field.rmx_vlo_amp;
}

__STATIC_INLINE void rf_p0_rmx_vlo_amp_setf(uint8_t rmx_vlo_amp)
{
    hwp_rf_p0->rmx_cfg1.bit_field.rmx_vlo_amp = rmx_vlo_amp;
}

__STATIC_INLINE uint32_t rf_p0_rmx_pkd_cfg_get(void)
{
    return hwp_rf_p0->rmx_pkd_cfg.val;
}

__STATIC_INLINE void rf_p0_rmx_pkd_cfg_set(uint32_t value)
{
    hwp_rf_p0->rmx_pkd_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rmx_pkd_cfg_pack(uint8_t rmx_pkd_vbit, uint8_t cpu_rmx_pkd_reset, uint8_t cpu_rmx_pkd_en)
{
    hwp_rf_p0->rmx_pkd_cfg.val = (((uint32_t)rmx_pkd_vbit << 4) | ((uint32_t)cpu_rmx_pkd_reset << 1) | ((uint32_t)cpu_rmx_pkd_en << 0));
}

__STATIC_INLINE void rf_p0_rmx_pkd_cfg_unpack(uint8_t* rmx_pkd_vbit, uint8_t* cpu_rmx_pkd_reset, uint8_t* cpu_rmx_pkd_en)
{
    T_RF_P0_RMX_PKD_CFG localVal = hwp_rf_p0->rmx_pkd_cfg;

    *rmx_pkd_vbit = localVal.bit_field.rmx_pkd_vbit;
    *cpu_rmx_pkd_reset = localVal.bit_field.cpu_rmx_pkd_reset;
    *cpu_rmx_pkd_en = localVal.bit_field.cpu_rmx_pkd_en;
}

__STATIC_INLINE uint8_t rf_p0_rmx_pkd_vbit_getf(void)
{
    return hwp_rf_p0->rmx_pkd_cfg.bit_field.rmx_pkd_vbit;
}

__STATIC_INLINE void rf_p0_rmx_pkd_vbit_setf(uint8_t rmx_pkd_vbit)
{
    hwp_rf_p0->rmx_pkd_cfg.bit_field.rmx_pkd_vbit = rmx_pkd_vbit;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_pkd_reset_getf(void)
{
    return hwp_rf_p0->rmx_pkd_cfg.bit_field.cpu_rmx_pkd_reset;
}

__STATIC_INLINE void rf_p0_cpu_rmx_pkd_reset_setf(uint8_t cpu_rmx_pkd_reset)
{
    hwp_rf_p0->rmx_pkd_cfg.bit_field.cpu_rmx_pkd_reset = cpu_rmx_pkd_reset;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_pkd_en_getf(void)
{
    return hwp_rf_p0->rmx_pkd_cfg.bit_field.cpu_rmx_pkd_en;
}

__STATIC_INLINE void rf_p0_cpu_rmx_pkd_en_setf(uint8_t cpu_rmx_pkd_en)
{
    hwp_rf_p0->rmx_pkd_cfg.bit_field.cpu_rmx_pkd_en = cpu_rmx_pkd_en;
}

__STATIC_INLINE uint32_t rf_p0_rmx_cal_cfg_get(void)
{
    return hwp_rf_p0->rmx_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_rmx_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->rmx_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rmx_cal_cfg_pack(uint8_t rmx_cal_gain, uint8_t cpu_rmx_cal_value_sel_q, uint8_t cpu_rmx_overtime_q, uint8_t cpu_rmx_cal_direction_q, uint8_t cpu_rmx_cal_alg_sel, uint8_t cpu_rmx_cal_clk_sel, uint8_t cpu_rmx_cal_value_sel_i, uint8_t cpu_rmx_overtime_i, uint8_t cpu_rmx_cal_direction_i)
{
    hwp_rf_p0->rmx_cal_cfg.val = (((uint32_t)rmx_cal_gain << 12) | ((uint32_t)cpu_rmx_cal_value_sel_q << 11) | ((uint32_t)cpu_rmx_overtime_q << 9) | ((uint32_t)cpu_rmx_cal_direction_q << 8) | ((uint32_t)cpu_rmx_cal_alg_sel << 6) | ((uint32_t)cpu_rmx_cal_clk_sel << 4) | ((uint32_t)cpu_rmx_cal_value_sel_i << 3) | ((uint32_t)cpu_rmx_overtime_i << 1) | ((uint32_t)cpu_rmx_cal_direction_i << 0));
}

__STATIC_INLINE void rf_p0_rmx_cal_cfg_unpack(uint8_t* rmx_cal_gain, uint8_t* cpu_rmx_cal_value_sel_q, uint8_t* cpu_rmx_overtime_q, uint8_t* cpu_rmx_cal_direction_q, uint8_t* cpu_rmx_cal_alg_sel, uint8_t* cpu_rmx_cal_clk_sel, uint8_t* cpu_rmx_cal_value_sel_i, uint8_t* cpu_rmx_overtime_i, uint8_t* cpu_rmx_cal_direction_i)
{
    T_RF_P0_RMX_CAL_CFG localVal = hwp_rf_p0->rmx_cal_cfg;

    *rmx_cal_gain = localVal.bit_field.rmx_cal_gain;
    *cpu_rmx_cal_value_sel_q = localVal.bit_field.cpu_rmx_cal_value_sel_q;
    *cpu_rmx_overtime_q = localVal.bit_field.cpu_rmx_overtime_q;
    *cpu_rmx_cal_direction_q = localVal.bit_field.cpu_rmx_cal_direction_q;
    *cpu_rmx_cal_alg_sel = localVal.bit_field.cpu_rmx_cal_alg_sel;
    *cpu_rmx_cal_clk_sel = localVal.bit_field.cpu_rmx_cal_clk_sel;
    *cpu_rmx_cal_value_sel_i = localVal.bit_field.cpu_rmx_cal_value_sel_i;
    *cpu_rmx_overtime_i = localVal.bit_field.cpu_rmx_overtime_i;
    *cpu_rmx_cal_direction_i = localVal.bit_field.cpu_rmx_cal_direction_i;
}

__STATIC_INLINE uint8_t rf_p0_rmx_cal_gain_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.rmx_cal_gain;
}

__STATIC_INLINE void rf_p0_rmx_cal_gain_setf(uint8_t rmx_cal_gain)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.rmx_cal_gain = rmx_cal_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_cal_value_sel_q_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_value_sel_q;
}

__STATIC_INLINE void rf_p0_cpu_rmx_cal_value_sel_q_setf(uint8_t cpu_rmx_cal_value_sel_q)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_value_sel_q = cpu_rmx_cal_value_sel_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_overtime_q_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_overtime_q;
}

__STATIC_INLINE void rf_p0_cpu_rmx_overtime_q_setf(uint8_t cpu_rmx_overtime_q)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_overtime_q = cpu_rmx_overtime_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_cal_direction_q_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_direction_q;
}

__STATIC_INLINE void rf_p0_cpu_rmx_cal_direction_q_setf(uint8_t cpu_rmx_cal_direction_q)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_direction_q = cpu_rmx_cal_direction_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_cal_alg_sel_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_alg_sel;
}

__STATIC_INLINE void rf_p0_cpu_rmx_cal_alg_sel_setf(uint8_t cpu_rmx_cal_alg_sel)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_alg_sel = cpu_rmx_cal_alg_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_cal_clk_sel_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_rmx_cal_clk_sel_setf(uint8_t cpu_rmx_cal_clk_sel)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_clk_sel = cpu_rmx_cal_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_cal_value_sel_i_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_value_sel_i;
}

__STATIC_INLINE void rf_p0_cpu_rmx_cal_value_sel_i_setf(uint8_t cpu_rmx_cal_value_sel_i)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_value_sel_i = cpu_rmx_cal_value_sel_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_overtime_i_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_overtime_i;
}

__STATIC_INLINE void rf_p0_cpu_rmx_overtime_i_setf(uint8_t cpu_rmx_overtime_i)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_overtime_i = cpu_rmx_overtime_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rmx_cal_direction_i_getf(void)
{
    return hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_direction_i;
}

__STATIC_INLINE void rf_p0_cpu_rmx_cal_direction_i_setf(uint8_t cpu_rmx_cal_direction_i)
{
    hwp_rf_p0->rmx_cal_cfg.bit_field.cpu_rmx_cal_direction_i = cpu_rmx_cal_direction_i;
}

__STATIC_INLINE uint32_t rf_p0_rx_dpd_cal_cfg_get(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_rx_dpd_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->rx_dpd_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rx_dpd_cal_cfg_pack(uint8_t cpu_rx_dpd_cal_value_sel_q, uint8_t cpu_rx_dpd_overtime_q, uint8_t cpu_rx_dpd_cal_direction_q, uint8_t cpu_rx_dpd_cal_alg_sel, uint8_t cpu_rx_dpd_cal_clk_sel, uint8_t cpu_rx_dpd_cal_value_sel_i, uint8_t cpu_rx_dpd_overtime_i, uint8_t cpu_rx_dpd_cal_direction_i)
{
    hwp_rf_p0->rx_dpd_cal_cfg.val = (((uint32_t)cpu_rx_dpd_cal_value_sel_q << 11) | ((uint32_t)cpu_rx_dpd_overtime_q << 9) | ((uint32_t)cpu_rx_dpd_cal_direction_q << 8) | ((uint32_t)cpu_rx_dpd_cal_alg_sel << 6) | ((uint32_t)cpu_rx_dpd_cal_clk_sel << 4) | ((uint32_t)cpu_rx_dpd_cal_value_sel_i << 3) | ((uint32_t)cpu_rx_dpd_overtime_i << 1) | ((uint32_t)cpu_rx_dpd_cal_direction_i << 0));
}

__STATIC_INLINE void rf_p0_rx_dpd_cal_cfg_unpack(uint8_t* cpu_rx_dpd_cal_value_sel_q, uint8_t* cpu_rx_dpd_overtime_q, uint8_t* cpu_rx_dpd_cal_direction_q, uint8_t* cpu_rx_dpd_cal_alg_sel, uint8_t* cpu_rx_dpd_cal_clk_sel, uint8_t* cpu_rx_dpd_cal_value_sel_i, uint8_t* cpu_rx_dpd_overtime_i, uint8_t* cpu_rx_dpd_cal_direction_i)
{
    T_RF_P0_RX_DPD_CAL_CFG localVal = hwp_rf_p0->rx_dpd_cal_cfg;

    *cpu_rx_dpd_cal_value_sel_q = localVal.bit_field.cpu_rx_dpd_cal_value_sel_q;
    *cpu_rx_dpd_overtime_q = localVal.bit_field.cpu_rx_dpd_overtime_q;
    *cpu_rx_dpd_cal_direction_q = localVal.bit_field.cpu_rx_dpd_cal_direction_q;
    *cpu_rx_dpd_cal_alg_sel = localVal.bit_field.cpu_rx_dpd_cal_alg_sel;
    *cpu_rx_dpd_cal_clk_sel = localVal.bit_field.cpu_rx_dpd_cal_clk_sel;
    *cpu_rx_dpd_cal_value_sel_i = localVal.bit_field.cpu_rx_dpd_cal_value_sel_i;
    *cpu_rx_dpd_overtime_i = localVal.bit_field.cpu_rx_dpd_overtime_i;
    *cpu_rx_dpd_cal_direction_i = localVal.bit_field.cpu_rx_dpd_cal_direction_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_dpd_cal_value_sel_q_getf(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_value_sel_q;
}

__STATIC_INLINE void rf_p0_cpu_rx_dpd_cal_value_sel_q_setf(uint8_t cpu_rx_dpd_cal_value_sel_q)
{
    hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_value_sel_q = cpu_rx_dpd_cal_value_sel_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_dpd_overtime_q_getf(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_overtime_q;
}

__STATIC_INLINE void rf_p0_cpu_rx_dpd_overtime_q_setf(uint8_t cpu_rx_dpd_overtime_q)
{
    hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_overtime_q = cpu_rx_dpd_overtime_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_dpd_cal_direction_q_getf(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_direction_q;
}

__STATIC_INLINE void rf_p0_cpu_rx_dpd_cal_direction_q_setf(uint8_t cpu_rx_dpd_cal_direction_q)
{
    hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_direction_q = cpu_rx_dpd_cal_direction_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_dpd_cal_alg_sel_getf(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_alg_sel;
}

__STATIC_INLINE void rf_p0_cpu_rx_dpd_cal_alg_sel_setf(uint8_t cpu_rx_dpd_cal_alg_sel)
{
    hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_alg_sel = cpu_rx_dpd_cal_alg_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_dpd_cal_clk_sel_getf(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_rx_dpd_cal_clk_sel_setf(uint8_t cpu_rx_dpd_cal_clk_sel)
{
    hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_clk_sel = cpu_rx_dpd_cal_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_dpd_cal_value_sel_i_getf(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_value_sel_i;
}

__STATIC_INLINE void rf_p0_cpu_rx_dpd_cal_value_sel_i_setf(uint8_t cpu_rx_dpd_cal_value_sel_i)
{
    hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_value_sel_i = cpu_rx_dpd_cal_value_sel_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_dpd_overtime_i_getf(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_overtime_i;
}

__STATIC_INLINE void rf_p0_cpu_rx_dpd_overtime_i_setf(uint8_t cpu_rx_dpd_overtime_i)
{
    hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_overtime_i = cpu_rx_dpd_overtime_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_dpd_cal_direction_i_getf(void)
{
    return hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_direction_i;
}

__STATIC_INLINE void rf_p0_cpu_rx_dpd_cal_direction_i_setf(uint8_t cpu_rx_dpd_cal_direction_i)
{
    hwp_rf_p0->rx_dpd_cal_cfg.bit_field.cpu_rx_dpd_cal_direction_i = cpu_rx_dpd_cal_direction_i;
}

__STATIC_INLINE uint32_t rf_p0_rximg_cal_cfg_get(void)
{
    return hwp_rf_p0->rximg_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_rximg_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->rximg_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rximg_cal_cfg_pack(uint8_t cpu_rx_img_cal_value_sel_q, uint8_t cpu_rx_img_overtime_q, uint8_t cpu_rx_img_cal_direction_q, uint8_t cpu_rx_img_cal_alg_sel, uint8_t cpu_rx_img_cal_clk_sel, uint8_t cpu_rx_img_cal_value_sel_i, uint8_t cpu_rx_img_overtime_i, uint8_t cpu_rx_img_cal_direction_i)
{
    hwp_rf_p0->rximg_cal_cfg.val = (((uint32_t)cpu_rx_img_cal_value_sel_q << 11) | ((uint32_t)cpu_rx_img_overtime_q << 9) | ((uint32_t)cpu_rx_img_cal_direction_q << 8) | ((uint32_t)cpu_rx_img_cal_alg_sel << 6) | ((uint32_t)cpu_rx_img_cal_clk_sel << 4) | ((uint32_t)cpu_rx_img_cal_value_sel_i << 3) | ((uint32_t)cpu_rx_img_overtime_i << 1) | ((uint32_t)cpu_rx_img_cal_direction_i << 0));
}

__STATIC_INLINE void rf_p0_rximg_cal_cfg_unpack(uint8_t* cpu_rx_img_cal_value_sel_q, uint8_t* cpu_rx_img_overtime_q, uint8_t* cpu_rx_img_cal_direction_q, uint8_t* cpu_rx_img_cal_alg_sel, uint8_t* cpu_rx_img_cal_clk_sel, uint8_t* cpu_rx_img_cal_value_sel_i, uint8_t* cpu_rx_img_overtime_i, uint8_t* cpu_rx_img_cal_direction_i)
{
    T_RF_P0_RXIMG_CAL_CFG localVal = hwp_rf_p0->rximg_cal_cfg;

    *cpu_rx_img_cal_value_sel_q = localVal.bit_field.cpu_rx_img_cal_value_sel_q;
    *cpu_rx_img_overtime_q = localVal.bit_field.cpu_rx_img_overtime_q;
    *cpu_rx_img_cal_direction_q = localVal.bit_field.cpu_rx_img_cal_direction_q;
    *cpu_rx_img_cal_alg_sel = localVal.bit_field.cpu_rx_img_cal_alg_sel;
    *cpu_rx_img_cal_clk_sel = localVal.bit_field.cpu_rx_img_cal_clk_sel;
    *cpu_rx_img_cal_value_sel_i = localVal.bit_field.cpu_rx_img_cal_value_sel_i;
    *cpu_rx_img_overtime_i = localVal.bit_field.cpu_rx_img_overtime_i;
    *cpu_rx_img_cal_direction_i = localVal.bit_field.cpu_rx_img_cal_direction_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_img_cal_value_sel_q_getf(void)
{
    return hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_value_sel_q;
}

__STATIC_INLINE void rf_p0_cpu_rx_img_cal_value_sel_q_setf(uint8_t cpu_rx_img_cal_value_sel_q)
{
    hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_value_sel_q = cpu_rx_img_cal_value_sel_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_img_overtime_q_getf(void)
{
    return hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_overtime_q;
}

__STATIC_INLINE void rf_p0_cpu_rx_img_overtime_q_setf(uint8_t cpu_rx_img_overtime_q)
{
    hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_overtime_q = cpu_rx_img_overtime_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_img_cal_direction_q_getf(void)
{
    return hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_direction_q;
}

__STATIC_INLINE void rf_p0_cpu_rx_img_cal_direction_q_setf(uint8_t cpu_rx_img_cal_direction_q)
{
    hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_direction_q = cpu_rx_img_cal_direction_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_img_cal_alg_sel_getf(void)
{
    return hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_alg_sel;
}

__STATIC_INLINE void rf_p0_cpu_rx_img_cal_alg_sel_setf(uint8_t cpu_rx_img_cal_alg_sel)
{
    hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_alg_sel = cpu_rx_img_cal_alg_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_img_cal_clk_sel_getf(void)
{
    return hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_rx_img_cal_clk_sel_setf(uint8_t cpu_rx_img_cal_clk_sel)
{
    hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_clk_sel = cpu_rx_img_cal_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_img_cal_value_sel_i_getf(void)
{
    return hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_value_sel_i;
}

__STATIC_INLINE void rf_p0_cpu_rx_img_cal_value_sel_i_setf(uint8_t cpu_rx_img_cal_value_sel_i)
{
    hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_value_sel_i = cpu_rx_img_cal_value_sel_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_img_overtime_i_getf(void)
{
    return hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_overtime_i;
}

__STATIC_INLINE void rf_p0_cpu_rx_img_overtime_i_setf(uint8_t cpu_rx_img_overtime_i)
{
    hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_overtime_i = cpu_rx_img_overtime_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rx_img_cal_direction_i_getf(void)
{
    return hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_direction_i;
}

__STATIC_INLINE void rf_p0_cpu_rx_img_cal_direction_i_setf(uint8_t cpu_rx_img_cal_direction_i)
{
    hwp_rf_p0->rximg_cal_cfg.bit_field.cpu_rx_img_cal_direction_i = cpu_rx_img_cal_direction_i;
}

__STATIC_INLINE uint32_t rf_p0_cal_rmx_i_dr_get(void)
{
    return hwp_rf_p0->cal_rmx_i_dr.val;
}

__STATIC_INLINE void rf_p0_cal_rmx_i_dr_set(uint32_t value)
{
    hwp_rf_p0->cal_rmx_i_dr.val = value;
}

__STATIC_INLINE void rf_p0_cal_rmx_i_dr_pack(uint8_t cpu_cal_rmx_i_dr, uint8_t cpu_cal_rmx_i)
{
    hwp_rf_p0->cal_rmx_i_dr.val = (((uint32_t)cpu_cal_rmx_i_dr << 8) | ((uint32_t)cpu_cal_rmx_i << 0));
}

__STATIC_INLINE void rf_p0_cal_rmx_i_dr_unpack(uint8_t* cpu_cal_rmx_i_dr, uint8_t* cpu_cal_rmx_i)
{
    T_RF_P0_CAL_RMX_I_DR localVal = hwp_rf_p0->cal_rmx_i_dr;

    *cpu_cal_rmx_i_dr = localVal.bit_field.cpu_cal_rmx_i_dr;
    *cpu_cal_rmx_i = localVal.bit_field.cpu_cal_rmx_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_rmx_i_dr_getf(void)
{
    return hwp_rf_p0->cal_rmx_i_dr.bit_field.cpu_cal_rmx_i_dr;
}

__STATIC_INLINE void rf_p0_cpu_cal_rmx_i_dr_setf(uint8_t cpu_cal_rmx_i_dr)
{
    hwp_rf_p0->cal_rmx_i_dr.bit_field.cpu_cal_rmx_i_dr = cpu_cal_rmx_i_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_rmx_i_getf(void)
{
    return hwp_rf_p0->cal_rmx_i_dr.bit_field.cpu_cal_rmx_i;
}

__STATIC_INLINE void rf_p0_cpu_cal_rmx_i_setf(uint8_t cpu_cal_rmx_i)
{
    hwp_rf_p0->cal_rmx_i_dr.bit_field.cpu_cal_rmx_i = cpu_cal_rmx_i;
}

__STATIC_INLINE uint32_t rf_p0_cal_rmx_q_dr_get(void)
{
    return hwp_rf_p0->cal_rmx_q_dr.val;
}

__STATIC_INLINE void rf_p0_cal_rmx_q_dr_set(uint32_t value)
{
    hwp_rf_p0->cal_rmx_q_dr.val = value;
}

__STATIC_INLINE void rf_p0_cal_rmx_q_dr_pack(uint8_t cpu_cal_rmx_q_dr, uint8_t cpu_cal_rmx_q)
{
    hwp_rf_p0->cal_rmx_q_dr.val = (((uint32_t)cpu_cal_rmx_q_dr << 8) | ((uint32_t)cpu_cal_rmx_q << 0));
}

__STATIC_INLINE void rf_p0_cal_rmx_q_dr_unpack(uint8_t* cpu_cal_rmx_q_dr, uint8_t* cpu_cal_rmx_q)
{
    T_RF_P0_CAL_RMX_Q_DR localVal = hwp_rf_p0->cal_rmx_q_dr;

    *cpu_cal_rmx_q_dr = localVal.bit_field.cpu_cal_rmx_q_dr;
    *cpu_cal_rmx_q = localVal.bit_field.cpu_cal_rmx_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_rmx_q_dr_getf(void)
{
    return hwp_rf_p0->cal_rmx_q_dr.bit_field.cpu_cal_rmx_q_dr;
}

__STATIC_INLINE void rf_p0_cpu_cal_rmx_q_dr_setf(uint8_t cpu_cal_rmx_q_dr)
{
    hwp_rf_p0->cal_rmx_q_dr.bit_field.cpu_cal_rmx_q_dr = cpu_cal_rmx_q_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_rmx_q_getf(void)
{
    return hwp_rf_p0->cal_rmx_q_dr.bit_field.cpu_cal_rmx_q;
}

__STATIC_INLINE void rf_p0_cpu_cal_rmx_q_setf(uint8_t cpu_cal_rmx_q)
{
    hwp_rf_p0->cal_rmx_q_dr.bit_field.cpu_cal_rmx_q = cpu_cal_rmx_q;
}

__STATIC_INLINE uint32_t rf_p0_rxlpf_cfg1_get(void)
{
    return hwp_rf_p0->rxlpf_cfg1.val;
}

__STATIC_INLINE void rf_p0_rxlpf_cfg1_set(uint32_t value)
{
    hwp_rf_p0->rxlpf_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_rxlpf_cfg1_pack(uint8_t rxlpf_coff, uint8_t rxlpf_otrim_step, uint8_t rxlpf_iq_swap, uint8_t rxlpf_ldo_vbit, uint8_t rxlpf_atrim_i, uint8_t rxlpf_atrim_q, uint8_t rxlpf_ibsel, uint8_t rxlpf_resv)
{
    hwp_rf_p0->rxlpf_cfg1.val = (((uint32_t)rxlpf_coff << 13) | ((uint32_t)rxlpf_otrim_step << 12) | ((uint32_t)rxlpf_iq_swap << 11) | ((uint32_t)rxlpf_ldo_vbit << 8) | ((uint32_t)rxlpf_atrim_i << 6) | ((uint32_t)rxlpf_atrim_q << 4) | ((uint32_t)rxlpf_ibsel << 2) | ((uint32_t)rxlpf_resv << 0));
}

__STATIC_INLINE void rf_p0_rxlpf_cfg1_unpack(uint8_t* rxlpf_coff, uint8_t* rxlpf_otrim_step, uint8_t* rxlpf_iq_swap, uint8_t* rxlpf_ldo_vbit, uint8_t* rxlpf_atrim_i, uint8_t* rxlpf_atrim_q, uint8_t* rxlpf_ibsel, uint8_t* rxlpf_resv)
{
    T_RF_P0_RXLPF_CFG1 localVal = hwp_rf_p0->rxlpf_cfg1;

    *rxlpf_coff = localVal.bit_field.rxlpf_coff;
    *rxlpf_otrim_step = localVal.bit_field.rxlpf_otrim_step;
    *rxlpf_iq_swap = localVal.bit_field.rxlpf_iq_swap;
    *rxlpf_ldo_vbit = localVal.bit_field.rxlpf_ldo_vbit;
    *rxlpf_atrim_i = localVal.bit_field.rxlpf_atrim_i;
    *rxlpf_atrim_q = localVal.bit_field.rxlpf_atrim_q;
    *rxlpf_ibsel = localVal.bit_field.rxlpf_ibsel;
    *rxlpf_resv = localVal.bit_field.rxlpf_resv;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_coff_getf(void)
{
    return hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_coff;
}

__STATIC_INLINE void rf_p0_rxlpf_coff_setf(uint8_t rxlpf_coff)
{
    hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_coff = rxlpf_coff;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_otrim_step_getf(void)
{
    return hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_otrim_step;
}

__STATIC_INLINE void rf_p0_rxlpf_otrim_step_setf(uint8_t rxlpf_otrim_step)
{
    hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_otrim_step = rxlpf_otrim_step;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_iq_swap_getf(void)
{
    return hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_iq_swap;
}

__STATIC_INLINE void rf_p0_rxlpf_iq_swap_setf(uint8_t rxlpf_iq_swap)
{
    hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_iq_swap = rxlpf_iq_swap;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_ldo_vbit_getf(void)
{
    return hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_ldo_vbit;
}

__STATIC_INLINE void rf_p0_rxlpf_ldo_vbit_setf(uint8_t rxlpf_ldo_vbit)
{
    hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_ldo_vbit = rxlpf_ldo_vbit;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_atrim_i_getf(void)
{
    return hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_atrim_i;
}

__STATIC_INLINE void rf_p0_rxlpf_atrim_i_setf(uint8_t rxlpf_atrim_i)
{
    hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_atrim_i = rxlpf_atrim_i;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_atrim_q_getf(void)
{
    return hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_atrim_q;
}

__STATIC_INLINE void rf_p0_rxlpf_atrim_q_setf(uint8_t rxlpf_atrim_q)
{
    hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_atrim_q = rxlpf_atrim_q;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_ibsel_getf(void)
{
    return hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_ibsel;
}

__STATIC_INLINE void rf_p0_rxlpf_ibsel_setf(uint8_t rxlpf_ibsel)
{
    hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_ibsel = rxlpf_ibsel;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_resv_getf(void)
{
    return hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_resv;
}

__STATIC_INLINE void rf_p0_rxlpf_resv_setf(uint8_t rxlpf_resv)
{
    hwp_rf_p0->rxlpf_cfg1.bit_field.rxlpf_resv = rxlpf_resv;
}

__STATIC_INLINE uint32_t rf_p0_rxlpf_ctrim_dr_get(void)
{
    return hwp_rf_p0->rxlpf_ctrim_dr.val;
}

__STATIC_INLINE void rf_p0_rxlpf_ctrim_dr_set(uint32_t value)
{
    hwp_rf_p0->rxlpf_ctrim_dr.val = value;
}

__STATIC_INLINE void rf_p0_rxlpf_ctrim_dr_pack(uint8_t cpu_rxlpf_ctrim_dr, uint8_t cpu_rxlpf_ctrim)
{
    hwp_rf_p0->rxlpf_ctrim_dr.val = (((uint32_t)cpu_rxlpf_ctrim_dr << 5) | ((uint32_t)cpu_rxlpf_ctrim << 0));
}

__STATIC_INLINE void rf_p0_rxlpf_ctrim_dr_unpack(uint8_t* cpu_rxlpf_ctrim_dr, uint8_t* cpu_rxlpf_ctrim)
{
    T_RF_P0_RXLPF_CTRIM_DR localVal = hwp_rf_p0->rxlpf_ctrim_dr;

    *cpu_rxlpf_ctrim_dr = localVal.bit_field.cpu_rxlpf_ctrim_dr;
    *cpu_rxlpf_ctrim = localVal.bit_field.cpu_rxlpf_ctrim;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_ctrim_dr_getf(void)
{
    return hwp_rf_p0->rxlpf_ctrim_dr.bit_field.cpu_rxlpf_ctrim_dr;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_ctrim_dr_setf(uint8_t cpu_rxlpf_ctrim_dr)
{
    hwp_rf_p0->rxlpf_ctrim_dr.bit_field.cpu_rxlpf_ctrim_dr = cpu_rxlpf_ctrim_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_ctrim_getf(void)
{
    return hwp_rf_p0->rxlpf_ctrim_dr.bit_field.cpu_rxlpf_ctrim;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_ctrim_setf(uint8_t cpu_rxlpf_ctrim)
{
    hwp_rf_p0->rxlpf_ctrim_dr.bit_field.cpu_rxlpf_ctrim = cpu_rxlpf_ctrim;
}

__STATIC_INLINE uint32_t rf_p0_rxlpf_cal_cfg_get(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_rxlpf_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->rxlpf_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rxlpf_cal_cfg_pack(uint8_t cpu_rxlpf_cal_value_sel_q, uint8_t cpu_rxlpf_overtime_q, uint8_t cpu_rxlpf_cal_direction_q, uint8_t cpu_rxlpf_cal_alg_sel, uint8_t cpu_rxlpf_cal_clk_sel, uint8_t cpu_rxlpf_cal_value_sel_i, uint8_t cpu_rxlpf_overtime_i, uint8_t cpu_rxlpf_cal_direction_i)
{
    hwp_rf_p0->rxlpf_cal_cfg.val = (((uint32_t)cpu_rxlpf_cal_value_sel_q << 11) | ((uint32_t)cpu_rxlpf_overtime_q << 9) | ((uint32_t)cpu_rxlpf_cal_direction_q << 8) | ((uint32_t)cpu_rxlpf_cal_alg_sel << 6) | ((uint32_t)cpu_rxlpf_cal_clk_sel << 4) | ((uint32_t)cpu_rxlpf_cal_value_sel_i << 3) | ((uint32_t)cpu_rxlpf_overtime_i << 1) | ((uint32_t)cpu_rxlpf_cal_direction_i << 0));
}

__STATIC_INLINE void rf_p0_rxlpf_cal_cfg_unpack(uint8_t* cpu_rxlpf_cal_value_sel_q, uint8_t* cpu_rxlpf_overtime_q, uint8_t* cpu_rxlpf_cal_direction_q, uint8_t* cpu_rxlpf_cal_alg_sel, uint8_t* cpu_rxlpf_cal_clk_sel, uint8_t* cpu_rxlpf_cal_value_sel_i, uint8_t* cpu_rxlpf_overtime_i, uint8_t* cpu_rxlpf_cal_direction_i)
{
    T_RF_P0_RXLPF_CAL_CFG localVal = hwp_rf_p0->rxlpf_cal_cfg;

    *cpu_rxlpf_cal_value_sel_q = localVal.bit_field.cpu_rxlpf_cal_value_sel_q;
    *cpu_rxlpf_overtime_q = localVal.bit_field.cpu_rxlpf_overtime_q;
    *cpu_rxlpf_cal_direction_q = localVal.bit_field.cpu_rxlpf_cal_direction_q;
    *cpu_rxlpf_cal_alg_sel = localVal.bit_field.cpu_rxlpf_cal_alg_sel;
    *cpu_rxlpf_cal_clk_sel = localVal.bit_field.cpu_rxlpf_cal_clk_sel;
    *cpu_rxlpf_cal_value_sel_i = localVal.bit_field.cpu_rxlpf_cal_value_sel_i;
    *cpu_rxlpf_overtime_i = localVal.bit_field.cpu_rxlpf_overtime_i;
    *cpu_rxlpf_cal_direction_i = localVal.bit_field.cpu_rxlpf_cal_direction_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_value_sel_q_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_value_sel_q;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_value_sel_q_setf(uint8_t cpu_rxlpf_cal_value_sel_q)
{
    hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_value_sel_q = cpu_rxlpf_cal_value_sel_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_overtime_q_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_overtime_q;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_overtime_q_setf(uint8_t cpu_rxlpf_overtime_q)
{
    hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_overtime_q = cpu_rxlpf_overtime_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_direction_q_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_direction_q;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_direction_q_setf(uint8_t cpu_rxlpf_cal_direction_q)
{
    hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_direction_q = cpu_rxlpf_cal_direction_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_alg_sel_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_alg_sel;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_alg_sel_setf(uint8_t cpu_rxlpf_cal_alg_sel)
{
    hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_alg_sel = cpu_rxlpf_cal_alg_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_clk_sel_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_clk_sel_setf(uint8_t cpu_rxlpf_cal_clk_sel)
{
    hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_clk_sel = cpu_rxlpf_cal_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_value_sel_i_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_value_sel_i;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_value_sel_i_setf(uint8_t cpu_rxlpf_cal_value_sel_i)
{
    hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_value_sel_i = cpu_rxlpf_cal_value_sel_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_overtime_i_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_overtime_i;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_overtime_i_setf(uint8_t cpu_rxlpf_overtime_i)
{
    hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_overtime_i = cpu_rxlpf_overtime_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_direction_i_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_direction_i;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_direction_i_setf(uint8_t cpu_rxlpf_cal_direction_i)
{
    hwp_rf_p0->rxlpf_cal_cfg.bit_field.cpu_rxlpf_cal_direction_i = cpu_rxlpf_cal_direction_i;
}

__STATIC_INLINE uint32_t rf_p0_rxlpf_otrim_dr_get(void)
{
    return hwp_rf_p0->rxlpf_otrim_dr.val;
}

__STATIC_INLINE void rf_p0_rxlpf_otrim_dr_set(uint32_t value)
{
    hwp_rf_p0->rxlpf_otrim_dr.val = value;
}

__STATIC_INLINE void rf_p0_rxlpf_otrim_dr_pack(uint8_t cpu_rxlpf_otrim_q_dr, uint8_t cpu_rxlpf_otrim_q, uint8_t cpu_rxlpf_otrim_i_dr, uint8_t cpu_rxlpf_otrim_i)
{
    hwp_rf_p0->rxlpf_otrim_dr.val = (((uint32_t)cpu_rxlpf_otrim_q_dr << 14) | ((uint32_t)cpu_rxlpf_otrim_q << 8) | ((uint32_t)cpu_rxlpf_otrim_i_dr << 6) | ((uint32_t)cpu_rxlpf_otrim_i << 0));
}

__STATIC_INLINE void rf_p0_rxlpf_otrim_dr_unpack(uint8_t* cpu_rxlpf_otrim_q_dr, uint8_t* cpu_rxlpf_otrim_q, uint8_t* cpu_rxlpf_otrim_i_dr, uint8_t* cpu_rxlpf_otrim_i)
{
    T_RF_P0_RXLPF_OTRIM_DR localVal = hwp_rf_p0->rxlpf_otrim_dr;

    *cpu_rxlpf_otrim_q_dr = localVal.bit_field.cpu_rxlpf_otrim_q_dr;
    *cpu_rxlpf_otrim_q = localVal.bit_field.cpu_rxlpf_otrim_q;
    *cpu_rxlpf_otrim_i_dr = localVal.bit_field.cpu_rxlpf_otrim_i_dr;
    *cpu_rxlpf_otrim_i = localVal.bit_field.cpu_rxlpf_otrim_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_otrim_q_dr_getf(void)
{
    return hwp_rf_p0->rxlpf_otrim_dr.bit_field.cpu_rxlpf_otrim_q_dr;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_otrim_q_dr_setf(uint8_t cpu_rxlpf_otrim_q_dr)
{
    hwp_rf_p0->rxlpf_otrim_dr.bit_field.cpu_rxlpf_otrim_q_dr = cpu_rxlpf_otrim_q_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_otrim_q_getf(void)
{
    return hwp_rf_p0->rxlpf_otrim_dr.bit_field.cpu_rxlpf_otrim_q;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_otrim_q_setf(uint8_t cpu_rxlpf_otrim_q)
{
    hwp_rf_p0->rxlpf_otrim_dr.bit_field.cpu_rxlpf_otrim_q = cpu_rxlpf_otrim_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_otrim_i_dr_getf(void)
{
    return hwp_rf_p0->rxlpf_otrim_dr.bit_field.cpu_rxlpf_otrim_i_dr;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_otrim_i_dr_setf(uint8_t cpu_rxlpf_otrim_i_dr)
{
    hwp_rf_p0->rxlpf_otrim_dr.bit_field.cpu_rxlpf_otrim_i_dr = cpu_rxlpf_otrim_i_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_otrim_i_getf(void)
{
    return hwp_rf_p0->rxlpf_otrim_dr.bit_field.cpu_rxlpf_otrim_i;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_otrim_i_setf(uint8_t cpu_rxlpf_otrim_i)
{
    hwp_rf_p0->rxlpf_otrim_dr.bit_field.cpu_rxlpf_otrim_i = cpu_rxlpf_otrim_i;
}

__STATIC_INLINE uint32_t rf_p0_rxlpf_cal_clk_dr_get(void)
{
    return hwp_rf_p0->rxlpf_cal_clk_dr.val;
}

__STATIC_INLINE void rf_p0_rxlpf_cal_clk_dr_set(uint32_t value)
{
    hwp_rf_p0->rxlpf_cal_clk_dr.val = value;
}

__STATIC_INLINE void rf_p0_rxlpf_cal_clk_dr_pack(uint8_t cpu_rxlpf_cal_clk_dr, uint8_t cpu_rxlpf_cal_clk)
{
    hwp_rf_p0->rxlpf_cal_clk_dr.val = (((uint32_t)cpu_rxlpf_cal_clk_dr << 1) | ((uint32_t)cpu_rxlpf_cal_clk << 0));
}

__STATIC_INLINE void rf_p0_rxlpf_cal_clk_dr_unpack(uint8_t* cpu_rxlpf_cal_clk_dr, uint8_t* cpu_rxlpf_cal_clk)
{
    T_RF_P0_RXLPF_CAL_CLK_DR localVal = hwp_rf_p0->rxlpf_cal_clk_dr;

    *cpu_rxlpf_cal_clk_dr = localVal.bit_field.cpu_rxlpf_cal_clk_dr;
    *cpu_rxlpf_cal_clk = localVal.bit_field.cpu_rxlpf_cal_clk;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_clk_dr_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_clk_dr.bit_field.cpu_rxlpf_cal_clk_dr;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_clk_dr_setf(uint8_t cpu_rxlpf_cal_clk_dr)
{
    hwp_rf_p0->rxlpf_cal_clk_dr.bit_field.cpu_rxlpf_cal_clk_dr = cpu_rxlpf_cal_clk_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rxlpf_cal_clk_getf(void)
{
    return hwp_rf_p0->rxlpf_cal_clk_dr.bit_field.cpu_rxlpf_cal_clk;
}

__STATIC_INLINE void rf_p0_cpu_rxlpf_cal_clk_setf(uint8_t cpu_rxlpf_cal_clk)
{
    hwp_rf_p0->rxlpf_cal_clk_dr.bit_field.cpu_rxlpf_cal_clk = cpu_rxlpf_cal_clk;
}

__STATIC_INLINE uint32_t rf_p0_rxadc_cfg_get(void)
{
    return hwp_rf_p0->rxadc_cfg.val;
}

__STATIC_INLINE void rf_p0_rxadc_cfg_set(uint32_t value)
{
    hwp_rf_p0->rxadc_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rxadc_cfg_pack(uint8_t adc_short_en, uint8_t adc_iso_en, uint8_t adc_bypass_buff_en, uint8_t adc_ldo_testen, uint8_t adc_ldo_vbit)
{
    hwp_rf_p0->rxadc_cfg.val = (((uint32_t)adc_short_en << 6) | ((uint32_t)adc_iso_en << 5) | ((uint32_t)adc_bypass_buff_en << 4) | ((uint32_t)adc_ldo_testen << 3) | ((uint32_t)adc_ldo_vbit << 0));
}

__STATIC_INLINE void rf_p0_rxadc_cfg_unpack(uint8_t* adc_short_en, uint8_t* adc_iso_en, uint8_t* adc_bypass_buff_en, uint8_t* adc_ldo_testen, uint8_t* adc_ldo_vbit)
{
    T_RF_P0_RXADC_CFG localVal = hwp_rf_p0->rxadc_cfg;

    *adc_short_en = localVal.bit_field.adc_short_en;
    *adc_iso_en = localVal.bit_field.adc_iso_en;
    *adc_bypass_buff_en = localVal.bit_field.adc_bypass_buff_en;
    *adc_ldo_testen = localVal.bit_field.adc_ldo_testen;
    *adc_ldo_vbit = localVal.bit_field.adc_ldo_vbit;
}

__STATIC_INLINE uint8_t rf_p0_adc_short_en_getf(void)
{
    return hwp_rf_p0->rxadc_cfg.bit_field.adc_short_en;
}

__STATIC_INLINE void rf_p0_adc_short_en_setf(uint8_t adc_short_en)
{
    hwp_rf_p0->rxadc_cfg.bit_field.adc_short_en = adc_short_en;
}

__STATIC_INLINE uint8_t rf_p0_adc_iso_en_getf(void)
{
    return hwp_rf_p0->rxadc_cfg.bit_field.adc_iso_en;
}

__STATIC_INLINE void rf_p0_adc_iso_en_setf(uint8_t adc_iso_en)
{
    hwp_rf_p0->rxadc_cfg.bit_field.adc_iso_en = adc_iso_en;
}

__STATIC_INLINE uint8_t rf_p0_adc_bypass_buff_en_getf(void)
{
    return hwp_rf_p0->rxadc_cfg.bit_field.adc_bypass_buff_en;
}

__STATIC_INLINE void rf_p0_adc_bypass_buff_en_setf(uint8_t adc_bypass_buff_en)
{
    hwp_rf_p0->rxadc_cfg.bit_field.adc_bypass_buff_en = adc_bypass_buff_en;
}

__STATIC_INLINE uint8_t rf_p0_adc_ldo_testen_getf(void)
{
    return hwp_rf_p0->rxadc_cfg.bit_field.adc_ldo_testen;
}

__STATIC_INLINE void rf_p0_adc_ldo_testen_setf(uint8_t adc_ldo_testen)
{
    hwp_rf_p0->rxadc_cfg.bit_field.adc_ldo_testen = adc_ldo_testen;
}

__STATIC_INLINE uint8_t rf_p0_adc_ldo_vbit_getf(void)
{
    return hwp_rf_p0->rxadc_cfg.bit_field.adc_ldo_vbit;
}

__STATIC_INLINE void rf_p0_adc_ldo_vbit_setf(uint8_t adc_ldo_vbit)
{
    hwp_rf_p0->rxadc_cfg.bit_field.adc_ldo_vbit = adc_ldo_vbit;
}

__STATIC_INLINE uint32_t rf_p0_pa_ovd_cfg_get(void)
{
    return hwp_rf_p0->pa_ovd_cfg.val;
}

__STATIC_INLINE void rf_p0_pa_ovd_cfg_set(uint32_t value)
{
    hwp_rf_p0->pa_ovd_cfg.val = value;
}

__STATIC_INLINE void rf_p0_pa_ovd_cfg_pack(uint8_t pa_ovd_refbit, uint8_t pa_pwrimg_ldo_vbit, uint8_t pa_ldo_testen, uint8_t pa_ovd_rbit, uint8_t cpu_pa_ovd_rst, uint8_t cpu_pa_ovd_en)
{
    hwp_rf_p0->pa_ovd_cfg.val = (((uint32_t)pa_ovd_refbit << 13) | ((uint32_t)pa_pwrimg_ldo_vbit << 10) | ((uint32_t)pa_ldo_testen << 6) | ((uint32_t)pa_ovd_rbit << 2) | ((uint32_t)cpu_pa_ovd_rst << 1) | ((uint32_t)cpu_pa_ovd_en << 0));
}

__STATIC_INLINE void rf_p0_pa_ovd_cfg_unpack(uint8_t* pa_ovd_refbit, uint8_t* pa_pwrimg_ldo_vbit, uint8_t* pa_ldo_testen, uint8_t* pa_ovd_rbit, uint8_t* cpu_pa_ovd_rst, uint8_t* cpu_pa_ovd_en)
{
    T_RF_P0_PA_OVD_CFG localVal = hwp_rf_p0->pa_ovd_cfg;

    *pa_ovd_refbit = localVal.bit_field.pa_ovd_refbit;
    *pa_pwrimg_ldo_vbit = localVal.bit_field.pa_pwrimg_ldo_vbit;
    *pa_ldo_testen = localVal.bit_field.pa_ldo_testen;
    *pa_ovd_rbit = localVal.bit_field.pa_ovd_rbit;
    *cpu_pa_ovd_rst = localVal.bit_field.cpu_pa_ovd_rst;
    *cpu_pa_ovd_en = localVal.bit_field.cpu_pa_ovd_en;
}

__STATIC_INLINE uint8_t rf_p0_pa_ovd_refbit_getf(void)
{
    return hwp_rf_p0->pa_ovd_cfg.bit_field.pa_ovd_refbit;
}

__STATIC_INLINE void rf_p0_pa_ovd_refbit_setf(uint8_t pa_ovd_refbit)
{
    hwp_rf_p0->pa_ovd_cfg.bit_field.pa_ovd_refbit = pa_ovd_refbit;
}

__STATIC_INLINE uint8_t rf_p0_pa_pwrimg_ldo_vbit_getf(void)
{
    return hwp_rf_p0->pa_ovd_cfg.bit_field.pa_pwrimg_ldo_vbit;
}

__STATIC_INLINE void rf_p0_pa_pwrimg_ldo_vbit_setf(uint8_t pa_pwrimg_ldo_vbit)
{
    hwp_rf_p0->pa_ovd_cfg.bit_field.pa_pwrimg_ldo_vbit = pa_pwrimg_ldo_vbit;
}

__STATIC_INLINE uint8_t rf_p0_pa_ldo_testen_getf(void)
{
    return hwp_rf_p0->pa_ovd_cfg.bit_field.pa_ldo_testen;
}

__STATIC_INLINE void rf_p0_pa_ldo_testen_setf(uint8_t pa_ldo_testen)
{
    hwp_rf_p0->pa_ovd_cfg.bit_field.pa_ldo_testen = pa_ldo_testen;
}

__STATIC_INLINE uint8_t rf_p0_pa_ovd_rbit_getf(void)
{
    return hwp_rf_p0->pa_ovd_cfg.bit_field.pa_ovd_rbit;
}

__STATIC_INLINE void rf_p0_pa_ovd_rbit_setf(uint8_t pa_ovd_rbit)
{
    hwp_rf_p0->pa_ovd_cfg.bit_field.pa_ovd_rbit = pa_ovd_rbit;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_ovd_rst_getf(void)
{
    return hwp_rf_p0->pa_ovd_cfg.bit_field.cpu_pa_ovd_rst;
}

__STATIC_INLINE void rf_p0_cpu_pa_ovd_rst_setf(uint8_t cpu_pa_ovd_rst)
{
    hwp_rf_p0->pa_ovd_cfg.bit_field.cpu_pa_ovd_rst = cpu_pa_ovd_rst;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_ovd_en_getf(void)
{
    return hwp_rf_p0->pa_ovd_cfg.bit_field.cpu_pa_ovd_en;
}

__STATIC_INLINE void rf_p0_cpu_pa_ovd_en_setf(uint8_t cpu_pa_ovd_en)
{
    hwp_rf_p0->pa_ovd_cfg.bit_field.cpu_pa_ovd_en = cpu_pa_ovd_en;
}

__STATIC_INLINE uint32_t rf_p0_pa_pkd_cfg1_get(void)
{
    return hwp_rf_p0->pa_pkd_cfg1.val;
}

__STATIC_INLINE void rf_p0_pa_pkd_cfg1_set(uint32_t value)
{
    hwp_rf_p0->pa_pkd_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_pa_pkd_cfg1_pack(uint8_t pa_pkd_gain, uint8_t cpu_pa_pkd_en)
{
    hwp_rf_p0->pa_pkd_cfg1.val = (((uint32_t)pa_pkd_gain << 1) | ((uint32_t)cpu_pa_pkd_en << 0));
}

__STATIC_INLINE void rf_p0_pa_pkd_cfg1_unpack(uint8_t* pa_pkd_gain, uint8_t* cpu_pa_pkd_en)
{
    T_RF_P0_PA_PKD_CFG1 localVal = hwp_rf_p0->pa_pkd_cfg1;

    *pa_pkd_gain = localVal.bit_field.pa_pkd_gain;
    *cpu_pa_pkd_en = localVal.bit_field.cpu_pa_pkd_en;
}

__STATIC_INLINE uint8_t rf_p0_pa_pkd_gain_getf(void)
{
    return hwp_rf_p0->pa_pkd_cfg1.bit_field.pa_pkd_gain;
}

__STATIC_INLINE void rf_p0_pa_pkd_gain_setf(uint8_t pa_pkd_gain)
{
    hwp_rf_p0->pa_pkd_cfg1.bit_field.pa_pkd_gain = pa_pkd_gain;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_pkd_en_getf(void)
{
    return hwp_rf_p0->pa_pkd_cfg1.bit_field.cpu_pa_pkd_en;
}

__STATIC_INLINE void rf_p0_cpu_pa_pkd_en_setf(uint8_t cpu_pa_pkd_en)
{
    hwp_rf_p0->pa_pkd_cfg1.bit_field.cpu_pa_pkd_en = cpu_pa_pkd_en;
}

__STATIC_INLINE uint32_t rf_p0_pa_tsen_cfg_get(void)
{
    return hwp_rf_p0->pa_tsen_cfg.val;
}

__STATIC_INLINE void rf_p0_pa_tsen_cfg_set(uint32_t value)
{
    hwp_rf_p0->pa_tsen_cfg.val = value;
}

__STATIC_INLINE void rf_p0_pa_tsen_cfg_pack(uint8_t cpu_pa_thermo_div_sel, uint8_t cpu_pa_tsen_rst, uint8_t pa_thermo_bit, uint8_t cpu_pa_tsen_en)
{
    hwp_rf_p0->pa_tsen_cfg.val = (((uint32_t)cpu_pa_thermo_div_sel << 4) | ((uint32_t)cpu_pa_tsen_rst << 3) | ((uint32_t)pa_thermo_bit << 1) | ((uint32_t)cpu_pa_tsen_en << 0));
}

__STATIC_INLINE void rf_p0_pa_tsen_cfg_unpack(uint8_t* cpu_pa_thermo_div_sel, uint8_t* cpu_pa_tsen_rst, uint8_t* pa_thermo_bit, uint8_t* cpu_pa_tsen_en)
{
    T_RF_P0_PA_TSEN_CFG localVal = hwp_rf_p0->pa_tsen_cfg;

    *cpu_pa_thermo_div_sel = localVal.bit_field.cpu_pa_thermo_div_sel;
    *cpu_pa_tsen_rst = localVal.bit_field.cpu_pa_tsen_rst;
    *pa_thermo_bit = localVal.bit_field.pa_thermo_bit;
    *cpu_pa_tsen_en = localVal.bit_field.cpu_pa_tsen_en;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_thermo_div_sel_getf(void)
{
    return hwp_rf_p0->pa_tsen_cfg.bit_field.cpu_pa_thermo_div_sel;
}

__STATIC_INLINE void rf_p0_cpu_pa_thermo_div_sel_setf(uint8_t cpu_pa_thermo_div_sel)
{
    hwp_rf_p0->pa_tsen_cfg.bit_field.cpu_pa_thermo_div_sel = cpu_pa_thermo_div_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_tsen_rst_getf(void)
{
    return hwp_rf_p0->pa_tsen_cfg.bit_field.cpu_pa_tsen_rst;
}

__STATIC_INLINE void rf_p0_cpu_pa_tsen_rst_setf(uint8_t cpu_pa_tsen_rst)
{
    hwp_rf_p0->pa_tsen_cfg.bit_field.cpu_pa_tsen_rst = cpu_pa_tsen_rst;
}

__STATIC_INLINE uint8_t rf_p0_pa_thermo_bit_getf(void)
{
    return hwp_rf_p0->pa_tsen_cfg.bit_field.pa_thermo_bit;
}

__STATIC_INLINE void rf_p0_pa_thermo_bit_setf(uint8_t pa_thermo_bit)
{
    hwp_rf_p0->pa_tsen_cfg.bit_field.pa_thermo_bit = pa_thermo_bit;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa_tsen_en_getf(void)
{
    return hwp_rf_p0->pa_tsen_cfg.bit_field.cpu_pa_tsen_en;
}

__STATIC_INLINE void rf_p0_cpu_pa_tsen_en_setf(uint8_t cpu_pa_tsen_en)
{
    hwp_rf_p0->pa_tsen_cfg.bit_field.cpu_pa_tsen_en = cpu_pa_tsen_en;
}

__STATIC_INLINE uint32_t rf_p0_pa_rpt2_get(void)
{
    return hwp_rf_p0->pa_rpt2.val;
}

__STATIC_INLINE void rf_p0_pa_rpt2_unpack(uint8_t* pa_ramp_rpt, uint8_t* pa2rmx_att_rpt, uint8_t* pa_pkd_cal_overflow, uint8_t* pa_thermo_sense_out, uint8_t* pa_pkd_out, uint8_t* pa_ovd_out)
{
    T_RF_P0_PA_RPT2 localVal = hwp_rf_p0->pa_rpt2;

    *pa_ramp_rpt = localVal.bit_field.pa_ramp_rpt;
    *pa2rmx_att_rpt = localVal.bit_field.pa2rmx_att_rpt;
    *pa_pkd_cal_overflow = localVal.bit_field.pa_pkd_cal_overflow;
    *pa_thermo_sense_out = localVal.bit_field.pa_thermo_sense_out;
    *pa_pkd_out = localVal.bit_field.pa_pkd_out;
    *pa_ovd_out = localVal.bit_field.pa_ovd_out;
}

__STATIC_INLINE uint8_t rf_p0_pa_ramp_rpt_getf(void)
{
    return hwp_rf_p0->pa_rpt2.bit_field.pa_ramp_rpt;
}

__STATIC_INLINE uint8_t rf_p0_pa2rmx_att_rpt_getf(void)
{
    return hwp_rf_p0->pa_rpt2.bit_field.pa2rmx_att_rpt;
}

__STATIC_INLINE uint8_t rf_p0_pa_pkd_cal_overflow_getf(void)
{
    return hwp_rf_p0->pa_rpt2.bit_field.pa_pkd_cal_overflow;
}

__STATIC_INLINE uint8_t rf_p0_pa_thermo_sense_out_getf(void)
{
    return hwp_rf_p0->pa_rpt2.bit_field.pa_thermo_sense_out;
}

__STATIC_INLINE uint8_t rf_p0_pa_pkd_out_getf(void)
{
    return hwp_rf_p0->pa_rpt2.bit_field.pa_pkd_out;
}

__STATIC_INLINE uint8_t rf_p0_pa_ovd_out_getf(void)
{
    return hwp_rf_p0->pa_rpt2.bit_field.pa_ovd_out;
}

__STATIC_INLINE uint32_t rf_p0_pa_cfg1_get(void)
{
    return hwp_rf_p0->pa_cfg1.val;
}

__STATIC_INLINE void rf_p0_pa_cfg1_set(uint32_t value)
{
    hwp_rf_p0->pa_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_pa_cfg1_pack(uint8_t pa_tp_sel, uint8_t pa_bpf_gain, uint8_t pa_bpf_ibit)
{
    hwp_rf_p0->pa_cfg1.val = (((uint32_t)pa_tp_sel << 10) | ((uint32_t)pa_bpf_gain << 2) | ((uint32_t)pa_bpf_ibit << 0));
}

__STATIC_INLINE void rf_p0_pa_cfg1_unpack(uint8_t* pa_tp_sel, uint8_t* pa_bpf_gain, uint8_t* pa_bpf_ibit)
{
    T_RF_P0_PA_CFG1 localVal = hwp_rf_p0->pa_cfg1;

    *pa_tp_sel = localVal.bit_field.pa_tp_sel;
    *pa_bpf_gain = localVal.bit_field.pa_bpf_gain;
    *pa_bpf_ibit = localVal.bit_field.pa_bpf_ibit;
}

__STATIC_INLINE uint8_t rf_p0_pa_tp_sel_getf(void)
{
    return hwp_rf_p0->pa_cfg1.bit_field.pa_tp_sel;
}

__STATIC_INLINE void rf_p0_pa_tp_sel_setf(uint8_t pa_tp_sel)
{
    hwp_rf_p0->pa_cfg1.bit_field.pa_tp_sel = pa_tp_sel;
}

__STATIC_INLINE uint8_t rf_p0_pa_bpf_gain_getf(void)
{
    return hwp_rf_p0->pa_cfg1.bit_field.pa_bpf_gain;
}

__STATIC_INLINE void rf_p0_pa_bpf_gain_setf(uint8_t pa_bpf_gain)
{
    hwp_rf_p0->pa_cfg1.bit_field.pa_bpf_gain = pa_bpf_gain;
}

__STATIC_INLINE uint8_t rf_p0_pa_bpf_ibit_getf(void)
{
    return hwp_rf_p0->pa_cfg1.bit_field.pa_bpf_ibit;
}

__STATIC_INLINE void rf_p0_pa_bpf_ibit_setf(uint8_t pa_bpf_ibit)
{
    hwp_rf_p0->pa_cfg1.bit_field.pa_bpf_ibit = pa_bpf_ibit;
}

__STATIC_INLINE uint32_t rf_p0_pa_cfg2_get(void)
{
    return hwp_rf_p0->pa_cfg2.val;
}

__STATIC_INLINE void rf_p0_pa_cfg2_set(uint32_t value)
{
    hwp_rf_p0->pa_cfg2.val = value;
}

__STATIC_INLINE void rf_p0_pa_cfg2_pack(uint8_t pa_pdcal_range, uint8_t pa_pdcal_gain, uint8_t pa_imgcal_gain, uint8_t pa_imgcal_range)
{
    hwp_rf_p0->pa_cfg2.val = (((uint32_t)pa_pdcal_range << 9) | ((uint32_t)pa_pdcal_gain << 6) | ((uint32_t)pa_imgcal_gain << 3) | ((uint32_t)pa_imgcal_range << 0));
}

__STATIC_INLINE void rf_p0_pa_cfg2_unpack(uint8_t* pa_pdcal_range, uint8_t* pa_pdcal_gain, uint8_t* pa_imgcal_gain, uint8_t* pa_imgcal_range)
{
    T_RF_P0_PA_CFG2 localVal = hwp_rf_p0->pa_cfg2;

    *pa_pdcal_range = localVal.bit_field.pa_pdcal_range;
    *pa_pdcal_gain = localVal.bit_field.pa_pdcal_gain;
    *pa_imgcal_gain = localVal.bit_field.pa_imgcal_gain;
    *pa_imgcal_range = localVal.bit_field.pa_imgcal_range;
}

__STATIC_INLINE uint8_t rf_p0_pa_pdcal_range_getf(void)
{
    return hwp_rf_p0->pa_cfg2.bit_field.pa_pdcal_range;
}

__STATIC_INLINE void rf_p0_pa_pdcal_range_setf(uint8_t pa_pdcal_range)
{
    hwp_rf_p0->pa_cfg2.bit_field.pa_pdcal_range = pa_pdcal_range;
}

__STATIC_INLINE uint8_t rf_p0_pa_pdcal_gain_getf(void)
{
    return hwp_rf_p0->pa_cfg2.bit_field.pa_pdcal_gain;
}

__STATIC_INLINE void rf_p0_pa_pdcal_gain_setf(uint8_t pa_pdcal_gain)
{
    hwp_rf_p0->pa_cfg2.bit_field.pa_pdcal_gain = pa_pdcal_gain;
}

__STATIC_INLINE uint8_t rf_p0_pa_imgcal_gain_getf(void)
{
    return hwp_rf_p0->pa_cfg2.bit_field.pa_imgcal_gain;
}

__STATIC_INLINE void rf_p0_pa_imgcal_gain_setf(uint8_t pa_imgcal_gain)
{
    hwp_rf_p0->pa_cfg2.bit_field.pa_imgcal_gain = pa_imgcal_gain;
}

__STATIC_INLINE uint8_t rf_p0_pa_imgcal_range_getf(void)
{
    return hwp_rf_p0->pa_cfg2.bit_field.pa_imgcal_range;
}

__STATIC_INLINE void rf_p0_pa_imgcal_range_setf(uint8_t pa_imgcal_range)
{
    hwp_rf_p0->pa_cfg2.bit_field.pa_imgcal_range = pa_imgcal_range;
}

__STATIC_INLINE uint32_t rf_p0_pa_cfg3_get(void)
{
    return hwp_rf_p0->pa_cfg3.val;
}

__STATIC_INLINE void rf_p0_pa_cfg3_set(uint32_t value)
{
    hwp_rf_p0->pa_cfg3.val = value;
}

__STATIC_INLINE void rf_p0_pa_cfg3_pack(uint8_t pa_da_ibit_b, uint8_t pa_vcas_rbit_b, uint8_t pa_vcas_hv_rbit_b, uint8_t pa_vcas_ibit_b, uint8_t pa_ldo_vbit_b)
{
    hwp_rf_p0->pa_cfg3.val = (((uint32_t)pa_da_ibit_b << 13) | ((uint32_t)pa_vcas_rbit_b << 10) | ((uint32_t)pa_vcas_hv_rbit_b << 7) | ((uint32_t)pa_vcas_ibit_b << 3) | ((uint32_t)pa_ldo_vbit_b << 0));
}

__STATIC_INLINE void rf_p0_pa_cfg3_unpack(uint8_t* pa_da_ibit_b, uint8_t* pa_vcas_rbit_b, uint8_t* pa_vcas_hv_rbit_b, uint8_t* pa_vcas_ibit_b, uint8_t* pa_ldo_vbit_b)
{
    T_RF_P0_PA_CFG3 localVal = hwp_rf_p0->pa_cfg3;

    *pa_da_ibit_b = localVal.bit_field.pa_da_ibit_b;
    *pa_vcas_rbit_b = localVal.bit_field.pa_vcas_rbit_b;
    *pa_vcas_hv_rbit_b = localVal.bit_field.pa_vcas_hv_rbit_b;
    *pa_vcas_ibit_b = localVal.bit_field.pa_vcas_ibit_b;
    *pa_ldo_vbit_b = localVal.bit_field.pa_ldo_vbit_b;
}

__STATIC_INLINE uint8_t rf_p0_pa_da_ibit_b_getf(void)
{
    return hwp_rf_p0->pa_cfg3.bit_field.pa_da_ibit_b;
}

__STATIC_INLINE void rf_p0_pa_da_ibit_b_setf(uint8_t pa_da_ibit_b)
{
    hwp_rf_p0->pa_cfg3.bit_field.pa_da_ibit_b = pa_da_ibit_b;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_rbit_b_getf(void)
{
    return hwp_rf_p0->pa_cfg3.bit_field.pa_vcas_rbit_b;
}

__STATIC_INLINE void rf_p0_pa_vcas_rbit_b_setf(uint8_t pa_vcas_rbit_b)
{
    hwp_rf_p0->pa_cfg3.bit_field.pa_vcas_rbit_b = pa_vcas_rbit_b;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_hv_rbit_b_getf(void)
{
    return hwp_rf_p0->pa_cfg3.bit_field.pa_vcas_hv_rbit_b;
}

__STATIC_INLINE void rf_p0_pa_vcas_hv_rbit_b_setf(uint8_t pa_vcas_hv_rbit_b)
{
    hwp_rf_p0->pa_cfg3.bit_field.pa_vcas_hv_rbit_b = pa_vcas_hv_rbit_b;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_ibit_b_getf(void)
{
    return hwp_rf_p0->pa_cfg3.bit_field.pa_vcas_ibit_b;
}

__STATIC_INLINE void rf_p0_pa_vcas_ibit_b_setf(uint8_t pa_vcas_ibit_b)
{
    hwp_rf_p0->pa_cfg3.bit_field.pa_vcas_ibit_b = pa_vcas_ibit_b;
}

__STATIC_INLINE uint8_t rf_p0_pa_ldo_vbit_b_getf(void)
{
    return hwp_rf_p0->pa_cfg3.bit_field.pa_ldo_vbit_b;
}

__STATIC_INLINE void rf_p0_pa_ldo_vbit_b_setf(uint8_t pa_ldo_vbit_b)
{
    hwp_rf_p0->pa_cfg3.bit_field.pa_ldo_vbit_b = pa_ldo_vbit_b;
}

__STATIC_INLINE uint32_t rf_p0_pa_cfg4_get(void)
{
    return hwp_rf_p0->pa_cfg4.val;
}

__STATIC_INLINE void rf_p0_pa_cfg4_set(uint32_t value)
{
    hwp_rf_p0->pa_cfg4.val = value;
}

__STATIC_INLINE void rf_p0_pa_cfg4_pack(uint8_t cpu_pa2rmx_att_dpd, uint8_t cpu_pa2rmx_att_rximg)
{
    hwp_rf_p0->pa_cfg4.val = (((uint32_t)cpu_pa2rmx_att_dpd << 3) | ((uint32_t)cpu_pa2rmx_att_rximg << 0));
}

__STATIC_INLINE void rf_p0_pa_cfg4_unpack(uint8_t* cpu_pa2rmx_att_dpd, uint8_t* cpu_pa2rmx_att_rximg)
{
    T_RF_P0_PA_CFG4 localVal = hwp_rf_p0->pa_cfg4;

    *cpu_pa2rmx_att_dpd = localVal.bit_field.cpu_pa2rmx_att_dpd;
    *cpu_pa2rmx_att_rximg = localVal.bit_field.cpu_pa2rmx_att_rximg;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa2rmx_att_dpd_getf(void)
{
    return hwp_rf_p0->pa_cfg4.bit_field.cpu_pa2rmx_att_dpd;
}

__STATIC_INLINE void rf_p0_cpu_pa2rmx_att_dpd_setf(uint8_t cpu_pa2rmx_att_dpd)
{
    hwp_rf_p0->pa_cfg4.bit_field.cpu_pa2rmx_att_dpd = cpu_pa2rmx_att_dpd;
}

__STATIC_INLINE uint8_t rf_p0_cpu_pa2rmx_att_rximg_getf(void)
{
    return hwp_rf_p0->pa_cfg4.bit_field.cpu_pa2rmx_att_rximg;
}

__STATIC_INLINE void rf_p0_cpu_pa2rmx_att_rximg_setf(uint8_t cpu_pa2rmx_att_rximg)
{
    hwp_rf_p0->pa_cfg4.bit_field.cpu_pa2rmx_att_rximg = cpu_pa2rmx_att_rximg;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cfg1_get(void)
{
    return hwp_rf_p0->tmx_cfg1.val;
}

__STATIC_INLINE void rf_p0_tmx_cfg1_set(uint32_t value)
{
    hwp_rf_p0->tmx_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cfg1_pack(uint8_t tmx_rc_range_b, uint8_t tmx_vol_amp_b, uint8_t tmx_lobuf_vbit_b, uint8_t tmx_op_ibit_b, uint8_t tmx_op_vcm_b, uint8_t tmx_ibase_b, uint8_t tmx_lin_tune_b)
{
    hwp_rf_p0->tmx_cfg1.val = (((uint32_t)tmx_rc_range_b << 14) | ((uint32_t)tmx_vol_amp_b << 12) | ((uint32_t)tmx_lobuf_vbit_b << 9) | ((uint32_t)tmx_op_ibit_b << 7) | ((uint32_t)tmx_op_vcm_b << 5) | ((uint32_t)tmx_ibase_b << 3) | ((uint32_t)tmx_lin_tune_b << 0));
}

__STATIC_INLINE void rf_p0_tmx_cfg1_unpack(uint8_t* tmx_rc_range_b, uint8_t* tmx_vol_amp_b, uint8_t* tmx_lobuf_vbit_b, uint8_t* tmx_op_ibit_b, uint8_t* tmx_op_vcm_b, uint8_t* tmx_ibase_b, uint8_t* tmx_lin_tune_b)
{
    T_RF_P0_TMX_CFG1 localVal = hwp_rf_p0->tmx_cfg1;

    *tmx_rc_range_b = localVal.bit_field.tmx_rc_range_b;
    *tmx_vol_amp_b = localVal.bit_field.tmx_vol_amp_b;
    *tmx_lobuf_vbit_b = localVal.bit_field.tmx_lobuf_vbit_b;
    *tmx_op_ibit_b = localVal.bit_field.tmx_op_ibit_b;
    *tmx_op_vcm_b = localVal.bit_field.tmx_op_vcm_b;
    *tmx_ibase_b = localVal.bit_field.tmx_ibase_b;
    *tmx_lin_tune_b = localVal.bit_field.tmx_lin_tune_b;
}

__STATIC_INLINE uint8_t rf_p0_tmx_rc_range_b_getf(void)
{
    return hwp_rf_p0->tmx_cfg1.bit_field.tmx_rc_range_b;
}

__STATIC_INLINE void rf_p0_tmx_rc_range_b_setf(uint8_t tmx_rc_range_b)
{
    hwp_rf_p0->tmx_cfg1.bit_field.tmx_rc_range_b = tmx_rc_range_b;
}

__STATIC_INLINE uint8_t rf_p0_tmx_vol_amp_b_getf(void)
{
    return hwp_rf_p0->tmx_cfg1.bit_field.tmx_vol_amp_b;
}

__STATIC_INLINE void rf_p0_tmx_vol_amp_b_setf(uint8_t tmx_vol_amp_b)
{
    hwp_rf_p0->tmx_cfg1.bit_field.tmx_vol_amp_b = tmx_vol_amp_b;
}

__STATIC_INLINE uint8_t rf_p0_tmx_lobuf_vbit_b_getf(void)
{
    return hwp_rf_p0->tmx_cfg1.bit_field.tmx_lobuf_vbit_b;
}

__STATIC_INLINE void rf_p0_tmx_lobuf_vbit_b_setf(uint8_t tmx_lobuf_vbit_b)
{
    hwp_rf_p0->tmx_cfg1.bit_field.tmx_lobuf_vbit_b = tmx_lobuf_vbit_b;
}

__STATIC_INLINE uint8_t rf_p0_tmx_op_ibit_b_getf(void)
{
    return hwp_rf_p0->tmx_cfg1.bit_field.tmx_op_ibit_b;
}

__STATIC_INLINE void rf_p0_tmx_op_ibit_b_setf(uint8_t tmx_op_ibit_b)
{
    hwp_rf_p0->tmx_cfg1.bit_field.tmx_op_ibit_b = tmx_op_ibit_b;
}

__STATIC_INLINE uint8_t rf_p0_tmx_op_vcm_b_getf(void)
{
    return hwp_rf_p0->tmx_cfg1.bit_field.tmx_op_vcm_b;
}

__STATIC_INLINE void rf_p0_tmx_op_vcm_b_setf(uint8_t tmx_op_vcm_b)
{
    hwp_rf_p0->tmx_cfg1.bit_field.tmx_op_vcm_b = tmx_op_vcm_b;
}

__STATIC_INLINE uint8_t rf_p0_tmx_ibase_b_getf(void)
{
    return hwp_rf_p0->tmx_cfg1.bit_field.tmx_ibase_b;
}

__STATIC_INLINE void rf_p0_tmx_ibase_b_setf(uint8_t tmx_ibase_b)
{
    hwp_rf_p0->tmx_cfg1.bit_field.tmx_ibase_b = tmx_ibase_b;
}

__STATIC_INLINE uint8_t rf_p0_tmx_lin_tune_b_getf(void)
{
    return hwp_rf_p0->tmx_cfg1.bit_field.tmx_lin_tune_b;
}

__STATIC_INLINE void rf_p0_tmx_lin_tune_b_setf(uint8_t tmx_lin_tune_b)
{
    hwp_rf_p0->tmx_cfg1.bit_field.tmx_lin_tune_b = tmx_lin_tune_b;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cfg2_get(void)
{
    return hwp_rf_p0->tmx_cfg2.val;
}

__STATIC_INLINE void rf_p0_tmx_cfg2_set(uint32_t value)
{
    hwp_rf_p0->tmx_cfg2.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cfg2_pack(uint8_t tmx_ldo_vbit, uint8_t tmx_ldo_testen, uint8_t tmx_cal_gain, uint8_t tmx_cal_range, uint8_t tmx_input_gain, uint8_t tmx_iq_swap)
{
    hwp_rf_p0->tmx_cfg2.val = (((uint32_t)tmx_ldo_vbit << 13) | ((uint32_t)tmx_ldo_testen << 12) | ((uint32_t)tmx_cal_gain << 9) | ((uint32_t)tmx_cal_range << 6) | ((uint32_t)tmx_input_gain << 1) | ((uint32_t)tmx_iq_swap << 0));
}

__STATIC_INLINE void rf_p0_tmx_cfg2_unpack(uint8_t* tmx_ldo_vbit, uint8_t* tmx_ldo_testen, uint8_t* tmx_cal_gain, uint8_t* tmx_cal_range, uint8_t* tmx_input_gain, uint8_t* tmx_iq_swap)
{
    T_RF_P0_TMX_CFG2 localVal = hwp_rf_p0->tmx_cfg2;

    *tmx_ldo_vbit = localVal.bit_field.tmx_ldo_vbit;
    *tmx_ldo_testen = localVal.bit_field.tmx_ldo_testen;
    *tmx_cal_gain = localVal.bit_field.tmx_cal_gain;
    *tmx_cal_range = localVal.bit_field.tmx_cal_range;
    *tmx_input_gain = localVal.bit_field.tmx_input_gain;
    *tmx_iq_swap = localVal.bit_field.tmx_iq_swap;
}

__STATIC_INLINE uint8_t rf_p0_tmx_ldo_vbit_getf(void)
{
    return hwp_rf_p0->tmx_cfg2.bit_field.tmx_ldo_vbit;
}

__STATIC_INLINE void rf_p0_tmx_ldo_vbit_setf(uint8_t tmx_ldo_vbit)
{
    hwp_rf_p0->tmx_cfg2.bit_field.tmx_ldo_vbit = tmx_ldo_vbit;
}

__STATIC_INLINE uint8_t rf_p0_tmx_ldo_testen_getf(void)
{
    return hwp_rf_p0->tmx_cfg2.bit_field.tmx_ldo_testen;
}

__STATIC_INLINE void rf_p0_tmx_ldo_testen_setf(uint8_t tmx_ldo_testen)
{
    hwp_rf_p0->tmx_cfg2.bit_field.tmx_ldo_testen = tmx_ldo_testen;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cal_gain_getf(void)
{
    return hwp_rf_p0->tmx_cfg2.bit_field.tmx_cal_gain;
}

__STATIC_INLINE void rf_p0_tmx_cal_gain_setf(uint8_t tmx_cal_gain)
{
    hwp_rf_p0->tmx_cfg2.bit_field.tmx_cal_gain = tmx_cal_gain;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cal_range_getf(void)
{
    return hwp_rf_p0->tmx_cfg2.bit_field.tmx_cal_range;
}

__STATIC_INLINE void rf_p0_tmx_cal_range_setf(uint8_t tmx_cal_range)
{
    hwp_rf_p0->tmx_cfg2.bit_field.tmx_cal_range = tmx_cal_range;
}

__STATIC_INLINE uint8_t rf_p0_tmx_input_gain_getf(void)
{
    return hwp_rf_p0->tmx_cfg2.bit_field.tmx_input_gain;
}

__STATIC_INLINE void rf_p0_tmx_input_gain_setf(uint8_t tmx_input_gain)
{
    hwp_rf_p0->tmx_cfg2.bit_field.tmx_input_gain = tmx_input_gain;
}

__STATIC_INLINE uint8_t rf_p0_tmx_iq_swap_getf(void)
{
    return hwp_rf_p0->tmx_cfg2.bit_field.tmx_iq_swap;
}

__STATIC_INLINE void rf_p0_tmx_iq_swap_setf(uint8_t tmx_iq_swap)
{
    hwp_rf_p0->tmx_cfg2.bit_field.tmx_iq_swap = tmx_iq_swap;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cal_cfg_get(void)
{
    return hwp_rf_p0->tmx_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_tmx_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->tmx_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cal_cfg_pack(uint8_t cpu_tmx_offset_opt_sel, uint8_t cpu_tmx_cal_value_sel_q, uint8_t cpu_tmx_overtime_q, uint8_t cpu_tmx_cal_direction_q, uint8_t cpu_tmx_cal_alg_sel, uint8_t cpu_tmx_cal_clk_sel, uint8_t cpu_tmx_cal_value_sel_i, uint8_t cpu_tmx_overtime_i, uint8_t cpu_tmx_cal_direction_i)
{
    hwp_rf_p0->tmx_cal_cfg.val = (((uint32_t)cpu_tmx_offset_opt_sel << 12) | ((uint32_t)cpu_tmx_cal_value_sel_q << 11) | ((uint32_t)cpu_tmx_overtime_q << 9) | ((uint32_t)cpu_tmx_cal_direction_q << 8) | ((uint32_t)cpu_tmx_cal_alg_sel << 6) | ((uint32_t)cpu_tmx_cal_clk_sel << 4) | ((uint32_t)cpu_tmx_cal_value_sel_i << 3) | ((uint32_t)cpu_tmx_overtime_i << 1) | ((uint32_t)cpu_tmx_cal_direction_i << 0));
}

__STATIC_INLINE void rf_p0_tmx_cal_cfg_unpack(uint8_t* cpu_tmx_offset_opt_sel, uint8_t* cpu_tmx_cal_value_sel_q, uint8_t* cpu_tmx_overtime_q, uint8_t* cpu_tmx_cal_direction_q, uint8_t* cpu_tmx_cal_alg_sel, uint8_t* cpu_tmx_cal_clk_sel, uint8_t* cpu_tmx_cal_value_sel_i, uint8_t* cpu_tmx_overtime_i, uint8_t* cpu_tmx_cal_direction_i)
{
    T_RF_P0_TMX_CAL_CFG localVal = hwp_rf_p0->tmx_cal_cfg;

    *cpu_tmx_offset_opt_sel = localVal.bit_field.cpu_tmx_offset_opt_sel;
    *cpu_tmx_cal_value_sel_q = localVal.bit_field.cpu_tmx_cal_value_sel_q;
    *cpu_tmx_overtime_q = localVal.bit_field.cpu_tmx_overtime_q;
    *cpu_tmx_cal_direction_q = localVal.bit_field.cpu_tmx_cal_direction_q;
    *cpu_tmx_cal_alg_sel = localVal.bit_field.cpu_tmx_cal_alg_sel;
    *cpu_tmx_cal_clk_sel = localVal.bit_field.cpu_tmx_cal_clk_sel;
    *cpu_tmx_cal_value_sel_i = localVal.bit_field.cpu_tmx_cal_value_sel_i;
    *cpu_tmx_overtime_i = localVal.bit_field.cpu_tmx_overtime_i;
    *cpu_tmx_cal_direction_i = localVal.bit_field.cpu_tmx_cal_direction_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_offset_opt_sel_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_offset_opt_sel;
}

__STATIC_INLINE void rf_p0_cpu_tmx_offset_opt_sel_setf(uint8_t cpu_tmx_offset_opt_sel)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_offset_opt_sel = cpu_tmx_offset_opt_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_value_sel_q_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_value_sel_q;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_value_sel_q_setf(uint8_t cpu_tmx_cal_value_sel_q)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_value_sel_q = cpu_tmx_cal_value_sel_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_overtime_q_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_overtime_q;
}

__STATIC_INLINE void rf_p0_cpu_tmx_overtime_q_setf(uint8_t cpu_tmx_overtime_q)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_overtime_q = cpu_tmx_overtime_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_direction_q_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_direction_q;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_direction_q_setf(uint8_t cpu_tmx_cal_direction_q)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_direction_q = cpu_tmx_cal_direction_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_alg_sel_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_alg_sel;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_alg_sel_setf(uint8_t cpu_tmx_cal_alg_sel)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_alg_sel = cpu_tmx_cal_alg_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_clk_sel_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_clk_sel_setf(uint8_t cpu_tmx_cal_clk_sel)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_clk_sel = cpu_tmx_cal_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_value_sel_i_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_value_sel_i;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_value_sel_i_setf(uint8_t cpu_tmx_cal_value_sel_i)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_value_sel_i = cpu_tmx_cal_value_sel_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_overtime_i_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_overtime_i;
}

__STATIC_INLINE void rf_p0_cpu_tmx_overtime_i_setf(uint8_t cpu_tmx_overtime_i)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_overtime_i = cpu_tmx_overtime_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_direction_i_getf(void)
{
    return hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_direction_i;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_direction_i_setf(uint8_t cpu_tmx_cal_direction_i)
{
    hwp_rf_p0->tmx_cal_cfg.bit_field.cpu_tmx_cal_direction_i = cpu_tmx_cal_direction_i;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cal_clk_dr_get(void)
{
    return hwp_rf_p0->tmx_cal_clk_dr.val;
}

__STATIC_INLINE void rf_p0_tmx_cal_clk_dr_set(uint32_t value)
{
    hwp_rf_p0->tmx_cal_clk_dr.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cal_clk_dr_pack(uint8_t cpu_tmx_cal_clk_dr, uint8_t cpu_tmx_cal_clk)
{
    hwp_rf_p0->tmx_cal_clk_dr.val = (((uint32_t)cpu_tmx_cal_clk_dr << 1) | ((uint32_t)cpu_tmx_cal_clk << 0));
}

__STATIC_INLINE void rf_p0_tmx_cal_clk_dr_unpack(uint8_t* cpu_tmx_cal_clk_dr, uint8_t* cpu_tmx_cal_clk)
{
    T_RF_P0_TMX_CAL_CLK_DR localVal = hwp_rf_p0->tmx_cal_clk_dr;

    *cpu_tmx_cal_clk_dr = localVal.bit_field.cpu_tmx_cal_clk_dr;
    *cpu_tmx_cal_clk = localVal.bit_field.cpu_tmx_cal_clk;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_clk_dr_getf(void)
{
    return hwp_rf_p0->tmx_cal_clk_dr.bit_field.cpu_tmx_cal_clk_dr;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_clk_dr_setf(uint8_t cpu_tmx_cal_clk_dr)
{
    hwp_rf_p0->tmx_cal_clk_dr.bit_field.cpu_tmx_cal_clk_dr = cpu_tmx_cal_clk_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tmx_cal_clk_getf(void)
{
    return hwp_rf_p0->tmx_cal_clk_dr.bit_field.cpu_tmx_cal_clk;
}

__STATIC_INLINE void rf_p0_cpu_tmx_cal_clk_setf(uint8_t cpu_tmx_cal_clk)
{
    hwp_rf_p0->tmx_cal_clk_dr.bit_field.cpu_tmx_cal_clk = cpu_tmx_cal_clk;
}

__STATIC_INLINE uint32_t rf_p0_cal_tmx_i_dr_get(void)
{
    return hwp_rf_p0->cal_tmx_i_dr.val;
}

__STATIC_INLINE void rf_p0_cal_tmx_i_dr_set(uint32_t value)
{
    hwp_rf_p0->cal_tmx_i_dr.val = value;
}

__STATIC_INLINE void rf_p0_cal_tmx_i_dr_pack(uint8_t cpu_cal_tmx_i_dr, uint8_t cpu_cal_tmx_i)
{
    hwp_rf_p0->cal_tmx_i_dr.val = (((uint32_t)cpu_cal_tmx_i_dr << 8) | ((uint32_t)cpu_cal_tmx_i << 0));
}

__STATIC_INLINE void rf_p0_cal_tmx_i_dr_unpack(uint8_t* cpu_cal_tmx_i_dr, uint8_t* cpu_cal_tmx_i)
{
    T_RF_P0_CAL_TMX_I_DR localVal = hwp_rf_p0->cal_tmx_i_dr;

    *cpu_cal_tmx_i_dr = localVal.bit_field.cpu_cal_tmx_i_dr;
    *cpu_cal_tmx_i = localVal.bit_field.cpu_cal_tmx_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_tmx_i_dr_getf(void)
{
    return hwp_rf_p0->cal_tmx_i_dr.bit_field.cpu_cal_tmx_i_dr;
}

__STATIC_INLINE void rf_p0_cpu_cal_tmx_i_dr_setf(uint8_t cpu_cal_tmx_i_dr)
{
    hwp_rf_p0->cal_tmx_i_dr.bit_field.cpu_cal_tmx_i_dr = cpu_cal_tmx_i_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_tmx_i_getf(void)
{
    return hwp_rf_p0->cal_tmx_i_dr.bit_field.cpu_cal_tmx_i;
}

__STATIC_INLINE void rf_p0_cpu_cal_tmx_i_setf(uint8_t cpu_cal_tmx_i)
{
    hwp_rf_p0->cal_tmx_i_dr.bit_field.cpu_cal_tmx_i = cpu_cal_tmx_i;
}

__STATIC_INLINE uint32_t rf_p0_cal_tmx_q_dr_get(void)
{
    return hwp_rf_p0->cal_tmx_q_dr.val;
}

__STATIC_INLINE void rf_p0_cal_tmx_q_dr_set(uint32_t value)
{
    hwp_rf_p0->cal_tmx_q_dr.val = value;
}

__STATIC_INLINE void rf_p0_cal_tmx_q_dr_pack(uint8_t cpu_cal_tmx_q_dr, uint8_t cpu_cal_tmx_q)
{
    hwp_rf_p0->cal_tmx_q_dr.val = (((uint32_t)cpu_cal_tmx_q_dr << 8) | ((uint32_t)cpu_cal_tmx_q << 0));
}

__STATIC_INLINE void rf_p0_cal_tmx_q_dr_unpack(uint8_t* cpu_cal_tmx_q_dr, uint8_t* cpu_cal_tmx_q)
{
    T_RF_P0_CAL_TMX_Q_DR localVal = hwp_rf_p0->cal_tmx_q_dr;

    *cpu_cal_tmx_q_dr = localVal.bit_field.cpu_cal_tmx_q_dr;
    *cpu_cal_tmx_q = localVal.bit_field.cpu_cal_tmx_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_tmx_q_dr_getf(void)
{
    return hwp_rf_p0->cal_tmx_q_dr.bit_field.cpu_cal_tmx_q_dr;
}

__STATIC_INLINE void rf_p0_cpu_cal_tmx_q_dr_setf(uint8_t cpu_cal_tmx_q_dr)
{
    hwp_rf_p0->cal_tmx_q_dr.bit_field.cpu_cal_tmx_q_dr = cpu_cal_tmx_q_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_tmx_q_getf(void)
{
    return hwp_rf_p0->cal_tmx_q_dr.bit_field.cpu_cal_tmx_q;
}

__STATIC_INLINE void rf_p0_cpu_cal_tmx_q_setf(uint8_t cpu_cal_tmx_q)
{
    hwp_rf_p0->cal_tmx_q_dr.bit_field.cpu_cal_tmx_q = cpu_cal_tmx_q;
}

__STATIC_INLINE uint32_t rf_p0_txlpf_cfg1_get(void)
{
    return hwp_rf_p0->txlpf_cfg1.val;
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_set(uint32_t value)
{
    hwp_rf_p0->txlpf_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_pack(uint8_t txlpf_coff_b, uint8_t txlpf_resv_b, uint8_t txlpf_ibsel_b, uint8_t txlpf_atrim_q_b, uint8_t txlpf_atrim_i_b, uint8_t txlpf_ldo_vbit_b)
{
    hwp_rf_p0->txlpf_cfg1.val = (((uint32_t)txlpf_coff_b << 12) | ((uint32_t)txlpf_resv_b << 10) | ((uint32_t)txlpf_ibsel_b << 8) | ((uint32_t)txlpf_atrim_q_b << 6) | ((uint32_t)txlpf_atrim_i_b << 4) | ((uint32_t)txlpf_ldo_vbit_b << 0));
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_unpack(uint8_t* txlpf_coff_b, uint8_t* txlpf_resv_b, uint8_t* txlpf_ibsel_b, uint8_t* txlpf_atrim_q_b, uint8_t* txlpf_atrim_i_b, uint8_t* txlpf_ldo_vbit_b)
{
    T_RF_P0_TXLPF_CFG1 localVal = hwp_rf_p0->txlpf_cfg1;

    *txlpf_coff_b = localVal.bit_field.txlpf_coff_b;
    *txlpf_resv_b = localVal.bit_field.txlpf_resv_b;
    *txlpf_ibsel_b = localVal.bit_field.txlpf_ibsel_b;
    *txlpf_atrim_q_b = localVal.bit_field.txlpf_atrim_q_b;
    *txlpf_atrim_i_b = localVal.bit_field.txlpf_atrim_i_b;
    *txlpf_ldo_vbit_b = localVal.bit_field.txlpf_ldo_vbit_b;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_coff_b_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_coff_b;
}

__STATIC_INLINE void rf_p0_txlpf_coff_b_setf(uint8_t txlpf_coff_b)
{
    hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_coff_b = txlpf_coff_b;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_resv_b_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_resv_b;
}

__STATIC_INLINE void rf_p0_txlpf_resv_b_setf(uint8_t txlpf_resv_b)
{
    hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_resv_b = txlpf_resv_b;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_ibsel_b_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_ibsel_b;
}

__STATIC_INLINE void rf_p0_txlpf_ibsel_b_setf(uint8_t txlpf_ibsel_b)
{
    hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_ibsel_b = txlpf_ibsel_b;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_atrim_q_b_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_atrim_q_b;
}

__STATIC_INLINE void rf_p0_txlpf_atrim_q_b_setf(uint8_t txlpf_atrim_q_b)
{
    hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_atrim_q_b = txlpf_atrim_q_b;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_atrim_i_b_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_atrim_i_b;
}

__STATIC_INLINE void rf_p0_txlpf_atrim_i_b_setf(uint8_t txlpf_atrim_i_b)
{
    hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_atrim_i_b = txlpf_atrim_i_b;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_ldo_vbit_b_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_ldo_vbit_b;
}

__STATIC_INLINE void rf_p0_txlpf_ldo_vbit_b_setf(uint8_t txlpf_ldo_vbit_b)
{
    hwp_rf_p0->txlpf_cfg1.bit_field.txlpf_ldo_vbit_b = txlpf_ldo_vbit_b;
}

__STATIC_INLINE uint32_t rf_p0_txlpf_ctrim_dr_get(void)
{
    return hwp_rf_p0->txlpf_ctrim_dr.val;
}

__STATIC_INLINE void rf_p0_txlpf_ctrim_dr_set(uint32_t value)
{
    hwp_rf_p0->txlpf_ctrim_dr.val = value;
}

__STATIC_INLINE void rf_p0_txlpf_ctrim_dr_pack(uint8_t cpu_txlpf_ctrim_dr, uint8_t cpu_txlpf_ctrim)
{
    hwp_rf_p0->txlpf_ctrim_dr.val = (((uint32_t)cpu_txlpf_ctrim_dr << 5) | ((uint32_t)cpu_txlpf_ctrim << 0));
}

__STATIC_INLINE void rf_p0_txlpf_ctrim_dr_unpack(uint8_t* cpu_txlpf_ctrim_dr, uint8_t* cpu_txlpf_ctrim)
{
    T_RF_P0_TXLPF_CTRIM_DR localVal = hwp_rf_p0->txlpf_ctrim_dr;

    *cpu_txlpf_ctrim_dr = localVal.bit_field.cpu_txlpf_ctrim_dr;
    *cpu_txlpf_ctrim = localVal.bit_field.cpu_txlpf_ctrim;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_ctrim_dr_getf(void)
{
    return hwp_rf_p0->txlpf_ctrim_dr.bit_field.cpu_txlpf_ctrim_dr;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_ctrim_dr_setf(uint8_t cpu_txlpf_ctrim_dr)
{
    hwp_rf_p0->txlpf_ctrim_dr.bit_field.cpu_txlpf_ctrim_dr = cpu_txlpf_ctrim_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_ctrim_getf(void)
{
    return hwp_rf_p0->txlpf_ctrim_dr.bit_field.cpu_txlpf_ctrim;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_ctrim_setf(uint8_t cpu_txlpf_ctrim)
{
    hwp_rf_p0->txlpf_ctrim_dr.bit_field.cpu_txlpf_ctrim = cpu_txlpf_ctrim;
}

__STATIC_INLINE uint32_t rf_p0_txlpf_cal_cfg_get(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_txlpf_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->txlpf_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_txlpf_cal_cfg_pack(uint8_t cpu_txlpf_offset_opt_sel, uint8_t cpu_txlpf_cal_value_sel_q, uint8_t cpu_txlpf_overtime_q, uint8_t cpu_txlpf_cal_direction_q, uint8_t cpu_txlpf_cal_alg_sel, uint8_t cpu_txlpf_cal_clk_sel, uint8_t cpu_txlpf_cal_value_sel_i, uint8_t cpu_txlpf_overtime_i, uint8_t cpu_txlpf_cal_direction_i)
{
    hwp_rf_p0->txlpf_cal_cfg.val = (((uint32_t)cpu_txlpf_offset_opt_sel << 12) | ((uint32_t)cpu_txlpf_cal_value_sel_q << 11) | ((uint32_t)cpu_txlpf_overtime_q << 9) | ((uint32_t)cpu_txlpf_cal_direction_q << 8) | ((uint32_t)cpu_txlpf_cal_alg_sel << 6) | ((uint32_t)cpu_txlpf_cal_clk_sel << 4) | ((uint32_t)cpu_txlpf_cal_value_sel_i << 3) | ((uint32_t)cpu_txlpf_overtime_i << 1) | ((uint32_t)cpu_txlpf_cal_direction_i << 0));
}

__STATIC_INLINE void rf_p0_txlpf_cal_cfg_unpack(uint8_t* cpu_txlpf_offset_opt_sel, uint8_t* cpu_txlpf_cal_value_sel_q, uint8_t* cpu_txlpf_overtime_q, uint8_t* cpu_txlpf_cal_direction_q, uint8_t* cpu_txlpf_cal_alg_sel, uint8_t* cpu_txlpf_cal_clk_sel, uint8_t* cpu_txlpf_cal_value_sel_i, uint8_t* cpu_txlpf_overtime_i, uint8_t* cpu_txlpf_cal_direction_i)
{
    T_RF_P0_TXLPF_CAL_CFG localVal = hwp_rf_p0->txlpf_cal_cfg;

    *cpu_txlpf_offset_opt_sel = localVal.bit_field.cpu_txlpf_offset_opt_sel;
    *cpu_txlpf_cal_value_sel_q = localVal.bit_field.cpu_txlpf_cal_value_sel_q;
    *cpu_txlpf_overtime_q = localVal.bit_field.cpu_txlpf_overtime_q;
    *cpu_txlpf_cal_direction_q = localVal.bit_field.cpu_txlpf_cal_direction_q;
    *cpu_txlpf_cal_alg_sel = localVal.bit_field.cpu_txlpf_cal_alg_sel;
    *cpu_txlpf_cal_clk_sel = localVal.bit_field.cpu_txlpf_cal_clk_sel;
    *cpu_txlpf_cal_value_sel_i = localVal.bit_field.cpu_txlpf_cal_value_sel_i;
    *cpu_txlpf_overtime_i = localVal.bit_field.cpu_txlpf_overtime_i;
    *cpu_txlpf_cal_direction_i = localVal.bit_field.cpu_txlpf_cal_direction_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_offset_opt_sel_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_offset_opt_sel;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_offset_opt_sel_setf(uint8_t cpu_txlpf_offset_opt_sel)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_offset_opt_sel = cpu_txlpf_offset_opt_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_cal_value_sel_q_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_value_sel_q;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_cal_value_sel_q_setf(uint8_t cpu_txlpf_cal_value_sel_q)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_value_sel_q = cpu_txlpf_cal_value_sel_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_overtime_q_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_overtime_q;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_overtime_q_setf(uint8_t cpu_txlpf_overtime_q)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_overtime_q = cpu_txlpf_overtime_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_cal_direction_q_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_direction_q;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_cal_direction_q_setf(uint8_t cpu_txlpf_cal_direction_q)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_direction_q = cpu_txlpf_cal_direction_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_cal_alg_sel_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_alg_sel;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_cal_alg_sel_setf(uint8_t cpu_txlpf_cal_alg_sel)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_alg_sel = cpu_txlpf_cal_alg_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_cal_clk_sel_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_cal_clk_sel_setf(uint8_t cpu_txlpf_cal_clk_sel)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_clk_sel = cpu_txlpf_cal_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_cal_value_sel_i_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_value_sel_i;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_cal_value_sel_i_setf(uint8_t cpu_txlpf_cal_value_sel_i)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_value_sel_i = cpu_txlpf_cal_value_sel_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_overtime_i_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_overtime_i;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_overtime_i_setf(uint8_t cpu_txlpf_overtime_i)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_overtime_i = cpu_txlpf_overtime_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_cal_direction_i_getf(void)
{
    return hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_direction_i;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_cal_direction_i_setf(uint8_t cpu_txlpf_cal_direction_i)
{
    hwp_rf_p0->txlpf_cal_cfg.bit_field.cpu_txlpf_cal_direction_i = cpu_txlpf_cal_direction_i;
}

__STATIC_INLINE uint32_t rf_p0_txlpf_otrim_dr_get(void)
{
    return hwp_rf_p0->txlpf_otrim_dr.val;
}

__STATIC_INLINE void rf_p0_txlpf_otrim_dr_set(uint32_t value)
{
    hwp_rf_p0->txlpf_otrim_dr.val = value;
}

__STATIC_INLINE void rf_p0_txlpf_otrim_dr_pack(uint8_t cpu_txlpf_otrim_q_dr, uint8_t cpu_txlpf_otrim_q, uint8_t cpu_txlpf_otrim_i_dr, uint8_t cpu_txlpf_otrim_i)
{
    hwp_rf_p0->txlpf_otrim_dr.val = (((uint32_t)cpu_txlpf_otrim_q_dr << 14) | ((uint32_t)cpu_txlpf_otrim_q << 8) | ((uint32_t)cpu_txlpf_otrim_i_dr << 6) | ((uint32_t)cpu_txlpf_otrim_i << 0));
}

__STATIC_INLINE void rf_p0_txlpf_otrim_dr_unpack(uint8_t* cpu_txlpf_otrim_q_dr, uint8_t* cpu_txlpf_otrim_q, uint8_t* cpu_txlpf_otrim_i_dr, uint8_t* cpu_txlpf_otrim_i)
{
    T_RF_P0_TXLPF_OTRIM_DR localVal = hwp_rf_p0->txlpf_otrim_dr;

    *cpu_txlpf_otrim_q_dr = localVal.bit_field.cpu_txlpf_otrim_q_dr;
    *cpu_txlpf_otrim_q = localVal.bit_field.cpu_txlpf_otrim_q;
    *cpu_txlpf_otrim_i_dr = localVal.bit_field.cpu_txlpf_otrim_i_dr;
    *cpu_txlpf_otrim_i = localVal.bit_field.cpu_txlpf_otrim_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_otrim_q_dr_getf(void)
{
    return hwp_rf_p0->txlpf_otrim_dr.bit_field.cpu_txlpf_otrim_q_dr;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_otrim_q_dr_setf(uint8_t cpu_txlpf_otrim_q_dr)
{
    hwp_rf_p0->txlpf_otrim_dr.bit_field.cpu_txlpf_otrim_q_dr = cpu_txlpf_otrim_q_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_otrim_q_getf(void)
{
    return hwp_rf_p0->txlpf_otrim_dr.bit_field.cpu_txlpf_otrim_q;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_otrim_q_setf(uint8_t cpu_txlpf_otrim_q)
{
    hwp_rf_p0->txlpf_otrim_dr.bit_field.cpu_txlpf_otrim_q = cpu_txlpf_otrim_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_otrim_i_dr_getf(void)
{
    return hwp_rf_p0->txlpf_otrim_dr.bit_field.cpu_txlpf_otrim_i_dr;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_otrim_i_dr_setf(uint8_t cpu_txlpf_otrim_i_dr)
{
    hwp_rf_p0->txlpf_otrim_dr.bit_field.cpu_txlpf_otrim_i_dr = cpu_txlpf_otrim_i_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txlpf_otrim_i_getf(void)
{
    return hwp_rf_p0->txlpf_otrim_dr.bit_field.cpu_txlpf_otrim_i;
}

__STATIC_INLINE void rf_p0_cpu_txlpf_otrim_i_setf(uint8_t cpu_txlpf_otrim_i)
{
    hwp_rf_p0->txlpf_otrim_dr.bit_field.cpu_txlpf_otrim_i = cpu_txlpf_otrim_i;
}

__STATIC_INLINE uint32_t rf_p0_tx_img_cal_cfg_get(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_tx_img_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->tx_img_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_tx_img_cal_cfg_pack(uint8_t cpu_tx_img_cal_value_sel_q, uint8_t cpu_tx_img_overtime_q, uint8_t cpu_tx_img_cal_direction_q, uint8_t cpu_tx_img_cal_alg_sel, uint8_t cpu_tx_img_cal_clk_sel, uint8_t cpu_tx_img_cal_value_sel_i, uint8_t cpu_tx_img_overtime_i, uint8_t cpu_tx_img_cal_direction_i)
{
    hwp_rf_p0->tx_img_cal_cfg.val = (((uint32_t)cpu_tx_img_cal_value_sel_q << 11) | ((uint32_t)cpu_tx_img_overtime_q << 9) | ((uint32_t)cpu_tx_img_cal_direction_q << 8) | ((uint32_t)cpu_tx_img_cal_alg_sel << 6) | ((uint32_t)cpu_tx_img_cal_clk_sel << 4) | ((uint32_t)cpu_tx_img_cal_value_sel_i << 3) | ((uint32_t)cpu_tx_img_overtime_i << 1) | ((uint32_t)cpu_tx_img_cal_direction_i << 0));
}

__STATIC_INLINE void rf_p0_tx_img_cal_cfg_unpack(uint8_t* cpu_tx_img_cal_value_sel_q, uint8_t* cpu_tx_img_overtime_q, uint8_t* cpu_tx_img_cal_direction_q, uint8_t* cpu_tx_img_cal_alg_sel, uint8_t* cpu_tx_img_cal_clk_sel, uint8_t* cpu_tx_img_cal_value_sel_i, uint8_t* cpu_tx_img_overtime_i, uint8_t* cpu_tx_img_cal_direction_i)
{
    T_RF_P0_TX_IMG_CAL_CFG localVal = hwp_rf_p0->tx_img_cal_cfg;

    *cpu_tx_img_cal_value_sel_q = localVal.bit_field.cpu_tx_img_cal_value_sel_q;
    *cpu_tx_img_overtime_q = localVal.bit_field.cpu_tx_img_overtime_q;
    *cpu_tx_img_cal_direction_q = localVal.bit_field.cpu_tx_img_cal_direction_q;
    *cpu_tx_img_cal_alg_sel = localVal.bit_field.cpu_tx_img_cal_alg_sel;
    *cpu_tx_img_cal_clk_sel = localVal.bit_field.cpu_tx_img_cal_clk_sel;
    *cpu_tx_img_cal_value_sel_i = localVal.bit_field.cpu_tx_img_cal_value_sel_i;
    *cpu_tx_img_overtime_i = localVal.bit_field.cpu_tx_img_overtime_i;
    *cpu_tx_img_cal_direction_i = localVal.bit_field.cpu_tx_img_cal_direction_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_img_cal_value_sel_q_getf(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_value_sel_q;
}

__STATIC_INLINE void rf_p0_cpu_tx_img_cal_value_sel_q_setf(uint8_t cpu_tx_img_cal_value_sel_q)
{
    hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_value_sel_q = cpu_tx_img_cal_value_sel_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_img_overtime_q_getf(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_overtime_q;
}

__STATIC_INLINE void rf_p0_cpu_tx_img_overtime_q_setf(uint8_t cpu_tx_img_overtime_q)
{
    hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_overtime_q = cpu_tx_img_overtime_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_img_cal_direction_q_getf(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_direction_q;
}

__STATIC_INLINE void rf_p0_cpu_tx_img_cal_direction_q_setf(uint8_t cpu_tx_img_cal_direction_q)
{
    hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_direction_q = cpu_tx_img_cal_direction_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_img_cal_alg_sel_getf(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_alg_sel;
}

__STATIC_INLINE void rf_p0_cpu_tx_img_cal_alg_sel_setf(uint8_t cpu_tx_img_cal_alg_sel)
{
    hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_alg_sel = cpu_tx_img_cal_alg_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_img_cal_clk_sel_getf(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_tx_img_cal_clk_sel_setf(uint8_t cpu_tx_img_cal_clk_sel)
{
    hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_clk_sel = cpu_tx_img_cal_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_img_cal_value_sel_i_getf(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_value_sel_i;
}

__STATIC_INLINE void rf_p0_cpu_tx_img_cal_value_sel_i_setf(uint8_t cpu_tx_img_cal_value_sel_i)
{
    hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_value_sel_i = cpu_tx_img_cal_value_sel_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_img_overtime_i_getf(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_overtime_i;
}

__STATIC_INLINE void rf_p0_cpu_tx_img_overtime_i_setf(uint8_t cpu_tx_img_overtime_i)
{
    hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_overtime_i = cpu_tx_img_overtime_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_tx_img_cal_direction_i_getf(void)
{
    return hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_direction_i;
}

__STATIC_INLINE void rf_p0_cpu_tx_img_cal_direction_i_setf(uint8_t cpu_tx_img_cal_direction_i)
{
    hwp_rf_p0->tx_img_cal_cfg.bit_field.cpu_tx_img_cal_direction_i = cpu_tx_img_cal_direction_i;
}

__STATIC_INLINE uint32_t rf_p0_cal_tx_img_dr_get(void)
{
    return hwp_rf_p0->cal_tx_img_dr.val;
}

__STATIC_INLINE void rf_p0_cal_tx_img_dr_set(uint32_t value)
{
    hwp_rf_p0->cal_tx_img_dr.val = value;
}

__STATIC_INLINE void rf_p0_cal_tx_img_dr_pack(uint8_t cpu_cal_tx_img_q_dr, uint8_t cpu_cal_tx_img_q, uint8_t cpu_cal_tx_img_i_dr, uint8_t cpu_cal_tx_img_i)
{
    hwp_rf_p0->cal_tx_img_dr.val = (((uint32_t)cpu_cal_tx_img_q_dr << 14) | ((uint32_t)cpu_cal_tx_img_q << 8) | ((uint32_t)cpu_cal_tx_img_i_dr << 6) | ((uint32_t)cpu_cal_tx_img_i << 0));
}

__STATIC_INLINE void rf_p0_cal_tx_img_dr_unpack(uint8_t* cpu_cal_tx_img_q_dr, uint8_t* cpu_cal_tx_img_q, uint8_t* cpu_cal_tx_img_i_dr, uint8_t* cpu_cal_tx_img_i)
{
    T_RF_P0_CAL_TX_IMG_DR localVal = hwp_rf_p0->cal_tx_img_dr;

    *cpu_cal_tx_img_q_dr = localVal.bit_field.cpu_cal_tx_img_q_dr;
    *cpu_cal_tx_img_q = localVal.bit_field.cpu_cal_tx_img_q;
    *cpu_cal_tx_img_i_dr = localVal.bit_field.cpu_cal_tx_img_i_dr;
    *cpu_cal_tx_img_i = localVal.bit_field.cpu_cal_tx_img_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_tx_img_q_dr_getf(void)
{
    return hwp_rf_p0->cal_tx_img_dr.bit_field.cpu_cal_tx_img_q_dr;
}

__STATIC_INLINE void rf_p0_cpu_cal_tx_img_q_dr_setf(uint8_t cpu_cal_tx_img_q_dr)
{
    hwp_rf_p0->cal_tx_img_dr.bit_field.cpu_cal_tx_img_q_dr = cpu_cal_tx_img_q_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_tx_img_q_getf(void)
{
    return hwp_rf_p0->cal_tx_img_dr.bit_field.cpu_cal_tx_img_q;
}

__STATIC_INLINE void rf_p0_cpu_cal_tx_img_q_setf(uint8_t cpu_cal_tx_img_q)
{
    hwp_rf_p0->cal_tx_img_dr.bit_field.cpu_cal_tx_img_q = cpu_cal_tx_img_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_tx_img_i_dr_getf(void)
{
    return hwp_rf_p0->cal_tx_img_dr.bit_field.cpu_cal_tx_img_i_dr;
}

__STATIC_INLINE void rf_p0_cpu_cal_tx_img_i_dr_setf(uint8_t cpu_cal_tx_img_i_dr)
{
    hwp_rf_p0->cal_tx_img_dr.bit_field.cpu_cal_tx_img_i_dr = cpu_cal_tx_img_i_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_cal_tx_img_i_getf(void)
{
    return hwp_rf_p0->cal_tx_img_dr.bit_field.cpu_cal_tx_img_i;
}

__STATIC_INLINE void rf_p0_cpu_cal_tx_img_i_setf(uint8_t cpu_cal_tx_img_i)
{
    hwp_rf_p0->cal_tx_img_dr.bit_field.cpu_cal_tx_img_i = cpu_cal_tx_img_i;
}

__STATIC_INLINE uint32_t rf_p0_txdac_cfg_get(void)
{
    return hwp_rf_p0->txdac_cfg.val;
}

__STATIC_INLINE void rf_p0_txdac_cfg_set(uint32_t value)
{
    hwp_rf_p0->txdac_cfg.val = value;
}

__STATIC_INLINE void rf_p0_txdac_cfg_pack(uint8_t txbuff_iq_sel, uint8_t dac_ldo_testen, uint8_t dac_ldo_vbit, uint8_t dac_resv, uint8_t dac_ibsel, uint8_t dac_txbuf_gain, uint8_t dac_txbuf_vcm)
{
    hwp_rf_p0->txdac_cfg.val = (((uint32_t)txbuff_iq_sel << 12) | ((uint32_t)dac_ldo_testen << 11) | ((uint32_t)dac_ldo_vbit << 8) | ((uint32_t)dac_resv << 6) | ((uint32_t)dac_ibsel << 4) | ((uint32_t)dac_txbuf_gain << 2) | ((uint32_t)dac_txbuf_vcm << 0));
}

__STATIC_INLINE void rf_p0_txdac_cfg_unpack(uint8_t* txbuff_iq_sel, uint8_t* dac_ldo_testen, uint8_t* dac_ldo_vbit, uint8_t* dac_resv, uint8_t* dac_ibsel, uint8_t* dac_txbuf_gain, uint8_t* dac_txbuf_vcm)
{
    T_RF_P0_TXDAC_CFG localVal = hwp_rf_p0->txdac_cfg;

    *txbuff_iq_sel = localVal.bit_field.txbuff_iq_sel;
    *dac_ldo_testen = localVal.bit_field.dac_ldo_testen;
    *dac_ldo_vbit = localVal.bit_field.dac_ldo_vbit;
    *dac_resv = localVal.bit_field.dac_resv;
    *dac_ibsel = localVal.bit_field.dac_ibsel;
    *dac_txbuf_gain = localVal.bit_field.dac_txbuf_gain;
    *dac_txbuf_vcm = localVal.bit_field.dac_txbuf_vcm;
}

__STATIC_INLINE uint8_t rf_p0_txbuff_iq_sel_getf(void)
{
    return hwp_rf_p0->txdac_cfg.bit_field.txbuff_iq_sel;
}

__STATIC_INLINE void rf_p0_txbuff_iq_sel_setf(uint8_t txbuff_iq_sel)
{
    hwp_rf_p0->txdac_cfg.bit_field.txbuff_iq_sel = txbuff_iq_sel;
}

__STATIC_INLINE uint8_t rf_p0_dac_ldo_testen_getf(void)
{
    return hwp_rf_p0->txdac_cfg.bit_field.dac_ldo_testen;
}

__STATIC_INLINE void rf_p0_dac_ldo_testen_setf(uint8_t dac_ldo_testen)
{
    hwp_rf_p0->txdac_cfg.bit_field.dac_ldo_testen = dac_ldo_testen;
}

__STATIC_INLINE uint8_t rf_p0_dac_ldo_vbit_getf(void)
{
    return hwp_rf_p0->txdac_cfg.bit_field.dac_ldo_vbit;
}

__STATIC_INLINE void rf_p0_dac_ldo_vbit_setf(uint8_t dac_ldo_vbit)
{
    hwp_rf_p0->txdac_cfg.bit_field.dac_ldo_vbit = dac_ldo_vbit;
}

__STATIC_INLINE uint8_t rf_p0_dac_resv_getf(void)
{
    return hwp_rf_p0->txdac_cfg.bit_field.dac_resv;
}

__STATIC_INLINE void rf_p0_dac_resv_setf(uint8_t dac_resv)
{
    hwp_rf_p0->txdac_cfg.bit_field.dac_resv = dac_resv;
}

__STATIC_INLINE uint8_t rf_p0_dac_ibsel_getf(void)
{
    return hwp_rf_p0->txdac_cfg.bit_field.dac_ibsel;
}

__STATIC_INLINE void rf_p0_dac_ibsel_setf(uint8_t dac_ibsel)
{
    hwp_rf_p0->txdac_cfg.bit_field.dac_ibsel = dac_ibsel;
}

__STATIC_INLINE uint8_t rf_p0_dac_txbuf_gain_getf(void)
{
    return hwp_rf_p0->txdac_cfg.bit_field.dac_txbuf_gain;
}

__STATIC_INLINE void rf_p0_dac_txbuf_gain_setf(uint8_t dac_txbuf_gain)
{
    hwp_rf_p0->txdac_cfg.bit_field.dac_txbuf_gain = dac_txbuf_gain;
}

__STATIC_INLINE uint8_t rf_p0_dac_txbuf_vcm_getf(void)
{
    return hwp_rf_p0->txdac_cfg.bit_field.dac_txbuf_vcm;
}

__STATIC_INLINE void rf_p0_dac_txbuf_vcm_setf(uint8_t dac_txbuf_vcm)
{
    hwp_rf_p0->txdac_cfg.bit_field.dac_txbuf_vcm = dac_txbuf_vcm;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cb_cfg1_get(void)
{
    return hwp_rf_p0->tmx_cb_cfg1.val;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg1_set(uint32_t value)
{
    hwp_rf_p0->tmx_cb_cfg1.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg1_pack(uint8_t tmx_cbn_2412m, uint8_t tmx_cbp_2412m, uint8_t tmx_cbn_2417m, uint8_t tmx_cbp_2417m)
{
    hwp_rf_p0->tmx_cb_cfg1.val = (((uint32_t)tmx_cbn_2412m << 12) | ((uint32_t)tmx_cbp_2412m << 8) | ((uint32_t)tmx_cbn_2417m << 4) | ((uint32_t)tmx_cbp_2417m << 0));
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg1_unpack(uint8_t* tmx_cbn_2412m, uint8_t* tmx_cbp_2412m, uint8_t* tmx_cbn_2417m, uint8_t* tmx_cbp_2417m)
{
    T_RF_P0_TMX_CB_CFG1 localVal = hwp_rf_p0->tmx_cb_cfg1;

    *tmx_cbn_2412m = localVal.bit_field.tmx_cbn_2412m;
    *tmx_cbp_2412m = localVal.bit_field.tmx_cbp_2412m;
    *tmx_cbn_2417m = localVal.bit_field.tmx_cbn_2417m;
    *tmx_cbp_2417m = localVal.bit_field.tmx_cbp_2417m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2412m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg1.bit_field.tmx_cbn_2412m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2412m_setf(uint8_t tmx_cbn_2412m)
{
    hwp_rf_p0->tmx_cb_cfg1.bit_field.tmx_cbn_2412m = tmx_cbn_2412m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2412m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg1.bit_field.tmx_cbp_2412m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2412m_setf(uint8_t tmx_cbp_2412m)
{
    hwp_rf_p0->tmx_cb_cfg1.bit_field.tmx_cbp_2412m = tmx_cbp_2412m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2417m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg1.bit_field.tmx_cbn_2417m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2417m_setf(uint8_t tmx_cbn_2417m)
{
    hwp_rf_p0->tmx_cb_cfg1.bit_field.tmx_cbn_2417m = tmx_cbn_2417m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2417m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg1.bit_field.tmx_cbp_2417m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2417m_setf(uint8_t tmx_cbp_2417m)
{
    hwp_rf_p0->tmx_cb_cfg1.bit_field.tmx_cbp_2417m = tmx_cbp_2417m;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cb_cfg2_get(void)
{
    return hwp_rf_p0->tmx_cb_cfg2.val;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg2_set(uint32_t value)
{
    hwp_rf_p0->tmx_cb_cfg2.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg2_pack(uint8_t tmx_cbn_2422m, uint8_t tmx_cbp_2422m, uint8_t tmx_cbn_2427m, uint8_t tmx_cbp_2427m)
{
    hwp_rf_p0->tmx_cb_cfg2.val = (((uint32_t)tmx_cbn_2422m << 12) | ((uint32_t)tmx_cbp_2422m << 8) | ((uint32_t)tmx_cbn_2427m << 4) | ((uint32_t)tmx_cbp_2427m << 0));
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg2_unpack(uint8_t* tmx_cbn_2422m, uint8_t* tmx_cbp_2422m, uint8_t* tmx_cbn_2427m, uint8_t* tmx_cbp_2427m)
{
    T_RF_P0_TMX_CB_CFG2 localVal = hwp_rf_p0->tmx_cb_cfg2;

    *tmx_cbn_2422m = localVal.bit_field.tmx_cbn_2422m;
    *tmx_cbp_2422m = localVal.bit_field.tmx_cbp_2422m;
    *tmx_cbn_2427m = localVal.bit_field.tmx_cbn_2427m;
    *tmx_cbp_2427m = localVal.bit_field.tmx_cbp_2427m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2422m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg2.bit_field.tmx_cbn_2422m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2422m_setf(uint8_t tmx_cbn_2422m)
{
    hwp_rf_p0->tmx_cb_cfg2.bit_field.tmx_cbn_2422m = tmx_cbn_2422m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2422m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg2.bit_field.tmx_cbp_2422m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2422m_setf(uint8_t tmx_cbp_2422m)
{
    hwp_rf_p0->tmx_cb_cfg2.bit_field.tmx_cbp_2422m = tmx_cbp_2422m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2427m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg2.bit_field.tmx_cbn_2427m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2427m_setf(uint8_t tmx_cbn_2427m)
{
    hwp_rf_p0->tmx_cb_cfg2.bit_field.tmx_cbn_2427m = tmx_cbn_2427m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2427m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg2.bit_field.tmx_cbp_2427m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2427m_setf(uint8_t tmx_cbp_2427m)
{
    hwp_rf_p0->tmx_cb_cfg2.bit_field.tmx_cbp_2427m = tmx_cbp_2427m;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cb_cfg3_get(void)
{
    return hwp_rf_p0->tmx_cb_cfg3.val;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg3_set(uint32_t value)
{
    hwp_rf_p0->tmx_cb_cfg3.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg3_pack(uint8_t tmx_cbn_2432m, uint8_t tmx_cbp_2432m, uint8_t tmx_cbn_2437m, uint8_t tmx_cbp_2437m)
{
    hwp_rf_p0->tmx_cb_cfg3.val = (((uint32_t)tmx_cbn_2432m << 12) | ((uint32_t)tmx_cbp_2432m << 8) | ((uint32_t)tmx_cbn_2437m << 4) | ((uint32_t)tmx_cbp_2437m << 0));
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg3_unpack(uint8_t* tmx_cbn_2432m, uint8_t* tmx_cbp_2432m, uint8_t* tmx_cbn_2437m, uint8_t* tmx_cbp_2437m)
{
    T_RF_P0_TMX_CB_CFG3 localVal = hwp_rf_p0->tmx_cb_cfg3;

    *tmx_cbn_2432m = localVal.bit_field.tmx_cbn_2432m;
    *tmx_cbp_2432m = localVal.bit_field.tmx_cbp_2432m;
    *tmx_cbn_2437m = localVal.bit_field.tmx_cbn_2437m;
    *tmx_cbp_2437m = localVal.bit_field.tmx_cbp_2437m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2432m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg3.bit_field.tmx_cbn_2432m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2432m_setf(uint8_t tmx_cbn_2432m)
{
    hwp_rf_p0->tmx_cb_cfg3.bit_field.tmx_cbn_2432m = tmx_cbn_2432m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2432m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg3.bit_field.tmx_cbp_2432m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2432m_setf(uint8_t tmx_cbp_2432m)
{
    hwp_rf_p0->tmx_cb_cfg3.bit_field.tmx_cbp_2432m = tmx_cbp_2432m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2437m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg3.bit_field.tmx_cbn_2437m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2437m_setf(uint8_t tmx_cbn_2437m)
{
    hwp_rf_p0->tmx_cb_cfg3.bit_field.tmx_cbn_2437m = tmx_cbn_2437m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2437m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg3.bit_field.tmx_cbp_2437m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2437m_setf(uint8_t tmx_cbp_2437m)
{
    hwp_rf_p0->tmx_cb_cfg3.bit_field.tmx_cbp_2437m = tmx_cbp_2437m;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cb_cfg4_get(void)
{
    return hwp_rf_p0->tmx_cb_cfg4.val;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg4_set(uint32_t value)
{
    hwp_rf_p0->tmx_cb_cfg4.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg4_pack(uint8_t tmx_cbn_2442m, uint8_t tmx_cbp_2442m, uint8_t tmx_cbn_2447m, uint8_t tmx_cbp_2447m)
{
    hwp_rf_p0->tmx_cb_cfg4.val = (((uint32_t)tmx_cbn_2442m << 12) | ((uint32_t)tmx_cbp_2442m << 8) | ((uint32_t)tmx_cbn_2447m << 4) | ((uint32_t)tmx_cbp_2447m << 0));
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg4_unpack(uint8_t* tmx_cbn_2442m, uint8_t* tmx_cbp_2442m, uint8_t* tmx_cbn_2447m, uint8_t* tmx_cbp_2447m)
{
    T_RF_P0_TMX_CB_CFG4 localVal = hwp_rf_p0->tmx_cb_cfg4;

    *tmx_cbn_2442m = localVal.bit_field.tmx_cbn_2442m;
    *tmx_cbp_2442m = localVal.bit_field.tmx_cbp_2442m;
    *tmx_cbn_2447m = localVal.bit_field.tmx_cbn_2447m;
    *tmx_cbp_2447m = localVal.bit_field.tmx_cbp_2447m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2442m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg4.bit_field.tmx_cbn_2442m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2442m_setf(uint8_t tmx_cbn_2442m)
{
    hwp_rf_p0->tmx_cb_cfg4.bit_field.tmx_cbn_2442m = tmx_cbn_2442m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2442m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg4.bit_field.tmx_cbp_2442m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2442m_setf(uint8_t tmx_cbp_2442m)
{
    hwp_rf_p0->tmx_cb_cfg4.bit_field.tmx_cbp_2442m = tmx_cbp_2442m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2447m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg4.bit_field.tmx_cbn_2447m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2447m_setf(uint8_t tmx_cbn_2447m)
{
    hwp_rf_p0->tmx_cb_cfg4.bit_field.tmx_cbn_2447m = tmx_cbn_2447m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2447m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg4.bit_field.tmx_cbp_2447m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2447m_setf(uint8_t tmx_cbp_2447m)
{
    hwp_rf_p0->tmx_cb_cfg4.bit_field.tmx_cbp_2447m = tmx_cbp_2447m;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cb_cfg5_get(void)
{
    return hwp_rf_p0->tmx_cb_cfg5.val;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg5_set(uint32_t value)
{
    hwp_rf_p0->tmx_cb_cfg5.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg5_pack(uint8_t tmx_cbn_2452m, uint8_t tmx_cbp_2452m, uint8_t tmx_cbn_2457m, uint8_t tmx_cbp_2457m)
{
    hwp_rf_p0->tmx_cb_cfg5.val = (((uint32_t)tmx_cbn_2452m << 12) | ((uint32_t)tmx_cbp_2452m << 8) | ((uint32_t)tmx_cbn_2457m << 4) | ((uint32_t)tmx_cbp_2457m << 0));
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg5_unpack(uint8_t* tmx_cbn_2452m, uint8_t* tmx_cbp_2452m, uint8_t* tmx_cbn_2457m, uint8_t* tmx_cbp_2457m)
{
    T_RF_P0_TMX_CB_CFG5 localVal = hwp_rf_p0->tmx_cb_cfg5;

    *tmx_cbn_2452m = localVal.bit_field.tmx_cbn_2452m;
    *tmx_cbp_2452m = localVal.bit_field.tmx_cbp_2452m;
    *tmx_cbn_2457m = localVal.bit_field.tmx_cbn_2457m;
    *tmx_cbp_2457m = localVal.bit_field.tmx_cbp_2457m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2452m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg5.bit_field.tmx_cbn_2452m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2452m_setf(uint8_t tmx_cbn_2452m)
{
    hwp_rf_p0->tmx_cb_cfg5.bit_field.tmx_cbn_2452m = tmx_cbn_2452m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2452m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg5.bit_field.tmx_cbp_2452m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2452m_setf(uint8_t tmx_cbp_2452m)
{
    hwp_rf_p0->tmx_cb_cfg5.bit_field.tmx_cbp_2452m = tmx_cbp_2452m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2457m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg5.bit_field.tmx_cbn_2457m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2457m_setf(uint8_t tmx_cbn_2457m)
{
    hwp_rf_p0->tmx_cb_cfg5.bit_field.tmx_cbn_2457m = tmx_cbn_2457m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2457m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg5.bit_field.tmx_cbp_2457m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2457m_setf(uint8_t tmx_cbp_2457m)
{
    hwp_rf_p0->tmx_cb_cfg5.bit_field.tmx_cbp_2457m = tmx_cbp_2457m;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cb_cfg6_get(void)
{
    return hwp_rf_p0->tmx_cb_cfg6.val;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg6_set(uint32_t value)
{
    hwp_rf_p0->tmx_cb_cfg6.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg6_pack(uint8_t tmx_cbn_2462m, uint8_t tmx_cbp_2462m, uint8_t tmx_cbn_2467m, uint8_t tmx_cbp_2467m)
{
    hwp_rf_p0->tmx_cb_cfg6.val = (((uint32_t)tmx_cbn_2462m << 12) | ((uint32_t)tmx_cbp_2462m << 8) | ((uint32_t)tmx_cbn_2467m << 4) | ((uint32_t)tmx_cbp_2467m << 0));
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg6_unpack(uint8_t* tmx_cbn_2462m, uint8_t* tmx_cbp_2462m, uint8_t* tmx_cbn_2467m, uint8_t* tmx_cbp_2467m)
{
    T_RF_P0_TMX_CB_CFG6 localVal = hwp_rf_p0->tmx_cb_cfg6;

    *tmx_cbn_2462m = localVal.bit_field.tmx_cbn_2462m;
    *tmx_cbp_2462m = localVal.bit_field.tmx_cbp_2462m;
    *tmx_cbn_2467m = localVal.bit_field.tmx_cbn_2467m;
    *tmx_cbp_2467m = localVal.bit_field.tmx_cbp_2467m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2462m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg6.bit_field.tmx_cbn_2462m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2462m_setf(uint8_t tmx_cbn_2462m)
{
    hwp_rf_p0->tmx_cb_cfg6.bit_field.tmx_cbn_2462m = tmx_cbn_2462m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2462m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg6.bit_field.tmx_cbp_2462m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2462m_setf(uint8_t tmx_cbp_2462m)
{
    hwp_rf_p0->tmx_cb_cfg6.bit_field.tmx_cbp_2462m = tmx_cbp_2462m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2467m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg6.bit_field.tmx_cbn_2467m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2467m_setf(uint8_t tmx_cbn_2467m)
{
    hwp_rf_p0->tmx_cb_cfg6.bit_field.tmx_cbn_2467m = tmx_cbn_2467m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2467m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg6.bit_field.tmx_cbp_2467m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2467m_setf(uint8_t tmx_cbp_2467m)
{
    hwp_rf_p0->tmx_cb_cfg6.bit_field.tmx_cbp_2467m = tmx_cbp_2467m;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cb_cfg7_get(void)
{
    return hwp_rf_p0->tmx_cb_cfg7.val;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg7_set(uint32_t value)
{
    hwp_rf_p0->tmx_cb_cfg7.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg7_pack(uint8_t tmx_cbn_2472m, uint8_t tmx_cbp_2472m, uint8_t tmx_cbn_2477m, uint8_t tmx_cbp_2477m)
{
    hwp_rf_p0->tmx_cb_cfg7.val = (((uint32_t)tmx_cbn_2472m << 12) | ((uint32_t)tmx_cbp_2472m << 8) | ((uint32_t)tmx_cbn_2477m << 4) | ((uint32_t)tmx_cbp_2477m << 0));
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg7_unpack(uint8_t* tmx_cbn_2472m, uint8_t* tmx_cbp_2472m, uint8_t* tmx_cbn_2477m, uint8_t* tmx_cbp_2477m)
{
    T_RF_P0_TMX_CB_CFG7 localVal = hwp_rf_p0->tmx_cb_cfg7;

    *tmx_cbn_2472m = localVal.bit_field.tmx_cbn_2472m;
    *tmx_cbp_2472m = localVal.bit_field.tmx_cbp_2472m;
    *tmx_cbn_2477m = localVal.bit_field.tmx_cbn_2477m;
    *tmx_cbp_2477m = localVal.bit_field.tmx_cbp_2477m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2472m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg7.bit_field.tmx_cbn_2472m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2472m_setf(uint8_t tmx_cbn_2472m)
{
    hwp_rf_p0->tmx_cb_cfg7.bit_field.tmx_cbn_2472m = tmx_cbn_2472m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2472m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg7.bit_field.tmx_cbp_2472m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2472m_setf(uint8_t tmx_cbp_2472m)
{
    hwp_rf_p0->tmx_cb_cfg7.bit_field.tmx_cbp_2472m = tmx_cbp_2472m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2477m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg7.bit_field.tmx_cbn_2477m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2477m_setf(uint8_t tmx_cbn_2477m)
{
    hwp_rf_p0->tmx_cb_cfg7.bit_field.tmx_cbn_2477m = tmx_cbn_2477m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2477m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg7.bit_field.tmx_cbp_2477m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2477m_setf(uint8_t tmx_cbp_2477m)
{
    hwp_rf_p0->tmx_cb_cfg7.bit_field.tmx_cbp_2477m = tmx_cbp_2477m;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cb_cfg8_get(void)
{
    return hwp_rf_p0->tmx_cb_cfg8.val;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg8_set(uint32_t value)
{
    hwp_rf_p0->tmx_cb_cfg8.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg8_pack(uint8_t tmx_cbn_2484m, uint8_t tmx_cbp_2484m, uint8_t tmx_cbn_2487m, uint8_t tmx_cbp_2487m)
{
    hwp_rf_p0->tmx_cb_cfg8.val = (((uint32_t)tmx_cbn_2484m << 12) | ((uint32_t)tmx_cbp_2484m << 8) | ((uint32_t)tmx_cbn_2487m << 4) | ((uint32_t)tmx_cbp_2487m << 0));
}

__STATIC_INLINE void rf_p0_tmx_cb_cfg8_unpack(uint8_t* tmx_cbn_2484m, uint8_t* tmx_cbp_2484m, uint8_t* tmx_cbn_2487m, uint8_t* tmx_cbp_2487m)
{
    T_RF_P0_TMX_CB_CFG8 localVal = hwp_rf_p0->tmx_cb_cfg8;

    *tmx_cbn_2484m = localVal.bit_field.tmx_cbn_2484m;
    *tmx_cbp_2484m = localVal.bit_field.tmx_cbp_2484m;
    *tmx_cbn_2487m = localVal.bit_field.tmx_cbn_2487m;
    *tmx_cbp_2487m = localVal.bit_field.tmx_cbp_2487m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2484m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg8.bit_field.tmx_cbn_2484m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2484m_setf(uint8_t tmx_cbn_2484m)
{
    hwp_rf_p0->tmx_cb_cfg8.bit_field.tmx_cbn_2484m = tmx_cbn_2484m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2484m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg8.bit_field.tmx_cbp_2484m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2484m_setf(uint8_t tmx_cbp_2484m)
{
    hwp_rf_p0->tmx_cb_cfg8.bit_field.tmx_cbp_2484m = tmx_cbp_2484m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbn_2487m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg8.bit_field.tmx_cbn_2487m;
}

__STATIC_INLINE void rf_p0_tmx_cbn_2487m_setf(uint8_t tmx_cbn_2487m)
{
    hwp_rf_p0->tmx_cb_cfg8.bit_field.tmx_cbn_2487m = tmx_cbn_2487m;
}

__STATIC_INLINE uint8_t rf_p0_tmx_cbp_2487m_getf(void)
{
    return hwp_rf_p0->tmx_cb_cfg8.bit_field.tmx_cbp_2487m;
}

__STATIC_INLINE void rf_p0_tmx_cbp_2487m_setf(uint8_t tmx_cbp_2487m)
{
    hwp_rf_p0->tmx_cb_cfg8.bit_field.tmx_cbp_2487m = tmx_cbp_2487m;
}

__STATIC_INLINE uint32_t rf_p0_rctune_cfg_get(void)
{
    return hwp_rf_p0->rctune_cfg.val;
}

__STATIC_INLINE void rf_p0_rctune_cfg_set(uint32_t value)
{
    hwp_rf_p0->rctune_cfg.val = value;
}

__STATIC_INLINE void rf_p0_rctune_cfg_pack(uint16_t cpu_rctune_dly_cnt, uint8_t cpu_rc_tune_ck_dr, uint8_t rctune_en, uint8_t rctune_coff, uint8_t cpu_rctune_start)
{
    hwp_rf_p0->rctune_cfg.val = (((uint32_t)cpu_rctune_dly_cnt << 4) | ((uint32_t)cpu_rc_tune_ck_dr << 3) | ((uint32_t)rctune_en << 2) | ((uint32_t)rctune_coff << 1) | ((uint32_t)cpu_rctune_start << 0));
}

__STATIC_INLINE void rf_p0_rctune_cfg_unpack(uint16_t* cpu_rctune_dly_cnt, uint8_t* cpu_rc_tune_ck_dr, uint8_t* rctune_en, uint8_t* rctune_coff, uint8_t* cpu_rctune_start)
{
    T_RF_P0_RCTUNE_CFG localVal = hwp_rf_p0->rctune_cfg;

    *cpu_rctune_dly_cnt = localVal.bit_field.cpu_rctune_dly_cnt;
    *cpu_rc_tune_ck_dr = localVal.bit_field.cpu_rc_tune_ck_dr;
    *rctune_en = localVal.bit_field.rctune_en;
    *rctune_coff = localVal.bit_field.rctune_coff;
    *cpu_rctune_start = localVal.bit_field.cpu_rctune_start;
}

__STATIC_INLINE uint16_t rf_p0_cpu_rctune_dly_cnt_getf(void)
{
    return hwp_rf_p0->rctune_cfg.bit_field.cpu_rctune_dly_cnt;
}

__STATIC_INLINE void rf_p0_cpu_rctune_dly_cnt_setf(uint16_t cpu_rctune_dly_cnt)
{
    hwp_rf_p0->rctune_cfg.bit_field.cpu_rctune_dly_cnt = cpu_rctune_dly_cnt;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rc_tune_ck_dr_getf(void)
{
    return hwp_rf_p0->rctune_cfg.bit_field.cpu_rc_tune_ck_dr;
}

__STATIC_INLINE void rf_p0_cpu_rc_tune_ck_dr_setf(uint8_t cpu_rc_tune_ck_dr)
{
    hwp_rf_p0->rctune_cfg.bit_field.cpu_rc_tune_ck_dr = cpu_rc_tune_ck_dr;
}

__STATIC_INLINE uint8_t rf_p0_rctune_en_getf(void)
{
    return hwp_rf_p0->rctune_cfg.bit_field.rctune_en;
}

__STATIC_INLINE void rf_p0_rctune_en_setf(uint8_t rctune_en)
{
    hwp_rf_p0->rctune_cfg.bit_field.rctune_en = rctune_en;
}

__STATIC_INLINE uint8_t rf_p0_rctune_coff_getf(void)
{
    return hwp_rf_p0->rctune_cfg.bit_field.rctune_coff;
}

__STATIC_INLINE void rf_p0_rctune_coff_setf(uint8_t rctune_coff)
{
    hwp_rf_p0->rctune_cfg.bit_field.rctune_coff = rctune_coff;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rctune_start_getf(void)
{
    return hwp_rf_p0->rctune_cfg.bit_field.cpu_rctune_start;
}

__STATIC_INLINE void rf_p0_cpu_rctune_start_setf(uint8_t cpu_rctune_start)
{
    hwp_rf_p0->rctune_cfg.bit_field.cpu_rctune_start = cpu_rctune_start;
}

__STATIC_INLINE uint32_t rf_p0_rctune_rpt_get(void)
{
    return hwp_rf_p0->rctune_rpt.val;
}

__STATIC_INLINE void rf_p0_rctune_rpt_unpack(uint8_t* rxlpf_ctrim_rpt, uint8_t* txlpf_ctrim_rpt, uint8_t* rctune_code_rpt, uint8_t* rctune_lock_rpt)
{
    T_RF_P0_RCTUNE_RPT localVal = hwp_rf_p0->rctune_rpt;

    *rxlpf_ctrim_rpt = localVal.bit_field.rxlpf_ctrim_rpt;
    *txlpf_ctrim_rpt = localVal.bit_field.txlpf_ctrim_rpt;
    *rctune_code_rpt = localVal.bit_field.rctune_code_rpt;
    *rctune_lock_rpt = localVal.bit_field.rctune_lock_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rxlpf_ctrim_rpt_getf(void)
{
    return hwp_rf_p0->rctune_rpt.bit_field.rxlpf_ctrim_rpt;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_ctrim_rpt_getf(void)
{
    return hwp_rf_p0->rctune_rpt.bit_field.txlpf_ctrim_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rctune_code_rpt_getf(void)
{
    return hwp_rf_p0->rctune_rpt.bit_field.rctune_code_rpt;
}

__STATIC_INLINE uint8_t rf_p0_rctune_lock_rpt_getf(void)
{
    return hwp_rf_p0->rctune_rpt.bit_field.rctune_lock_rpt;
}

__STATIC_INLINE uint32_t rf_p0_lock_cnt_get(void)
{
    return hwp_rf_p0->lock_cnt.val;
}

__STATIC_INLINE void rf_p0_lock_cnt_set(uint32_t value)
{
    hwp_rf_p0->lock_cnt.val = value;
}

__STATIC_INLINE void rf_p0_lock_cnt_pack(uint8_t cpu_x40m_lock_cnt, uint8_t cpu_rfpll_lock_cnt)
{
    hwp_rf_p0->lock_cnt.val = (((uint32_t)cpu_x40m_lock_cnt << 8) | ((uint32_t)cpu_rfpll_lock_cnt << 0));
}

__STATIC_INLINE void rf_p0_lock_cnt_unpack(uint8_t* cpu_x40m_lock_cnt, uint8_t* cpu_rfpll_lock_cnt)
{
    T_RF_P0_LOCK_CNT localVal = hwp_rf_p0->lock_cnt;

    *cpu_x40m_lock_cnt = localVal.bit_field.cpu_x40m_lock_cnt;
    *cpu_rfpll_lock_cnt = localVal.bit_field.cpu_rfpll_lock_cnt;
}

__STATIC_INLINE uint8_t rf_p0_cpu_x40m_lock_cnt_getf(void)
{
    return hwp_rf_p0->lock_cnt.bit_field.cpu_x40m_lock_cnt;
}

__STATIC_INLINE void rf_p0_cpu_x40m_lock_cnt_setf(uint8_t cpu_x40m_lock_cnt)
{
    hwp_rf_p0->lock_cnt.bit_field.cpu_x40m_lock_cnt = cpu_x40m_lock_cnt;
}

__STATIC_INLINE uint8_t rf_p0_cpu_rfpll_lock_cnt_getf(void)
{
    return hwp_rf_p0->lock_cnt.bit_field.cpu_rfpll_lock_cnt;
}

__STATIC_INLINE void rf_p0_cpu_rfpll_lock_cnt_setf(uint8_t cpu_rfpll_lock_cnt)
{
    hwp_rf_p0->lock_cnt.bit_field.cpu_rfpll_lock_cnt = cpu_rfpll_lock_cnt;
}

__STATIC_INLINE uint32_t rf_p0_x40m_lock_rpt_get(void)
{
    return hwp_rf_p0->x40m_lock_rpt.val;
}

__STATIC_INLINE void rf_p0_x40m_lock_rpt_unpack(uint8_t* x40m_lock)
{
    T_RF_P0_X40M_LOCK_RPT localVal = hwp_rf_p0->x40m_lock_rpt;

    *x40m_lock = localVal.bit_field.x40m_lock;
}

__STATIC_INLINE uint8_t rf_p0_x40m_lock_getf(void)
{
    return hwp_rf_p0->x40m_lock_rpt.bit_field.x40m_lock;
}

__STATIC_INLINE uint32_t rf_p0_ibase_offset_1_get(void)
{
    return hwp_rf_p0->ibase_offset_1.val;
}

__STATIC_INLINE void rf_p0_ibase_offset_1_set(uint32_t value)
{
    hwp_rf_p0->ibase_offset_1.val = value;
}

__STATIC_INLINE void rf_p0_ibase_offset_1_pack(uint8_t ibase_offset_2422m, uint8_t ibase_offset_2417m, uint8_t ibase_offset_2412m)
{
    hwp_rf_p0->ibase_offset_1.val = (((uint32_t)ibase_offset_2422m << 10) | ((uint32_t)ibase_offset_2417m << 5) | ((uint32_t)ibase_offset_2412m << 0));
}

__STATIC_INLINE void rf_p0_ibase_offset_1_unpack(uint8_t* ibase_offset_2422m, uint8_t* ibase_offset_2417m, uint8_t* ibase_offset_2412m)
{
    T_RF_P0_IBASE_OFFSET_1 localVal = hwp_rf_p0->ibase_offset_1;

    *ibase_offset_2422m = localVal.bit_field.ibase_offset_2422m;
    *ibase_offset_2417m = localVal.bit_field.ibase_offset_2417m;
    *ibase_offset_2412m = localVal.bit_field.ibase_offset_2412m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2422m_getf(void)
{
    return hwp_rf_p0->ibase_offset_1.bit_field.ibase_offset_2422m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2422m_setf(uint8_t ibase_offset_2422m)
{
    hwp_rf_p0->ibase_offset_1.bit_field.ibase_offset_2422m = ibase_offset_2422m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2417m_getf(void)
{
    return hwp_rf_p0->ibase_offset_1.bit_field.ibase_offset_2417m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2417m_setf(uint8_t ibase_offset_2417m)
{
    hwp_rf_p0->ibase_offset_1.bit_field.ibase_offset_2417m = ibase_offset_2417m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2412m_getf(void)
{
    return hwp_rf_p0->ibase_offset_1.bit_field.ibase_offset_2412m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2412m_setf(uint8_t ibase_offset_2412m)
{
    hwp_rf_p0->ibase_offset_1.bit_field.ibase_offset_2412m = ibase_offset_2412m;
}

__STATIC_INLINE uint32_t rf_p0_ibase_offset_2_get(void)
{
    return hwp_rf_p0->ibase_offset_2.val;
}

__STATIC_INLINE void rf_p0_ibase_offset_2_set(uint32_t value)
{
    hwp_rf_p0->ibase_offset_2.val = value;
}

__STATIC_INLINE void rf_p0_ibase_offset_2_pack(uint8_t ibase_offset_2437m, uint8_t ibase_offset_2432m, uint8_t ibase_offset_2427m)
{
    hwp_rf_p0->ibase_offset_2.val = (((uint32_t)ibase_offset_2437m << 10) | ((uint32_t)ibase_offset_2432m << 5) | ((uint32_t)ibase_offset_2427m << 0));
}

__STATIC_INLINE void rf_p0_ibase_offset_2_unpack(uint8_t* ibase_offset_2437m, uint8_t* ibase_offset_2432m, uint8_t* ibase_offset_2427m)
{
    T_RF_P0_IBASE_OFFSET_2 localVal = hwp_rf_p0->ibase_offset_2;

    *ibase_offset_2437m = localVal.bit_field.ibase_offset_2437m;
    *ibase_offset_2432m = localVal.bit_field.ibase_offset_2432m;
    *ibase_offset_2427m = localVal.bit_field.ibase_offset_2427m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2437m_getf(void)
{
    return hwp_rf_p0->ibase_offset_2.bit_field.ibase_offset_2437m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2437m_setf(uint8_t ibase_offset_2437m)
{
    hwp_rf_p0->ibase_offset_2.bit_field.ibase_offset_2437m = ibase_offset_2437m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2432m_getf(void)
{
    return hwp_rf_p0->ibase_offset_2.bit_field.ibase_offset_2432m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2432m_setf(uint8_t ibase_offset_2432m)
{
    hwp_rf_p0->ibase_offset_2.bit_field.ibase_offset_2432m = ibase_offset_2432m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2427m_getf(void)
{
    return hwp_rf_p0->ibase_offset_2.bit_field.ibase_offset_2427m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2427m_setf(uint8_t ibase_offset_2427m)
{
    hwp_rf_p0->ibase_offset_2.bit_field.ibase_offset_2427m = ibase_offset_2427m;
}

__STATIC_INLINE uint32_t rf_p0_ibase_offset_3_get(void)
{
    return hwp_rf_p0->ibase_offset_3.val;
}

__STATIC_INLINE void rf_p0_ibase_offset_3_set(uint32_t value)
{
    hwp_rf_p0->ibase_offset_3.val = value;
}

__STATIC_INLINE void rf_p0_ibase_offset_3_pack(uint8_t ibase_offset_2452m, uint8_t ibase_offset_2447m, uint8_t ibase_offset_2442m)
{
    hwp_rf_p0->ibase_offset_3.val = (((uint32_t)ibase_offset_2452m << 10) | ((uint32_t)ibase_offset_2447m << 5) | ((uint32_t)ibase_offset_2442m << 0));
}

__STATIC_INLINE void rf_p0_ibase_offset_3_unpack(uint8_t* ibase_offset_2452m, uint8_t* ibase_offset_2447m, uint8_t* ibase_offset_2442m)
{
    T_RF_P0_IBASE_OFFSET_3 localVal = hwp_rf_p0->ibase_offset_3;

    *ibase_offset_2452m = localVal.bit_field.ibase_offset_2452m;
    *ibase_offset_2447m = localVal.bit_field.ibase_offset_2447m;
    *ibase_offset_2442m = localVal.bit_field.ibase_offset_2442m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2452m_getf(void)
{
    return hwp_rf_p0->ibase_offset_3.bit_field.ibase_offset_2452m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2452m_setf(uint8_t ibase_offset_2452m)
{
    hwp_rf_p0->ibase_offset_3.bit_field.ibase_offset_2452m = ibase_offset_2452m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2447m_getf(void)
{
    return hwp_rf_p0->ibase_offset_3.bit_field.ibase_offset_2447m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2447m_setf(uint8_t ibase_offset_2447m)
{
    hwp_rf_p0->ibase_offset_3.bit_field.ibase_offset_2447m = ibase_offset_2447m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2442m_getf(void)
{
    return hwp_rf_p0->ibase_offset_3.bit_field.ibase_offset_2442m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2442m_setf(uint8_t ibase_offset_2442m)
{
    hwp_rf_p0->ibase_offset_3.bit_field.ibase_offset_2442m = ibase_offset_2442m;
}

__STATIC_INLINE uint32_t rf_p0_ibase_offset_4_get(void)
{
    return hwp_rf_p0->ibase_offset_4.val;
}

__STATIC_INLINE void rf_p0_ibase_offset_4_set(uint32_t value)
{
    hwp_rf_p0->ibase_offset_4.val = value;
}

__STATIC_INLINE void rf_p0_ibase_offset_4_pack(uint8_t ibase_offset_2467m, uint8_t ibase_offset_2462m, uint8_t ibase_offset_2457m)
{
    hwp_rf_p0->ibase_offset_4.val = (((uint32_t)ibase_offset_2467m << 10) | ((uint32_t)ibase_offset_2462m << 5) | ((uint32_t)ibase_offset_2457m << 0));
}

__STATIC_INLINE void rf_p0_ibase_offset_4_unpack(uint8_t* ibase_offset_2467m, uint8_t* ibase_offset_2462m, uint8_t* ibase_offset_2457m)
{
    T_RF_P0_IBASE_OFFSET_4 localVal = hwp_rf_p0->ibase_offset_4;

    *ibase_offset_2467m = localVal.bit_field.ibase_offset_2467m;
    *ibase_offset_2462m = localVal.bit_field.ibase_offset_2462m;
    *ibase_offset_2457m = localVal.bit_field.ibase_offset_2457m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2467m_getf(void)
{
    return hwp_rf_p0->ibase_offset_4.bit_field.ibase_offset_2467m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2467m_setf(uint8_t ibase_offset_2467m)
{
    hwp_rf_p0->ibase_offset_4.bit_field.ibase_offset_2467m = ibase_offset_2467m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2462m_getf(void)
{
    return hwp_rf_p0->ibase_offset_4.bit_field.ibase_offset_2462m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2462m_setf(uint8_t ibase_offset_2462m)
{
    hwp_rf_p0->ibase_offset_4.bit_field.ibase_offset_2462m = ibase_offset_2462m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2457m_getf(void)
{
    return hwp_rf_p0->ibase_offset_4.bit_field.ibase_offset_2457m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2457m_setf(uint8_t ibase_offset_2457m)
{
    hwp_rf_p0->ibase_offset_4.bit_field.ibase_offset_2457m = ibase_offset_2457m;
}

__STATIC_INLINE uint32_t rf_p0_ibase_offset_5_get(void)
{
    return hwp_rf_p0->ibase_offset_5.val;
}

__STATIC_INLINE void rf_p0_ibase_offset_5_set(uint32_t value)
{
    hwp_rf_p0->ibase_offset_5.val = value;
}

__STATIC_INLINE void rf_p0_ibase_offset_5_pack(uint8_t ibase_offset_2484m, uint8_t ibase_offset_2477m, uint8_t ibase_offset_2472m)
{
    hwp_rf_p0->ibase_offset_5.val = (((uint32_t)ibase_offset_2484m << 10) | ((uint32_t)ibase_offset_2477m << 5) | ((uint32_t)ibase_offset_2472m << 0));
}

__STATIC_INLINE void rf_p0_ibase_offset_5_unpack(uint8_t* ibase_offset_2484m, uint8_t* ibase_offset_2477m, uint8_t* ibase_offset_2472m)
{
    T_RF_P0_IBASE_OFFSET_5 localVal = hwp_rf_p0->ibase_offset_5;

    *ibase_offset_2484m = localVal.bit_field.ibase_offset_2484m;
    *ibase_offset_2477m = localVal.bit_field.ibase_offset_2477m;
    *ibase_offset_2472m = localVal.bit_field.ibase_offset_2472m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2484m_getf(void)
{
    return hwp_rf_p0->ibase_offset_5.bit_field.ibase_offset_2484m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2484m_setf(uint8_t ibase_offset_2484m)
{
    hwp_rf_p0->ibase_offset_5.bit_field.ibase_offset_2484m = ibase_offset_2484m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2477m_getf(void)
{
    return hwp_rf_p0->ibase_offset_5.bit_field.ibase_offset_2477m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2477m_setf(uint8_t ibase_offset_2477m)
{
    hwp_rf_p0->ibase_offset_5.bit_field.ibase_offset_2477m = ibase_offset_2477m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2472m_getf(void)
{
    return hwp_rf_p0->ibase_offset_5.bit_field.ibase_offset_2472m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2472m_setf(uint8_t ibase_offset_2472m)
{
    hwp_rf_p0->ibase_offset_5.bit_field.ibase_offset_2472m = ibase_offset_2472m;
}

__STATIC_INLINE uint32_t rf_p0_ibase_offset_6_get(void)
{
    return hwp_rf_p0->ibase_offset_6.val;
}

__STATIC_INLINE void rf_p0_ibase_offset_6_set(uint32_t value)
{
    hwp_rf_p0->ibase_offset_6.val = value;
}

__STATIC_INLINE void rf_p0_ibase_offset_6_pack(uint8_t ibase_offset_2487m)
{
    hwp_rf_p0->ibase_offset_6.val = (((uint32_t)ibase_offset_2487m << 0));
}

__STATIC_INLINE void rf_p0_ibase_offset_6_unpack(uint8_t* ibase_offset_2487m)
{
    T_RF_P0_IBASE_OFFSET_6 localVal = hwp_rf_p0->ibase_offset_6;

    *ibase_offset_2487m = localVal.bit_field.ibase_offset_2487m;
}

__STATIC_INLINE uint8_t rf_p0_ibase_offset_2487m_getf(void)
{
    return hwp_rf_p0->ibase_offset_6.bit_field.ibase_offset_2487m;
}

__STATIC_INLINE void rf_p0_ibase_offset_2487m_setf(uint8_t ibase_offset_2487m)
{
    hwp_rf_p0->ibase_offset_6.bit_field.ibase_offset_2487m = ibase_offset_2487m;
}

__STATIC_INLINE uint32_t rf_p0_tx_dac_cal_cfg_get(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.val;
}

__STATIC_INLINE void rf_p0_tx_dac_cal_cfg_set(uint32_t value)
{
    hwp_rf_p0->tx_dac_cal_cfg.val = value;
}

__STATIC_INLINE void rf_p0_tx_dac_cal_cfg_pack(uint8_t cpu_txdac_offset_opt_sel, uint8_t cpu_txdac_cal_value_sel_q, uint8_t cpu_txdac_overtime_q, uint8_t cpu_txdac_cal_direction_q, uint8_t cpu_txdac_cal_alg_sel, uint8_t cpu_txdac_cal_clk_sel, uint8_t cpu_txdac_cal_value_sel_i, uint8_t cpu_txdac_overtime_i, uint8_t cpu_txdac_cal_direction_i)
{
    hwp_rf_p0->tx_dac_cal_cfg.val = (((uint32_t)cpu_txdac_offset_opt_sel << 12) | ((uint32_t)cpu_txdac_cal_value_sel_q << 11) | ((uint32_t)cpu_txdac_overtime_q << 9) | ((uint32_t)cpu_txdac_cal_direction_q << 8) | ((uint32_t)cpu_txdac_cal_alg_sel << 6) | ((uint32_t)cpu_txdac_cal_clk_sel << 4) | ((uint32_t)cpu_txdac_cal_value_sel_i << 3) | ((uint32_t)cpu_txdac_overtime_i << 1) | ((uint32_t)cpu_txdac_cal_direction_i << 0));
}

__STATIC_INLINE void rf_p0_tx_dac_cal_cfg_unpack(uint8_t* cpu_txdac_offset_opt_sel, uint8_t* cpu_txdac_cal_value_sel_q, uint8_t* cpu_txdac_overtime_q, uint8_t* cpu_txdac_cal_direction_q, uint8_t* cpu_txdac_cal_alg_sel, uint8_t* cpu_txdac_cal_clk_sel, uint8_t* cpu_txdac_cal_value_sel_i, uint8_t* cpu_txdac_overtime_i, uint8_t* cpu_txdac_cal_direction_i)
{
    T_RF_P0_TX_DAC_CAL_CFG localVal = hwp_rf_p0->tx_dac_cal_cfg;

    *cpu_txdac_offset_opt_sel = localVal.bit_field.cpu_txdac_offset_opt_sel;
    *cpu_txdac_cal_value_sel_q = localVal.bit_field.cpu_txdac_cal_value_sel_q;
    *cpu_txdac_overtime_q = localVal.bit_field.cpu_txdac_overtime_q;
    *cpu_txdac_cal_direction_q = localVal.bit_field.cpu_txdac_cal_direction_q;
    *cpu_txdac_cal_alg_sel = localVal.bit_field.cpu_txdac_cal_alg_sel;
    *cpu_txdac_cal_clk_sel = localVal.bit_field.cpu_txdac_cal_clk_sel;
    *cpu_txdac_cal_value_sel_i = localVal.bit_field.cpu_txdac_cal_value_sel_i;
    *cpu_txdac_overtime_i = localVal.bit_field.cpu_txdac_overtime_i;
    *cpu_txdac_cal_direction_i = localVal.bit_field.cpu_txdac_cal_direction_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_offset_opt_sel_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_offset_opt_sel;
}

__STATIC_INLINE void rf_p0_cpu_txdac_offset_opt_sel_setf(uint8_t cpu_txdac_offset_opt_sel)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_offset_opt_sel = cpu_txdac_offset_opt_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_value_sel_q_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_value_sel_q;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_value_sel_q_setf(uint8_t cpu_txdac_cal_value_sel_q)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_value_sel_q = cpu_txdac_cal_value_sel_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_overtime_q_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_overtime_q;
}

__STATIC_INLINE void rf_p0_cpu_txdac_overtime_q_setf(uint8_t cpu_txdac_overtime_q)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_overtime_q = cpu_txdac_overtime_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_direction_q_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_direction_q;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_direction_q_setf(uint8_t cpu_txdac_cal_direction_q)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_direction_q = cpu_txdac_cal_direction_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_alg_sel_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_alg_sel;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_alg_sel_setf(uint8_t cpu_txdac_cal_alg_sel)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_alg_sel = cpu_txdac_cal_alg_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_clk_sel_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_clk_sel;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_clk_sel_setf(uint8_t cpu_txdac_cal_clk_sel)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_clk_sel = cpu_txdac_cal_clk_sel;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_value_sel_i_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_value_sel_i;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_value_sel_i_setf(uint8_t cpu_txdac_cal_value_sel_i)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_value_sel_i = cpu_txdac_cal_value_sel_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_overtime_i_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_overtime_i;
}

__STATIC_INLINE void rf_p0_cpu_txdac_overtime_i_setf(uint8_t cpu_txdac_overtime_i)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_overtime_i = cpu_txdac_overtime_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_direction_i_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_direction_i;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_direction_i_setf(uint8_t cpu_txdac_cal_direction_i)
{
    hwp_rf_p0->tx_dac_cal_cfg.bit_field.cpu_txdac_cal_direction_i = cpu_txdac_cal_direction_i;
}

__STATIC_INLINE uint32_t rf_p0_tx_dac_cal_iq_cfg_get(void)
{
    return hwp_rf_p0->tx_dac_cal_iq_cfg.val;
}

__STATIC_INLINE void rf_p0_tx_dac_cal_iq_cfg_set(uint32_t value)
{
    hwp_rf_p0->tx_dac_cal_iq_cfg.val = value;
}

__STATIC_INLINE void rf_p0_tx_dac_cal_iq_cfg_pack(uint8_t cpu_txdac_cal_q_dr, uint8_t cpu_txdac_cal_q, uint8_t cpu_txdac_cal_i_dr, uint8_t cpu_txdac_cal_i)
{
    hwp_rf_p0->tx_dac_cal_iq_cfg.val = (((uint32_t)cpu_txdac_cal_q_dr << 14) | ((uint32_t)cpu_txdac_cal_q << 8) | ((uint32_t)cpu_txdac_cal_i_dr << 6) | ((uint32_t)cpu_txdac_cal_i << 0));
}

__STATIC_INLINE void rf_p0_tx_dac_cal_iq_cfg_unpack(uint8_t* cpu_txdac_cal_q_dr, uint8_t* cpu_txdac_cal_q, uint8_t* cpu_txdac_cal_i_dr, uint8_t* cpu_txdac_cal_i)
{
    T_RF_P0_TX_DAC_CAL_IQ_CFG localVal = hwp_rf_p0->tx_dac_cal_iq_cfg;

    *cpu_txdac_cal_q_dr = localVal.bit_field.cpu_txdac_cal_q_dr;
    *cpu_txdac_cal_q = localVal.bit_field.cpu_txdac_cal_q;
    *cpu_txdac_cal_i_dr = localVal.bit_field.cpu_txdac_cal_i_dr;
    *cpu_txdac_cal_i = localVal.bit_field.cpu_txdac_cal_i;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_q_dr_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_iq_cfg.bit_field.cpu_txdac_cal_q_dr;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_q_dr_setf(uint8_t cpu_txdac_cal_q_dr)
{
    hwp_rf_p0->tx_dac_cal_iq_cfg.bit_field.cpu_txdac_cal_q_dr = cpu_txdac_cal_q_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_q_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_iq_cfg.bit_field.cpu_txdac_cal_q;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_q_setf(uint8_t cpu_txdac_cal_q)
{
    hwp_rf_p0->tx_dac_cal_iq_cfg.bit_field.cpu_txdac_cal_q = cpu_txdac_cal_q;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_i_dr_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_iq_cfg.bit_field.cpu_txdac_cal_i_dr;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_i_dr_setf(uint8_t cpu_txdac_cal_i_dr)
{
    hwp_rf_p0->tx_dac_cal_iq_cfg.bit_field.cpu_txdac_cal_i_dr = cpu_txdac_cal_i_dr;
}

__STATIC_INLINE uint8_t rf_p0_cpu_txdac_cal_i_getf(void)
{
    return hwp_rf_p0->tx_dac_cal_iq_cfg.bit_field.cpu_txdac_cal_i;
}

__STATIC_INLINE void rf_p0_cpu_txdac_cal_i_setf(uint8_t cpu_txdac_cal_i)
{
    hwp_rf_p0->tx_dac_cal_iq_cfg.bit_field.cpu_txdac_cal_i = cpu_txdac_cal_i;
}

__STATIC_INLINE uint32_t rf_p0_pa_cfg3_g_get(void)
{
    return hwp_rf_p0->pa_cfg3_g.val;
}

__STATIC_INLINE void rf_p0_pa_cfg3_g_set(uint32_t value)
{
    hwp_rf_p0->pa_cfg3_g.val = value;
}

__STATIC_INLINE void rf_p0_pa_cfg3_g_pack(uint8_t pa_da_ibit_g, uint8_t pa_vcas_rbit_g, uint8_t pa_vcas_hv_rbit_g, uint8_t pa_vcas_ibit_g, uint8_t pa_ldo_vbit_g)
{
    hwp_rf_p0->pa_cfg3_g.val = (((uint32_t)pa_da_ibit_g << 13) | ((uint32_t)pa_vcas_rbit_g << 10) | ((uint32_t)pa_vcas_hv_rbit_g << 7) | ((uint32_t)pa_vcas_ibit_g << 3) | ((uint32_t)pa_ldo_vbit_g << 0));
}

__STATIC_INLINE void rf_p0_pa_cfg3_g_unpack(uint8_t* pa_da_ibit_g, uint8_t* pa_vcas_rbit_g, uint8_t* pa_vcas_hv_rbit_g, uint8_t* pa_vcas_ibit_g, uint8_t* pa_ldo_vbit_g)
{
    T_RF_P0_PA_CFG3_G localVal = hwp_rf_p0->pa_cfg3_g;

    *pa_da_ibit_g = localVal.bit_field.pa_da_ibit_g;
    *pa_vcas_rbit_g = localVal.bit_field.pa_vcas_rbit_g;
    *pa_vcas_hv_rbit_g = localVal.bit_field.pa_vcas_hv_rbit_g;
    *pa_vcas_ibit_g = localVal.bit_field.pa_vcas_ibit_g;
    *pa_ldo_vbit_g = localVal.bit_field.pa_ldo_vbit_g;
}

__STATIC_INLINE uint8_t rf_p0_pa_da_ibit_g_getf(void)
{
    return hwp_rf_p0->pa_cfg3_g.bit_field.pa_da_ibit_g;
}

__STATIC_INLINE void rf_p0_pa_da_ibit_g_setf(uint8_t pa_da_ibit_g)
{
    hwp_rf_p0->pa_cfg3_g.bit_field.pa_da_ibit_g = pa_da_ibit_g;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_rbit_g_getf(void)
{
    return hwp_rf_p0->pa_cfg3_g.bit_field.pa_vcas_rbit_g;
}

__STATIC_INLINE void rf_p0_pa_vcas_rbit_g_setf(uint8_t pa_vcas_rbit_g)
{
    hwp_rf_p0->pa_cfg3_g.bit_field.pa_vcas_rbit_g = pa_vcas_rbit_g;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_hv_rbit_g_getf(void)
{
    return hwp_rf_p0->pa_cfg3_g.bit_field.pa_vcas_hv_rbit_g;
}

__STATIC_INLINE void rf_p0_pa_vcas_hv_rbit_g_setf(uint8_t pa_vcas_hv_rbit_g)
{
    hwp_rf_p0->pa_cfg3_g.bit_field.pa_vcas_hv_rbit_g = pa_vcas_hv_rbit_g;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_ibit_g_getf(void)
{
    return hwp_rf_p0->pa_cfg3_g.bit_field.pa_vcas_ibit_g;
}

__STATIC_INLINE void rf_p0_pa_vcas_ibit_g_setf(uint8_t pa_vcas_ibit_g)
{
    hwp_rf_p0->pa_cfg3_g.bit_field.pa_vcas_ibit_g = pa_vcas_ibit_g;
}

__STATIC_INLINE uint8_t rf_p0_pa_ldo_vbit_g_getf(void)
{
    return hwp_rf_p0->pa_cfg3_g.bit_field.pa_ldo_vbit_g;
}

__STATIC_INLINE void rf_p0_pa_ldo_vbit_g_setf(uint8_t pa_ldo_vbit_g)
{
    hwp_rf_p0->pa_cfg3_g.bit_field.pa_ldo_vbit_g = pa_ldo_vbit_g;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cfg1_g_get(void)
{
    return hwp_rf_p0->tmx_cfg1_g.val;
}

__STATIC_INLINE void rf_p0_tmx_cfg1_g_set(uint32_t value)
{
    hwp_rf_p0->tmx_cfg1_g.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cfg1_g_pack(uint8_t tmx_rc_range_g, uint8_t tmx_vol_amp_g, uint8_t tmx_lobuf_vbit_g, uint8_t tmx_op_ibit_g, uint8_t tmx_op_vcm_g, uint8_t tmx_ibase_g, uint8_t tmx_lin_tune_g)
{
    hwp_rf_p0->tmx_cfg1_g.val = (((uint32_t)tmx_rc_range_g << 14) | ((uint32_t)tmx_vol_amp_g << 12) | ((uint32_t)tmx_lobuf_vbit_g << 9) | ((uint32_t)tmx_op_ibit_g << 7) | ((uint32_t)tmx_op_vcm_g << 5) | ((uint32_t)tmx_ibase_g << 3) | ((uint32_t)tmx_lin_tune_g << 0));
}

__STATIC_INLINE void rf_p0_tmx_cfg1_g_unpack(uint8_t* tmx_rc_range_g, uint8_t* tmx_vol_amp_g, uint8_t* tmx_lobuf_vbit_g, uint8_t* tmx_op_ibit_g, uint8_t* tmx_op_vcm_g, uint8_t* tmx_ibase_g, uint8_t* tmx_lin_tune_g)
{
    T_RF_P0_TMX_CFG1_G localVal = hwp_rf_p0->tmx_cfg1_g;

    *tmx_rc_range_g = localVal.bit_field.tmx_rc_range_g;
    *tmx_vol_amp_g = localVal.bit_field.tmx_vol_amp_g;
    *tmx_lobuf_vbit_g = localVal.bit_field.tmx_lobuf_vbit_g;
    *tmx_op_ibit_g = localVal.bit_field.tmx_op_ibit_g;
    *tmx_op_vcm_g = localVal.bit_field.tmx_op_vcm_g;
    *tmx_ibase_g = localVal.bit_field.tmx_ibase_g;
    *tmx_lin_tune_g = localVal.bit_field.tmx_lin_tune_g;
}

__STATIC_INLINE uint8_t rf_p0_tmx_rc_range_g_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_rc_range_g;
}

__STATIC_INLINE void rf_p0_tmx_rc_range_g_setf(uint8_t tmx_rc_range_g)
{
    hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_rc_range_g = tmx_rc_range_g;
}

__STATIC_INLINE uint8_t rf_p0_tmx_vol_amp_g_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_vol_amp_g;
}

__STATIC_INLINE void rf_p0_tmx_vol_amp_g_setf(uint8_t tmx_vol_amp_g)
{
    hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_vol_amp_g = tmx_vol_amp_g;
}

__STATIC_INLINE uint8_t rf_p0_tmx_lobuf_vbit_g_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_lobuf_vbit_g;
}

__STATIC_INLINE void rf_p0_tmx_lobuf_vbit_g_setf(uint8_t tmx_lobuf_vbit_g)
{
    hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_lobuf_vbit_g = tmx_lobuf_vbit_g;
}

__STATIC_INLINE uint8_t rf_p0_tmx_op_ibit_g_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_op_ibit_g;
}

__STATIC_INLINE void rf_p0_tmx_op_ibit_g_setf(uint8_t tmx_op_ibit_g)
{
    hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_op_ibit_g = tmx_op_ibit_g;
}

__STATIC_INLINE uint8_t rf_p0_tmx_op_vcm_g_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_op_vcm_g;
}

__STATIC_INLINE void rf_p0_tmx_op_vcm_g_setf(uint8_t tmx_op_vcm_g)
{
    hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_op_vcm_g = tmx_op_vcm_g;
}

__STATIC_INLINE uint8_t rf_p0_tmx_ibase_g_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_ibase_g;
}

__STATIC_INLINE void rf_p0_tmx_ibase_g_setf(uint8_t tmx_ibase_g)
{
    hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_ibase_g = tmx_ibase_g;
}

__STATIC_INLINE uint8_t rf_p0_tmx_lin_tune_g_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_lin_tune_g;
}

__STATIC_INLINE void rf_p0_tmx_lin_tune_g_setf(uint8_t tmx_lin_tune_g)
{
    hwp_rf_p0->tmx_cfg1_g.bit_field.tmx_lin_tune_g = tmx_lin_tune_g;
}

__STATIC_INLINE uint32_t rf_p0_txlpf_cfg1_g_get(void)
{
    return hwp_rf_p0->txlpf_cfg1_g.val;
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_g_set(uint32_t value)
{
    hwp_rf_p0->txlpf_cfg1_g.val = value;
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_g_pack(uint8_t txlpf_coff_g, uint8_t txlpf_resv_g, uint8_t txlpf_ibsel_g, uint8_t txlpf_atrim_q_g, uint8_t txlpf_atrim_i_g, uint8_t txlpf_ldo_vbit_g)
{
    hwp_rf_p0->txlpf_cfg1_g.val = (((uint32_t)txlpf_coff_g << 12) | ((uint32_t)txlpf_resv_g << 10) | ((uint32_t)txlpf_ibsel_g << 8) | ((uint32_t)txlpf_atrim_q_g << 6) | ((uint32_t)txlpf_atrim_i_g << 4) | ((uint32_t)txlpf_ldo_vbit_g << 0));
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_g_unpack(uint8_t* txlpf_coff_g, uint8_t* txlpf_resv_g, uint8_t* txlpf_ibsel_g, uint8_t* txlpf_atrim_q_g, uint8_t* txlpf_atrim_i_g, uint8_t* txlpf_ldo_vbit_g)
{
    T_RF_P0_TXLPF_CFG1_G localVal = hwp_rf_p0->txlpf_cfg1_g;

    *txlpf_coff_g = localVal.bit_field.txlpf_coff_g;
    *txlpf_resv_g = localVal.bit_field.txlpf_resv_g;
    *txlpf_ibsel_g = localVal.bit_field.txlpf_ibsel_g;
    *txlpf_atrim_q_g = localVal.bit_field.txlpf_atrim_q_g;
    *txlpf_atrim_i_g = localVal.bit_field.txlpf_atrim_i_g;
    *txlpf_ldo_vbit_g = localVal.bit_field.txlpf_ldo_vbit_g;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_coff_g_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_coff_g;
}

__STATIC_INLINE void rf_p0_txlpf_coff_g_setf(uint8_t txlpf_coff_g)
{
    hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_coff_g = txlpf_coff_g;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_resv_g_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_resv_g;
}

__STATIC_INLINE void rf_p0_txlpf_resv_g_setf(uint8_t txlpf_resv_g)
{
    hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_resv_g = txlpf_resv_g;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_ibsel_g_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_ibsel_g;
}

__STATIC_INLINE void rf_p0_txlpf_ibsel_g_setf(uint8_t txlpf_ibsel_g)
{
    hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_ibsel_g = txlpf_ibsel_g;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_atrim_q_g_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_atrim_q_g;
}

__STATIC_INLINE void rf_p0_txlpf_atrim_q_g_setf(uint8_t txlpf_atrim_q_g)
{
    hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_atrim_q_g = txlpf_atrim_q_g;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_atrim_i_g_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_atrim_i_g;
}

__STATIC_INLINE void rf_p0_txlpf_atrim_i_g_setf(uint8_t txlpf_atrim_i_g)
{
    hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_atrim_i_g = txlpf_atrim_i_g;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_ldo_vbit_g_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_ldo_vbit_g;
}

__STATIC_INLINE void rf_p0_txlpf_ldo_vbit_g_setf(uint8_t txlpf_ldo_vbit_g)
{
    hwp_rf_p0->txlpf_cfg1_g.bit_field.txlpf_ldo_vbit_g = txlpf_ldo_vbit_g;
}

__STATIC_INLINE uint32_t rf_p0_pa_cfg3_n_get(void)
{
    return hwp_rf_p0->pa_cfg3_n.val;
}

__STATIC_INLINE void rf_p0_pa_cfg3_n_set(uint32_t value)
{
    hwp_rf_p0->pa_cfg3_n.val = value;
}

__STATIC_INLINE void rf_p0_pa_cfg3_n_pack(uint8_t pa_da_ibit_n, uint8_t pa_vcas_rbit_n, uint8_t pa_vcas_hv_rbit_n, uint8_t pa_vcas_ibit_n, uint8_t pa_ldo_vbit_n)
{
    hwp_rf_p0->pa_cfg3_n.val = (((uint32_t)pa_da_ibit_n << 13) | ((uint32_t)pa_vcas_rbit_n << 10) | ((uint32_t)pa_vcas_hv_rbit_n << 7) | ((uint32_t)pa_vcas_ibit_n << 3) | ((uint32_t)pa_ldo_vbit_n << 0));
}

__STATIC_INLINE void rf_p0_pa_cfg3_n_unpack(uint8_t* pa_da_ibit_n, uint8_t* pa_vcas_rbit_n, uint8_t* pa_vcas_hv_rbit_n, uint8_t* pa_vcas_ibit_n, uint8_t* pa_ldo_vbit_n)
{
    T_RF_P0_PA_CFG3_N localVal = hwp_rf_p0->pa_cfg3_n;

    *pa_da_ibit_n = localVal.bit_field.pa_da_ibit_n;
    *pa_vcas_rbit_n = localVal.bit_field.pa_vcas_rbit_n;
    *pa_vcas_hv_rbit_n = localVal.bit_field.pa_vcas_hv_rbit_n;
    *pa_vcas_ibit_n = localVal.bit_field.pa_vcas_ibit_n;
    *pa_ldo_vbit_n = localVal.bit_field.pa_ldo_vbit_n;
}

__STATIC_INLINE uint8_t rf_p0_pa_da_ibit_n_getf(void)
{
    return hwp_rf_p0->pa_cfg3_n.bit_field.pa_da_ibit_n;
}

__STATIC_INLINE void rf_p0_pa_da_ibit_n_setf(uint8_t pa_da_ibit_n)
{
    hwp_rf_p0->pa_cfg3_n.bit_field.pa_da_ibit_n = pa_da_ibit_n;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_rbit_n_getf(void)
{
    return hwp_rf_p0->pa_cfg3_n.bit_field.pa_vcas_rbit_n;
}

__STATIC_INLINE void rf_p0_pa_vcas_rbit_n_setf(uint8_t pa_vcas_rbit_n)
{
    hwp_rf_p0->pa_cfg3_n.bit_field.pa_vcas_rbit_n = pa_vcas_rbit_n;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_hv_rbit_n_getf(void)
{
    return hwp_rf_p0->pa_cfg3_n.bit_field.pa_vcas_hv_rbit_n;
}

__STATIC_INLINE void rf_p0_pa_vcas_hv_rbit_n_setf(uint8_t pa_vcas_hv_rbit_n)
{
    hwp_rf_p0->pa_cfg3_n.bit_field.pa_vcas_hv_rbit_n = pa_vcas_hv_rbit_n;
}

__STATIC_INLINE uint8_t rf_p0_pa_vcas_ibit_n_getf(void)
{
    return hwp_rf_p0->pa_cfg3_n.bit_field.pa_vcas_ibit_n;
}

__STATIC_INLINE void rf_p0_pa_vcas_ibit_n_setf(uint8_t pa_vcas_ibit_n)
{
    hwp_rf_p0->pa_cfg3_n.bit_field.pa_vcas_ibit_n = pa_vcas_ibit_n;
}

__STATIC_INLINE uint8_t rf_p0_pa_ldo_vbit_n_getf(void)
{
    return hwp_rf_p0->pa_cfg3_n.bit_field.pa_ldo_vbit_n;
}

__STATIC_INLINE void rf_p0_pa_ldo_vbit_n_setf(uint8_t pa_ldo_vbit_n)
{
    hwp_rf_p0->pa_cfg3_n.bit_field.pa_ldo_vbit_n = pa_ldo_vbit_n;
}

__STATIC_INLINE uint32_t rf_p0_tmx_cfg1_n_get(void)
{
    return hwp_rf_p0->tmx_cfg1_n.val;
}

__STATIC_INLINE void rf_p0_tmx_cfg1_n_set(uint32_t value)
{
    hwp_rf_p0->tmx_cfg1_n.val = value;
}

__STATIC_INLINE void rf_p0_tmx_cfg1_n_pack(uint8_t tmx_rc_range_n, uint8_t tmx_vol_amp_n, uint8_t tmx_lobuf_vbit_n, uint8_t tmx_op_ibit_n, uint8_t tmx_op_vcm_n, uint8_t tmx_ibase_n, uint8_t tmx_lin_tune_n)
{
    hwp_rf_p0->tmx_cfg1_n.val = (((uint32_t)tmx_rc_range_n << 14) | ((uint32_t)tmx_vol_amp_n << 12) | ((uint32_t)tmx_lobuf_vbit_n << 9) | ((uint32_t)tmx_op_ibit_n << 7) | ((uint32_t)tmx_op_vcm_n << 5) | ((uint32_t)tmx_ibase_n << 3) | ((uint32_t)tmx_lin_tune_n << 0));
}

__STATIC_INLINE void rf_p0_tmx_cfg1_n_unpack(uint8_t* tmx_rc_range_n, uint8_t* tmx_vol_amp_n, uint8_t* tmx_lobuf_vbit_n, uint8_t* tmx_op_ibit_n, uint8_t* tmx_op_vcm_n, uint8_t* tmx_ibase_n, uint8_t* tmx_lin_tune_n)
{
    T_RF_P0_TMX_CFG1_N localVal = hwp_rf_p0->tmx_cfg1_n;

    *tmx_rc_range_n = localVal.bit_field.tmx_rc_range_n;
    *tmx_vol_amp_n = localVal.bit_field.tmx_vol_amp_n;
    *tmx_lobuf_vbit_n = localVal.bit_field.tmx_lobuf_vbit_n;
    *tmx_op_ibit_n = localVal.bit_field.tmx_op_ibit_n;
    *tmx_op_vcm_n = localVal.bit_field.tmx_op_vcm_n;
    *tmx_ibase_n = localVal.bit_field.tmx_ibase_n;
    *tmx_lin_tune_n = localVal.bit_field.tmx_lin_tune_n;
}

__STATIC_INLINE uint8_t rf_p0_tmx_rc_range_n_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_rc_range_n;
}

__STATIC_INLINE void rf_p0_tmx_rc_range_n_setf(uint8_t tmx_rc_range_n)
{
    hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_rc_range_n = tmx_rc_range_n;
}

__STATIC_INLINE uint8_t rf_p0_tmx_vol_amp_n_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_vol_amp_n;
}

__STATIC_INLINE void rf_p0_tmx_vol_amp_n_setf(uint8_t tmx_vol_amp_n)
{
    hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_vol_amp_n = tmx_vol_amp_n;
}

__STATIC_INLINE uint8_t rf_p0_tmx_lobuf_vbit_n_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_lobuf_vbit_n;
}

__STATIC_INLINE void rf_p0_tmx_lobuf_vbit_n_setf(uint8_t tmx_lobuf_vbit_n)
{
    hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_lobuf_vbit_n = tmx_lobuf_vbit_n;
}

__STATIC_INLINE uint8_t rf_p0_tmx_op_ibit_n_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_op_ibit_n;
}

__STATIC_INLINE void rf_p0_tmx_op_ibit_n_setf(uint8_t tmx_op_ibit_n)
{
    hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_op_ibit_n = tmx_op_ibit_n;
}

__STATIC_INLINE uint8_t rf_p0_tmx_op_vcm_n_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_op_vcm_n;
}

__STATIC_INLINE void rf_p0_tmx_op_vcm_n_setf(uint8_t tmx_op_vcm_n)
{
    hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_op_vcm_n = tmx_op_vcm_n;
}

__STATIC_INLINE uint8_t rf_p0_tmx_ibase_n_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_ibase_n;
}

__STATIC_INLINE void rf_p0_tmx_ibase_n_setf(uint8_t tmx_ibase_n)
{
    hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_ibase_n = tmx_ibase_n;
}

__STATIC_INLINE uint8_t rf_p0_tmx_lin_tune_n_getf(void)
{
    return hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_lin_tune_n;
}

__STATIC_INLINE void rf_p0_tmx_lin_tune_n_setf(uint8_t tmx_lin_tune_n)
{
    hwp_rf_p0->tmx_cfg1_n.bit_field.tmx_lin_tune_n = tmx_lin_tune_n;
}

__STATIC_INLINE uint32_t rf_p0_txlpf_cfg1_n_get(void)
{
    return hwp_rf_p0->txlpf_cfg1_n.val;
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_n_set(uint32_t value)
{
    hwp_rf_p0->txlpf_cfg1_n.val = value;
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_n_pack(uint8_t txlpf_coff_n, uint8_t txlpf_resv_n, uint8_t txlpf_ibsel_n, uint8_t txlpf_atrim_q_n, uint8_t txlpf_atrim_i_n, uint8_t txlpf_ldo_vbit_n)
{
    hwp_rf_p0->txlpf_cfg1_n.val = (((uint32_t)txlpf_coff_n << 12) | ((uint32_t)txlpf_resv_n << 10) | ((uint32_t)txlpf_ibsel_n << 8) | ((uint32_t)txlpf_atrim_q_n << 6) | ((uint32_t)txlpf_atrim_i_n << 4) | ((uint32_t)txlpf_ldo_vbit_n << 0));
}

__STATIC_INLINE void rf_p0_txlpf_cfg1_n_unpack(uint8_t* txlpf_coff_n, uint8_t* txlpf_resv_n, uint8_t* txlpf_ibsel_n, uint8_t* txlpf_atrim_q_n, uint8_t* txlpf_atrim_i_n, uint8_t* txlpf_ldo_vbit_n)
{
    T_RF_P0_TXLPF_CFG1_N localVal = hwp_rf_p0->txlpf_cfg1_n;

    *txlpf_coff_n = localVal.bit_field.txlpf_coff_n;
    *txlpf_resv_n = localVal.bit_field.txlpf_resv_n;
    *txlpf_ibsel_n = localVal.bit_field.txlpf_ibsel_n;
    *txlpf_atrim_q_n = localVal.bit_field.txlpf_atrim_q_n;
    *txlpf_atrim_i_n = localVal.bit_field.txlpf_atrim_i_n;
    *txlpf_ldo_vbit_n = localVal.bit_field.txlpf_ldo_vbit_n;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_coff_n_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_coff_n;
}

__STATIC_INLINE void rf_p0_txlpf_coff_n_setf(uint8_t txlpf_coff_n)
{
    hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_coff_n = txlpf_coff_n;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_resv_n_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_resv_n;
}

__STATIC_INLINE void rf_p0_txlpf_resv_n_setf(uint8_t txlpf_resv_n)
{
    hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_resv_n = txlpf_resv_n;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_ibsel_n_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_ibsel_n;
}

__STATIC_INLINE void rf_p0_txlpf_ibsel_n_setf(uint8_t txlpf_ibsel_n)
{
    hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_ibsel_n = txlpf_ibsel_n;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_atrim_q_n_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_atrim_q_n;
}

__STATIC_INLINE void rf_p0_txlpf_atrim_q_n_setf(uint8_t txlpf_atrim_q_n)
{
    hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_atrim_q_n = txlpf_atrim_q_n;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_atrim_i_n_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_atrim_i_n;
}

__STATIC_INLINE void rf_p0_txlpf_atrim_i_n_setf(uint8_t txlpf_atrim_i_n)
{
    hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_atrim_i_n = txlpf_atrim_i_n;
}

__STATIC_INLINE uint8_t rf_p0_txlpf_ldo_vbit_n_getf(void)
{
    return hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_ldo_vbit_n;
}

__STATIC_INLINE void rf_p0_txlpf_ldo_vbit_n_setf(uint8_t txlpf_ldo_vbit_n)
{
    hwp_rf_p0->txlpf_cfg1_n.bit_field.txlpf_ldo_vbit_n = txlpf_ldo_vbit_n;
}

__STATIC_INLINE uint32_t rf_p0_rx_0db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_0db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_0db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_0db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_0db_rf_gain_pack(uint16_t rx_0db_rf_gain)
{
    hwp_rf_p0->rx_0db_rf_gain.val = (((uint32_t)rx_0db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_0db_rf_gain_unpack(uint16_t* rx_0db_rf_gain)
{
    T_RF_P0_RX_0DB_RF_GAIN localVal = hwp_rf_p0->rx_0db_rf_gain;

    *rx_0db_rf_gain = localVal.bit_field.rx_0db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_0db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_0db_rf_gain.bit_field.rx_0db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_0db_rf_gain_setf(uint16_t rx_0db_rf_gain)
{
    hwp_rf_p0->rx_0db_rf_gain.bit_field.rx_0db_rf_gain = rx_0db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_2db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_2db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_2db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_2db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_2db_rf_gain_pack(uint16_t rx_2db_rf_gain)
{
    hwp_rf_p0->rx_2db_rf_gain.val = (((uint32_t)rx_2db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_2db_rf_gain_unpack(uint16_t* rx_2db_rf_gain)
{
    T_RF_P0_RX_2DB_RF_GAIN localVal = hwp_rf_p0->rx_2db_rf_gain;

    *rx_2db_rf_gain = localVal.bit_field.rx_2db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_2db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_2db_rf_gain.bit_field.rx_2db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_2db_rf_gain_setf(uint16_t rx_2db_rf_gain)
{
    hwp_rf_p0->rx_2db_rf_gain.bit_field.rx_2db_rf_gain = rx_2db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_4db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_4db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_4db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_4db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_4db_rf_gain_pack(uint16_t rx_4db_rf_gain)
{
    hwp_rf_p0->rx_4db_rf_gain.val = (((uint32_t)rx_4db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_4db_rf_gain_unpack(uint16_t* rx_4db_rf_gain)
{
    T_RF_P0_RX_4DB_RF_GAIN localVal = hwp_rf_p0->rx_4db_rf_gain;

    *rx_4db_rf_gain = localVal.bit_field.rx_4db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_4db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_4db_rf_gain.bit_field.rx_4db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_4db_rf_gain_setf(uint16_t rx_4db_rf_gain)
{
    hwp_rf_p0->rx_4db_rf_gain.bit_field.rx_4db_rf_gain = rx_4db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_6db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_6db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_6db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_6db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_6db_rf_gain_pack(uint16_t rx_6db_rf_gain)
{
    hwp_rf_p0->rx_6db_rf_gain.val = (((uint32_t)rx_6db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_6db_rf_gain_unpack(uint16_t* rx_6db_rf_gain)
{
    T_RF_P0_RX_6DB_RF_GAIN localVal = hwp_rf_p0->rx_6db_rf_gain;

    *rx_6db_rf_gain = localVal.bit_field.rx_6db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_6db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_6db_rf_gain.bit_field.rx_6db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_6db_rf_gain_setf(uint16_t rx_6db_rf_gain)
{
    hwp_rf_p0->rx_6db_rf_gain.bit_field.rx_6db_rf_gain = rx_6db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_8db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_8db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_8db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_8db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_8db_rf_gain_pack(uint16_t rx_8db_rf_gain)
{
    hwp_rf_p0->rx_8db_rf_gain.val = (((uint32_t)rx_8db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_8db_rf_gain_unpack(uint16_t* rx_8db_rf_gain)
{
    T_RF_P0_RX_8DB_RF_GAIN localVal = hwp_rf_p0->rx_8db_rf_gain;

    *rx_8db_rf_gain = localVal.bit_field.rx_8db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_8db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_8db_rf_gain.bit_field.rx_8db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_8db_rf_gain_setf(uint16_t rx_8db_rf_gain)
{
    hwp_rf_p0->rx_8db_rf_gain.bit_field.rx_8db_rf_gain = rx_8db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_10db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_10db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_10db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_10db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_10db_rf_gain_pack(uint16_t rx_10db_rf_gain)
{
    hwp_rf_p0->rx_10db_rf_gain.val = (((uint32_t)rx_10db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_10db_rf_gain_unpack(uint16_t* rx_10db_rf_gain)
{
    T_RF_P0_RX_10DB_RF_GAIN localVal = hwp_rf_p0->rx_10db_rf_gain;

    *rx_10db_rf_gain = localVal.bit_field.rx_10db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_10db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_10db_rf_gain.bit_field.rx_10db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_10db_rf_gain_setf(uint16_t rx_10db_rf_gain)
{
    hwp_rf_p0->rx_10db_rf_gain.bit_field.rx_10db_rf_gain = rx_10db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_12db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_12db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_12db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_12db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_12db_rf_gain_pack(uint16_t rx_12db_rf_gain)
{
    hwp_rf_p0->rx_12db_rf_gain.val = (((uint32_t)rx_12db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_12db_rf_gain_unpack(uint16_t* rx_12db_rf_gain)
{
    T_RF_P0_RX_12DB_RF_GAIN localVal = hwp_rf_p0->rx_12db_rf_gain;

    *rx_12db_rf_gain = localVal.bit_field.rx_12db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_12db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_12db_rf_gain.bit_field.rx_12db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_12db_rf_gain_setf(uint16_t rx_12db_rf_gain)
{
    hwp_rf_p0->rx_12db_rf_gain.bit_field.rx_12db_rf_gain = rx_12db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_14db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_14db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_14db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_14db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_14db_rf_gain_pack(uint16_t rx_14db_rf_gain)
{
    hwp_rf_p0->rx_14db_rf_gain.val = (((uint32_t)rx_14db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_14db_rf_gain_unpack(uint16_t* rx_14db_rf_gain)
{
    T_RF_P0_RX_14DB_RF_GAIN localVal = hwp_rf_p0->rx_14db_rf_gain;

    *rx_14db_rf_gain = localVal.bit_field.rx_14db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_14db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_14db_rf_gain.bit_field.rx_14db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_14db_rf_gain_setf(uint16_t rx_14db_rf_gain)
{
    hwp_rf_p0->rx_14db_rf_gain.bit_field.rx_14db_rf_gain = rx_14db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_16db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_16db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_16db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_16db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_16db_rf_gain_pack(uint16_t rx_16db_rf_gain)
{
    hwp_rf_p0->rx_16db_rf_gain.val = (((uint32_t)rx_16db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_16db_rf_gain_unpack(uint16_t* rx_16db_rf_gain)
{
    T_RF_P0_RX_16DB_RF_GAIN localVal = hwp_rf_p0->rx_16db_rf_gain;

    *rx_16db_rf_gain = localVal.bit_field.rx_16db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_16db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_16db_rf_gain.bit_field.rx_16db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_16db_rf_gain_setf(uint16_t rx_16db_rf_gain)
{
    hwp_rf_p0->rx_16db_rf_gain.bit_field.rx_16db_rf_gain = rx_16db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_18db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_18db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_18db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_18db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_18db_rf_gain_pack(uint16_t rx_18db_rf_gain)
{
    hwp_rf_p0->rx_18db_rf_gain.val = (((uint32_t)rx_18db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_18db_rf_gain_unpack(uint16_t* rx_18db_rf_gain)
{
    T_RF_P0_RX_18DB_RF_GAIN localVal = hwp_rf_p0->rx_18db_rf_gain;

    *rx_18db_rf_gain = localVal.bit_field.rx_18db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_18db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_18db_rf_gain.bit_field.rx_18db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_18db_rf_gain_setf(uint16_t rx_18db_rf_gain)
{
    hwp_rf_p0->rx_18db_rf_gain.bit_field.rx_18db_rf_gain = rx_18db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_20db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_20db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_20db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_20db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_20db_rf_gain_pack(uint16_t rx_20db_rf_gain)
{
    hwp_rf_p0->rx_20db_rf_gain.val = (((uint32_t)rx_20db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_20db_rf_gain_unpack(uint16_t* rx_20db_rf_gain)
{
    T_RF_P0_RX_20DB_RF_GAIN localVal = hwp_rf_p0->rx_20db_rf_gain;

    *rx_20db_rf_gain = localVal.bit_field.rx_20db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_20db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_20db_rf_gain.bit_field.rx_20db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_20db_rf_gain_setf(uint16_t rx_20db_rf_gain)
{
    hwp_rf_p0->rx_20db_rf_gain.bit_field.rx_20db_rf_gain = rx_20db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_22db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_22db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_22db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_22db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_22db_rf_gain_pack(uint16_t rx_22db_rf_gain)
{
    hwp_rf_p0->rx_22db_rf_gain.val = (((uint32_t)rx_22db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_22db_rf_gain_unpack(uint16_t* rx_22db_rf_gain)
{
    T_RF_P0_RX_22DB_RF_GAIN localVal = hwp_rf_p0->rx_22db_rf_gain;

    *rx_22db_rf_gain = localVal.bit_field.rx_22db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_22db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_22db_rf_gain.bit_field.rx_22db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_22db_rf_gain_setf(uint16_t rx_22db_rf_gain)
{
    hwp_rf_p0->rx_22db_rf_gain.bit_field.rx_22db_rf_gain = rx_22db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_24db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_24db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_24db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_24db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_24db_rf_gain_pack(uint16_t rx_24db_rf_gain)
{
    hwp_rf_p0->rx_24db_rf_gain.val = (((uint32_t)rx_24db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_24db_rf_gain_unpack(uint16_t* rx_24db_rf_gain)
{
    T_RF_P0_RX_24DB_RF_GAIN localVal = hwp_rf_p0->rx_24db_rf_gain;

    *rx_24db_rf_gain = localVal.bit_field.rx_24db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_24db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_24db_rf_gain.bit_field.rx_24db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_24db_rf_gain_setf(uint16_t rx_24db_rf_gain)
{
    hwp_rf_p0->rx_24db_rf_gain.bit_field.rx_24db_rf_gain = rx_24db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_26db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_26db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_26db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_26db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_26db_rf_gain_pack(uint16_t rx_26db_rf_gain)
{
    hwp_rf_p0->rx_26db_rf_gain.val = (((uint32_t)rx_26db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_26db_rf_gain_unpack(uint16_t* rx_26db_rf_gain)
{
    T_RF_P0_RX_26DB_RF_GAIN localVal = hwp_rf_p0->rx_26db_rf_gain;

    *rx_26db_rf_gain = localVal.bit_field.rx_26db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_26db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_26db_rf_gain.bit_field.rx_26db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_26db_rf_gain_setf(uint16_t rx_26db_rf_gain)
{
    hwp_rf_p0->rx_26db_rf_gain.bit_field.rx_26db_rf_gain = rx_26db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_28db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_28db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_28db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_28db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_28db_rf_gain_pack(uint16_t rx_28db_rf_gain)
{
    hwp_rf_p0->rx_28db_rf_gain.val = (((uint32_t)rx_28db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_28db_rf_gain_unpack(uint16_t* rx_28db_rf_gain)
{
    T_RF_P0_RX_28DB_RF_GAIN localVal = hwp_rf_p0->rx_28db_rf_gain;

    *rx_28db_rf_gain = localVal.bit_field.rx_28db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_28db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_28db_rf_gain.bit_field.rx_28db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_28db_rf_gain_setf(uint16_t rx_28db_rf_gain)
{
    hwp_rf_p0->rx_28db_rf_gain.bit_field.rx_28db_rf_gain = rx_28db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_30db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_30db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_30db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_30db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_30db_rf_gain_pack(uint16_t rx_30db_rf_gain)
{
    hwp_rf_p0->rx_30db_rf_gain.val = (((uint32_t)rx_30db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_30db_rf_gain_unpack(uint16_t* rx_30db_rf_gain)
{
    T_RF_P0_RX_30DB_RF_GAIN localVal = hwp_rf_p0->rx_30db_rf_gain;

    *rx_30db_rf_gain = localVal.bit_field.rx_30db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_30db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_30db_rf_gain.bit_field.rx_30db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_30db_rf_gain_setf(uint16_t rx_30db_rf_gain)
{
    hwp_rf_p0->rx_30db_rf_gain.bit_field.rx_30db_rf_gain = rx_30db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_32db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_32db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_32db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_32db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_32db_rf_gain_pack(uint16_t rx_32db_rf_gain)
{
    hwp_rf_p0->rx_32db_rf_gain.val = (((uint32_t)rx_32db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_32db_rf_gain_unpack(uint16_t* rx_32db_rf_gain)
{
    T_RF_P0_RX_32DB_RF_GAIN localVal = hwp_rf_p0->rx_32db_rf_gain;

    *rx_32db_rf_gain = localVal.bit_field.rx_32db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_32db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_32db_rf_gain.bit_field.rx_32db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_32db_rf_gain_setf(uint16_t rx_32db_rf_gain)
{
    hwp_rf_p0->rx_32db_rf_gain.bit_field.rx_32db_rf_gain = rx_32db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_34db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_34db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_34db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_34db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_34db_rf_gain_pack(uint16_t rx_34db_rf_gain)
{
    hwp_rf_p0->rx_34db_rf_gain.val = (((uint32_t)rx_34db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_34db_rf_gain_unpack(uint16_t* rx_34db_rf_gain)
{
    T_RF_P0_RX_34DB_RF_GAIN localVal = hwp_rf_p0->rx_34db_rf_gain;

    *rx_34db_rf_gain = localVal.bit_field.rx_34db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_34db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_34db_rf_gain.bit_field.rx_34db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_34db_rf_gain_setf(uint16_t rx_34db_rf_gain)
{
    hwp_rf_p0->rx_34db_rf_gain.bit_field.rx_34db_rf_gain = rx_34db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_36db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_36db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_36db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_36db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_36db_rf_gain_pack(uint16_t rx_36db_rf_gain)
{
    hwp_rf_p0->rx_36db_rf_gain.val = (((uint32_t)rx_36db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_36db_rf_gain_unpack(uint16_t* rx_36db_rf_gain)
{
    T_RF_P0_RX_36DB_RF_GAIN localVal = hwp_rf_p0->rx_36db_rf_gain;

    *rx_36db_rf_gain = localVal.bit_field.rx_36db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_36db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_36db_rf_gain.bit_field.rx_36db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_36db_rf_gain_setf(uint16_t rx_36db_rf_gain)
{
    hwp_rf_p0->rx_36db_rf_gain.bit_field.rx_36db_rf_gain = rx_36db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_38db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_38db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_38db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_38db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_38db_rf_gain_pack(uint16_t rx_38db_rf_gain)
{
    hwp_rf_p0->rx_38db_rf_gain.val = (((uint32_t)rx_38db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_38db_rf_gain_unpack(uint16_t* rx_38db_rf_gain)
{
    T_RF_P0_RX_38DB_RF_GAIN localVal = hwp_rf_p0->rx_38db_rf_gain;

    *rx_38db_rf_gain = localVal.bit_field.rx_38db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_38db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_38db_rf_gain.bit_field.rx_38db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_38db_rf_gain_setf(uint16_t rx_38db_rf_gain)
{
    hwp_rf_p0->rx_38db_rf_gain.bit_field.rx_38db_rf_gain = rx_38db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_40db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_40db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_40db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_40db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_40db_rf_gain_pack(uint16_t rx_40db_rf_gain)
{
    hwp_rf_p0->rx_40db_rf_gain.val = (((uint32_t)rx_40db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_40db_rf_gain_unpack(uint16_t* rx_40db_rf_gain)
{
    T_RF_P0_RX_40DB_RF_GAIN localVal = hwp_rf_p0->rx_40db_rf_gain;

    *rx_40db_rf_gain = localVal.bit_field.rx_40db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_40db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_40db_rf_gain.bit_field.rx_40db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_40db_rf_gain_setf(uint16_t rx_40db_rf_gain)
{
    hwp_rf_p0->rx_40db_rf_gain.bit_field.rx_40db_rf_gain = rx_40db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_42db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_42db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_42db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_42db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_42db_rf_gain_pack(uint16_t rx_42db_rf_gain)
{
    hwp_rf_p0->rx_42db_rf_gain.val = (((uint32_t)rx_42db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_42db_rf_gain_unpack(uint16_t* rx_42db_rf_gain)
{
    T_RF_P0_RX_42DB_RF_GAIN localVal = hwp_rf_p0->rx_42db_rf_gain;

    *rx_42db_rf_gain = localVal.bit_field.rx_42db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_42db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_42db_rf_gain.bit_field.rx_42db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_42db_rf_gain_setf(uint16_t rx_42db_rf_gain)
{
    hwp_rf_p0->rx_42db_rf_gain.bit_field.rx_42db_rf_gain = rx_42db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_44db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_44db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_44db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_44db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_44db_rf_gain_pack(uint16_t rx_44db_rf_gain)
{
    hwp_rf_p0->rx_44db_rf_gain.val = (((uint32_t)rx_44db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_44db_rf_gain_unpack(uint16_t* rx_44db_rf_gain)
{
    T_RF_P0_RX_44DB_RF_GAIN localVal = hwp_rf_p0->rx_44db_rf_gain;

    *rx_44db_rf_gain = localVal.bit_field.rx_44db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_44db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_44db_rf_gain.bit_field.rx_44db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_44db_rf_gain_setf(uint16_t rx_44db_rf_gain)
{
    hwp_rf_p0->rx_44db_rf_gain.bit_field.rx_44db_rf_gain = rx_44db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_46db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_46db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_46db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_46db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_46db_rf_gain_pack(uint16_t rx_46db_rf_gain)
{
    hwp_rf_p0->rx_46db_rf_gain.val = (((uint32_t)rx_46db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_46db_rf_gain_unpack(uint16_t* rx_46db_rf_gain)
{
    T_RF_P0_RX_46DB_RF_GAIN localVal = hwp_rf_p0->rx_46db_rf_gain;

    *rx_46db_rf_gain = localVal.bit_field.rx_46db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_46db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_46db_rf_gain.bit_field.rx_46db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_46db_rf_gain_setf(uint16_t rx_46db_rf_gain)
{
    hwp_rf_p0->rx_46db_rf_gain.bit_field.rx_46db_rf_gain = rx_46db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_48db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_48db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_48db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_48db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_48db_rf_gain_pack(uint16_t rx_48db_rf_gain)
{
    hwp_rf_p0->rx_48db_rf_gain.val = (((uint32_t)rx_48db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_48db_rf_gain_unpack(uint16_t* rx_48db_rf_gain)
{
    T_RF_P0_RX_48DB_RF_GAIN localVal = hwp_rf_p0->rx_48db_rf_gain;

    *rx_48db_rf_gain = localVal.bit_field.rx_48db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_48db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_48db_rf_gain.bit_field.rx_48db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_48db_rf_gain_setf(uint16_t rx_48db_rf_gain)
{
    hwp_rf_p0->rx_48db_rf_gain.bit_field.rx_48db_rf_gain = rx_48db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_50db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_50db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_50db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_50db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_50db_rf_gain_pack(uint16_t rx_50db_rf_gain)
{
    hwp_rf_p0->rx_50db_rf_gain.val = (((uint32_t)rx_50db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_50db_rf_gain_unpack(uint16_t* rx_50db_rf_gain)
{
    T_RF_P0_RX_50DB_RF_GAIN localVal = hwp_rf_p0->rx_50db_rf_gain;

    *rx_50db_rf_gain = localVal.bit_field.rx_50db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_50db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_50db_rf_gain.bit_field.rx_50db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_50db_rf_gain_setf(uint16_t rx_50db_rf_gain)
{
    hwp_rf_p0->rx_50db_rf_gain.bit_field.rx_50db_rf_gain = rx_50db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_52db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_52db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_52db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_52db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_52db_rf_gain_pack(uint16_t rx_52db_rf_gain)
{
    hwp_rf_p0->rx_52db_rf_gain.val = (((uint32_t)rx_52db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_52db_rf_gain_unpack(uint16_t* rx_52db_rf_gain)
{
    T_RF_P0_RX_52DB_RF_GAIN localVal = hwp_rf_p0->rx_52db_rf_gain;

    *rx_52db_rf_gain = localVal.bit_field.rx_52db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_52db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_52db_rf_gain.bit_field.rx_52db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_52db_rf_gain_setf(uint16_t rx_52db_rf_gain)
{
    hwp_rf_p0->rx_52db_rf_gain.bit_field.rx_52db_rf_gain = rx_52db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_54db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_54db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_54db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_54db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_54db_rf_gain_pack(uint16_t rx_54db_rf_gain)
{
    hwp_rf_p0->rx_54db_rf_gain.val = (((uint32_t)rx_54db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_54db_rf_gain_unpack(uint16_t* rx_54db_rf_gain)
{
    T_RF_P0_RX_54DB_RF_GAIN localVal = hwp_rf_p0->rx_54db_rf_gain;

    *rx_54db_rf_gain = localVal.bit_field.rx_54db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_54db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_54db_rf_gain.bit_field.rx_54db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_54db_rf_gain_setf(uint16_t rx_54db_rf_gain)
{
    hwp_rf_p0->rx_54db_rf_gain.bit_field.rx_54db_rf_gain = rx_54db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_56db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_56db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_56db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_56db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_56db_rf_gain_pack(uint16_t rx_56db_rf_gain)
{
    hwp_rf_p0->rx_56db_rf_gain.val = (((uint32_t)rx_56db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_56db_rf_gain_unpack(uint16_t* rx_56db_rf_gain)
{
    T_RF_P0_RX_56DB_RF_GAIN localVal = hwp_rf_p0->rx_56db_rf_gain;

    *rx_56db_rf_gain = localVal.bit_field.rx_56db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_56db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_56db_rf_gain.bit_field.rx_56db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_56db_rf_gain_setf(uint16_t rx_56db_rf_gain)
{
    hwp_rf_p0->rx_56db_rf_gain.bit_field.rx_56db_rf_gain = rx_56db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_58db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_58db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_58db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_58db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_58db_rf_gain_pack(uint16_t rx_58db_rf_gain)
{
    hwp_rf_p0->rx_58db_rf_gain.val = (((uint32_t)rx_58db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_58db_rf_gain_unpack(uint16_t* rx_58db_rf_gain)
{
    T_RF_P0_RX_58DB_RF_GAIN localVal = hwp_rf_p0->rx_58db_rf_gain;

    *rx_58db_rf_gain = localVal.bit_field.rx_58db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_58db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_58db_rf_gain.bit_field.rx_58db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_58db_rf_gain_setf(uint16_t rx_58db_rf_gain)
{
    hwp_rf_p0->rx_58db_rf_gain.bit_field.rx_58db_rf_gain = rx_58db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_60db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_60db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_60db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_60db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_60db_rf_gain_pack(uint16_t rx_60db_rf_gain)
{
    hwp_rf_p0->rx_60db_rf_gain.val = (((uint32_t)rx_60db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_60db_rf_gain_unpack(uint16_t* rx_60db_rf_gain)
{
    T_RF_P0_RX_60DB_RF_GAIN localVal = hwp_rf_p0->rx_60db_rf_gain;

    *rx_60db_rf_gain = localVal.bit_field.rx_60db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_60db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_60db_rf_gain.bit_field.rx_60db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_60db_rf_gain_setf(uint16_t rx_60db_rf_gain)
{
    hwp_rf_p0->rx_60db_rf_gain.bit_field.rx_60db_rf_gain = rx_60db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_62db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_62db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_62db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_62db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_62db_rf_gain_pack(uint16_t rx_62db_rf_gain)
{
    hwp_rf_p0->rx_62db_rf_gain.val = (((uint32_t)rx_62db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_62db_rf_gain_unpack(uint16_t* rx_62db_rf_gain)
{
    T_RF_P0_RX_62DB_RF_GAIN localVal = hwp_rf_p0->rx_62db_rf_gain;

    *rx_62db_rf_gain = localVal.bit_field.rx_62db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_62db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_62db_rf_gain.bit_field.rx_62db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_62db_rf_gain_setf(uint16_t rx_62db_rf_gain)
{
    hwp_rf_p0->rx_62db_rf_gain.bit_field.rx_62db_rf_gain = rx_62db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_64db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_64db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_64db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_64db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_64db_rf_gain_pack(uint16_t rx_64db_rf_gain)
{
    hwp_rf_p0->rx_64db_rf_gain.val = (((uint32_t)rx_64db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_64db_rf_gain_unpack(uint16_t* rx_64db_rf_gain)
{
    T_RF_P0_RX_64DB_RF_GAIN localVal = hwp_rf_p0->rx_64db_rf_gain;

    *rx_64db_rf_gain = localVal.bit_field.rx_64db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_64db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_64db_rf_gain.bit_field.rx_64db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_64db_rf_gain_setf(uint16_t rx_64db_rf_gain)
{
    hwp_rf_p0->rx_64db_rf_gain.bit_field.rx_64db_rf_gain = rx_64db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_66db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_66db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_66db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_66db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_66db_rf_gain_pack(uint16_t rx_66db_rf_gain)
{
    hwp_rf_p0->rx_66db_rf_gain.val = (((uint32_t)rx_66db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_66db_rf_gain_unpack(uint16_t* rx_66db_rf_gain)
{
    T_RF_P0_RX_66DB_RF_GAIN localVal = hwp_rf_p0->rx_66db_rf_gain;

    *rx_66db_rf_gain = localVal.bit_field.rx_66db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_66db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_66db_rf_gain.bit_field.rx_66db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_66db_rf_gain_setf(uint16_t rx_66db_rf_gain)
{
    hwp_rf_p0->rx_66db_rf_gain.bit_field.rx_66db_rf_gain = rx_66db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_68db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_68db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_68db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_68db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_68db_rf_gain_pack(uint16_t rx_68db_rf_gain)
{
    hwp_rf_p0->rx_68db_rf_gain.val = (((uint32_t)rx_68db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_68db_rf_gain_unpack(uint16_t* rx_68db_rf_gain)
{
    T_RF_P0_RX_68DB_RF_GAIN localVal = hwp_rf_p0->rx_68db_rf_gain;

    *rx_68db_rf_gain = localVal.bit_field.rx_68db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_68db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_68db_rf_gain.bit_field.rx_68db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_68db_rf_gain_setf(uint16_t rx_68db_rf_gain)
{
    hwp_rf_p0->rx_68db_rf_gain.bit_field.rx_68db_rf_gain = rx_68db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_70db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_70db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_70db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_70db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_70db_rf_gain_pack(uint16_t rx_70db_rf_gain)
{
    hwp_rf_p0->rx_70db_rf_gain.val = (((uint32_t)rx_70db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_70db_rf_gain_unpack(uint16_t* rx_70db_rf_gain)
{
    T_RF_P0_RX_70DB_RF_GAIN localVal = hwp_rf_p0->rx_70db_rf_gain;

    *rx_70db_rf_gain = localVal.bit_field.rx_70db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_70db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_70db_rf_gain.bit_field.rx_70db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_70db_rf_gain_setf(uint16_t rx_70db_rf_gain)
{
    hwp_rf_p0->rx_70db_rf_gain.bit_field.rx_70db_rf_gain = rx_70db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_72db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_72db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_72db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_72db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_72db_rf_gain_pack(uint16_t rx_72db_rf_gain)
{
    hwp_rf_p0->rx_72db_rf_gain.val = (((uint32_t)rx_72db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_72db_rf_gain_unpack(uint16_t* rx_72db_rf_gain)
{
    T_RF_P0_RX_72DB_RF_GAIN localVal = hwp_rf_p0->rx_72db_rf_gain;

    *rx_72db_rf_gain = localVal.bit_field.rx_72db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_72db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_72db_rf_gain.bit_field.rx_72db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_72db_rf_gain_setf(uint16_t rx_72db_rf_gain)
{
    hwp_rf_p0->rx_72db_rf_gain.bit_field.rx_72db_rf_gain = rx_72db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_74db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_74db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_74db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_74db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_74db_rf_gain_pack(uint16_t rx_74db_rf_gain)
{
    hwp_rf_p0->rx_74db_rf_gain.val = (((uint32_t)rx_74db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_74db_rf_gain_unpack(uint16_t* rx_74db_rf_gain)
{
    T_RF_P0_RX_74DB_RF_GAIN localVal = hwp_rf_p0->rx_74db_rf_gain;

    *rx_74db_rf_gain = localVal.bit_field.rx_74db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_74db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_74db_rf_gain.bit_field.rx_74db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_74db_rf_gain_setf(uint16_t rx_74db_rf_gain)
{
    hwp_rf_p0->rx_74db_rf_gain.bit_field.rx_74db_rf_gain = rx_74db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_76db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_76db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_76db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_76db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_76db_rf_gain_pack(uint16_t rx_76db_rf_gain)
{
    hwp_rf_p0->rx_76db_rf_gain.val = (((uint32_t)rx_76db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_76db_rf_gain_unpack(uint16_t* rx_76db_rf_gain)
{
    T_RF_P0_RX_76DB_RF_GAIN localVal = hwp_rf_p0->rx_76db_rf_gain;

    *rx_76db_rf_gain = localVal.bit_field.rx_76db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_76db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_76db_rf_gain.bit_field.rx_76db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_76db_rf_gain_setf(uint16_t rx_76db_rf_gain)
{
    hwp_rf_p0->rx_76db_rf_gain.bit_field.rx_76db_rf_gain = rx_76db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_78db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_78db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_78db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_78db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_78db_rf_gain_pack(uint16_t rx_78db_rf_gain)
{
    hwp_rf_p0->rx_78db_rf_gain.val = (((uint32_t)rx_78db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_78db_rf_gain_unpack(uint16_t* rx_78db_rf_gain)
{
    T_RF_P0_RX_78DB_RF_GAIN localVal = hwp_rf_p0->rx_78db_rf_gain;

    *rx_78db_rf_gain = localVal.bit_field.rx_78db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_78db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_78db_rf_gain.bit_field.rx_78db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_78db_rf_gain_setf(uint16_t rx_78db_rf_gain)
{
    hwp_rf_p0->rx_78db_rf_gain.bit_field.rx_78db_rf_gain = rx_78db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_80db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_80db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_80db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_80db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_80db_rf_gain_pack(uint16_t rx_80db_rf_gain)
{
    hwp_rf_p0->rx_80db_rf_gain.val = (((uint32_t)rx_80db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_80db_rf_gain_unpack(uint16_t* rx_80db_rf_gain)
{
    T_RF_P0_RX_80DB_RF_GAIN localVal = hwp_rf_p0->rx_80db_rf_gain;

    *rx_80db_rf_gain = localVal.bit_field.rx_80db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_80db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_80db_rf_gain.bit_field.rx_80db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_80db_rf_gain_setf(uint16_t rx_80db_rf_gain)
{
    hwp_rf_p0->rx_80db_rf_gain.bit_field.rx_80db_rf_gain = rx_80db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_82db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_82db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_82db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_82db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_82db_rf_gain_pack(uint16_t rx_82db_rf_gain)
{
    hwp_rf_p0->rx_82db_rf_gain.val = (((uint32_t)rx_82db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_82db_rf_gain_unpack(uint16_t* rx_82db_rf_gain)
{
    T_RF_P0_RX_82DB_RF_GAIN localVal = hwp_rf_p0->rx_82db_rf_gain;

    *rx_82db_rf_gain = localVal.bit_field.rx_82db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_82db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_82db_rf_gain.bit_field.rx_82db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_82db_rf_gain_setf(uint16_t rx_82db_rf_gain)
{
    hwp_rf_p0->rx_82db_rf_gain.bit_field.rx_82db_rf_gain = rx_82db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_84db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_84db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_84db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_84db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_84db_rf_gain_pack(uint16_t rx_84db_rf_gain)
{
    hwp_rf_p0->rx_84db_rf_gain.val = (((uint32_t)rx_84db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_84db_rf_gain_unpack(uint16_t* rx_84db_rf_gain)
{
    T_RF_P0_RX_84DB_RF_GAIN localVal = hwp_rf_p0->rx_84db_rf_gain;

    *rx_84db_rf_gain = localVal.bit_field.rx_84db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_84db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_84db_rf_gain.bit_field.rx_84db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_84db_rf_gain_setf(uint16_t rx_84db_rf_gain)
{
    hwp_rf_p0->rx_84db_rf_gain.bit_field.rx_84db_rf_gain = rx_84db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_86db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_86db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_86db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_86db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_86db_rf_gain_pack(uint16_t rx_86db_rf_gain)
{
    hwp_rf_p0->rx_86db_rf_gain.val = (((uint32_t)rx_86db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_86db_rf_gain_unpack(uint16_t* rx_86db_rf_gain)
{
    T_RF_P0_RX_86DB_RF_GAIN localVal = hwp_rf_p0->rx_86db_rf_gain;

    *rx_86db_rf_gain = localVal.bit_field.rx_86db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_86db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_86db_rf_gain.bit_field.rx_86db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_86db_rf_gain_setf(uint16_t rx_86db_rf_gain)
{
    hwp_rf_p0->rx_86db_rf_gain.bit_field.rx_86db_rf_gain = rx_86db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_88db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_88db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_88db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_88db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_88db_rf_gain_pack(uint16_t rx_88db_rf_gain)
{
    hwp_rf_p0->rx_88db_rf_gain.val = (((uint32_t)rx_88db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_88db_rf_gain_unpack(uint16_t* rx_88db_rf_gain)
{
    T_RF_P0_RX_88DB_RF_GAIN localVal = hwp_rf_p0->rx_88db_rf_gain;

    *rx_88db_rf_gain = localVal.bit_field.rx_88db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_88db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_88db_rf_gain.bit_field.rx_88db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_88db_rf_gain_setf(uint16_t rx_88db_rf_gain)
{
    hwp_rf_p0->rx_88db_rf_gain.bit_field.rx_88db_rf_gain = rx_88db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rx_90db_rf_gain_get(void)
{
    return hwp_rf_p0->rx_90db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_rx_90db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->rx_90db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_rx_90db_rf_gain_pack(uint16_t rx_90db_rf_gain)
{
    hwp_rf_p0->rx_90db_rf_gain.val = (((uint32_t)rx_90db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_rx_90db_rf_gain_unpack(uint16_t* rx_90db_rf_gain)
{
    T_RF_P0_RX_90DB_RF_GAIN localVal = hwp_rf_p0->rx_90db_rf_gain;

    *rx_90db_rf_gain = localVal.bit_field.rx_90db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_rx_90db_rf_gain_getf(void)
{
    return hwp_rf_p0->rx_90db_rf_gain.bit_field.rx_90db_rf_gain;
}

__STATIC_INLINE void rf_p0_rx_90db_rf_gain_setf(uint16_t rx_90db_rf_gain)
{
    hwp_rf_p0->rx_90db_rf_gain.bit_field.rx_90db_rf_gain = rx_90db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_0db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_0db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_0db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_0db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_0db_rf_gain_pack(uint16_t tx_0db_rf_gain)
{
    hwp_rf_p0->tx_0db_rf_gain.val = (((uint32_t)tx_0db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_0db_rf_gain_unpack(uint16_t* tx_0db_rf_gain)
{
    T_RF_P0_TX_0DB_RF_GAIN localVal = hwp_rf_p0->tx_0db_rf_gain;

    *tx_0db_rf_gain = localVal.bit_field.tx_0db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_0db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_0db_rf_gain.bit_field.tx_0db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_0db_rf_gain_setf(uint16_t tx_0db_rf_gain)
{
    hwp_rf_p0->tx_0db_rf_gain.bit_field.tx_0db_rf_gain = tx_0db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_1db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_1db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_1db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_1db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_1db_rf_gain_pack(uint16_t tx_1db_rf_gain)
{
    hwp_rf_p0->tx_1db_rf_gain.val = (((uint32_t)tx_1db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_1db_rf_gain_unpack(uint16_t* tx_1db_rf_gain)
{
    T_RF_P0_TX_1DB_RF_GAIN localVal = hwp_rf_p0->tx_1db_rf_gain;

    *tx_1db_rf_gain = localVal.bit_field.tx_1db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_1db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_1db_rf_gain.bit_field.tx_1db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_1db_rf_gain_setf(uint16_t tx_1db_rf_gain)
{
    hwp_rf_p0->tx_1db_rf_gain.bit_field.tx_1db_rf_gain = tx_1db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_2db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_2db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_2db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_2db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_2db_rf_gain_pack(uint16_t tx_2db_rf_gain)
{
    hwp_rf_p0->tx_2db_rf_gain.val = (((uint32_t)tx_2db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_2db_rf_gain_unpack(uint16_t* tx_2db_rf_gain)
{
    T_RF_P0_TX_2DB_RF_GAIN localVal = hwp_rf_p0->tx_2db_rf_gain;

    *tx_2db_rf_gain = localVal.bit_field.tx_2db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_2db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_2db_rf_gain.bit_field.tx_2db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_2db_rf_gain_setf(uint16_t tx_2db_rf_gain)
{
    hwp_rf_p0->tx_2db_rf_gain.bit_field.tx_2db_rf_gain = tx_2db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_3db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_3db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_3db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_3db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_3db_rf_gain_pack(uint16_t tx_3db_rf_gain)
{
    hwp_rf_p0->tx_3db_rf_gain.val = (((uint32_t)tx_3db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_3db_rf_gain_unpack(uint16_t* tx_3db_rf_gain)
{
    T_RF_P0_TX_3DB_RF_GAIN localVal = hwp_rf_p0->tx_3db_rf_gain;

    *tx_3db_rf_gain = localVal.bit_field.tx_3db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_3db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_3db_rf_gain.bit_field.tx_3db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_3db_rf_gain_setf(uint16_t tx_3db_rf_gain)
{
    hwp_rf_p0->tx_3db_rf_gain.bit_field.tx_3db_rf_gain = tx_3db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_4db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_4db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_4db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_4db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_4db_rf_gain_pack(uint16_t tx_4db_rf_gain)
{
    hwp_rf_p0->tx_4db_rf_gain.val = (((uint32_t)tx_4db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_4db_rf_gain_unpack(uint16_t* tx_4db_rf_gain)
{
    T_RF_P0_TX_4DB_RF_GAIN localVal = hwp_rf_p0->tx_4db_rf_gain;

    *tx_4db_rf_gain = localVal.bit_field.tx_4db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_4db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_4db_rf_gain.bit_field.tx_4db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_4db_rf_gain_setf(uint16_t tx_4db_rf_gain)
{
    hwp_rf_p0->tx_4db_rf_gain.bit_field.tx_4db_rf_gain = tx_4db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_5db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_5db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_5db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_5db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_5db_rf_gain_pack(uint16_t tx_5db_rf_gain)
{
    hwp_rf_p0->tx_5db_rf_gain.val = (((uint32_t)tx_5db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_5db_rf_gain_unpack(uint16_t* tx_5db_rf_gain)
{
    T_RF_P0_TX_5DB_RF_GAIN localVal = hwp_rf_p0->tx_5db_rf_gain;

    *tx_5db_rf_gain = localVal.bit_field.tx_5db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_5db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_5db_rf_gain.bit_field.tx_5db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_5db_rf_gain_setf(uint16_t tx_5db_rf_gain)
{
    hwp_rf_p0->tx_5db_rf_gain.bit_field.tx_5db_rf_gain = tx_5db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_6db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_6db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_6db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_6db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_6db_rf_gain_pack(uint16_t tx_6db_rf_gain)
{
    hwp_rf_p0->tx_6db_rf_gain.val = (((uint32_t)tx_6db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_6db_rf_gain_unpack(uint16_t* tx_6db_rf_gain)
{
    T_RF_P0_TX_6DB_RF_GAIN localVal = hwp_rf_p0->tx_6db_rf_gain;

    *tx_6db_rf_gain = localVal.bit_field.tx_6db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_6db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_6db_rf_gain.bit_field.tx_6db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_6db_rf_gain_setf(uint16_t tx_6db_rf_gain)
{
    hwp_rf_p0->tx_6db_rf_gain.bit_field.tx_6db_rf_gain = tx_6db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_7db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_7db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_7db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_7db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_7db_rf_gain_pack(uint16_t tx_7db_rf_gain)
{
    hwp_rf_p0->tx_7db_rf_gain.val = (((uint32_t)tx_7db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_7db_rf_gain_unpack(uint16_t* tx_7db_rf_gain)
{
    T_RF_P0_TX_7DB_RF_GAIN localVal = hwp_rf_p0->tx_7db_rf_gain;

    *tx_7db_rf_gain = localVal.bit_field.tx_7db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_7db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_7db_rf_gain.bit_field.tx_7db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_7db_rf_gain_setf(uint16_t tx_7db_rf_gain)
{
    hwp_rf_p0->tx_7db_rf_gain.bit_field.tx_7db_rf_gain = tx_7db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_8db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_8db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_8db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_8db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_8db_rf_gain_pack(uint16_t tx_8db_rf_gain)
{
    hwp_rf_p0->tx_8db_rf_gain.val = (((uint32_t)tx_8db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_8db_rf_gain_unpack(uint16_t* tx_8db_rf_gain)
{
    T_RF_P0_TX_8DB_RF_GAIN localVal = hwp_rf_p0->tx_8db_rf_gain;

    *tx_8db_rf_gain = localVal.bit_field.tx_8db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_8db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_8db_rf_gain.bit_field.tx_8db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_8db_rf_gain_setf(uint16_t tx_8db_rf_gain)
{
    hwp_rf_p0->tx_8db_rf_gain.bit_field.tx_8db_rf_gain = tx_8db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_9db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_9db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_9db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_9db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_9db_rf_gain_pack(uint16_t tx_9db_rf_gain)
{
    hwp_rf_p0->tx_9db_rf_gain.val = (((uint32_t)tx_9db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_9db_rf_gain_unpack(uint16_t* tx_9db_rf_gain)
{
    T_RF_P0_TX_9DB_RF_GAIN localVal = hwp_rf_p0->tx_9db_rf_gain;

    *tx_9db_rf_gain = localVal.bit_field.tx_9db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_9db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_9db_rf_gain.bit_field.tx_9db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_9db_rf_gain_setf(uint16_t tx_9db_rf_gain)
{
    hwp_rf_p0->tx_9db_rf_gain.bit_field.tx_9db_rf_gain = tx_9db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_10db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_10db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_10db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_10db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_10db_rf_gain_pack(uint16_t tx_10db_rf_gain)
{
    hwp_rf_p0->tx_10db_rf_gain.val = (((uint32_t)tx_10db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_10db_rf_gain_unpack(uint16_t* tx_10db_rf_gain)
{
    T_RF_P0_TX_10DB_RF_GAIN localVal = hwp_rf_p0->tx_10db_rf_gain;

    *tx_10db_rf_gain = localVal.bit_field.tx_10db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_10db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_10db_rf_gain.bit_field.tx_10db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_10db_rf_gain_setf(uint16_t tx_10db_rf_gain)
{
    hwp_rf_p0->tx_10db_rf_gain.bit_field.tx_10db_rf_gain = tx_10db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_11db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_11db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_11db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_11db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_11db_rf_gain_pack(uint16_t tx_11db_rf_gain)
{
    hwp_rf_p0->tx_11db_rf_gain.val = (((uint32_t)tx_11db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_11db_rf_gain_unpack(uint16_t* tx_11db_rf_gain)
{
    T_RF_P0_TX_11DB_RF_GAIN localVal = hwp_rf_p0->tx_11db_rf_gain;

    *tx_11db_rf_gain = localVal.bit_field.tx_11db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_11db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_11db_rf_gain.bit_field.tx_11db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_11db_rf_gain_setf(uint16_t tx_11db_rf_gain)
{
    hwp_rf_p0->tx_11db_rf_gain.bit_field.tx_11db_rf_gain = tx_11db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_12db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_12db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_12db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_12db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_12db_rf_gain_pack(uint16_t tx_12db_rf_gain)
{
    hwp_rf_p0->tx_12db_rf_gain.val = (((uint32_t)tx_12db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_12db_rf_gain_unpack(uint16_t* tx_12db_rf_gain)
{
    T_RF_P0_TX_12DB_RF_GAIN localVal = hwp_rf_p0->tx_12db_rf_gain;

    *tx_12db_rf_gain = localVal.bit_field.tx_12db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_12db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_12db_rf_gain.bit_field.tx_12db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_12db_rf_gain_setf(uint16_t tx_12db_rf_gain)
{
    hwp_rf_p0->tx_12db_rf_gain.bit_field.tx_12db_rf_gain = tx_12db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_13db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_13db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_13db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_13db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_13db_rf_gain_pack(uint16_t tx_13db_rf_gain)
{
    hwp_rf_p0->tx_13db_rf_gain.val = (((uint32_t)tx_13db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_13db_rf_gain_unpack(uint16_t* tx_13db_rf_gain)
{
    T_RF_P0_TX_13DB_RF_GAIN localVal = hwp_rf_p0->tx_13db_rf_gain;

    *tx_13db_rf_gain = localVal.bit_field.tx_13db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_13db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_13db_rf_gain.bit_field.tx_13db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_13db_rf_gain_setf(uint16_t tx_13db_rf_gain)
{
    hwp_rf_p0->tx_13db_rf_gain.bit_field.tx_13db_rf_gain = tx_13db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_14db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_14db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_14db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_14db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_14db_rf_gain_pack(uint16_t tx_14db_rf_gain)
{
    hwp_rf_p0->tx_14db_rf_gain.val = (((uint32_t)tx_14db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_14db_rf_gain_unpack(uint16_t* tx_14db_rf_gain)
{
    T_RF_P0_TX_14DB_RF_GAIN localVal = hwp_rf_p0->tx_14db_rf_gain;

    *tx_14db_rf_gain = localVal.bit_field.tx_14db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_14db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_14db_rf_gain.bit_field.tx_14db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_14db_rf_gain_setf(uint16_t tx_14db_rf_gain)
{
    hwp_rf_p0->tx_14db_rf_gain.bit_field.tx_14db_rf_gain = tx_14db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_15db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_15db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_15db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_15db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_15db_rf_gain_pack(uint16_t tx_15db_rf_gain)
{
    hwp_rf_p0->tx_15db_rf_gain.val = (((uint32_t)tx_15db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_15db_rf_gain_unpack(uint16_t* tx_15db_rf_gain)
{
    T_RF_P0_TX_15DB_RF_GAIN localVal = hwp_rf_p0->tx_15db_rf_gain;

    *tx_15db_rf_gain = localVal.bit_field.tx_15db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_15db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_15db_rf_gain.bit_field.tx_15db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_15db_rf_gain_setf(uint16_t tx_15db_rf_gain)
{
    hwp_rf_p0->tx_15db_rf_gain.bit_field.tx_15db_rf_gain = tx_15db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_16db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_16db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_16db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_16db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_16db_rf_gain_pack(uint16_t tx_16db_rf_gain)
{
    hwp_rf_p0->tx_16db_rf_gain.val = (((uint32_t)tx_16db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_16db_rf_gain_unpack(uint16_t* tx_16db_rf_gain)
{
    T_RF_P0_TX_16DB_RF_GAIN localVal = hwp_rf_p0->tx_16db_rf_gain;

    *tx_16db_rf_gain = localVal.bit_field.tx_16db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_16db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_16db_rf_gain.bit_field.tx_16db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_16db_rf_gain_setf(uint16_t tx_16db_rf_gain)
{
    hwp_rf_p0->tx_16db_rf_gain.bit_field.tx_16db_rf_gain = tx_16db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_17db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_17db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_17db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_17db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_17db_rf_gain_pack(uint16_t tx_17db_rf_gain)
{
    hwp_rf_p0->tx_17db_rf_gain.val = (((uint32_t)tx_17db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_17db_rf_gain_unpack(uint16_t* tx_17db_rf_gain)
{
    T_RF_P0_TX_17DB_RF_GAIN localVal = hwp_rf_p0->tx_17db_rf_gain;

    *tx_17db_rf_gain = localVal.bit_field.tx_17db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_17db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_17db_rf_gain.bit_field.tx_17db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_17db_rf_gain_setf(uint16_t tx_17db_rf_gain)
{
    hwp_rf_p0->tx_17db_rf_gain.bit_field.tx_17db_rf_gain = tx_17db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_18db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_18db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_18db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_18db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_18db_rf_gain_pack(uint16_t tx_18db_rf_gain)
{
    hwp_rf_p0->tx_18db_rf_gain.val = (((uint32_t)tx_18db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_18db_rf_gain_unpack(uint16_t* tx_18db_rf_gain)
{
    T_RF_P0_TX_18DB_RF_GAIN localVal = hwp_rf_p0->tx_18db_rf_gain;

    *tx_18db_rf_gain = localVal.bit_field.tx_18db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_18db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_18db_rf_gain.bit_field.tx_18db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_18db_rf_gain_setf(uint16_t tx_18db_rf_gain)
{
    hwp_rf_p0->tx_18db_rf_gain.bit_field.tx_18db_rf_gain = tx_18db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_19db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_19db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_19db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_19db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_19db_rf_gain_pack(uint16_t tx_19db_rf_gain)
{
    hwp_rf_p0->tx_19db_rf_gain.val = (((uint32_t)tx_19db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_19db_rf_gain_unpack(uint16_t* tx_19db_rf_gain)
{
    T_RF_P0_TX_19DB_RF_GAIN localVal = hwp_rf_p0->tx_19db_rf_gain;

    *tx_19db_rf_gain = localVal.bit_field.tx_19db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_19db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_19db_rf_gain.bit_field.tx_19db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_19db_rf_gain_setf(uint16_t tx_19db_rf_gain)
{
    hwp_rf_p0->tx_19db_rf_gain.bit_field.tx_19db_rf_gain = tx_19db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_20db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_20db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_20db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_20db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_20db_rf_gain_pack(uint16_t tx_20db_rf_gain)
{
    hwp_rf_p0->tx_20db_rf_gain.val = (((uint32_t)tx_20db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_20db_rf_gain_unpack(uint16_t* tx_20db_rf_gain)
{
    T_RF_P0_TX_20DB_RF_GAIN localVal = hwp_rf_p0->tx_20db_rf_gain;

    *tx_20db_rf_gain = localVal.bit_field.tx_20db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_20db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_20db_rf_gain.bit_field.tx_20db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_20db_rf_gain_setf(uint16_t tx_20db_rf_gain)
{
    hwp_rf_p0->tx_20db_rf_gain.bit_field.tx_20db_rf_gain = tx_20db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_21db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_21db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_21db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_21db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_21db_rf_gain_pack(uint16_t tx_21db_rf_gain)
{
    hwp_rf_p0->tx_21db_rf_gain.val = (((uint32_t)tx_21db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_21db_rf_gain_unpack(uint16_t* tx_21db_rf_gain)
{
    T_RF_P0_TX_21DB_RF_GAIN localVal = hwp_rf_p0->tx_21db_rf_gain;

    *tx_21db_rf_gain = localVal.bit_field.tx_21db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_21db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_21db_rf_gain.bit_field.tx_21db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_21db_rf_gain_setf(uint16_t tx_21db_rf_gain)
{
    hwp_rf_p0->tx_21db_rf_gain.bit_field.tx_21db_rf_gain = tx_21db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_22db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_22db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_22db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_22db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_22db_rf_gain_pack(uint16_t tx_22db_rf_gain)
{
    hwp_rf_p0->tx_22db_rf_gain.val = (((uint32_t)tx_22db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_22db_rf_gain_unpack(uint16_t* tx_22db_rf_gain)
{
    T_RF_P0_TX_22DB_RF_GAIN localVal = hwp_rf_p0->tx_22db_rf_gain;

    *tx_22db_rf_gain = localVal.bit_field.tx_22db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_22db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_22db_rf_gain.bit_field.tx_22db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_22db_rf_gain_setf(uint16_t tx_22db_rf_gain)
{
    hwp_rf_p0->tx_22db_rf_gain.bit_field.tx_22db_rf_gain = tx_22db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_23db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_23db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_23db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_23db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_23db_rf_gain_pack(uint16_t tx_23db_rf_gain)
{
    hwp_rf_p0->tx_23db_rf_gain.val = (((uint32_t)tx_23db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_23db_rf_gain_unpack(uint16_t* tx_23db_rf_gain)
{
    T_RF_P0_TX_23DB_RF_GAIN localVal = hwp_rf_p0->tx_23db_rf_gain;

    *tx_23db_rf_gain = localVal.bit_field.tx_23db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_23db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_23db_rf_gain.bit_field.tx_23db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_23db_rf_gain_setf(uint16_t tx_23db_rf_gain)
{
    hwp_rf_p0->tx_23db_rf_gain.bit_field.tx_23db_rf_gain = tx_23db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_24db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_24db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_24db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_24db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_24db_rf_gain_pack(uint16_t tx_24db_rf_gain)
{
    hwp_rf_p0->tx_24db_rf_gain.val = (((uint32_t)tx_24db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_24db_rf_gain_unpack(uint16_t* tx_24db_rf_gain)
{
    T_RF_P0_TX_24DB_RF_GAIN localVal = hwp_rf_p0->tx_24db_rf_gain;

    *tx_24db_rf_gain = localVal.bit_field.tx_24db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_24db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_24db_rf_gain.bit_field.tx_24db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_24db_rf_gain_setf(uint16_t tx_24db_rf_gain)
{
    hwp_rf_p0->tx_24db_rf_gain.bit_field.tx_24db_rf_gain = tx_24db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_25db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_25db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_25db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_25db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_25db_rf_gain_pack(uint16_t tx_25db_rf_gain)
{
    hwp_rf_p0->tx_25db_rf_gain.val = (((uint32_t)tx_25db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_25db_rf_gain_unpack(uint16_t* tx_25db_rf_gain)
{
    T_RF_P0_TX_25DB_RF_GAIN localVal = hwp_rf_p0->tx_25db_rf_gain;

    *tx_25db_rf_gain = localVal.bit_field.tx_25db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_25db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_25db_rf_gain.bit_field.tx_25db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_25db_rf_gain_setf(uint16_t tx_25db_rf_gain)
{
    hwp_rf_p0->tx_25db_rf_gain.bit_field.tx_25db_rf_gain = tx_25db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_26db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_26db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_26db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_26db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_26db_rf_gain_pack(uint16_t tx_26db_rf_gain)
{
    hwp_rf_p0->tx_26db_rf_gain.val = (((uint32_t)tx_26db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_26db_rf_gain_unpack(uint16_t* tx_26db_rf_gain)
{
    T_RF_P0_TX_26DB_RF_GAIN localVal = hwp_rf_p0->tx_26db_rf_gain;

    *tx_26db_rf_gain = localVal.bit_field.tx_26db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_26db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_26db_rf_gain.bit_field.tx_26db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_26db_rf_gain_setf(uint16_t tx_26db_rf_gain)
{
    hwp_rf_p0->tx_26db_rf_gain.bit_field.tx_26db_rf_gain = tx_26db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_27db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_27db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_27db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_27db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_27db_rf_gain_pack(uint16_t tx_27db_rf_gain)
{
    hwp_rf_p0->tx_27db_rf_gain.val = (((uint32_t)tx_27db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_27db_rf_gain_unpack(uint16_t* tx_27db_rf_gain)
{
    T_RF_P0_TX_27DB_RF_GAIN localVal = hwp_rf_p0->tx_27db_rf_gain;

    *tx_27db_rf_gain = localVal.bit_field.tx_27db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_27db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_27db_rf_gain.bit_field.tx_27db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_27db_rf_gain_setf(uint16_t tx_27db_rf_gain)
{
    hwp_rf_p0->tx_27db_rf_gain.bit_field.tx_27db_rf_gain = tx_27db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_28db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_28db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_28db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_28db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_28db_rf_gain_pack(uint16_t tx_28db_rf_gain)
{
    hwp_rf_p0->tx_28db_rf_gain.val = (((uint32_t)tx_28db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_28db_rf_gain_unpack(uint16_t* tx_28db_rf_gain)
{
    T_RF_P0_TX_28DB_RF_GAIN localVal = hwp_rf_p0->tx_28db_rf_gain;

    *tx_28db_rf_gain = localVal.bit_field.tx_28db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_28db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_28db_rf_gain.bit_field.tx_28db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_28db_rf_gain_setf(uint16_t tx_28db_rf_gain)
{
    hwp_rf_p0->tx_28db_rf_gain.bit_field.tx_28db_rf_gain = tx_28db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_29db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_29db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_29db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_29db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_29db_rf_gain_pack(uint16_t tx_29db_rf_gain)
{
    hwp_rf_p0->tx_29db_rf_gain.val = (((uint32_t)tx_29db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_29db_rf_gain_unpack(uint16_t* tx_29db_rf_gain)
{
    T_RF_P0_TX_29DB_RF_GAIN localVal = hwp_rf_p0->tx_29db_rf_gain;

    *tx_29db_rf_gain = localVal.bit_field.tx_29db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_29db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_29db_rf_gain.bit_field.tx_29db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_29db_rf_gain_setf(uint16_t tx_29db_rf_gain)
{
    hwp_rf_p0->tx_29db_rf_gain.bit_field.tx_29db_rf_gain = tx_29db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_30db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_30db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_30db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_30db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_30db_rf_gain_pack(uint16_t tx_30db_rf_gain)
{
    hwp_rf_p0->tx_30db_rf_gain.val = (((uint32_t)tx_30db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_30db_rf_gain_unpack(uint16_t* tx_30db_rf_gain)
{
    T_RF_P0_TX_30DB_RF_GAIN localVal = hwp_rf_p0->tx_30db_rf_gain;

    *tx_30db_rf_gain = localVal.bit_field.tx_30db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_30db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_30db_rf_gain.bit_field.tx_30db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_30db_rf_gain_setf(uint16_t tx_30db_rf_gain)
{
    hwp_rf_p0->tx_30db_rf_gain.bit_field.tx_30db_rf_gain = tx_30db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_31db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_31db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_31db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_31db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_31db_rf_gain_pack(uint16_t tx_31db_rf_gain)
{
    hwp_rf_p0->tx_31db_rf_gain.val = (((uint32_t)tx_31db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_31db_rf_gain_unpack(uint16_t* tx_31db_rf_gain)
{
    T_RF_P0_TX_31DB_RF_GAIN localVal = hwp_rf_p0->tx_31db_rf_gain;

    *tx_31db_rf_gain = localVal.bit_field.tx_31db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_31db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_31db_rf_gain.bit_field.tx_31db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_31db_rf_gain_setf(uint16_t tx_31db_rf_gain)
{
    hwp_rf_p0->tx_31db_rf_gain.bit_field.tx_31db_rf_gain = tx_31db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_32db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_32db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_32db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_32db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_32db_rf_gain_pack(uint16_t tx_32db_rf_gain)
{
    hwp_rf_p0->tx_32db_rf_gain.val = (((uint32_t)tx_32db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_32db_rf_gain_unpack(uint16_t* tx_32db_rf_gain)
{
    T_RF_P0_TX_32DB_RF_GAIN localVal = hwp_rf_p0->tx_32db_rf_gain;

    *tx_32db_rf_gain = localVal.bit_field.tx_32db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_32db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_32db_rf_gain.bit_field.tx_32db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_32db_rf_gain_setf(uint16_t tx_32db_rf_gain)
{
    hwp_rf_p0->tx_32db_rf_gain.bit_field.tx_32db_rf_gain = tx_32db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_33db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_33db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_33db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_33db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_33db_rf_gain_pack(uint16_t tx_33db_rf_gain)
{
    hwp_rf_p0->tx_33db_rf_gain.val = (((uint32_t)tx_33db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_33db_rf_gain_unpack(uint16_t* tx_33db_rf_gain)
{
    T_RF_P0_TX_33DB_RF_GAIN localVal = hwp_rf_p0->tx_33db_rf_gain;

    *tx_33db_rf_gain = localVal.bit_field.tx_33db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_33db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_33db_rf_gain.bit_field.tx_33db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_33db_rf_gain_setf(uint16_t tx_33db_rf_gain)
{
    hwp_rf_p0->tx_33db_rf_gain.bit_field.tx_33db_rf_gain = tx_33db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_34db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_34db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_34db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_34db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_34db_rf_gain_pack(uint16_t tx_34db_rf_gain)
{
    hwp_rf_p0->tx_34db_rf_gain.val = (((uint32_t)tx_34db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_34db_rf_gain_unpack(uint16_t* tx_34db_rf_gain)
{
    T_RF_P0_TX_34DB_RF_GAIN localVal = hwp_rf_p0->tx_34db_rf_gain;

    *tx_34db_rf_gain = localVal.bit_field.tx_34db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_34db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_34db_rf_gain.bit_field.tx_34db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_34db_rf_gain_setf(uint16_t tx_34db_rf_gain)
{
    hwp_rf_p0->tx_34db_rf_gain.bit_field.tx_34db_rf_gain = tx_34db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_35db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_35db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_35db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_35db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_35db_rf_gain_pack(uint16_t tx_35db_rf_gain)
{
    hwp_rf_p0->tx_35db_rf_gain.val = (((uint32_t)tx_35db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_35db_rf_gain_unpack(uint16_t* tx_35db_rf_gain)
{
    T_RF_P0_TX_35DB_RF_GAIN localVal = hwp_rf_p0->tx_35db_rf_gain;

    *tx_35db_rf_gain = localVal.bit_field.tx_35db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_35db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_35db_rf_gain.bit_field.tx_35db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_35db_rf_gain_setf(uint16_t tx_35db_rf_gain)
{
    hwp_rf_p0->tx_35db_rf_gain.bit_field.tx_35db_rf_gain = tx_35db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_36db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_36db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_36db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_36db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_36db_rf_gain_pack(uint16_t tx_36db_rf_gain)
{
    hwp_rf_p0->tx_36db_rf_gain.val = (((uint32_t)tx_36db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_36db_rf_gain_unpack(uint16_t* tx_36db_rf_gain)
{
    T_RF_P0_TX_36DB_RF_GAIN localVal = hwp_rf_p0->tx_36db_rf_gain;

    *tx_36db_rf_gain = localVal.bit_field.tx_36db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_36db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_36db_rf_gain.bit_field.tx_36db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_36db_rf_gain_setf(uint16_t tx_36db_rf_gain)
{
    hwp_rf_p0->tx_36db_rf_gain.bit_field.tx_36db_rf_gain = tx_36db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_37db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_37db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_37db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_37db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_37db_rf_gain_pack(uint16_t tx_37db_rf_gain)
{
    hwp_rf_p0->tx_37db_rf_gain.val = (((uint32_t)tx_37db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_37db_rf_gain_unpack(uint16_t* tx_37db_rf_gain)
{
    T_RF_P0_TX_37DB_RF_GAIN localVal = hwp_rf_p0->tx_37db_rf_gain;

    *tx_37db_rf_gain = localVal.bit_field.tx_37db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_37db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_37db_rf_gain.bit_field.tx_37db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_37db_rf_gain_setf(uint16_t tx_37db_rf_gain)
{
    hwp_rf_p0->tx_37db_rf_gain.bit_field.tx_37db_rf_gain = tx_37db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_38db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_38db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_38db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_38db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_38db_rf_gain_pack(uint16_t tx_38db_rf_gain)
{
    hwp_rf_p0->tx_38db_rf_gain.val = (((uint32_t)tx_38db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_38db_rf_gain_unpack(uint16_t* tx_38db_rf_gain)
{
    T_RF_P0_TX_38DB_RF_GAIN localVal = hwp_rf_p0->tx_38db_rf_gain;

    *tx_38db_rf_gain = localVal.bit_field.tx_38db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_38db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_38db_rf_gain.bit_field.tx_38db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_38db_rf_gain_setf(uint16_t tx_38db_rf_gain)
{
    hwp_rf_p0->tx_38db_rf_gain.bit_field.tx_38db_rf_gain = tx_38db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_39db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_39db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_39db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_39db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_39db_rf_gain_pack(uint16_t tx_39db_rf_gain)
{
    hwp_rf_p0->tx_39db_rf_gain.val = (((uint32_t)tx_39db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_39db_rf_gain_unpack(uint16_t* tx_39db_rf_gain)
{
    T_RF_P0_TX_39DB_RF_GAIN localVal = hwp_rf_p0->tx_39db_rf_gain;

    *tx_39db_rf_gain = localVal.bit_field.tx_39db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_39db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_39db_rf_gain.bit_field.tx_39db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_39db_rf_gain_setf(uint16_t tx_39db_rf_gain)
{
    hwp_rf_p0->tx_39db_rf_gain.bit_field.tx_39db_rf_gain = tx_39db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_40db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_40db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_40db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_40db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_40db_rf_gain_pack(uint16_t tx_40db_rf_gain)
{
    hwp_rf_p0->tx_40db_rf_gain.val = (((uint32_t)tx_40db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_40db_rf_gain_unpack(uint16_t* tx_40db_rf_gain)
{
    T_RF_P0_TX_40DB_RF_GAIN localVal = hwp_rf_p0->tx_40db_rf_gain;

    *tx_40db_rf_gain = localVal.bit_field.tx_40db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_40db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_40db_rf_gain.bit_field.tx_40db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_40db_rf_gain_setf(uint16_t tx_40db_rf_gain)
{
    hwp_rf_p0->tx_40db_rf_gain.bit_field.tx_40db_rf_gain = tx_40db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_41db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_41db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_41db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_41db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_41db_rf_gain_pack(uint16_t tx_41db_rf_gain)
{
    hwp_rf_p0->tx_41db_rf_gain.val = (((uint32_t)tx_41db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_41db_rf_gain_unpack(uint16_t* tx_41db_rf_gain)
{
    T_RF_P0_TX_41DB_RF_GAIN localVal = hwp_rf_p0->tx_41db_rf_gain;

    *tx_41db_rf_gain = localVal.bit_field.tx_41db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_41db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_41db_rf_gain.bit_field.tx_41db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_41db_rf_gain_setf(uint16_t tx_41db_rf_gain)
{
    hwp_rf_p0->tx_41db_rf_gain.bit_field.tx_41db_rf_gain = tx_41db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_42db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_42db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_42db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_42db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_42db_rf_gain_pack(uint16_t tx_42db_rf_gain)
{
    hwp_rf_p0->tx_42db_rf_gain.val = (((uint32_t)tx_42db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_42db_rf_gain_unpack(uint16_t* tx_42db_rf_gain)
{
    T_RF_P0_TX_42DB_RF_GAIN localVal = hwp_rf_p0->tx_42db_rf_gain;

    *tx_42db_rf_gain = localVal.bit_field.tx_42db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_42db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_42db_rf_gain.bit_field.tx_42db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_42db_rf_gain_setf(uint16_t tx_42db_rf_gain)
{
    hwp_rf_p0->tx_42db_rf_gain.bit_field.tx_42db_rf_gain = tx_42db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_43db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_43db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_43db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_43db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_43db_rf_gain_pack(uint16_t tx_43db_rf_gain)
{
    hwp_rf_p0->tx_43db_rf_gain.val = (((uint32_t)tx_43db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_43db_rf_gain_unpack(uint16_t* tx_43db_rf_gain)
{
    T_RF_P0_TX_43DB_RF_GAIN localVal = hwp_rf_p0->tx_43db_rf_gain;

    *tx_43db_rf_gain = localVal.bit_field.tx_43db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_43db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_43db_rf_gain.bit_field.tx_43db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_43db_rf_gain_setf(uint16_t tx_43db_rf_gain)
{
    hwp_rf_p0->tx_43db_rf_gain.bit_field.tx_43db_rf_gain = tx_43db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_44db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_44db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_44db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_44db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_44db_rf_gain_pack(uint16_t tx_44db_rf_gain)
{
    hwp_rf_p0->tx_44db_rf_gain.val = (((uint32_t)tx_44db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_44db_rf_gain_unpack(uint16_t* tx_44db_rf_gain)
{
    T_RF_P0_TX_44DB_RF_GAIN localVal = hwp_rf_p0->tx_44db_rf_gain;

    *tx_44db_rf_gain = localVal.bit_field.tx_44db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_44db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_44db_rf_gain.bit_field.tx_44db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_44db_rf_gain_setf(uint16_t tx_44db_rf_gain)
{
    hwp_rf_p0->tx_44db_rf_gain.bit_field.tx_44db_rf_gain = tx_44db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_45db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_45db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_45db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_45db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_45db_rf_gain_pack(uint16_t tx_45db_rf_gain)
{
    hwp_rf_p0->tx_45db_rf_gain.val = (((uint32_t)tx_45db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_45db_rf_gain_unpack(uint16_t* tx_45db_rf_gain)
{
    T_RF_P0_TX_45DB_RF_GAIN localVal = hwp_rf_p0->tx_45db_rf_gain;

    *tx_45db_rf_gain = localVal.bit_field.tx_45db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_45db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_45db_rf_gain.bit_field.tx_45db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_45db_rf_gain_setf(uint16_t tx_45db_rf_gain)
{
    hwp_rf_p0->tx_45db_rf_gain.bit_field.tx_45db_rf_gain = tx_45db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_46db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_46db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_46db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_46db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_46db_rf_gain_pack(uint16_t tx_46db_rf_gain)
{
    hwp_rf_p0->tx_46db_rf_gain.val = (((uint32_t)tx_46db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_46db_rf_gain_unpack(uint16_t* tx_46db_rf_gain)
{
    T_RF_P0_TX_46DB_RF_GAIN localVal = hwp_rf_p0->tx_46db_rf_gain;

    *tx_46db_rf_gain = localVal.bit_field.tx_46db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_46db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_46db_rf_gain.bit_field.tx_46db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_46db_rf_gain_setf(uint16_t tx_46db_rf_gain)
{
    hwp_rf_p0->tx_46db_rf_gain.bit_field.tx_46db_rf_gain = tx_46db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_47db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_47db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_47db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_47db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_47db_rf_gain_pack(uint16_t tx_47db_rf_gain)
{
    hwp_rf_p0->tx_47db_rf_gain.val = (((uint32_t)tx_47db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_47db_rf_gain_unpack(uint16_t* tx_47db_rf_gain)
{
    T_RF_P0_TX_47DB_RF_GAIN localVal = hwp_rf_p0->tx_47db_rf_gain;

    *tx_47db_rf_gain = localVal.bit_field.tx_47db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_47db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_47db_rf_gain.bit_field.tx_47db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_47db_rf_gain_setf(uint16_t tx_47db_rf_gain)
{
    hwp_rf_p0->tx_47db_rf_gain.bit_field.tx_47db_rf_gain = tx_47db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_tx_48db_rf_gain_get(void)
{
    return hwp_rf_p0->tx_48db_rf_gain.val;
}

__STATIC_INLINE void rf_p0_tx_48db_rf_gain_set(uint32_t value)
{
    hwp_rf_p0->tx_48db_rf_gain.val = value;
}

__STATIC_INLINE void rf_p0_tx_48db_rf_gain_pack(uint16_t tx_48db_rf_gain)
{
    hwp_rf_p0->tx_48db_rf_gain.val = (((uint32_t)tx_48db_rf_gain << 0));
}

__STATIC_INLINE void rf_p0_tx_48db_rf_gain_unpack(uint16_t* tx_48db_rf_gain)
{
    T_RF_P0_TX_48DB_RF_GAIN localVal = hwp_rf_p0->tx_48db_rf_gain;

    *tx_48db_rf_gain = localVal.bit_field.tx_48db_rf_gain;
}

__STATIC_INLINE uint16_t rf_p0_tx_48db_rf_gain_getf(void)
{
    return hwp_rf_p0->tx_48db_rf_gain.bit_field.tx_48db_rf_gain;
}

__STATIC_INLINE void rf_p0_tx_48db_rf_gain_setf(uint16_t tx_48db_rf_gain)
{
    hwp_rf_p0->tx_48db_rf_gain.bit_field.tx_48db_rf_gain = tx_48db_rf_gain;
}

__STATIC_INLINE uint32_t rf_p0_rf_page_get(void)
{
    return hwp_rf_p0->rf_page.val;
}

__STATIC_INLINE void rf_p0_rf_page_set(uint32_t value)
{
    hwp_rf_p0->rf_page.val = value;
}

__STATIC_INLINE void rf_p0_rf_page_pack(uint16_t rf_page)
{
    hwp_rf_p0->rf_page.val = (((uint32_t)rf_page << 0));
}

__STATIC_INLINE void rf_p0_rf_page_unpack(uint16_t* rf_page)
{
    T_RF_P0_RF_PAGE localVal = hwp_rf_p0->rf_page;

    *rf_page = localVal.bit_field.rf_page;
}

__STATIC_INLINE uint16_t rf_p0_rf_page_getf(void)
{
    return hwp_rf_p0->rf_page.bit_field.rf_page;
}

__STATIC_INLINE void rf_p0_rf_page_setf(uint16_t rf_page)
{
    hwp_rf_p0->rf_page.bit_field.rf_page = rf_page;
}
#endif


