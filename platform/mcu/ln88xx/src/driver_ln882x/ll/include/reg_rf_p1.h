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
#ifndef __REG_RF_P1_H__
#define __REG_RF_P1_H__

#include "base_addr_ln882x.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "ln88xx.h"


//mem_rco32k_cbit
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                mem_rco32k_cbit :  5; /* 4: 0,                             NA*/
        uint32_t                  mem_rct_codet :  5; /* 9: 5,                             NA*/
        uint32_t                     reserved_0 :  6; /*15:10,                       reserved*/
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
} T_RF_P1_MEM_RCO32K_CBIT;

//mem_rfpll_cbit_rx_b1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b1 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B1;

//mem_rfpll_cbit_rx_b2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b2 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B2;

//mem_rfpll_cbit_rx_b3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b3 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B3;

//mem_rfpll_cbit_rx_b4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b4 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B4;

//mem_rfpll_cbit_rx_b5
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b5 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B5;

//mem_rfpll_cbit_rx_b6
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b6 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B6;

//mem_rfpll_cbit_rx_b7
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b7 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B7;

//mem_rfpll_cbit_rx_b8
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b8 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B8;

//mem_rfpll_cbit_rx_b9
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_rx_b9 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B9;

//mem_rfpll_cbit_rx_b10
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b10 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B10;

//mem_rfpll_cbit_rx_b11
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b11 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B11;

//mem_rfpll_cbit_rx_b12
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b12 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B12;

//mem_rfpll_cbit_rx_b13
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b13 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B13;

//mem_rfpll_cbit_rx_b14
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b14 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B14;

//mem_rfpll_cbit_rx_b15
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b15 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B15;

//mem_rfpll_cbit_rx_b16
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b16 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B16;

//mem_rfpll_cbit_rx_b17
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b17 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B17;

//mem_rfpll_cbit_rx_b18
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_rx_b18 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_RX_B18;

//mem_rfpll_cbit_tx_b1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b1 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B1;

//mem_rfpll_cbit_tx_b2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b2 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B2;

//mem_rfpll_cbit_tx_b3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b3 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B3;

//mem_rfpll_cbit_tx_b4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b4 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B4;

//mem_rfpll_cbit_tx_b5
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b5 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B5;

//mem_rfpll_cbit_tx_b6
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b6 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B6;

//mem_rfpll_cbit_tx_b7
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b7 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B7;

//mem_rfpll_cbit_tx_b8
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b8 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B8;

//mem_rfpll_cbit_tx_b9
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t           mem_rfpll_cbit_tx_b9 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B9;

//mem_rfpll_cbit_tx_b10
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b10 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B10;

//mem_rfpll_cbit_tx_b11
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b11 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B11;

//mem_rfpll_cbit_tx_b12
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b12 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B12;

//mem_rfpll_cbit_tx_b13
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b13 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B13;

//mem_rfpll_cbit_tx_b14
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b14 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B14;

//mem_rfpll_cbit_tx_b15
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b15 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B15;

//mem_rfpll_cbit_tx_b16
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b16 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B16;

//mem_rfpll_cbit_tx_b17
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b17 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B17;

//mem_rfpll_cbit_tx_b18
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t          mem_rfpll_cbit_tx_b18 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_TX_B18;

//mem_rfpll_cbit_loop_b1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b1 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B1;

//mem_rfpll_cbit_loop_b2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b2 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B2;

//mem_rfpll_cbit_loop_b3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b3 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B3;

//mem_rfpll_cbit_loop_b4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b4 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B4;

//mem_rfpll_cbit_loop_b5
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b5 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B5;

//mem_rfpll_cbit_loop_b6
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b6 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B6;

//mem_rfpll_cbit_loop_b7
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b7 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B7;

//mem_rfpll_cbit_loop_b8
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b8 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B8;

//mem_rfpll_cbit_loop_b9
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t         mem_rfpll_cbit_loop_b9 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B9;

//mem_rfpll_cbit_loop_b10
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b10 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B10;

//mem_rfpll_cbit_loop_b11
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b11 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B11;

//mem_rfpll_cbit_loop_b12
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b12 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B12;

//mem_rfpll_cbit_loop_b13
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b13 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B13;

//mem_rfpll_cbit_loop_b14
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b14 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B14;

//mem_rfpll_cbit_loop_b15
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b15 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B15;

//mem_rfpll_cbit_loop_b16
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b16 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B16;

//mem_rfpll_cbit_loop_b17
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b17 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B17;

//mem_rfpll_cbit_loop_b18
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t        mem_rfpll_cbit_loop_b18 : 15; /*14: 0, [maxb1[4:0],maxb2[4:0],corn_en,lower_freq,fine_cbit[2:0]]*/
        uint32_t                     reserved_0 :  1; /*15:15,                       reserved*/
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
} T_RF_P1_MEM_RFPLL_CBIT_LOOP_B18;

//mem_txlpf_otrim_1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_txlpf_otrim_1 : 12; /*11: 0, {txlpf_otrim_i[5:0],txlpf_otrim_q[5:0]}*/
        uint32_t                     reserved_0 :  4; /*15:12,                       reserved*/
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
} T_RF_P1_MEM_TXLPF_OTRIM_1;

//mem_txlpf_otrim_2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_txlpf_otrim_2 : 12; /*11: 0, {txlpf_otrim_i[5:0],txlpf_otrim_q[5:0]}*/
        uint32_t                     reserved_0 :  4; /*15:12,                       reserved*/
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
} T_RF_P1_MEM_TXLPF_OTRIM_2;

//mem_txlpf_otrim_ave
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t            mem_txlpf_otrim_ave : 12; /*11: 0, {txlpf_otrim_i[5:0],txlpf_otrim_q[5:0]}*/
        uint32_t                     reserved_0 :  4; /*15:12,                       reserved*/
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
} T_RF_P1_MEM_TXLPF_OTRIM_AVE;

//mem_cal_tmx_1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  mem_cal_tmx_1 : 16; /*15: 0, {cal_tmx_i[7:0],cal_tmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_TMX_1;

//mem_cal_tmx_2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  mem_cal_tmx_2 : 16; /*15: 0, {cal_tmx_i[7:0],cal_tmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_TMX_2;

//mem_cal_tmx_ave
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                mem_cal_tmx_ave : 16; /*15: 0, {cal_tmx_i[7:0],cal_tmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_TMX_AVE;

//mem_cal_tximg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                  mem_cal_tximg : 12; /*11: 0, {cal_tximg_i[5:0],cal_tximg_q[5:0]}*/
        uint32_t                     reserved_0 :  4; /*15:12,                       reserved*/
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
} T_RF_P1_MEM_CAL_TXIMG;

//mem_cal_rxlpf_otrim
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t            mem_cal_rxlpf_otrim : 12; /*11: 0, {cal_rxlpf_otrim_i[5:0],cal_rxlpf_otrim_q[5:0]}*/
        uint32_t                     reserved_0 :  4; /*15:12,                       reserved*/
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
} T_RF_P1_MEM_CAL_RXLPF_OTRIM;

//mem_cal_rmx_rx_3
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               mem_cal_rmx_rx_3 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_3;

//mem_cal_rmx_rx_4
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               mem_cal_rmx_rx_4 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_4;

//mem_cal_rmx_rx_5
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               mem_cal_rmx_rx_5 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_5;

//mem_cal_rmx_rx_6
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               mem_cal_rmx_rx_6 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_6;

//mem_cal_rmx_rx_7
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               mem_cal_rmx_rx_7 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_7;

//mem_cal_rmx_rx_8
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               mem_cal_rmx_rx_8 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_8;

//mem_cal_rmx_rx_9
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t               mem_cal_rmx_rx_9 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_9;

//mem_cal_rmx_rx_10
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_cal_rmx_rx_10 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_10;

//mem_cal_rmx_rx_11
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_cal_rmx_rx_11 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_11;

//mem_cal_rmx_rx_12
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_cal_rmx_rx_12 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_12;

//mem_cal_rmx_rx_13
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_cal_rmx_rx_13 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_13;

//mem_cal_rmx_rx_14
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_cal_rmx_rx_14 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_14;

//mem_cal_rmx_rx_15
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_cal_rmx_rx_15 : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RX_15;

//mem_cal_rmx_dpd
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                mem_cal_rmx_dpd : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_DPD;

//mem_cal_rmx_rximg
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_cal_rmx_rximg : 16; /*15: 0, {cal_rmx_i[7:0],cal_rmx_q[7:0]}*/
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
} T_RF_P1_MEM_CAL_RMX_RXIMG;

//mem_txdac_cal_1
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                mem_txdac_cal_1 : 12; /*11: 0, {txdac_cal_i[5:0],txdac_cal_q[5:0]}*/
        uint32_t                     reserved_0 :  4; /*15:12,                       reserved*/
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
} T_RF_P1_MEM_TXDAC_CAL_1;

//mem_txdac_cal_2
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                mem_txdac_cal_2 : 12; /*11: 0, {txdac_cal_i[5:0],txdac_cal_q[5:0]}*/
        uint32_t                     reserved_0 :  4; /*15:12,                       reserved*/
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
} T_RF_P1_MEM_TXDAC_CAL_2;

//mem_txdac_cal_ave
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t              mem_txdac_cal_ave : 12; /*11: 0, {txdac_cal_i[5:0],txdac_cal_q[5:0]}*/
        uint32_t                     reserved_0 :  4; /*15:12,                       reserved*/
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
} T_RF_P1_MEM_TXDAC_CAL_AVE;

//rf_page
typedef union
{
    uint32_t val;
    struct
    {
        uint32_t                        rf_page : 16; /*15: 0,                             NA*/
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
} T_RF_P1_RF_PAGE;

//Registers Mapping to the same address

typedef struct
{
    volatile         T_RF_P1_MEM_RCO32K_CBIT                mem_rco32k_cbit; /*  0x0,    RW, 0x00000210,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B1           mem_rfpll_cbit_rx_b1; /*  0x4,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B2           mem_rfpll_cbit_rx_b2; /*  0x8,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B3           mem_rfpll_cbit_rx_b3; /*  0xc,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B4           mem_rfpll_cbit_rx_b4; /* 0x10,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B5           mem_rfpll_cbit_rx_b5; /* 0x14,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B6           mem_rfpll_cbit_rx_b6; /* 0x18,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B7           mem_rfpll_cbit_rx_b7; /* 0x1c,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B8           mem_rfpll_cbit_rx_b8; /* 0x20,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_RX_B9           mem_rfpll_cbit_rx_b9; /* 0x24,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B10          mem_rfpll_cbit_rx_b10; /* 0x28,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B11          mem_rfpll_cbit_rx_b11; /* 0x2c,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B12          mem_rfpll_cbit_rx_b12; /* 0x30,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B13          mem_rfpll_cbit_rx_b13; /* 0x34,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B14          mem_rfpll_cbit_rx_b14; /* 0x38,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B15          mem_rfpll_cbit_rx_b15; /* 0x3c,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B16          mem_rfpll_cbit_rx_b16; /* 0x40,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B17          mem_rfpll_cbit_rx_b17; /* 0x44,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_RX_B18          mem_rfpll_cbit_rx_b18; /* 0x48,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B1           mem_rfpll_cbit_tx_b1; /* 0x4c,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B2           mem_rfpll_cbit_tx_b2; /* 0x50,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B3           mem_rfpll_cbit_tx_b3; /* 0x54,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B4           mem_rfpll_cbit_tx_b4; /* 0x58,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B5           mem_rfpll_cbit_tx_b5; /* 0x5c,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B6           mem_rfpll_cbit_tx_b6; /* 0x60,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B7           mem_rfpll_cbit_tx_b7; /* 0x64,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B8           mem_rfpll_cbit_tx_b8; /* 0x68,    RW, 0x00000000,                             NA*/
    volatile    T_RF_P1_MEM_RFPLL_CBIT_TX_B9           mem_rfpll_cbit_tx_b9; /* 0x6c,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B10          mem_rfpll_cbit_tx_b10; /* 0x70,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B11          mem_rfpll_cbit_tx_b11; /* 0x74,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B12          mem_rfpll_cbit_tx_b12; /* 0x78,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B13          mem_rfpll_cbit_tx_b13; /* 0x7c,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B14          mem_rfpll_cbit_tx_b14; /* 0x80,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B15          mem_rfpll_cbit_tx_b15; /* 0x84,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B16          mem_rfpll_cbit_tx_b16; /* 0x88,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B17          mem_rfpll_cbit_tx_b17; /* 0x8c,    RW, 0x00000000,                             NA*/
    volatile   T_RF_P1_MEM_RFPLL_CBIT_TX_B18          mem_rfpll_cbit_tx_b18; /* 0x90,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B1         mem_rfpll_cbit_loop_b1; /* 0x94,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B2         mem_rfpll_cbit_loop_b2; /* 0x98,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B3         mem_rfpll_cbit_loop_b3; /* 0x9c,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B4         mem_rfpll_cbit_loop_b4; /* 0xa0,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B5         mem_rfpll_cbit_loop_b5; /* 0xa4,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B6         mem_rfpll_cbit_loop_b6; /* 0xa8,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B7         mem_rfpll_cbit_loop_b7; /* 0xac,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B8         mem_rfpll_cbit_loop_b8; /* 0xb0,    RW, 0x00000000,                             NA*/
    volatile  T_RF_P1_MEM_RFPLL_CBIT_LOOP_B9         mem_rfpll_cbit_loop_b9; /* 0xb4,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B10        mem_rfpll_cbit_loop_b10; /* 0xb8,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B11        mem_rfpll_cbit_loop_b11; /* 0xbc,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B12        mem_rfpll_cbit_loop_b12; /* 0xc0,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B13        mem_rfpll_cbit_loop_b13; /* 0xc4,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B14        mem_rfpll_cbit_loop_b14; /* 0xc8,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B15        mem_rfpll_cbit_loop_b15; /* 0xcc,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B16        mem_rfpll_cbit_loop_b16; /* 0xd0,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B17        mem_rfpll_cbit_loop_b17; /* 0xd4,    RW, 0x00000000,                             NA*/
    volatile T_RF_P1_MEM_RFPLL_CBIT_LOOP_B18        mem_rfpll_cbit_loop_b18; /* 0xd8,    RW, 0x00000000,                             NA*/
    volatile       T_RF_P1_MEM_TXLPF_OTRIM_1              mem_txlpf_otrim_1; /* 0xdc,    RW, 0x00000820,                             NA*/
    volatile       T_RF_P1_MEM_TXLPF_OTRIM_2              mem_txlpf_otrim_2; /* 0xe0,    RW, 0x00000820,                             NA*/
    volatile     T_RF_P1_MEM_TXLPF_OTRIM_AVE            mem_txlpf_otrim_ave; /* 0xe4,    RW, 0x00000820,                             NA*/
    volatile           T_RF_P1_MEM_CAL_TMX_1                  mem_cal_tmx_1; /* 0xe8,    RW, 0x00008080,                             NA*/
    volatile           T_RF_P1_MEM_CAL_TMX_2                  mem_cal_tmx_2; /* 0xec,    RW, 0x00008080,                             NA*/
    volatile         T_RF_P1_MEM_CAL_TMX_AVE                mem_cal_tmx_ave; /* 0xf0,    RW, 0x00008080,                             NA*/
    volatile           T_RF_P1_MEM_CAL_TXIMG                  mem_cal_tximg; /* 0xf4,    RW, 0x00000820,                             NA*/
    volatile     T_RF_P1_MEM_CAL_RXLPF_OTRIM            mem_cal_rxlpf_otrim; /* 0xf8,    RW, 0x00000820,                             NA*/
    volatile        T_RF_P1_MEM_CAL_RMX_RX_3               mem_cal_rmx_rx_3; /* 0xfc,    RW, 0x00008080,                             NA*/
    volatile        T_RF_P1_MEM_CAL_RMX_RX_4               mem_cal_rmx_rx_4; /*0x100,    RW, 0x00008080,                             NA*/
    volatile        T_RF_P1_MEM_CAL_RMX_RX_5               mem_cal_rmx_rx_5; /*0x104,    RW, 0x00008080,                             NA*/
    volatile        T_RF_P1_MEM_CAL_RMX_RX_6               mem_cal_rmx_rx_6; /*0x108,    RW, 0x00008080,                             NA*/
    volatile        T_RF_P1_MEM_CAL_RMX_RX_7               mem_cal_rmx_rx_7; /*0x10c,    RW, 0x00008080,                             NA*/
    volatile        T_RF_P1_MEM_CAL_RMX_RX_8               mem_cal_rmx_rx_8; /*0x110,    RW, 0x00008080,                             NA*/
    volatile        T_RF_P1_MEM_CAL_RMX_RX_9               mem_cal_rmx_rx_9; /*0x114,    RW, 0x00008080,                             NA*/
    volatile       T_RF_P1_MEM_CAL_RMX_RX_10              mem_cal_rmx_rx_10; /*0x118,    RW, 0x00008080,                             NA*/
    volatile       T_RF_P1_MEM_CAL_RMX_RX_11              mem_cal_rmx_rx_11; /*0x11c,    RW, 0x00008080,                             NA*/
    volatile       T_RF_P1_MEM_CAL_RMX_RX_12              mem_cal_rmx_rx_12; /*0x120,    RW, 0x00008080,                             NA*/
    volatile       T_RF_P1_MEM_CAL_RMX_RX_13              mem_cal_rmx_rx_13; /*0x124,    RW, 0x00008080,                             NA*/
    volatile       T_RF_P1_MEM_CAL_RMX_RX_14              mem_cal_rmx_rx_14; /*0x128,    RW, 0x00008080,                             NA*/
    volatile       T_RF_P1_MEM_CAL_RMX_RX_15              mem_cal_rmx_rx_15; /*0x12c,    RW, 0x00008080,                             NA*/
    volatile         T_RF_P1_MEM_CAL_RMX_DPD                mem_cal_rmx_dpd; /*0x130,    RW, 0x00008080,                             NA*/
    volatile       T_RF_P1_MEM_CAL_RMX_RXIMG              mem_cal_rmx_rximg; /*0x134,    RW, 0x00008080,                             NA*/
    volatile         T_RF_P1_MEM_TXDAC_CAL_1                mem_txdac_cal_1; /*0x138,    RW, 0x00000820,                             NA*/
    volatile         T_RF_P1_MEM_TXDAC_CAL_2                mem_txdac_cal_2; /*0x13c,    RW, 0x00000820,                             NA*/
    volatile       T_RF_P1_MEM_TXDAC_CAL_AVE              mem_txdac_cal_ave; /*0x140,    RW, 0x00000820,                             NA*/
    volatile                        uint32_t                reserved_0[174];
    volatile                 T_RF_P1_RF_PAGE                        rf_page; /*0x3fc,    RW, 0x00000000,                             NA*/
} T_HWP_RF_P1_T;

#define hwp_rf_p1 ((T_HWP_RF_P1_T*)REG_RF_P1_BASE)


__STATIC_INLINE uint32_t rf_p1_mem_rco32k_cbit_get(void)
{
    return hwp_rf_p1->mem_rco32k_cbit.val;
}

__STATIC_INLINE void rf_p1_mem_rco32k_cbit_set(uint32_t value)
{
    hwp_rf_p1->mem_rco32k_cbit.val = value;
}

__STATIC_INLINE void rf_p1_mem_rco32k_cbit_pack(uint8_t mem_rct_codet, uint8_t mem_rco32k_cbit)
{
    hwp_rf_p1->mem_rco32k_cbit.val = (((uint32_t)mem_rct_codet << 5) | ((uint32_t)mem_rco32k_cbit << 0));
}

__STATIC_INLINE void rf_p1_mem_rco32k_cbit_unpack(uint8_t* mem_rct_codet, uint8_t* mem_rco32k_cbit)
{
    T_RF_P1_MEM_RCO32K_CBIT localVal = hwp_rf_p1->mem_rco32k_cbit;

    *mem_rct_codet = localVal.bit_field.mem_rct_codet;
    *mem_rco32k_cbit = localVal.bit_field.mem_rco32k_cbit;
}

__STATIC_INLINE uint8_t rf_p1_mem_rct_codet_getf(void)
{
    return hwp_rf_p1->mem_rco32k_cbit.bit_field.mem_rct_codet;
}

__STATIC_INLINE void rf_p1_mem_rct_codet_setf(uint8_t mem_rct_codet)
{
    hwp_rf_p1->mem_rco32k_cbit.bit_field.mem_rct_codet = mem_rct_codet;
}

__STATIC_INLINE uint8_t rf_p1_mem_rco32k_cbit_getf(void)
{
    return hwp_rf_p1->mem_rco32k_cbit.bit_field.mem_rco32k_cbit;
}

__STATIC_INLINE void rf_p1_mem_rco32k_cbit_setf(uint8_t mem_rco32k_cbit)
{
    hwp_rf_p1->mem_rco32k_cbit.bit_field.mem_rco32k_cbit = mem_rco32k_cbit;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b1_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b1.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b1_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b1.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b1_pack(uint16_t mem_rfpll_cbit_rx_b1)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b1.val = (((uint32_t)mem_rfpll_cbit_rx_b1 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b1_unpack(uint16_t* mem_rfpll_cbit_rx_b1)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B1 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b1;

    *mem_rfpll_cbit_rx_b1 = localVal.bit_field.mem_rfpll_cbit_rx_b1;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b1_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b1.bit_field.mem_rfpll_cbit_rx_b1;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b1_setf(uint16_t mem_rfpll_cbit_rx_b1)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b1.bit_field.mem_rfpll_cbit_rx_b1 = mem_rfpll_cbit_rx_b1;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b2_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b2.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b2_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b2.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b2_pack(uint16_t mem_rfpll_cbit_rx_b2)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b2.val = (((uint32_t)mem_rfpll_cbit_rx_b2 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b2_unpack(uint16_t* mem_rfpll_cbit_rx_b2)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B2 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b2;

    *mem_rfpll_cbit_rx_b2 = localVal.bit_field.mem_rfpll_cbit_rx_b2;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b2_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b2.bit_field.mem_rfpll_cbit_rx_b2;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b2_setf(uint16_t mem_rfpll_cbit_rx_b2)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b2.bit_field.mem_rfpll_cbit_rx_b2 = mem_rfpll_cbit_rx_b2;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b3_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b3.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b3_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b3.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b3_pack(uint16_t mem_rfpll_cbit_rx_b3)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b3.val = (((uint32_t)mem_rfpll_cbit_rx_b3 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b3_unpack(uint16_t* mem_rfpll_cbit_rx_b3)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B3 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b3;

    *mem_rfpll_cbit_rx_b3 = localVal.bit_field.mem_rfpll_cbit_rx_b3;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b3_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b3.bit_field.mem_rfpll_cbit_rx_b3;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b3_setf(uint16_t mem_rfpll_cbit_rx_b3)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b3.bit_field.mem_rfpll_cbit_rx_b3 = mem_rfpll_cbit_rx_b3;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b4_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b4.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b4_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b4.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b4_pack(uint16_t mem_rfpll_cbit_rx_b4)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b4.val = (((uint32_t)mem_rfpll_cbit_rx_b4 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b4_unpack(uint16_t* mem_rfpll_cbit_rx_b4)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B4 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b4;

    *mem_rfpll_cbit_rx_b4 = localVal.bit_field.mem_rfpll_cbit_rx_b4;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b4_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b4.bit_field.mem_rfpll_cbit_rx_b4;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b4_setf(uint16_t mem_rfpll_cbit_rx_b4)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b4.bit_field.mem_rfpll_cbit_rx_b4 = mem_rfpll_cbit_rx_b4;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b5_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b5.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b5_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b5.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b5_pack(uint16_t mem_rfpll_cbit_rx_b5)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b5.val = (((uint32_t)mem_rfpll_cbit_rx_b5 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b5_unpack(uint16_t* mem_rfpll_cbit_rx_b5)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B5 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b5;

    *mem_rfpll_cbit_rx_b5 = localVal.bit_field.mem_rfpll_cbit_rx_b5;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b5_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b5.bit_field.mem_rfpll_cbit_rx_b5;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b5_setf(uint16_t mem_rfpll_cbit_rx_b5)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b5.bit_field.mem_rfpll_cbit_rx_b5 = mem_rfpll_cbit_rx_b5;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b6_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b6.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b6_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b6.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b6_pack(uint16_t mem_rfpll_cbit_rx_b6)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b6.val = (((uint32_t)mem_rfpll_cbit_rx_b6 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b6_unpack(uint16_t* mem_rfpll_cbit_rx_b6)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B6 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b6;

    *mem_rfpll_cbit_rx_b6 = localVal.bit_field.mem_rfpll_cbit_rx_b6;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b6_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b6.bit_field.mem_rfpll_cbit_rx_b6;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b6_setf(uint16_t mem_rfpll_cbit_rx_b6)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b6.bit_field.mem_rfpll_cbit_rx_b6 = mem_rfpll_cbit_rx_b6;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b7_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b7.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b7_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b7.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b7_pack(uint16_t mem_rfpll_cbit_rx_b7)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b7.val = (((uint32_t)mem_rfpll_cbit_rx_b7 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b7_unpack(uint16_t* mem_rfpll_cbit_rx_b7)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B7 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b7;

    *mem_rfpll_cbit_rx_b7 = localVal.bit_field.mem_rfpll_cbit_rx_b7;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b7_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b7.bit_field.mem_rfpll_cbit_rx_b7;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b7_setf(uint16_t mem_rfpll_cbit_rx_b7)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b7.bit_field.mem_rfpll_cbit_rx_b7 = mem_rfpll_cbit_rx_b7;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b8_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b8.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b8_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b8.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b8_pack(uint16_t mem_rfpll_cbit_rx_b8)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b8.val = (((uint32_t)mem_rfpll_cbit_rx_b8 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b8_unpack(uint16_t* mem_rfpll_cbit_rx_b8)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B8 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b8;

    *mem_rfpll_cbit_rx_b8 = localVal.bit_field.mem_rfpll_cbit_rx_b8;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b8_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b8.bit_field.mem_rfpll_cbit_rx_b8;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b8_setf(uint16_t mem_rfpll_cbit_rx_b8)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b8.bit_field.mem_rfpll_cbit_rx_b8 = mem_rfpll_cbit_rx_b8;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b9_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b9.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b9_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b9.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b9_pack(uint16_t mem_rfpll_cbit_rx_b9)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b9.val = (((uint32_t)mem_rfpll_cbit_rx_b9 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b9_unpack(uint16_t* mem_rfpll_cbit_rx_b9)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B9 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b9;

    *mem_rfpll_cbit_rx_b9 = localVal.bit_field.mem_rfpll_cbit_rx_b9;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b9_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b9.bit_field.mem_rfpll_cbit_rx_b9;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b9_setf(uint16_t mem_rfpll_cbit_rx_b9)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b9.bit_field.mem_rfpll_cbit_rx_b9 = mem_rfpll_cbit_rx_b9;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b10_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b10.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b10_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b10.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b10_pack(uint16_t mem_rfpll_cbit_rx_b10)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b10.val = (((uint32_t)mem_rfpll_cbit_rx_b10 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b10_unpack(uint16_t* mem_rfpll_cbit_rx_b10)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B10 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b10;

    *mem_rfpll_cbit_rx_b10 = localVal.bit_field.mem_rfpll_cbit_rx_b10;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b10_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b10.bit_field.mem_rfpll_cbit_rx_b10;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b10_setf(uint16_t mem_rfpll_cbit_rx_b10)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b10.bit_field.mem_rfpll_cbit_rx_b10 = mem_rfpll_cbit_rx_b10;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b11_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b11.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b11_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b11.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b11_pack(uint16_t mem_rfpll_cbit_rx_b11)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b11.val = (((uint32_t)mem_rfpll_cbit_rx_b11 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b11_unpack(uint16_t* mem_rfpll_cbit_rx_b11)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B11 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b11;

    *mem_rfpll_cbit_rx_b11 = localVal.bit_field.mem_rfpll_cbit_rx_b11;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b11_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b11.bit_field.mem_rfpll_cbit_rx_b11;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b11_setf(uint16_t mem_rfpll_cbit_rx_b11)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b11.bit_field.mem_rfpll_cbit_rx_b11 = mem_rfpll_cbit_rx_b11;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b12_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b12.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b12_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b12.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b12_pack(uint16_t mem_rfpll_cbit_rx_b12)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b12.val = (((uint32_t)mem_rfpll_cbit_rx_b12 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b12_unpack(uint16_t* mem_rfpll_cbit_rx_b12)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B12 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b12;

    *mem_rfpll_cbit_rx_b12 = localVal.bit_field.mem_rfpll_cbit_rx_b12;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b12_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b12.bit_field.mem_rfpll_cbit_rx_b12;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b12_setf(uint16_t mem_rfpll_cbit_rx_b12)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b12.bit_field.mem_rfpll_cbit_rx_b12 = mem_rfpll_cbit_rx_b12;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b13_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b13.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b13_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b13.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b13_pack(uint16_t mem_rfpll_cbit_rx_b13)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b13.val = (((uint32_t)mem_rfpll_cbit_rx_b13 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b13_unpack(uint16_t* mem_rfpll_cbit_rx_b13)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B13 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b13;

    *mem_rfpll_cbit_rx_b13 = localVal.bit_field.mem_rfpll_cbit_rx_b13;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b13_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b13.bit_field.mem_rfpll_cbit_rx_b13;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b13_setf(uint16_t mem_rfpll_cbit_rx_b13)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b13.bit_field.mem_rfpll_cbit_rx_b13 = mem_rfpll_cbit_rx_b13;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b14_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b14.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b14_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b14.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b14_pack(uint16_t mem_rfpll_cbit_rx_b14)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b14.val = (((uint32_t)mem_rfpll_cbit_rx_b14 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b14_unpack(uint16_t* mem_rfpll_cbit_rx_b14)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B14 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b14;

    *mem_rfpll_cbit_rx_b14 = localVal.bit_field.mem_rfpll_cbit_rx_b14;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b14_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b14.bit_field.mem_rfpll_cbit_rx_b14;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b14_setf(uint16_t mem_rfpll_cbit_rx_b14)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b14.bit_field.mem_rfpll_cbit_rx_b14 = mem_rfpll_cbit_rx_b14;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b15_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b15.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b15_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b15.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b15_pack(uint16_t mem_rfpll_cbit_rx_b15)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b15.val = (((uint32_t)mem_rfpll_cbit_rx_b15 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b15_unpack(uint16_t* mem_rfpll_cbit_rx_b15)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B15 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b15;

    *mem_rfpll_cbit_rx_b15 = localVal.bit_field.mem_rfpll_cbit_rx_b15;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b15_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b15.bit_field.mem_rfpll_cbit_rx_b15;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b15_setf(uint16_t mem_rfpll_cbit_rx_b15)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b15.bit_field.mem_rfpll_cbit_rx_b15 = mem_rfpll_cbit_rx_b15;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b16_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b16.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b16_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b16.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b16_pack(uint16_t mem_rfpll_cbit_rx_b16)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b16.val = (((uint32_t)mem_rfpll_cbit_rx_b16 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b16_unpack(uint16_t* mem_rfpll_cbit_rx_b16)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B16 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b16;

    *mem_rfpll_cbit_rx_b16 = localVal.bit_field.mem_rfpll_cbit_rx_b16;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b16_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b16.bit_field.mem_rfpll_cbit_rx_b16;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b16_setf(uint16_t mem_rfpll_cbit_rx_b16)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b16.bit_field.mem_rfpll_cbit_rx_b16 = mem_rfpll_cbit_rx_b16;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b17_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b17.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b17_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b17.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b17_pack(uint16_t mem_rfpll_cbit_rx_b17)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b17.val = (((uint32_t)mem_rfpll_cbit_rx_b17 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b17_unpack(uint16_t* mem_rfpll_cbit_rx_b17)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B17 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b17;

    *mem_rfpll_cbit_rx_b17 = localVal.bit_field.mem_rfpll_cbit_rx_b17;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b17_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b17.bit_field.mem_rfpll_cbit_rx_b17;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b17_setf(uint16_t mem_rfpll_cbit_rx_b17)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b17.bit_field.mem_rfpll_cbit_rx_b17 = mem_rfpll_cbit_rx_b17;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_rx_b18_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b18.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b18_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b18.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b18_pack(uint16_t mem_rfpll_cbit_rx_b18)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b18.val = (((uint32_t)mem_rfpll_cbit_rx_b18 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b18_unpack(uint16_t* mem_rfpll_cbit_rx_b18)
{
    T_RF_P1_MEM_RFPLL_CBIT_RX_B18 localVal = hwp_rf_p1->mem_rfpll_cbit_rx_b18;

    *mem_rfpll_cbit_rx_b18 = localVal.bit_field.mem_rfpll_cbit_rx_b18;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_rx_b18_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_rx_b18.bit_field.mem_rfpll_cbit_rx_b18;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_rx_b18_setf(uint16_t mem_rfpll_cbit_rx_b18)
{
    hwp_rf_p1->mem_rfpll_cbit_rx_b18.bit_field.mem_rfpll_cbit_rx_b18 = mem_rfpll_cbit_rx_b18;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b1_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b1.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b1_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b1.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b1_pack(uint16_t mem_rfpll_cbit_tx_b1)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b1.val = (((uint32_t)mem_rfpll_cbit_tx_b1 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b1_unpack(uint16_t* mem_rfpll_cbit_tx_b1)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B1 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b1;

    *mem_rfpll_cbit_tx_b1 = localVal.bit_field.mem_rfpll_cbit_tx_b1;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b1_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b1.bit_field.mem_rfpll_cbit_tx_b1;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b1_setf(uint16_t mem_rfpll_cbit_tx_b1)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b1.bit_field.mem_rfpll_cbit_tx_b1 = mem_rfpll_cbit_tx_b1;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b2_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b2.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b2_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b2.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b2_pack(uint16_t mem_rfpll_cbit_tx_b2)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b2.val = (((uint32_t)mem_rfpll_cbit_tx_b2 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b2_unpack(uint16_t* mem_rfpll_cbit_tx_b2)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B2 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b2;

    *mem_rfpll_cbit_tx_b2 = localVal.bit_field.mem_rfpll_cbit_tx_b2;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b2_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b2.bit_field.mem_rfpll_cbit_tx_b2;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b2_setf(uint16_t mem_rfpll_cbit_tx_b2)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b2.bit_field.mem_rfpll_cbit_tx_b2 = mem_rfpll_cbit_tx_b2;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b3_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b3.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b3_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b3.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b3_pack(uint16_t mem_rfpll_cbit_tx_b3)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b3.val = (((uint32_t)mem_rfpll_cbit_tx_b3 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b3_unpack(uint16_t* mem_rfpll_cbit_tx_b3)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B3 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b3;

    *mem_rfpll_cbit_tx_b3 = localVal.bit_field.mem_rfpll_cbit_tx_b3;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b3_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b3.bit_field.mem_rfpll_cbit_tx_b3;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b3_setf(uint16_t mem_rfpll_cbit_tx_b3)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b3.bit_field.mem_rfpll_cbit_tx_b3 = mem_rfpll_cbit_tx_b3;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b4_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b4.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b4_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b4.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b4_pack(uint16_t mem_rfpll_cbit_tx_b4)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b4.val = (((uint32_t)mem_rfpll_cbit_tx_b4 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b4_unpack(uint16_t* mem_rfpll_cbit_tx_b4)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B4 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b4;

    *mem_rfpll_cbit_tx_b4 = localVal.bit_field.mem_rfpll_cbit_tx_b4;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b4_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b4.bit_field.mem_rfpll_cbit_tx_b4;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b4_setf(uint16_t mem_rfpll_cbit_tx_b4)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b4.bit_field.mem_rfpll_cbit_tx_b4 = mem_rfpll_cbit_tx_b4;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b5_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b5.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b5_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b5.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b5_pack(uint16_t mem_rfpll_cbit_tx_b5)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b5.val = (((uint32_t)mem_rfpll_cbit_tx_b5 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b5_unpack(uint16_t* mem_rfpll_cbit_tx_b5)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B5 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b5;

    *mem_rfpll_cbit_tx_b5 = localVal.bit_field.mem_rfpll_cbit_tx_b5;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b5_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b5.bit_field.mem_rfpll_cbit_tx_b5;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b5_setf(uint16_t mem_rfpll_cbit_tx_b5)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b5.bit_field.mem_rfpll_cbit_tx_b5 = mem_rfpll_cbit_tx_b5;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b6_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b6.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b6_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b6.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b6_pack(uint16_t mem_rfpll_cbit_tx_b6)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b6.val = (((uint32_t)mem_rfpll_cbit_tx_b6 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b6_unpack(uint16_t* mem_rfpll_cbit_tx_b6)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B6 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b6;

    *mem_rfpll_cbit_tx_b6 = localVal.bit_field.mem_rfpll_cbit_tx_b6;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b6_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b6.bit_field.mem_rfpll_cbit_tx_b6;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b6_setf(uint16_t mem_rfpll_cbit_tx_b6)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b6.bit_field.mem_rfpll_cbit_tx_b6 = mem_rfpll_cbit_tx_b6;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b7_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b7.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b7_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b7.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b7_pack(uint16_t mem_rfpll_cbit_tx_b7)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b7.val = (((uint32_t)mem_rfpll_cbit_tx_b7 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b7_unpack(uint16_t* mem_rfpll_cbit_tx_b7)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B7 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b7;

    *mem_rfpll_cbit_tx_b7 = localVal.bit_field.mem_rfpll_cbit_tx_b7;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b7_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b7.bit_field.mem_rfpll_cbit_tx_b7;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b7_setf(uint16_t mem_rfpll_cbit_tx_b7)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b7.bit_field.mem_rfpll_cbit_tx_b7 = mem_rfpll_cbit_tx_b7;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b8_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b8.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b8_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b8.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b8_pack(uint16_t mem_rfpll_cbit_tx_b8)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b8.val = (((uint32_t)mem_rfpll_cbit_tx_b8 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b8_unpack(uint16_t* mem_rfpll_cbit_tx_b8)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B8 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b8;

    *mem_rfpll_cbit_tx_b8 = localVal.bit_field.mem_rfpll_cbit_tx_b8;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b8_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b8.bit_field.mem_rfpll_cbit_tx_b8;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b8_setf(uint16_t mem_rfpll_cbit_tx_b8)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b8.bit_field.mem_rfpll_cbit_tx_b8 = mem_rfpll_cbit_tx_b8;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b9_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b9.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b9_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b9.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b9_pack(uint16_t mem_rfpll_cbit_tx_b9)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b9.val = (((uint32_t)mem_rfpll_cbit_tx_b9 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b9_unpack(uint16_t* mem_rfpll_cbit_tx_b9)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B9 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b9;

    *mem_rfpll_cbit_tx_b9 = localVal.bit_field.mem_rfpll_cbit_tx_b9;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b9_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b9.bit_field.mem_rfpll_cbit_tx_b9;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b9_setf(uint16_t mem_rfpll_cbit_tx_b9)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b9.bit_field.mem_rfpll_cbit_tx_b9 = mem_rfpll_cbit_tx_b9;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b10_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b10.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b10_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b10.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b10_pack(uint16_t mem_rfpll_cbit_tx_b10)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b10.val = (((uint32_t)mem_rfpll_cbit_tx_b10 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b10_unpack(uint16_t* mem_rfpll_cbit_tx_b10)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B10 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b10;

    *mem_rfpll_cbit_tx_b10 = localVal.bit_field.mem_rfpll_cbit_tx_b10;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b10_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b10.bit_field.mem_rfpll_cbit_tx_b10;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b10_setf(uint16_t mem_rfpll_cbit_tx_b10)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b10.bit_field.mem_rfpll_cbit_tx_b10 = mem_rfpll_cbit_tx_b10;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b11_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b11.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b11_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b11.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b11_pack(uint16_t mem_rfpll_cbit_tx_b11)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b11.val = (((uint32_t)mem_rfpll_cbit_tx_b11 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b11_unpack(uint16_t* mem_rfpll_cbit_tx_b11)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B11 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b11;

    *mem_rfpll_cbit_tx_b11 = localVal.bit_field.mem_rfpll_cbit_tx_b11;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b11_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b11.bit_field.mem_rfpll_cbit_tx_b11;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b11_setf(uint16_t mem_rfpll_cbit_tx_b11)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b11.bit_field.mem_rfpll_cbit_tx_b11 = mem_rfpll_cbit_tx_b11;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b12_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b12.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b12_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b12.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b12_pack(uint16_t mem_rfpll_cbit_tx_b12)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b12.val = (((uint32_t)mem_rfpll_cbit_tx_b12 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b12_unpack(uint16_t* mem_rfpll_cbit_tx_b12)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B12 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b12;

    *mem_rfpll_cbit_tx_b12 = localVal.bit_field.mem_rfpll_cbit_tx_b12;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b12_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b12.bit_field.mem_rfpll_cbit_tx_b12;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b12_setf(uint16_t mem_rfpll_cbit_tx_b12)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b12.bit_field.mem_rfpll_cbit_tx_b12 = mem_rfpll_cbit_tx_b12;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b13_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b13.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b13_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b13.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b13_pack(uint16_t mem_rfpll_cbit_tx_b13)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b13.val = (((uint32_t)mem_rfpll_cbit_tx_b13 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b13_unpack(uint16_t* mem_rfpll_cbit_tx_b13)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B13 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b13;

    *mem_rfpll_cbit_tx_b13 = localVal.bit_field.mem_rfpll_cbit_tx_b13;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b13_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b13.bit_field.mem_rfpll_cbit_tx_b13;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b13_setf(uint16_t mem_rfpll_cbit_tx_b13)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b13.bit_field.mem_rfpll_cbit_tx_b13 = mem_rfpll_cbit_tx_b13;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b14_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b14.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b14_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b14.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b14_pack(uint16_t mem_rfpll_cbit_tx_b14)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b14.val = (((uint32_t)mem_rfpll_cbit_tx_b14 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b14_unpack(uint16_t* mem_rfpll_cbit_tx_b14)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B14 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b14;

    *mem_rfpll_cbit_tx_b14 = localVal.bit_field.mem_rfpll_cbit_tx_b14;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b14_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b14.bit_field.mem_rfpll_cbit_tx_b14;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b14_setf(uint16_t mem_rfpll_cbit_tx_b14)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b14.bit_field.mem_rfpll_cbit_tx_b14 = mem_rfpll_cbit_tx_b14;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b15_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b15.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b15_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b15.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b15_pack(uint16_t mem_rfpll_cbit_tx_b15)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b15.val = (((uint32_t)mem_rfpll_cbit_tx_b15 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b15_unpack(uint16_t* mem_rfpll_cbit_tx_b15)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B15 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b15;

    *mem_rfpll_cbit_tx_b15 = localVal.bit_field.mem_rfpll_cbit_tx_b15;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b15_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b15.bit_field.mem_rfpll_cbit_tx_b15;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b15_setf(uint16_t mem_rfpll_cbit_tx_b15)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b15.bit_field.mem_rfpll_cbit_tx_b15 = mem_rfpll_cbit_tx_b15;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b16_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b16.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b16_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b16.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b16_pack(uint16_t mem_rfpll_cbit_tx_b16)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b16.val = (((uint32_t)mem_rfpll_cbit_tx_b16 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b16_unpack(uint16_t* mem_rfpll_cbit_tx_b16)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B16 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b16;

    *mem_rfpll_cbit_tx_b16 = localVal.bit_field.mem_rfpll_cbit_tx_b16;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b16_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b16.bit_field.mem_rfpll_cbit_tx_b16;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b16_setf(uint16_t mem_rfpll_cbit_tx_b16)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b16.bit_field.mem_rfpll_cbit_tx_b16 = mem_rfpll_cbit_tx_b16;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b17_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b17.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b17_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b17.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b17_pack(uint16_t mem_rfpll_cbit_tx_b17)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b17.val = (((uint32_t)mem_rfpll_cbit_tx_b17 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b17_unpack(uint16_t* mem_rfpll_cbit_tx_b17)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B17 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b17;

    *mem_rfpll_cbit_tx_b17 = localVal.bit_field.mem_rfpll_cbit_tx_b17;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b17_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b17.bit_field.mem_rfpll_cbit_tx_b17;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b17_setf(uint16_t mem_rfpll_cbit_tx_b17)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b17.bit_field.mem_rfpll_cbit_tx_b17 = mem_rfpll_cbit_tx_b17;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_tx_b18_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b18.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b18_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b18.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b18_pack(uint16_t mem_rfpll_cbit_tx_b18)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b18.val = (((uint32_t)mem_rfpll_cbit_tx_b18 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b18_unpack(uint16_t* mem_rfpll_cbit_tx_b18)
{
    T_RF_P1_MEM_RFPLL_CBIT_TX_B18 localVal = hwp_rf_p1->mem_rfpll_cbit_tx_b18;

    *mem_rfpll_cbit_tx_b18 = localVal.bit_field.mem_rfpll_cbit_tx_b18;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_tx_b18_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_tx_b18.bit_field.mem_rfpll_cbit_tx_b18;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_tx_b18_setf(uint16_t mem_rfpll_cbit_tx_b18)
{
    hwp_rf_p1->mem_rfpll_cbit_tx_b18.bit_field.mem_rfpll_cbit_tx_b18 = mem_rfpll_cbit_tx_b18;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b1_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b1.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b1_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b1.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b1_pack(uint16_t mem_rfpll_cbit_loop_b1)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b1.val = (((uint32_t)mem_rfpll_cbit_loop_b1 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b1_unpack(uint16_t* mem_rfpll_cbit_loop_b1)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B1 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b1;

    *mem_rfpll_cbit_loop_b1 = localVal.bit_field.mem_rfpll_cbit_loop_b1;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b1_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b1.bit_field.mem_rfpll_cbit_loop_b1;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b1_setf(uint16_t mem_rfpll_cbit_loop_b1)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b1.bit_field.mem_rfpll_cbit_loop_b1 = mem_rfpll_cbit_loop_b1;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b2_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b2.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b2_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b2.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b2_pack(uint16_t mem_rfpll_cbit_loop_b2)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b2.val = (((uint32_t)mem_rfpll_cbit_loop_b2 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b2_unpack(uint16_t* mem_rfpll_cbit_loop_b2)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B2 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b2;

    *mem_rfpll_cbit_loop_b2 = localVal.bit_field.mem_rfpll_cbit_loop_b2;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b2_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b2.bit_field.mem_rfpll_cbit_loop_b2;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b2_setf(uint16_t mem_rfpll_cbit_loop_b2)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b2.bit_field.mem_rfpll_cbit_loop_b2 = mem_rfpll_cbit_loop_b2;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b3_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b3.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b3_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b3.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b3_pack(uint16_t mem_rfpll_cbit_loop_b3)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b3.val = (((uint32_t)mem_rfpll_cbit_loop_b3 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b3_unpack(uint16_t* mem_rfpll_cbit_loop_b3)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B3 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b3;

    *mem_rfpll_cbit_loop_b3 = localVal.bit_field.mem_rfpll_cbit_loop_b3;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b3_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b3.bit_field.mem_rfpll_cbit_loop_b3;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b3_setf(uint16_t mem_rfpll_cbit_loop_b3)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b3.bit_field.mem_rfpll_cbit_loop_b3 = mem_rfpll_cbit_loop_b3;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b4_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b4.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b4_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b4.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b4_pack(uint16_t mem_rfpll_cbit_loop_b4)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b4.val = (((uint32_t)mem_rfpll_cbit_loop_b4 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b4_unpack(uint16_t* mem_rfpll_cbit_loop_b4)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B4 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b4;

    *mem_rfpll_cbit_loop_b4 = localVal.bit_field.mem_rfpll_cbit_loop_b4;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b4_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b4.bit_field.mem_rfpll_cbit_loop_b4;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b4_setf(uint16_t mem_rfpll_cbit_loop_b4)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b4.bit_field.mem_rfpll_cbit_loop_b4 = mem_rfpll_cbit_loop_b4;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b5_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b5.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b5_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b5.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b5_pack(uint16_t mem_rfpll_cbit_loop_b5)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b5.val = (((uint32_t)mem_rfpll_cbit_loop_b5 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b5_unpack(uint16_t* mem_rfpll_cbit_loop_b5)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B5 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b5;

    *mem_rfpll_cbit_loop_b5 = localVal.bit_field.mem_rfpll_cbit_loop_b5;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b5_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b5.bit_field.mem_rfpll_cbit_loop_b5;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b5_setf(uint16_t mem_rfpll_cbit_loop_b5)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b5.bit_field.mem_rfpll_cbit_loop_b5 = mem_rfpll_cbit_loop_b5;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b6_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b6.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b6_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b6.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b6_pack(uint16_t mem_rfpll_cbit_loop_b6)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b6.val = (((uint32_t)mem_rfpll_cbit_loop_b6 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b6_unpack(uint16_t* mem_rfpll_cbit_loop_b6)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B6 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b6;

    *mem_rfpll_cbit_loop_b6 = localVal.bit_field.mem_rfpll_cbit_loop_b6;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b6_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b6.bit_field.mem_rfpll_cbit_loop_b6;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b6_setf(uint16_t mem_rfpll_cbit_loop_b6)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b6.bit_field.mem_rfpll_cbit_loop_b6 = mem_rfpll_cbit_loop_b6;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b7_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b7.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b7_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b7.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b7_pack(uint16_t mem_rfpll_cbit_loop_b7)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b7.val = (((uint32_t)mem_rfpll_cbit_loop_b7 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b7_unpack(uint16_t* mem_rfpll_cbit_loop_b7)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B7 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b7;

    *mem_rfpll_cbit_loop_b7 = localVal.bit_field.mem_rfpll_cbit_loop_b7;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b7_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b7.bit_field.mem_rfpll_cbit_loop_b7;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b7_setf(uint16_t mem_rfpll_cbit_loop_b7)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b7.bit_field.mem_rfpll_cbit_loop_b7 = mem_rfpll_cbit_loop_b7;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b8_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b8.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b8_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b8.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b8_pack(uint16_t mem_rfpll_cbit_loop_b8)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b8.val = (((uint32_t)mem_rfpll_cbit_loop_b8 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b8_unpack(uint16_t* mem_rfpll_cbit_loop_b8)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B8 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b8;

    *mem_rfpll_cbit_loop_b8 = localVal.bit_field.mem_rfpll_cbit_loop_b8;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b8_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b8.bit_field.mem_rfpll_cbit_loop_b8;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b8_setf(uint16_t mem_rfpll_cbit_loop_b8)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b8.bit_field.mem_rfpll_cbit_loop_b8 = mem_rfpll_cbit_loop_b8;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b9_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b9.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b9_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b9.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b9_pack(uint16_t mem_rfpll_cbit_loop_b9)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b9.val = (((uint32_t)mem_rfpll_cbit_loop_b9 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b9_unpack(uint16_t* mem_rfpll_cbit_loop_b9)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B9 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b9;

    *mem_rfpll_cbit_loop_b9 = localVal.bit_field.mem_rfpll_cbit_loop_b9;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b9_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b9.bit_field.mem_rfpll_cbit_loop_b9;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b9_setf(uint16_t mem_rfpll_cbit_loop_b9)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b9.bit_field.mem_rfpll_cbit_loop_b9 = mem_rfpll_cbit_loop_b9;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b10_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b10.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b10_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b10.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b10_pack(uint16_t mem_rfpll_cbit_loop_b10)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b10.val = (((uint32_t)mem_rfpll_cbit_loop_b10 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b10_unpack(uint16_t* mem_rfpll_cbit_loop_b10)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B10 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b10;

    *mem_rfpll_cbit_loop_b10 = localVal.bit_field.mem_rfpll_cbit_loop_b10;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b10_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b10.bit_field.mem_rfpll_cbit_loop_b10;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b10_setf(uint16_t mem_rfpll_cbit_loop_b10)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b10.bit_field.mem_rfpll_cbit_loop_b10 = mem_rfpll_cbit_loop_b10;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b11_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b11.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b11_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b11.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b11_pack(uint16_t mem_rfpll_cbit_loop_b11)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b11.val = (((uint32_t)mem_rfpll_cbit_loop_b11 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b11_unpack(uint16_t* mem_rfpll_cbit_loop_b11)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B11 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b11;

    *mem_rfpll_cbit_loop_b11 = localVal.bit_field.mem_rfpll_cbit_loop_b11;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b11_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b11.bit_field.mem_rfpll_cbit_loop_b11;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b11_setf(uint16_t mem_rfpll_cbit_loop_b11)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b11.bit_field.mem_rfpll_cbit_loop_b11 = mem_rfpll_cbit_loop_b11;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b12_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b12.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b12_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b12.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b12_pack(uint16_t mem_rfpll_cbit_loop_b12)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b12.val = (((uint32_t)mem_rfpll_cbit_loop_b12 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b12_unpack(uint16_t* mem_rfpll_cbit_loop_b12)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B12 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b12;

    *mem_rfpll_cbit_loop_b12 = localVal.bit_field.mem_rfpll_cbit_loop_b12;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b12_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b12.bit_field.mem_rfpll_cbit_loop_b12;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b12_setf(uint16_t mem_rfpll_cbit_loop_b12)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b12.bit_field.mem_rfpll_cbit_loop_b12 = mem_rfpll_cbit_loop_b12;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b13_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b13.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b13_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b13.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b13_pack(uint16_t mem_rfpll_cbit_loop_b13)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b13.val = (((uint32_t)mem_rfpll_cbit_loop_b13 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b13_unpack(uint16_t* mem_rfpll_cbit_loop_b13)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B13 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b13;

    *mem_rfpll_cbit_loop_b13 = localVal.bit_field.mem_rfpll_cbit_loop_b13;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b13_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b13.bit_field.mem_rfpll_cbit_loop_b13;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b13_setf(uint16_t mem_rfpll_cbit_loop_b13)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b13.bit_field.mem_rfpll_cbit_loop_b13 = mem_rfpll_cbit_loop_b13;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b14_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b14.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b14_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b14.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b14_pack(uint16_t mem_rfpll_cbit_loop_b14)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b14.val = (((uint32_t)mem_rfpll_cbit_loop_b14 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b14_unpack(uint16_t* mem_rfpll_cbit_loop_b14)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B14 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b14;

    *mem_rfpll_cbit_loop_b14 = localVal.bit_field.mem_rfpll_cbit_loop_b14;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b14_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b14.bit_field.mem_rfpll_cbit_loop_b14;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b14_setf(uint16_t mem_rfpll_cbit_loop_b14)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b14.bit_field.mem_rfpll_cbit_loop_b14 = mem_rfpll_cbit_loop_b14;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b15_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b15.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b15_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b15.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b15_pack(uint16_t mem_rfpll_cbit_loop_b15)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b15.val = (((uint32_t)mem_rfpll_cbit_loop_b15 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b15_unpack(uint16_t* mem_rfpll_cbit_loop_b15)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B15 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b15;

    *mem_rfpll_cbit_loop_b15 = localVal.bit_field.mem_rfpll_cbit_loop_b15;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b15_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b15.bit_field.mem_rfpll_cbit_loop_b15;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b15_setf(uint16_t mem_rfpll_cbit_loop_b15)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b15.bit_field.mem_rfpll_cbit_loop_b15 = mem_rfpll_cbit_loop_b15;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b16_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b16.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b16_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b16.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b16_pack(uint16_t mem_rfpll_cbit_loop_b16)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b16.val = (((uint32_t)mem_rfpll_cbit_loop_b16 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b16_unpack(uint16_t* mem_rfpll_cbit_loop_b16)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B16 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b16;

    *mem_rfpll_cbit_loop_b16 = localVal.bit_field.mem_rfpll_cbit_loop_b16;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b16_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b16.bit_field.mem_rfpll_cbit_loop_b16;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b16_setf(uint16_t mem_rfpll_cbit_loop_b16)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b16.bit_field.mem_rfpll_cbit_loop_b16 = mem_rfpll_cbit_loop_b16;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b17_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b17.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b17_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b17.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b17_pack(uint16_t mem_rfpll_cbit_loop_b17)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b17.val = (((uint32_t)mem_rfpll_cbit_loop_b17 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b17_unpack(uint16_t* mem_rfpll_cbit_loop_b17)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B17 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b17;

    *mem_rfpll_cbit_loop_b17 = localVal.bit_field.mem_rfpll_cbit_loop_b17;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b17_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b17.bit_field.mem_rfpll_cbit_loop_b17;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b17_setf(uint16_t mem_rfpll_cbit_loop_b17)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b17.bit_field.mem_rfpll_cbit_loop_b17 = mem_rfpll_cbit_loop_b17;
}

__STATIC_INLINE uint32_t rf_p1_mem_rfpll_cbit_loop_b18_get(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b18.val;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b18_set(uint32_t value)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b18.val = value;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b18_pack(uint16_t mem_rfpll_cbit_loop_b18)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b18.val = (((uint32_t)mem_rfpll_cbit_loop_b18 << 0));
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b18_unpack(uint16_t* mem_rfpll_cbit_loop_b18)
{
    T_RF_P1_MEM_RFPLL_CBIT_LOOP_B18 localVal = hwp_rf_p1->mem_rfpll_cbit_loop_b18;

    *mem_rfpll_cbit_loop_b18 = localVal.bit_field.mem_rfpll_cbit_loop_b18;
}

__STATIC_INLINE uint16_t rf_p1_mem_rfpll_cbit_loop_b18_getf(void)
{
    return hwp_rf_p1->mem_rfpll_cbit_loop_b18.bit_field.mem_rfpll_cbit_loop_b18;
}

__STATIC_INLINE void rf_p1_mem_rfpll_cbit_loop_b18_setf(uint16_t mem_rfpll_cbit_loop_b18)
{
    hwp_rf_p1->mem_rfpll_cbit_loop_b18.bit_field.mem_rfpll_cbit_loop_b18 = mem_rfpll_cbit_loop_b18;
}

__STATIC_INLINE uint32_t rf_p1_mem_txlpf_otrim_1_get(void)
{
    return hwp_rf_p1->mem_txlpf_otrim_1.val;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_1_set(uint32_t value)
{
    hwp_rf_p1->mem_txlpf_otrim_1.val = value;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_1_pack(uint16_t mem_txlpf_otrim_1)
{
    hwp_rf_p1->mem_txlpf_otrim_1.val = (((uint32_t)mem_txlpf_otrim_1 << 0));
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_1_unpack(uint16_t* mem_txlpf_otrim_1)
{
    T_RF_P1_MEM_TXLPF_OTRIM_1 localVal = hwp_rf_p1->mem_txlpf_otrim_1;

    *mem_txlpf_otrim_1 = localVal.bit_field.mem_txlpf_otrim_1;
}

__STATIC_INLINE uint16_t rf_p1_mem_txlpf_otrim_1_getf(void)
{
    return hwp_rf_p1->mem_txlpf_otrim_1.bit_field.mem_txlpf_otrim_1;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_1_setf(uint16_t mem_txlpf_otrim_1)
{
    hwp_rf_p1->mem_txlpf_otrim_1.bit_field.mem_txlpf_otrim_1 = mem_txlpf_otrim_1;
}

__STATIC_INLINE uint32_t rf_p1_mem_txlpf_otrim_2_get(void)
{
    return hwp_rf_p1->mem_txlpf_otrim_2.val;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_2_set(uint32_t value)
{
    hwp_rf_p1->mem_txlpf_otrim_2.val = value;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_2_pack(uint16_t mem_txlpf_otrim_2)
{
    hwp_rf_p1->mem_txlpf_otrim_2.val = (((uint32_t)mem_txlpf_otrim_2 << 0));
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_2_unpack(uint16_t* mem_txlpf_otrim_2)
{
    T_RF_P1_MEM_TXLPF_OTRIM_2 localVal = hwp_rf_p1->mem_txlpf_otrim_2;

    *mem_txlpf_otrim_2 = localVal.bit_field.mem_txlpf_otrim_2;
}

__STATIC_INLINE uint16_t rf_p1_mem_txlpf_otrim_2_getf(void)
{
    return hwp_rf_p1->mem_txlpf_otrim_2.bit_field.mem_txlpf_otrim_2;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_2_setf(uint16_t mem_txlpf_otrim_2)
{
    hwp_rf_p1->mem_txlpf_otrim_2.bit_field.mem_txlpf_otrim_2 = mem_txlpf_otrim_2;
}

__STATIC_INLINE uint32_t rf_p1_mem_txlpf_otrim_ave_get(void)
{
    return hwp_rf_p1->mem_txlpf_otrim_ave.val;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_ave_set(uint32_t value)
{
    hwp_rf_p1->mem_txlpf_otrim_ave.val = value;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_ave_pack(uint16_t mem_txlpf_otrim_ave)
{
    hwp_rf_p1->mem_txlpf_otrim_ave.val = (((uint32_t)mem_txlpf_otrim_ave << 0));
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_ave_unpack(uint16_t* mem_txlpf_otrim_ave)
{
    T_RF_P1_MEM_TXLPF_OTRIM_AVE localVal = hwp_rf_p1->mem_txlpf_otrim_ave;

    *mem_txlpf_otrim_ave = localVal.bit_field.mem_txlpf_otrim_ave;
}

__STATIC_INLINE uint16_t rf_p1_mem_txlpf_otrim_ave_getf(void)
{
    return hwp_rf_p1->mem_txlpf_otrim_ave.bit_field.mem_txlpf_otrim_ave;
}

__STATIC_INLINE void rf_p1_mem_txlpf_otrim_ave_setf(uint16_t mem_txlpf_otrim_ave)
{
    hwp_rf_p1->mem_txlpf_otrim_ave.bit_field.mem_txlpf_otrim_ave = mem_txlpf_otrim_ave;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_tmx_1_get(void)
{
    return hwp_rf_p1->mem_cal_tmx_1.val;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_1_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_tmx_1.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_1_pack(uint16_t mem_cal_tmx_1)
{
    hwp_rf_p1->mem_cal_tmx_1.val = (((uint32_t)mem_cal_tmx_1 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_1_unpack(uint16_t* mem_cal_tmx_1)
{
    T_RF_P1_MEM_CAL_TMX_1 localVal = hwp_rf_p1->mem_cal_tmx_1;

    *mem_cal_tmx_1 = localVal.bit_field.mem_cal_tmx_1;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_tmx_1_getf(void)
{
    return hwp_rf_p1->mem_cal_tmx_1.bit_field.mem_cal_tmx_1;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_1_setf(uint16_t mem_cal_tmx_1)
{
    hwp_rf_p1->mem_cal_tmx_1.bit_field.mem_cal_tmx_1 = mem_cal_tmx_1;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_tmx_2_get(void)
{
    return hwp_rf_p1->mem_cal_tmx_2.val;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_2_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_tmx_2.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_2_pack(uint16_t mem_cal_tmx_2)
{
    hwp_rf_p1->mem_cal_tmx_2.val = (((uint32_t)mem_cal_tmx_2 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_2_unpack(uint16_t* mem_cal_tmx_2)
{
    T_RF_P1_MEM_CAL_TMX_2 localVal = hwp_rf_p1->mem_cal_tmx_2;

    *mem_cal_tmx_2 = localVal.bit_field.mem_cal_tmx_2;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_tmx_2_getf(void)
{
    return hwp_rf_p1->mem_cal_tmx_2.bit_field.mem_cal_tmx_2;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_2_setf(uint16_t mem_cal_tmx_2)
{
    hwp_rf_p1->mem_cal_tmx_2.bit_field.mem_cal_tmx_2 = mem_cal_tmx_2;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_tmx_ave_get(void)
{
    return hwp_rf_p1->mem_cal_tmx_ave.val;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_ave_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_tmx_ave.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_ave_pack(uint16_t mem_cal_tmx_ave)
{
    hwp_rf_p1->mem_cal_tmx_ave.val = (((uint32_t)mem_cal_tmx_ave << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_ave_unpack(uint16_t* mem_cal_tmx_ave)
{
    T_RF_P1_MEM_CAL_TMX_AVE localVal = hwp_rf_p1->mem_cal_tmx_ave;

    *mem_cal_tmx_ave = localVal.bit_field.mem_cal_tmx_ave;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_tmx_ave_getf(void)
{
    return hwp_rf_p1->mem_cal_tmx_ave.bit_field.mem_cal_tmx_ave;
}

__STATIC_INLINE void rf_p1_mem_cal_tmx_ave_setf(uint16_t mem_cal_tmx_ave)
{
    hwp_rf_p1->mem_cal_tmx_ave.bit_field.mem_cal_tmx_ave = mem_cal_tmx_ave;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_tximg_get(void)
{
    return hwp_rf_p1->mem_cal_tximg.val;
}

__STATIC_INLINE void rf_p1_mem_cal_tximg_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_tximg.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_tximg_pack(uint16_t mem_cal_tximg)
{
    hwp_rf_p1->mem_cal_tximg.val = (((uint32_t)mem_cal_tximg << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_tximg_unpack(uint16_t* mem_cal_tximg)
{
    T_RF_P1_MEM_CAL_TXIMG localVal = hwp_rf_p1->mem_cal_tximg;

    *mem_cal_tximg = localVal.bit_field.mem_cal_tximg;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_tximg_getf(void)
{
    return hwp_rf_p1->mem_cal_tximg.bit_field.mem_cal_tximg;
}

__STATIC_INLINE void rf_p1_mem_cal_tximg_setf(uint16_t mem_cal_tximg)
{
    hwp_rf_p1->mem_cal_tximg.bit_field.mem_cal_tximg = mem_cal_tximg;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rxlpf_otrim_get(void)
{
    return hwp_rf_p1->mem_cal_rxlpf_otrim.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rxlpf_otrim_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rxlpf_otrim.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rxlpf_otrim_pack(uint16_t mem_cal_rxlpf_otrim)
{
    hwp_rf_p1->mem_cal_rxlpf_otrim.val = (((uint32_t)mem_cal_rxlpf_otrim << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rxlpf_otrim_unpack(uint16_t* mem_cal_rxlpf_otrim)
{
    T_RF_P1_MEM_CAL_RXLPF_OTRIM localVal = hwp_rf_p1->mem_cal_rxlpf_otrim;

    *mem_cal_rxlpf_otrim = localVal.bit_field.mem_cal_rxlpf_otrim;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rxlpf_otrim_getf(void)
{
    return hwp_rf_p1->mem_cal_rxlpf_otrim.bit_field.mem_cal_rxlpf_otrim;
}

__STATIC_INLINE void rf_p1_mem_cal_rxlpf_otrim_setf(uint16_t mem_cal_rxlpf_otrim)
{
    hwp_rf_p1->mem_cal_rxlpf_otrim.bit_field.mem_cal_rxlpf_otrim = mem_cal_rxlpf_otrim;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_3_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_3.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_3_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_3.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_3_pack(uint16_t mem_cal_rmx_rx_3)
{
    hwp_rf_p1->mem_cal_rmx_rx_3.val = (((uint32_t)mem_cal_rmx_rx_3 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_3_unpack(uint16_t* mem_cal_rmx_rx_3)
{
    T_RF_P1_MEM_CAL_RMX_RX_3 localVal = hwp_rf_p1->mem_cal_rmx_rx_3;

    *mem_cal_rmx_rx_3 = localVal.bit_field.mem_cal_rmx_rx_3;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_3_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_3.bit_field.mem_cal_rmx_rx_3;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_3_setf(uint16_t mem_cal_rmx_rx_3)
{
    hwp_rf_p1->mem_cal_rmx_rx_3.bit_field.mem_cal_rmx_rx_3 = mem_cal_rmx_rx_3;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_4_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_4.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_4_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_4.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_4_pack(uint16_t mem_cal_rmx_rx_4)
{
    hwp_rf_p1->mem_cal_rmx_rx_4.val = (((uint32_t)mem_cal_rmx_rx_4 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_4_unpack(uint16_t* mem_cal_rmx_rx_4)
{
    T_RF_P1_MEM_CAL_RMX_RX_4 localVal = hwp_rf_p1->mem_cal_rmx_rx_4;

    *mem_cal_rmx_rx_4 = localVal.bit_field.mem_cal_rmx_rx_4;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_4_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_4.bit_field.mem_cal_rmx_rx_4;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_4_setf(uint16_t mem_cal_rmx_rx_4)
{
    hwp_rf_p1->mem_cal_rmx_rx_4.bit_field.mem_cal_rmx_rx_4 = mem_cal_rmx_rx_4;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_5_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_5.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_5_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_5.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_5_pack(uint16_t mem_cal_rmx_rx_5)
{
    hwp_rf_p1->mem_cal_rmx_rx_5.val = (((uint32_t)mem_cal_rmx_rx_5 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_5_unpack(uint16_t* mem_cal_rmx_rx_5)
{
    T_RF_P1_MEM_CAL_RMX_RX_5 localVal = hwp_rf_p1->mem_cal_rmx_rx_5;

    *mem_cal_rmx_rx_5 = localVal.bit_field.mem_cal_rmx_rx_5;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_5_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_5.bit_field.mem_cal_rmx_rx_5;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_5_setf(uint16_t mem_cal_rmx_rx_5)
{
    hwp_rf_p1->mem_cal_rmx_rx_5.bit_field.mem_cal_rmx_rx_5 = mem_cal_rmx_rx_5;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_6_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_6.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_6_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_6.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_6_pack(uint16_t mem_cal_rmx_rx_6)
{
    hwp_rf_p1->mem_cal_rmx_rx_6.val = (((uint32_t)mem_cal_rmx_rx_6 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_6_unpack(uint16_t* mem_cal_rmx_rx_6)
{
    T_RF_P1_MEM_CAL_RMX_RX_6 localVal = hwp_rf_p1->mem_cal_rmx_rx_6;

    *mem_cal_rmx_rx_6 = localVal.bit_field.mem_cal_rmx_rx_6;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_6_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_6.bit_field.mem_cal_rmx_rx_6;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_6_setf(uint16_t mem_cal_rmx_rx_6)
{
    hwp_rf_p1->mem_cal_rmx_rx_6.bit_field.mem_cal_rmx_rx_6 = mem_cal_rmx_rx_6;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_7_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_7.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_7_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_7.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_7_pack(uint16_t mem_cal_rmx_rx_7)
{
    hwp_rf_p1->mem_cal_rmx_rx_7.val = (((uint32_t)mem_cal_rmx_rx_7 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_7_unpack(uint16_t* mem_cal_rmx_rx_7)
{
    T_RF_P1_MEM_CAL_RMX_RX_7 localVal = hwp_rf_p1->mem_cal_rmx_rx_7;

    *mem_cal_rmx_rx_7 = localVal.bit_field.mem_cal_rmx_rx_7;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_7_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_7.bit_field.mem_cal_rmx_rx_7;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_7_setf(uint16_t mem_cal_rmx_rx_7)
{
    hwp_rf_p1->mem_cal_rmx_rx_7.bit_field.mem_cal_rmx_rx_7 = mem_cal_rmx_rx_7;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_8_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_8.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_8_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_8.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_8_pack(uint16_t mem_cal_rmx_rx_8)
{
    hwp_rf_p1->mem_cal_rmx_rx_8.val = (((uint32_t)mem_cal_rmx_rx_8 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_8_unpack(uint16_t* mem_cal_rmx_rx_8)
{
    T_RF_P1_MEM_CAL_RMX_RX_8 localVal = hwp_rf_p1->mem_cal_rmx_rx_8;

    *mem_cal_rmx_rx_8 = localVal.bit_field.mem_cal_rmx_rx_8;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_8_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_8.bit_field.mem_cal_rmx_rx_8;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_8_setf(uint16_t mem_cal_rmx_rx_8)
{
    hwp_rf_p1->mem_cal_rmx_rx_8.bit_field.mem_cal_rmx_rx_8 = mem_cal_rmx_rx_8;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_9_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_9.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_9_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_9.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_9_pack(uint16_t mem_cal_rmx_rx_9)
{
    hwp_rf_p1->mem_cal_rmx_rx_9.val = (((uint32_t)mem_cal_rmx_rx_9 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_9_unpack(uint16_t* mem_cal_rmx_rx_9)
{
    T_RF_P1_MEM_CAL_RMX_RX_9 localVal = hwp_rf_p1->mem_cal_rmx_rx_9;

    *mem_cal_rmx_rx_9 = localVal.bit_field.mem_cal_rmx_rx_9;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_9_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_9.bit_field.mem_cal_rmx_rx_9;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_9_setf(uint16_t mem_cal_rmx_rx_9)
{
    hwp_rf_p1->mem_cal_rmx_rx_9.bit_field.mem_cal_rmx_rx_9 = mem_cal_rmx_rx_9;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_10_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_10.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_10_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_10.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_10_pack(uint16_t mem_cal_rmx_rx_10)
{
    hwp_rf_p1->mem_cal_rmx_rx_10.val = (((uint32_t)mem_cal_rmx_rx_10 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_10_unpack(uint16_t* mem_cal_rmx_rx_10)
{
    T_RF_P1_MEM_CAL_RMX_RX_10 localVal = hwp_rf_p1->mem_cal_rmx_rx_10;

    *mem_cal_rmx_rx_10 = localVal.bit_field.mem_cal_rmx_rx_10;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_10_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_10.bit_field.mem_cal_rmx_rx_10;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_10_setf(uint16_t mem_cal_rmx_rx_10)
{
    hwp_rf_p1->mem_cal_rmx_rx_10.bit_field.mem_cal_rmx_rx_10 = mem_cal_rmx_rx_10;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_11_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_11.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_11_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_11.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_11_pack(uint16_t mem_cal_rmx_rx_11)
{
    hwp_rf_p1->mem_cal_rmx_rx_11.val = (((uint32_t)mem_cal_rmx_rx_11 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_11_unpack(uint16_t* mem_cal_rmx_rx_11)
{
    T_RF_P1_MEM_CAL_RMX_RX_11 localVal = hwp_rf_p1->mem_cal_rmx_rx_11;

    *mem_cal_rmx_rx_11 = localVal.bit_field.mem_cal_rmx_rx_11;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_11_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_11.bit_field.mem_cal_rmx_rx_11;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_11_setf(uint16_t mem_cal_rmx_rx_11)
{
    hwp_rf_p1->mem_cal_rmx_rx_11.bit_field.mem_cal_rmx_rx_11 = mem_cal_rmx_rx_11;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_12_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_12.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_12_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_12.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_12_pack(uint16_t mem_cal_rmx_rx_12)
{
    hwp_rf_p1->mem_cal_rmx_rx_12.val = (((uint32_t)mem_cal_rmx_rx_12 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_12_unpack(uint16_t* mem_cal_rmx_rx_12)
{
    T_RF_P1_MEM_CAL_RMX_RX_12 localVal = hwp_rf_p1->mem_cal_rmx_rx_12;

    *mem_cal_rmx_rx_12 = localVal.bit_field.mem_cal_rmx_rx_12;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_12_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_12.bit_field.mem_cal_rmx_rx_12;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_12_setf(uint16_t mem_cal_rmx_rx_12)
{
    hwp_rf_p1->mem_cal_rmx_rx_12.bit_field.mem_cal_rmx_rx_12 = mem_cal_rmx_rx_12;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_13_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_13.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_13_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_13.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_13_pack(uint16_t mem_cal_rmx_rx_13)
{
    hwp_rf_p1->mem_cal_rmx_rx_13.val = (((uint32_t)mem_cal_rmx_rx_13 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_13_unpack(uint16_t* mem_cal_rmx_rx_13)
{
    T_RF_P1_MEM_CAL_RMX_RX_13 localVal = hwp_rf_p1->mem_cal_rmx_rx_13;

    *mem_cal_rmx_rx_13 = localVal.bit_field.mem_cal_rmx_rx_13;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_13_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_13.bit_field.mem_cal_rmx_rx_13;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_13_setf(uint16_t mem_cal_rmx_rx_13)
{
    hwp_rf_p1->mem_cal_rmx_rx_13.bit_field.mem_cal_rmx_rx_13 = mem_cal_rmx_rx_13;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_14_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_14.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_14_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_14.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_14_pack(uint16_t mem_cal_rmx_rx_14)
{
    hwp_rf_p1->mem_cal_rmx_rx_14.val = (((uint32_t)mem_cal_rmx_rx_14 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_14_unpack(uint16_t* mem_cal_rmx_rx_14)
{
    T_RF_P1_MEM_CAL_RMX_RX_14 localVal = hwp_rf_p1->mem_cal_rmx_rx_14;

    *mem_cal_rmx_rx_14 = localVal.bit_field.mem_cal_rmx_rx_14;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_14_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_14.bit_field.mem_cal_rmx_rx_14;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_14_setf(uint16_t mem_cal_rmx_rx_14)
{
    hwp_rf_p1->mem_cal_rmx_rx_14.bit_field.mem_cal_rmx_rx_14 = mem_cal_rmx_rx_14;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rx_15_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_15.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_15_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rx_15.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_15_pack(uint16_t mem_cal_rmx_rx_15)
{
    hwp_rf_p1->mem_cal_rmx_rx_15.val = (((uint32_t)mem_cal_rmx_rx_15 << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_15_unpack(uint16_t* mem_cal_rmx_rx_15)
{
    T_RF_P1_MEM_CAL_RMX_RX_15 localVal = hwp_rf_p1->mem_cal_rmx_rx_15;

    *mem_cal_rmx_rx_15 = localVal.bit_field.mem_cal_rmx_rx_15;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rx_15_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rx_15.bit_field.mem_cal_rmx_rx_15;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rx_15_setf(uint16_t mem_cal_rmx_rx_15)
{
    hwp_rf_p1->mem_cal_rmx_rx_15.bit_field.mem_cal_rmx_rx_15 = mem_cal_rmx_rx_15;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_dpd_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_dpd.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_dpd_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_dpd.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_dpd_pack(uint16_t mem_cal_rmx_dpd)
{
    hwp_rf_p1->mem_cal_rmx_dpd.val = (((uint32_t)mem_cal_rmx_dpd << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_dpd_unpack(uint16_t* mem_cal_rmx_dpd)
{
    T_RF_P1_MEM_CAL_RMX_DPD localVal = hwp_rf_p1->mem_cal_rmx_dpd;

    *mem_cal_rmx_dpd = localVal.bit_field.mem_cal_rmx_dpd;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_dpd_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_dpd.bit_field.mem_cal_rmx_dpd;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_dpd_setf(uint16_t mem_cal_rmx_dpd)
{
    hwp_rf_p1->mem_cal_rmx_dpd.bit_field.mem_cal_rmx_dpd = mem_cal_rmx_dpd;
}

__STATIC_INLINE uint32_t rf_p1_mem_cal_rmx_rximg_get(void)
{
    return hwp_rf_p1->mem_cal_rmx_rximg.val;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rximg_set(uint32_t value)
{
    hwp_rf_p1->mem_cal_rmx_rximg.val = value;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rximg_pack(uint16_t mem_cal_rmx_rximg)
{
    hwp_rf_p1->mem_cal_rmx_rximg.val = (((uint32_t)mem_cal_rmx_rximg << 0));
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rximg_unpack(uint16_t* mem_cal_rmx_rximg)
{
    T_RF_P1_MEM_CAL_RMX_RXIMG localVal = hwp_rf_p1->mem_cal_rmx_rximg;

    *mem_cal_rmx_rximg = localVal.bit_field.mem_cal_rmx_rximg;
}

__STATIC_INLINE uint16_t rf_p1_mem_cal_rmx_rximg_getf(void)
{
    return hwp_rf_p1->mem_cal_rmx_rximg.bit_field.mem_cal_rmx_rximg;
}

__STATIC_INLINE void rf_p1_mem_cal_rmx_rximg_setf(uint16_t mem_cal_rmx_rximg)
{
    hwp_rf_p1->mem_cal_rmx_rximg.bit_field.mem_cal_rmx_rximg = mem_cal_rmx_rximg;
}

__STATIC_INLINE uint32_t rf_p1_mem_txdac_cal_1_get(void)
{
    return hwp_rf_p1->mem_txdac_cal_1.val;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_1_set(uint32_t value)
{
    hwp_rf_p1->mem_txdac_cal_1.val = value;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_1_pack(uint16_t mem_txdac_cal_1)
{
    hwp_rf_p1->mem_txdac_cal_1.val = (((uint32_t)mem_txdac_cal_1 << 0));
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_1_unpack(uint16_t* mem_txdac_cal_1)
{
    T_RF_P1_MEM_TXDAC_CAL_1 localVal = hwp_rf_p1->mem_txdac_cal_1;

    *mem_txdac_cal_1 = localVal.bit_field.mem_txdac_cal_1;
}

__STATIC_INLINE uint16_t rf_p1_mem_txdac_cal_1_getf(void)
{
    return hwp_rf_p1->mem_txdac_cal_1.bit_field.mem_txdac_cal_1;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_1_setf(uint16_t mem_txdac_cal_1)
{
    hwp_rf_p1->mem_txdac_cal_1.bit_field.mem_txdac_cal_1 = mem_txdac_cal_1;
}

__STATIC_INLINE uint32_t rf_p1_mem_txdac_cal_2_get(void)
{
    return hwp_rf_p1->mem_txdac_cal_2.val;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_2_set(uint32_t value)
{
    hwp_rf_p1->mem_txdac_cal_2.val = value;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_2_pack(uint16_t mem_txdac_cal_2)
{
    hwp_rf_p1->mem_txdac_cal_2.val = (((uint32_t)mem_txdac_cal_2 << 0));
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_2_unpack(uint16_t* mem_txdac_cal_2)
{
    T_RF_P1_MEM_TXDAC_CAL_2 localVal = hwp_rf_p1->mem_txdac_cal_2;

    *mem_txdac_cal_2 = localVal.bit_field.mem_txdac_cal_2;
}

__STATIC_INLINE uint16_t rf_p1_mem_txdac_cal_2_getf(void)
{
    return hwp_rf_p1->mem_txdac_cal_2.bit_field.mem_txdac_cal_2;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_2_setf(uint16_t mem_txdac_cal_2)
{
    hwp_rf_p1->mem_txdac_cal_2.bit_field.mem_txdac_cal_2 = mem_txdac_cal_2;
}

__STATIC_INLINE uint32_t rf_p1_mem_txdac_cal_ave_get(void)
{
    return hwp_rf_p1->mem_txdac_cal_ave.val;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_ave_set(uint32_t value)
{
    hwp_rf_p1->mem_txdac_cal_ave.val = value;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_ave_pack(uint16_t mem_txdac_cal_ave)
{
    hwp_rf_p1->mem_txdac_cal_ave.val = (((uint32_t)mem_txdac_cal_ave << 0));
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_ave_unpack(uint16_t* mem_txdac_cal_ave)
{
    T_RF_P1_MEM_TXDAC_CAL_AVE localVal = hwp_rf_p1->mem_txdac_cal_ave;

    *mem_txdac_cal_ave = localVal.bit_field.mem_txdac_cal_ave;
}

__STATIC_INLINE uint16_t rf_p1_mem_txdac_cal_ave_getf(void)
{
    return hwp_rf_p1->mem_txdac_cal_ave.bit_field.mem_txdac_cal_ave;
}

__STATIC_INLINE void rf_p1_mem_txdac_cal_ave_setf(uint16_t mem_txdac_cal_ave)
{
    hwp_rf_p1->mem_txdac_cal_ave.bit_field.mem_txdac_cal_ave = mem_txdac_cal_ave;
}

__STATIC_INLINE uint32_t rf_p1_rf_page_get(void)
{
    return hwp_rf_p1->rf_page.val;
}

__STATIC_INLINE void rf_p1_rf_page_set(uint32_t value)
{
    hwp_rf_p1->rf_page.val = value;
}

__STATIC_INLINE void rf_p1_rf_page_pack(uint16_t rf_page)
{
    hwp_rf_p1->rf_page.val = (((uint32_t)rf_page << 0));
}

__STATIC_INLINE void rf_p1_rf_page_unpack(uint16_t* rf_page)
{
    T_RF_P1_RF_PAGE localVal = hwp_rf_p1->rf_page;

    *rf_page = localVal.bit_field.rf_page;
}

__STATIC_INLINE uint16_t rf_p1_rf_page_getf(void)
{
    return hwp_rf_p1->rf_page.bit_field.rf_page;
}

__STATIC_INLINE void rf_p1_rf_page_setf(uint16_t rf_page)
{
    hwp_rf_p1->rf_page.bit_field.rf_page = rf_page;
}
#endif



