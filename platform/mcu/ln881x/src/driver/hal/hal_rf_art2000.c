#include "proj_config.h"

#ifdef RF_ART2000
#include <string.h>
#include "driver/ll/ll_syscon.h"
#include "driver/ll/ll_rf_art2000.h"
#include "driver/ll/ll_phy_art2000.h"
#include "driver/hal/hal_rf_art2000.h"

static rf_art2000_cal_param_t rf_art2000_cal_param __attribute__((section("retention_data"))) = {0,};

static void hal_rf_art2000_set_channel_no_compensation(rf_channel_enum channel);

rf_art2000_cal_param_t * hal_rf_get_art2000_cal_param(void)
{
    return &rf_art2000_cal_param;
}

static void hal_rf_art2000_set_channel_by_rfpll_divider(rf_channel_enum channel)
{
    uint16_t reg43_val, reg44_val, value = (int)channel;

    if(value < 1 || value > 14){
        return;
    }

    value = (value << 1) | 0x00;
    ll_rf_art2000_reg_write(0, 0x11, value);

    switch(channel){
        case RF_CH_1:
            reg44_val = 0x3C4C;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_2:
            reg44_val = 0x3C6C;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_3:
            reg44_val = 0x3C8C;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_4:
            reg44_val = 0x3CAC;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_5:
            reg44_val = 0x3CCC;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_6:
            reg44_val = 0x3CEC;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_7:
            reg44_val = 0x3D0C;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_8:
            reg44_val = 0x3D2C;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_9:
            reg44_val = 0x3D4C;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_10:
            reg44_val = 0x3D6C;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_11:
            reg44_val = 0x3D8C;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_12:
            reg44_val = 0x3DAC;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_13:
            reg44_val = 0x3DCC;
            reg43_val = 0xCCCC;
            break;
        case RF_CH_14:
            reg44_val = 0x3E19;
            reg43_val = 0x9999;
            break;
        default:
            break;
    }
    ll_rf_art2000_reg_write(0, 0x43, reg43_val);
    ll_rf_art2000_reg_write(0, 0x44, reg44_val);
}

static void hal_rf_art2000_get_single_cal_value(pll_capbank_t *cal_value)
{
    ll_rf_art2000_reg_write(0, 0x09, 0x0017);
    ll_rf_art2000_reg_write(0, 0x0D, 0x0E00); // disable PA when PLL calibration.
    ll_rf_art2000_reg_write(0, 0x3C, 0x00C8);
    ll_rf_art2000_reg_write(0, 0x45, 0x83C0);

    ll_rf_art2000_reg_write(0, 0x01, 0x0010); //en cal
    for(uint32_t t = 0; t < 400000; t++);//delay 10ms(@160M CPU,O0(4 instructions))

    cal_value->reg15_val = hal_rf_art2000_read(0, 0x15);
    cal_value->reg16_val = hal_rf_art2000_read(0, 0x16);
    cal_value->reg17_val = hal_rf_art2000_read(0, 0x17);
    ll_rf_art2000_reg_write(0, 0x01, 0x0000); //dis cal
}

void hal_rf_art2000_set_single_cal_value(pll_capbank_t *cal_value)
{
    ll_rf_art2000_reg_write(0, 0x47, (cal_value->reg15_val << 1) | 0x01);
    ll_rf_art2000_reg_write(0, 0x48, cal_value->reg16_val);
    ll_rf_art2000_reg_write(0, 0x49, cal_value->reg17_val);
}

static void hal_rf_art2000_cal_list_init(void)
{
    pll_capbank_t *cal_value = NULL;
    int i = (int)RF_CH_1;
    for( ; i < (int) RF_CH_TOTAL; i++){
        cal_value = &(rf_art2000_cal_param.capbank_list[i]);
        hal_rf_art2000_set_channel_by_rfpll_divider((rf_channel_enum)i);
        hal_rf_art2000_get_single_cal_value(cal_value);
    }
}

void hal_sys_awo_init(void)
{
    ll_rf_art2000_sys_awo_init();
}

void hal_rf_art2000_init(void)
{
    ll_rf_art2000_reg_write(0, 0x3e, 0x4AC9); // pll high temp
    ll_rf_art2000_reg_write(0, 0x40, 0x3208);
    ll_rf_art2000_reg_write(0, 0x41, 0x0144);
    ll_rf_art2000_reg_write(0, 0x73, 0x0710); //ECO1 set dac bias current;
    ll_rf_art2000_reg_write(0, 0x09, 0x0037); //
    ll_rf_art2000_reg_write(0, 0x28, 0x00f0); //turn on lna when rx dc cal;
    ll_rf_art2000_reg_write(0, 0x45, 0x83C0); //set pll cnt number;
    ll_rf_art2000_reg_write(0, 0x47, 0x0028); //set pll auto cal;
    ll_rf_art2000_reg_write(0, 0x0D, 0x0e00); //set RF Enable;
    ll_rf_art2000_reg_write(0, 0x10, 0x4080); //set auto dac DC comp;

    ll_rf_art2000_reg_write(0, 0x07, 0xAB4F); //ECO1 set TX GAIN;
    ll_rf_art2000_reg_write(0, 0x88, 0x4307); //set PA;
    ll_rf_art2000_reg_write(0, 0x8B, 0x4307); //set PA;
    ll_rf_art2000_reg_write(0, 0x5F, 0x0004); //disable PA Thermo protect ;
    //ll_rf_art2000_reg_write(0, 0x65, 0x6227); //ECO1 set PA; changed by jack 20190529
    //ll_rf_art2000_reg_write(0, 0x67, 0xF5D5); //ECO1 set TMX; changed by jack 20190529
	ll_rf_art2000_reg_write(0, 0x65, 0xC217); //ECO1 set PA; changed by jack 20190719
    ll_rf_art2000_reg_write(0, 0x67, 0xF845); //ECO1 set TMX; changed by jack 20190719
    ll_rf_art2000_reg_write(0, 0x89, 0xF845); //set TMX DC04; changed by jack 20190719
    ll_rf_art2000_reg_write(0, 0x8C, 0xF845); //set TMX DC04;F51F changed by jack 20190719
    ll_rf_art2000_reg_write(0, 0x68, 0xCC86); //TMX LO cal;
		//ll_rf_art2000_reg_write(0, 0x68, 0x4C86); //changed by jack 20190719
    ll_rf_art2000_reg_write(0, 0x69, 0x0040); //for TMX LO cal add by jack 20190529
    ll_rf_art2000_reg_write(0, 0x6F, 0x0040); //TXLPF cal set add by jack 20190529
    ll_rf_art2000_reg_write(0, 0x6D, 0x0057); //ECO1 set txlpf mode b;
    ll_rf_art2000_reg_write(0, 0x8A, 0x0057); //set txlpf mode g;
    ll_rf_art2000_reg_write(0, 0x8D, 0x0057); //set txlpf mode n;

    ll_rf_art2000_reg_write(0, 0x74,0x0c0c); //ECO1 set TMX LC TANK;
    ll_rf_art2000_reg_write(0, 0x75,0x0808); //ECO1set TMX LC TANK;
    ll_rf_art2000_reg_write(0, 0x76,0x0); //ECO1set TMX LC TANK;
    ll_rf_art2000_reg_write(0, 0x77,0x0); //ECO1set TMX LC TANK;
    ll_rf_art2000_reg_write(0, 0x78,0x0); //ECO1set TMX LC TANK;
    ll_rf_art2000_reg_write(0, 0x79,0x0); //ECO1set TMX LC TANK;
    ll_rf_art2000_reg_write(0, 0x7A,0x0); //ECO1set TMX LC TANK;
    ll_rf_art2000_reg_write(0, 0x7B,0x0); //ECO1set TMX LC TANK;

    ll_rf_art2000_reg_write(0, 0x06, 0x37fc); // RX settings.
    ll_rf_art2000_reg_write(0, 0x50, 0x0202); //set RMX PKD RPT set0;
    ll_rf_art2000_reg_write(0, 0x56, 0x0004); //set rxlpf;//set voltage
    ll_rf_art2000_reg_write(0, 0x58, 0x0444); //set rxlpf;
    ll_rf_art2000_reg_write(0, 0x4F, 0x831B); //ECO1 set rmx cal range C222;
    ll_rf_art2000_reg_write(0, 0x51, 0x5444); //ECO1 set rmx cal config;
    ll_rf_art2000_reg_write(0, 0x2B, 0x3FEF); // DPD cal gain config.
    ll_rf_art2000_reg_write(0, 0x52, 0x0444); // DPD cal config.
    ll_rf_art2000_reg_write(0, 0x5B, 0x0007); //ECO1 set ADC LDO 2 max voltage;
    ll_rf_art2000_reg_write(0, 0x4C, 0x0642); //ECO1 set LNA guard LDO& CS;

    ll_rf_art2000_reg_write(0, 0x4D, 0x0000); //ECO1 set LNA load cap;
    ll_rf_art2000_reg_write(0, 0x4E, 0x0862);    // LNA LDO  precharge.


    ll_rf_art2000_reg_write(0, 0x09, 0x0037);   //enbale_clk??
    ll_rf_art2000_reg_write(0, 0x2D, 0x0001);   //pa_otd_protect_out??
}


void hal_rf_art2000_start_auto_cal(void)
{
    ll_rf_art2000_reg_write(0, 0x01, 0x0020); //en auto cal
    //delay 50ms
}
void hal_rf_art2000_stop_auto_cal(void)
{
    ll_rf_art2000_reg_write(0, 0x01, 0x0000); //dis auto cal
}

void hal_rf_art2000_slect_adc(void)
{
    ll_rf_art2000_reg_write(0, 0x0b, 0x0); //slect rf adc
}


void hal_rf_art2000_reset_rf(void)
{
    ll_rf_art2000_reg_write(0, 0x12, 0x181); //rst dig sw
}

uint8_t hal_rf_art2000_cal_rmx_i_report(void)
{
	uint16_t val = 0;
    val = ll_rf_art2000_reg_read(0, 0x1B);
	return (uint8_t)(val & 0xFF);
}
uint8_t hal_rf_art2000_cal_rmx_q_report(void)
{
	uint16_t val = 0;
    val = ll_rf_art2000_reg_read(0, 0x1B);
	return (uint8_t)(val >> 8);
}

void hal_rf_art2000_set_cal_rmx_i(uint16_t val)
{
	ll_rf_art2000_reg_write(0, 0x54, val);
}
void hal_rf_art2000_set_cal_rmx_q(uint16_t val)
{
	ll_rf_art2000_reg_write(0, 0x55, val);
}

void hal_phy_art2000_start_read_adc(void){
    ll_phy_art2000_reg_write(0x05,0x09);
}
void hal_phy_art2000_set_adc_negate(void){
	ll_phy_art2000_reg_write(0xff,0x01);
    ll_phy_art2000_reg_write(0x01,0xC0);//0xC0
	ll_phy_art2000_reg_write(0xff,0x00);
}
void hal_phy_art2000_disable_rx_en(void){
    ll_phy_art2000_reg_write(0x05,0x00);
}

void hal_rf_art2000_write(uint8_t pageID, uint8_t addr, uint16_t data){
    ll_rf_art2000_reg_write(pageID, addr, data);
}
uint16_t hal_rf_art2000_read(uint8_t pageID, uint8_t addr){
    return ll_rf_art2000_reg_read(pageID, addr);
}

rf_freq_enum hal_rf_art2000_channel_to_freq(rf_channel_enum channel)
{
    return (rf_freq_enum)channel;
}
rf_channel_enum hal_rf_art2000_freq_to_channel(rf_freq_enum freq)
{
    return (rf_channel_enum)freq;
}

void hal_rf_art2000_set_channel_no_compensation(rf_channel_enum channel)
{
    int value = (int)channel;

    if(value < 0 || value > 14){
        return;
    }else if(value >= 1 && value <= 13){
        value = value + 1;
    }else if(value == 14){
        value = 16;
    }

    value = (value << 1) | 0x01;
    ll_rf_art2000_reg_write(0, 0x11, value);
    switch(channel){
        case RF_CH_1:
        case RF_CH_2:
        case RF_CH_3:
			ll_rf_art2000_reg_write(0, 0x67, 0xF645); // add by jack 20190719
			ll_rf_art2000_reg_write(0, 0x5B, 0x07);
			break;
        case RF_CH_4:
        case RF_CH_5:
        case RF_CH_6:
			ll_rf_art2000_reg_write(0, 0x67, 0xF845); // add by jack 20190719
            ll_rf_art2000_reg_write(0, 0x5B, 0x07);
            break;
        case RF_CH_7:
        case RF_CH_8:
        case RF_CH_9:
			ll_rf_art2000_reg_write(0, 0x67, 0xFA45); // add by jack 20190719
            ll_rf_art2000_reg_write(0, 0x5B, 0x07);
            break;
        case RF_CH_10:
        case RF_CH_11:
        case RF_CH_12:
			ll_rf_art2000_reg_write(0, 0x67, 0xFC45); // add by jack 20190719
            ll_rf_art2000_reg_write(0, 0x5B, 0x07);
            break;
        case RF_CH_13:
			ll_rf_art2000_reg_write(0, 0x67, 0xFE45); // add by jack 20190719
            ll_rf_art2000_reg_write(0, 0x5B, 0x01);
            break;
        default:
            break;
    }
}

void hal_rf_art2000_set_channel(rf_channel_enum channel)
{
	//uint8_t lna_input_load[RF_CH_TOTAL] = {0x00,   0x60,0x70,0x70,	0xF0,0xF0,0xF0,  0xF0,0xF0,0xF0,  0xF0,0xF0,0xF0,  0xF0,0xF0,};//write rf  p0 addr:0x4d
	//uint8_t rf_path_loss[RF_CH_TOTAL]   = {0x04,	 0x03,0x03,0x03,  0x03,0x03,0x03,  0x04,0x03,0x09,	0x09,0x09,0x09,  0x09,0x0b,};//write phy p1 addr:0x7c
	uint8_t rf_path_loss[RF_CH_TOTAL]	= {0x08,   0x08,0x08,0x08,	0x08,0x08,0x08,  0x08,0x08,0x09,  0x09,0x09,0x09,  0x09,0x09,};//write phy p1 addr:0x7c

	hal_rf_art2000_set_single_cal_value(&(rf_art2000_cal_param.capbank_list[(int)channel]));
    hal_rf_art2000_set_channel_no_compensation(channel);
    //set compensation value for this channel
    hal_rf_art2000_set_cal_rmx_i(rf_art2000_cal_param.i_rmx_table[channel] | 0x100);
    hal_rf_art2000_set_cal_rmx_q(rf_art2000_cal_param.q_rmx_table[channel] | 0x100);
    //hal_rf_art2000_set_single_cal_value(&(rf_art2000_ctxt.cal_value_list[(int)channel]));

	//hal_rf_art2000_write(0, 0x4D, lna_input_load[channel]);

	ll_phy_art2000_reg_write(0xff,0x01);
    ll_phy_art2000_reg_write(0x7C,rf_path_loss[channel]);//0x7C
	ll_phy_art2000_reg_write(0xff,0x00);
	ll_rf_art2000_reg_write(0, 0x0A, 0x8002);
	ll_rf_art2000_reg_write(0, 0x0A, 0x0000);
}

rf_channel_enum hal_rf_art2000_get_channel(void)
{
    uint16_t value = 0;
    rf_channel_enum ret;

    value = ll_rf_art2000_reg_read(0, 0x11);
    value = (value & 0x3E) >> 1;
    if(value >= 2 && value <= 14){
        ret = (rf_channel_enum)(value - 1);
    }else if(value == 0){
        ret = RF_CH_0;
    }else if(value == 16){
        ret = RF_CH_14;
    }else{
        ret = RF_CH_ERR;
    }
    return ret;
}

void iq_dc_cal_one_ch_manual(rf_channel_enum channel)
{
    uint16_t i_dc_temp     = 0,q_dc_temp     = 0;
    int16_t  i_dc_temp_int = 0,q_dc_temp_int = 0;

    int32_t  i_dc_sum      = 0,q_dc_sum      = 0;
    int16_t  i_dc_avg_curr = 0,q_dc_avg_curr = 0;

    uint32_t * mem_pos = 0;
    uint8_t i_rmx = 0,q_rmx = 0;
    int8_t bit_pos = 7;

    //1.Init the i/q_rmx value = 0x80
    i_rmx |= 1 << bit_pos;
    q_rmx |= 1 << bit_pos;

    //2.Set channel
    hal_rf_art2000_set_channel_no_compensation(channel);

modify_rmx_i_q:
    // 3.Write i/q_rmx value
    hal_rf_art2000_set_cal_rmx_i(i_rmx | 0x100);
    hal_rf_art2000_set_cal_rmx_q(q_rmx | 0x100);

    //4.Read ADC (PHY b0 0x05 <- 0x09)
    for(uint32_t t = 0; t < 50; t++);//delay
    hal_phy_art2000_start_read_adc();
    for(uint32_t t = 0; t < 3000; t++);//delay 75us (@160M CPU,O-0(4 instructions))

    //7.Read memory,Calculated average
    mem_pos = (uint32_t *)(0x20020000 + (sizeof(uint32_t)*IQ_DC_CAL_POINT_IGNORE));
    i_dc_sum = 0;
    q_dc_sum = 0;

    for(uint16_t i = 0; i < IQ_DC_CAL_POINT_TOTAL; i++)
    {
        i_dc_temp = (*mem_pos) & 0x3FF;
        q_dc_temp = ((*mem_pos) >> 10) & 0x3FF;

        if(i_dc_temp > 512){
            i_dc_temp_int = i_dc_temp - 1024;
        }else{
            i_dc_temp_int = i_dc_temp;
        }

        if(q_dc_temp > 512){
            q_dc_temp_int = q_dc_temp - 1024;
        }else{
            q_dc_temp_int = q_dc_temp;
        }

        i_dc_sum += i_dc_temp_int;
        q_dc_sum += q_dc_temp_int;

        mem_pos++;
    }

    i_dc_avg_curr = i_dc_sum / (int16_t)IQ_DC_CAL_POINT_TOTAL;
    q_dc_avg_curr = q_dc_sum / (int16_t)IQ_DC_CAL_POINT_TOTAL;

    //8.Adjust the current bit value based on the dc_avg_curr.
    if(i_dc_avg_curr > 0){
        i_rmx |= 1 << bit_pos;
    }else{
        i_rmx &= ~(1 << bit_pos);
    }

    if(q_dc_avg_curr > 0){
        q_rmx |= 1 << bit_pos;
    }else{
        q_rmx &= ~(1 << bit_pos);
    }

    //9.Record i/q_rmx value
    rf_art2000_cal_param.i_rmx_table[channel] = i_rmx;
    rf_art2000_cal_param.q_rmx_table[channel] = q_rmx;

    bit_pos--;
    if(bit_pos >= (int8_t)0)
    {
        //10.Prepare for the next time.
        i_rmx |= 1 << bit_pos;
        q_rmx |= 1 << bit_pos;
        goto modify_rmx_i_q;
    }
}

/**
 * Only for ATE.
 */
void iq_dc_cal_one_ch_manual_DPD(rf_channel_enum channel)
{
    uint16_t i_dc_temp     = 0,q_dc_temp     = 0;
    int16_t  i_dc_temp_int = 0,q_dc_temp_int = 0;

    int32_t  i_dc_sum      = 0,q_dc_sum      = 0;
    int16_t  i_dc_avg_curr = 0,q_dc_avg_curr = 0;

    uint32_t * mem_pos = 0;
    uint8_t i_rmx = 0,q_rmx = 0;
    int8_t bit_pos = 7;

    //1.Init the i/q_rmx value = 0x80
    i_rmx |= 1 << bit_pos;
    q_rmx |= 1 << bit_pos;

modify_rmx_i_q:
    //3.Write i/q_rmx value
    hal_rf_art2000_set_cal_rmx_i(i_rmx | 0x100);
    hal_rf_art2000_set_cal_rmx_q(q_rmx | 0x100);

    //4.Read ADC (PHY b0 0x05 <- 0x09)
    for(uint32_t t = 0; t < 50; t++);//delay
    hal_phy_art2000_start_read_adc();
    for(uint32_t t = 0; t < 3000; t++);//delay 75us (@160M CPU,O-0(4 instructions))

    //7.Read memory,Calculated average
    mem_pos = (uint32_t *)(0x20020000 + (sizeof(uint32_t)*IQ_DC_CAL_POINT_IGNORE));
    i_dc_sum = 0;
    q_dc_sum = 0;

    for(uint16_t i = 0; i < IQ_DC_CAL_POINT_TOTAL; i++)
    {
        i_dc_temp = (*mem_pos) & 0x3FF;
        q_dc_temp = ((*mem_pos) >> 10) & 0x3FF;

        if(i_dc_temp > 512){
            i_dc_temp_int = i_dc_temp - 1024;
        }else{
            i_dc_temp_int = i_dc_temp; // Attention, no xxx_set_adc_negate().
        }

        if(q_dc_temp > 512){
            q_dc_temp_int = q_dc_temp - 1024;
        }else{
            q_dc_temp_int = q_dc_temp; // Attention, no xxx_set_adc_negate().
        }

        i_dc_sum += i_dc_temp_int;
        q_dc_sum += q_dc_temp_int;

        mem_pos++;
    }

    i_dc_avg_curr = i_dc_sum / (int16_t)IQ_DC_CAL_POINT_TOTAL;
    q_dc_avg_curr = q_dc_sum / (int16_t)IQ_DC_CAL_POINT_TOTAL;

    //8.Adjust the current bit value based on the dc_avg_curr.
    if(i_dc_avg_curr > 0){
        i_rmx |= 1 << bit_pos;
    }else{
        i_rmx &= ~(1 << bit_pos);
    }

    if(q_dc_avg_curr > 0){
        q_rmx |= 1 << bit_pos;
    }else{
        q_rmx &= ~(1 << bit_pos);
    }

    //9.Record i/q_rmx value
    rf_art2000_cal_param.i_rmx_table[channel] = i_rmx;
    rf_art2000_cal_param.q_rmx_table[channel] = q_rmx;

    bit_pos--;
    if(bit_pos >= (int8_t)0)
    {
        //10.Prepare for the next time.
        i_rmx |= 1 << bit_pos;
        q_rmx |= 1 << bit_pos;
        goto modify_rmx_i_q;
    }
}

void hal_rf_art2000_pll_cal(void)
{
    //ll_rf_art2000_reg_write(0, 0x0C, ~(0x01)); // NOTE: bypass all except rfpll_auto_cal, and cpu_selfcal_rfpll_set = 1;

    // ------  PLL calibration start  ------
    hal_rf_art2000_cal_list_init();
    
    ll_rf_art2000_reg_write(0, 0x06, ll_rf_art2000_reg_read(0, 0x06) & ~(1<<15)); // bit15 clear, cpu_rx_gain_dr is 0.

    //hal_phy_art2000_disable_rx_en();
    // ------  PLL calibration Over  ------
}

void hal_rf_art2000_auto_cal(void)
{
    ll_rf_art2000_reg_write(0, 0x0C, 0x4801); // rfpll_auto_cal_bp

    hal_rf_art2000_set_channel(RF_CH_6);

    // ------------------ Auto calibration start  ----------------------
    LL_SYSCON_RCO32K_Bitsel_Set(1);
    ll_rf_init_autocal_on();
    for(uint32_t t = 0; t < 2000000; t++);//delay 50ms(@160M CPU,O0(4 instructions))
    // hal_rf_art2000_stop_auto_cal();
    ll_rf_init_autocal_off();
    // ------------------ Auto calibration over  ----------------------
    LL_SYSCON_RCO32K_Cbit_Set(ll_rf_art2000_rco32k_cbit_rpt_get());
    LL_SYSCON_RCO32K_Bitsel_Set(0);
}

//void hal_rf_art2000_iq_dc_cal_manual(void)
void hal_rf_art2000_rx_dc_cal(void)
{
    memset((void *)0x20020000, 0, 32*1024);

    // 1. prepare for RX cal
    ll_rf_art2000_reg_write(0, 0x0D, 0x0F80); //rx en // NOTE: PA sel interface
    ll_rf_art2000_reg_write(0, 0x06, ll_rf_art2000_reg_read(0, 0x06) | (1<<15)); // bit15 set, cpu_rx_gain_dr

    // 2. Set adc negate(PHY interface)
    hal_phy_art2000_set_adc_negate();

    // 3. slect ADC channel
    hal_rf_art2000_slect_adc();
    hal_phy_art2000_start_read_adc();

    // 4. cal channel 0-14,record the results in i/q_rmx table.
    for(uint8_t ch = 0; ch < RF_CH_TOTAL; ch++){
        iq_dc_cal_one_ch_manual((rf_channel_enum)ch);
    }

    // 5. Restore Rf reg
    ll_rf_art2000_reg_write(0, 0x06, ll_rf_art2000_reg_read(0, 0x06) & ~(1<<15)); // bit15 clear, cpu_rx_gain_dr is 0.
    ll_rf_art2000_reg_write(0, 0x0D, 0x0); //rx en
    hal_phy_art2000_disable_rx_en();
    memset((void *)0x20020000, 0, 32*1024);
}

#endif /* RF_ART2000 */
