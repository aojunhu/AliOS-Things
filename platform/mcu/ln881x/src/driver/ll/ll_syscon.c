#include "proj_config.h"
#include "driver/ll/ll_syscon.h"
#include "reg_sysc_cmp.h"
#include "reg_sysc_awo.h"


/**
 * @brief Real 32K period, can be used by SW to calculate PPM.
 *
 * @return uint16_t
 */
uint16_t LL_SYSCON_Get32KPeriodNs()
{
    return sysc_awo_i_rco32k_period_ns_getf();
}


// NOTE: why set zero?
/**
 * @brief Enable of cal 32K, enable of update calibratioin result.
 *
 */
void LL_SYSCON_32KCaliEnable(void)
{
    sysc_awo_o_cpu_sleep_counter_bp_setf(0);
}


/**
 * @brief Set CPU sleep duration time, unit: ns.
 *
 * @param n_ns CPU sleep duration time, unit is ns.
 */
void LL_SYSCON_CPUSleepDurationEnable(unsigned long long n_ns)
{
    sysc_awo_o_cpu_sleep_time_l_setf(n_ns & 0x00000000FFFFFFFF);
    sysc_awo_o_cpu_sleep_time_h_setf(n_ns >> 32);

    sysc_awo_o_cpu_sleep_inten_setf(1);
}


/**
 * @brief Disable CPU sleep.
 *
 */
void LL_SYSCON_CPUSleepDurationDisable()
{
    sysc_awo_o_cpu_sleep_inten_setf(0);
    sysc_awo_o_cpu_sleep_time_h_setf(0);
    sysc_awo_o_cpu_sleep_time_l_setf(0);
}


/**
 * @brief Get CPU real sleep time.
 *
 * @return uint64_t real sleep time, unit is ns.
 */
uint64_t LL_SYSCON_RealSleepTime(void)
{
    volatile uint64_t sleep_time;
    sleep_time = ((uint64_t)sysc_awo_i_real_sleep_time_h_getf() << 32) | (uint64_t)sysc_awo_real_slp_time_l_get();

    return sleep_time;
}


/**
 * @brief Get always on idle reg value.
 *
 * @return uint32_t awo idle reg value
 */
uint32_t LL_SYSCON_IdleReg(void)
{
    return sysc_awo_idle_reg_get();
}


/**
 * @brief Calculate compensate time, unit is ns.
 *
 * @return uint32_t compensate time.
 */
uint32_t LL_SYSCON_CalculateCompensateNs(void)
{
    uint32_t fastclks_to_wait;
    uint32_t slowclks_to_wait;
    uint64_t total_ns=0;

    ///////////before sleep/////////////
    fastclks_to_wait = (sysc_awo_pmu_seq_time_getf() + 1 + sysc_awo_o_pd_switch_intv_getf())*4;
    slowclks_to_wait = sysc_awo_o_clk_swc_dly_getf();               // should add 0.5 slow clock cycle

    ///////////after sleep//////////////
    slowclks_to_wait += 3;              //there are three slow clocks before DIGLDO_HV state
    slowclks_to_wait += (sysc_awo_o_vdd11_l2h_dly_getf() + 1);
    slowclks_to_wait += (sysc_awo_o_pll_stb_dly_getf() + sysc_awo_o_xtal40_stb_dly_getf());
    slowclks_to_wait += 2;                  //o_clk_swc_dly

    fastclks_to_wait += ((sysc_awo_o_pd_switch_intv_getf() + sysc_awo_pmu_seq_time_getf() + 1) * 4);

    // FIXME: APB_CLK1 should not be directly used.
    total_ns = (uint64_t)slowclks_to_wait * sysc_awo_i_rco32k_period_ns_getf() + sysc_awo_i_rco32k_period_ns_getf()/2 + (uint64_t)fastclks_to_wait * 1000000000 / AHBUS_CLOCK;
    // ART_ASSERT(total_ns <= 0xffffffff);

    return (uint32_t)total_ns;

}


/**
 * @brief Indicate a true lock after debounce logic.
 *
 * @return true locked.
 * @return false not locked.
 */
bool LL_SYSCON_IsSysPllLocked()
{
    return (bool)sysc_awo_r_syspll_lock_getf();
}


// FIXME: polarity 1 -- for what, 0 -- for what?
/**
 * @brief Set lock signal parity, debounce delay.
 *
 * @param lock_polarity 1 bit.
 * @param debounce_dly threshold to indicate a true lock.
 */
void LL_SYSCON_SysPllDebounceSet(uint8_t lock_polarity, uint8_t debounce_dly)
{
    sysc_awo_r_syspll_lock_polarity_setf(lock_polarity);
    sysc_awo_r_syspll_lock_deb_dly_setf(debounce_dly);
}

/**
 * @brief Select flash mode or mirror mode.
 *
 * @param mode 1 -- flash mode; 0 -- mirror mode.
 */
void LL_SYSCON_FlashOrMirrorMode(uint8_t mode)
{
    if (mode) {
        sysc_awo_o_flash_mode_setf(1);
    } else {
        sysc_awo_o_flash_mode_setf(0);
    }
}

/**
 * @brief Get boot mode.
 *
 * @return uint8_t  bootmode bit[0:2]
 */
uint8_t LL_SYSCON_GetBootMode()
{
    return sysc_awo_i_boot_mode_getf();
}


/**
 * @brief Reset Core, only five options is valid: all, phy, rtc, wic, pmu.
 *
 * @param src one option of pmu, wic, rtc, phy, all.
 */
void LL_SYSCON_SoftwareResetCore(SYSCON_SwRst_Core src)
{
    sysc_awo_sw_rstn_set(~(1<<src));
    __NOP();
    __NOP();
    sysc_awo_sw_rstn_set(0xffffffff);
}


/**
 * @brief Select HCLK source to PLL.
 *
 */
void LL_SYSCON_ClkSwitchToPll(void)
{
    while(!LL_SYSCON_IsSysPllLocked());
    sysc_awo_clk_src_sel_setf(1);
}


/**
 * @brief Select HCLK source to XTAL.
 *
 */
void LL_SYSCON_ClkSwitchToXtal(void)
{
    sysc_awo_clk_src_sel_setf(0);
}

/**
 * @brief HCLK source select.
 *
 * @param src @see SYSTEM_CLOCK_SRC.
 */
void  LL_SYSCON_SelectSysClkSrc(SYSTEM_CLOCK_SRC src)
{
    sysc_awo_clk_src_sel_setf(src);
}

/**
 * @brief Set HCLK division.
 *
 * @param ahb_divider
 */
void LL_SYSCON_SetHclkDivision(uint8_t ahb_divider)
{
    // ART_ASSERT((ahb_divider-1)<=0xf);
    sysc_awo_hclk_div_para_m1_setf(ahb_divider-1);
    sysc_awo_div_update_set(1);
}


/**
 * @brief Set PCLK0 division.
 *
 * @param apb0_divider
 */
void LL_SYSCON_SetPclk0Division(uint8_t apb0_divider)
{
    // ART_ASSERT((apb0_divider-1)<=0xf);
    sysc_cmp_pclk0_div_para_m1_setf(apb0_divider-1);
    sysc_cmp_div_update_set(1);
}


/**
 * @brief Set PCLK1 Division.
 *
 * @param apb1_divider
 */
void LL_SYSCON_SetPclk1Division(uint8_t apb1_divider)
{
    // ART_ASSERT((apb1_divider-1)<=0xf);
    sysc_awo_pclk1_div_para_m1_setf(apb1_divider-1);
    sysc_awo_div_update_set(2);
}


/**
 * @brief Set hardware timer division.
 *
 * @param div clk pre-division, which is 8bits width.
 */
void LL_SYSCON_Timer1Division(uint8_t div)
{
    sysc_cmp_timer1_div_para_m1_setf( div - 1);
    sysc_cmp_div_update_pack(0, 0, 0, 1, 0);
}


void LL_SYSCON_Timer2Division(uint8_t div)
{
    sysc_cmp_timer2_div_para_m1_setf( div - 1);
    sysc_cmp_div_update_pack(0, 0, 1, 0, 0);
}


void LL_SYSCON_Timer3Division(uint8_t div)
{
    sysc_cmp_timer3_div_para_m1_setf( div - 1);
    sysc_cmp_div_update_pack(0, 1, 0, 0, 0);
}


void LL_SYSCON_Timer4Division(uint8_t div)
{
    sysc_cmp_timer4_div_para_m1_setf( div - 1);
    sysc_cmp_div_update_pack(1, 0, 0, 0, 0);
}


/**
 * @brief Clock gate enable.
 *
 * @param src core clock src.
 * @param ena 1 -- enable or 0 -- disable.
 */
void LL_SYSCON_CoreClockEnable(SYSCON_ClkGate_Core src, bool ena)
{
    uint32_t tmp = sysc_awo_sw_clkg_get();
    if(ena)
    {
        sysc_awo_sw_clkg_set(tmp | (1<<src));
    }
    else
    {
        sysc_awo_sw_clkg_set(tmp & (~(1<<src)));
    }
}


/**
 * @brief Get core clock enable status, 1 bit for 1 core clock.
 *
 * @return uint32_t ORed value, 1 bit for 1 core clock, @see SYSCON_ClkGate_Core.
 */
uint32_t LL_SYSCON_CoreClockStatus(void)
{
    return sysc_awo_sw_clkg_get();
}


/**
 * @brief Peripheral clock enable.
 * Note: call this function one time to enable one clock.
 *
 * @param src peripheral module.
 * @param ena enable / disable.
 */
void LL_SYSCON_PeripheralClockEnable(SYSCON_ClkGate_Peripheral src, bool ena)
{
    uint32_t tmp = sysc_cmp_sw_clkg_get();
    if(ena)
    {
        sysc_cmp_sw_clkg_set(tmp | (1<<src));
    }
    else
    {
        sysc_cmp_sw_clkg_set(tmp & (~(1<<src)));
    }
}


/**
 * @brief Get peripheral clock enable status.
 *
 * @return uint32_t ORed value, @see SYSCON_ClkGate_Peripheral.
 */
uint32_t LL_SYSCON_PeripheralClockStatus(void)
{
    return sysc_cmp_sw_clkg_get();
}


/**
 * @brief Reset peripheral module.
 * Note: call this function one time to reset one peripheral module.
 *
 * @param peri @see SYSCON_SwRst_Peripheral.
 */
void LL_SYSCON_SoftwareResetPeripheral(SYSCON_SwRst_Peripheral peri)
{
    sysc_cmp_sw_rstn_set(~(1<<peri));
    __NOP();
    __NOP();
    sysc_cmp_sw_rstn_set(0xffffffff);
}


/**
 * @brief Set IO alternate function.
 *
 * @param af_type alternate function type, @see GPIO_AltFunctionType.
 * @param af_io_idx IO index, @see GPIO_AltFunctionIoIndex.
 * @param en enable / disable.
 */
void LL_SYSCON_FuncIOSet(GPIO_AltFunctionType af_type, GPIO_AltFunctionIoIndex af_io_idx, uint8_t en)
{
    uint32_t enable_map;
    enable_map = sysc_cmp_func_ien_getf();
    if(en == 0)
    {
        enable_map &= (~(1 << af_io_idx));
        sysc_cmp_func_ien_setf(enable_map);
        return;
    }
    switch(af_io_idx)
    {
        case GPIO_AF_IO_0:
            sysc_cmp_func_io00_sel_setf(af_type);
            break;
        case GPIO_AF_IO_1:
        	sysc_cmp_func_io01_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_2:
        	sysc_cmp_func_io02_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_3:
        	sysc_cmp_func_io03_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_4:
        	sysc_cmp_func_io04_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_5:
        	sysc_cmp_func_io05_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_6:
        	sysc_cmp_func_io06_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_7:
        	sysc_cmp_func_io07_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_8:
        	sysc_cmp_func_io08_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_9:
        	sysc_cmp_func_io09_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_10:
        	sysc_cmp_func_io10_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_11:
        	sysc_cmp_func_io11_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_12:
        	sysc_cmp_func_io12_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_13:
        	sysc_cmp_func_io13_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_14:
        	sysc_cmp_func_io14_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_15:
        	sysc_cmp_func_io15_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_16:
        	sysc_cmp_func_io16_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_17:
        	sysc_cmp_func_io17_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_18:
        	sysc_cmp_func_io18_sel_setf(af_type);
        	break;
        case GPIO_AF_IO_19:
        	sysc_cmp_func_io19_sel_setf(af_type);
        	break;
        default:
            // ART_ASSERT(0);
            break;
    }
    enable_map |= (1 << af_io_idx);
    sysc_cmp_func_ien_setf(enable_map);
}


// FIXME: OK?
/**
 * @brief Disable all function on all configurable IO pad.
 *
 */
void LL_SYSCON_FuncIODisableAll(void)
{
    sysc_cmp_func_ien_setf(0);
}

/**
 * @brief GPIO Pull Up
 *
 */
void LL_SYSCON_GPIO_PullUp(GPIO_Num gpio_num)
{
    if(gpio_num <= 31)
    {
        sysc_awo_r_pad_pu_31_0_setf(gpio_num);
    }
    else if((gpio_num >= 32) && (gpio_num <= 34))
    {
        sysc_awo_r_pad_pu_34_32_setf(gpio_num - 32);
    }
}

/**
 * @brief GPIO Pull Down
 *
 */
void LL_SYSCON_GPIO_PullDown(GPIO_Num gpio_num)
{
    if(gpio_num <= 31)
    {
        sysc_awo_r_pad_pu_31_0_setf(gpio_num);
    }
    else if((gpio_num >= 32) && (gpio_num <= 34))
    {
        sysc_awo_r_pad_pu_34_32_setf(gpio_num - 32);
    }
}


/**
 * @brief Select SPIS IO as pad.
 *
 * @param en 1 -- enable; 0 -- disable.
 */
void LL_SYSCON_SPIS_Enable(uint8_t en)
{
    sysc_cmp_spis_io_en_setf(en > 0);
}

/**
 * @brief Select spim and csnX IO as pad.
 *
 * @param index @see SYSCON_SPIM_Index.
 */
void LL_SYSCON_SPIMEnable(SYSCON_SPIM_Index index)
{
    switch(index)
    {
        case SPIM_IO_EN0:
        {
            sysc_cmp_spim_io_en0_setf(1);
            break;
        }
        case SPIM_IO_EN1:
        {
            sysc_cmp_spim_io_en1_setf(1);
            break;
        }
        case SPIM_IO_EN2:
        {
            sysc_cmp_spim_io_en2_setf(1);
            break;
        }
        default:
            // ART_ASSERT(index<=SPIM_IO_EN2);
        	break;
    }
}

/**
 * @brief Deselect SPIM and csnX IO as pad.
 *
 * @param index @see SYSCON_SPIM_Index
 */
void LL_SYSCON_SPIMDisable(SYSCON_SPIM_Index index)
{
    switch(index)
    {
        case SPIM_IO_EN0:
        {
            sysc_cmp_spim_io_en0_setf(0);
            break;
        }
        case SPIM_IO_EN1:
        {
            sysc_cmp_spim_io_en1_setf(0);
            break;
        }
        case SPIM_IO_EN2:
        {
            sysc_cmp_spim_io_en2_setf(0);
            break;
        }
        default:
            // ART_ASSERT(index<=SPIM_IO_EN2);
        	break;
    }
}

/**
 * @brief Disable all SPIM.
 *
 */
void LL_SYSCON_SPIMDisableAll(void)
{
    sysc_cmp_spim_io_en0_setf(0);
    sysc_cmp_spim_io_en1_setf(0);
    sysc_cmp_spim_io_en2_setf(0);
}


/**
 * @brief Select SDIO IO as pad.
 *
 */
void LL_SYSCON_SDIOEnable(void)
{
    sysc_cmp_sdio_io_en_setf(1);
}


/**
 * @brief Deselect SDIO IO as pad.
 *
 */
void LL_SYSCON_SDIODisable(void)
{
    sysc_cmp_sdio_io_en_setf(0);
}

/**
 * @brief Select SPIFlash IO as pad.
 */
void LL_SYSCON_SPIFlashEnable(void)
{
    sysc_cmp_spif_io_en_setf(1);
}

/**
 * @brief Deselect SPIFlash IO as pad.
 */
void LL_SYSCON_SPIFlashDisable(void)
{
    sysc_cmp_spif_io_en_setf(0);
}

/**
 * @brief Select I2S chnX IO as pad.
 *
 * @param index @see SYSCON_I2S_Index.
 */
void LL_SYSCON_I2SEnable(SYSCON_I2S_Index index)
{
    switch(index)
    {
        case I2S_IO_EN0:
        {
            sysc_cmp_i2s_io_en0_setf(1);
            break;
        }
        case I2S_IO_EN1:
        {
            sysc_cmp_i2s_io_en1_setf(1);
            break;
        }
        default:
            // ART_ASSERT(index<=I2S_IO_EN1);
        	break;
    }
}


/**
 * @brief Disable all I2S module.
 *
 */
void LL_SYSCON_I2SDisableAll(void)
{
    sysc_cmp_i2s_io_en0_setf(0);
    sysc_cmp_i2s_io_en1_setf(0);
}


// NOTE: SWD not used?
/**
 * @brief SWD enable.
 *
 */
void LL_SYSCON_SWDEnable(void)
{
#if   defined (LN881x)
    uint32_t temp = sysc_cmp_io_en_get();
    temp &= 0xFFFFFFFC; // clear bit1, bit0
    sysc_cmp_io_en_set(temp);
#elif defined (LN882x)
//    sysc_awo_swd_en_setf( 1);
    sysc_awo_swd_en0_set(0x13141517);//(Don't use sysc_awo_swd_en_setf())!!!
#else
    #error Not supported device type
#endif
}


/**
 * @brief SWD disable.
 *
 */
void LL_SYSCON_SWDDisable(void)
{
#if   defined (LN881x)
    uint32_t temp = sysc_cmp_io_en_get();
    temp |= 0x00000003;    // set bit1, bit0
    sysc_cmp_io_en_set(temp);
#elif defined (LN882x)
//    sysc_awo_swd_en_setf( 0);
    sysc_awo_swd_en0_set(0x13141516);
#else
    #error Not supported device type
#endif
}


/**
 * @brief DBGH enable.
 *
 */
void LL_SYSCON_DBGHEnable(void)
{
#if   defined (LN881x)
    uint32_t temp = sysc_cmp_io_en_get();
    temp &= 0xFFFFFFF3; // clear bit3, bit2
    sysc_cmp_io_en_set(temp);
#elif defined (LN882x)
    sysc_awo_dbg_hst_en_set( 0x13141516);
#else
    #error Not supported device type
#endif
}

/**
 * @brief DBHG disable, set GPIO20, GPIO19 to GPIO.
 */
void LL_SYSCON_DBGHDisable(void)
{
#if   defined (LN881x)
    uint32_t temp = sysc_cmp_io_en_get();
    temp |= 0x0000000C;    // set bit3, bit2
    sysc_cmp_io_en_set(temp);
#elif defined (LN882x)
//    sysc_awo_dbg_host_en_setf( 0);
    sysc_awo_dbg_hst_en_set( 0x13141517);
#else
    #error Not supported device type
#endif
}

/**
 * @brief Set CPU reset request mask.
 *
 * @param mask 1 -- mask, 0 -- not masked.
 */
void LL_SYSCON_CPUResetReqMask(uint8_t mask)
{
    sysc_awo_o_cpu_rstreq_mask_setf(mask);
}


/**
 * @brief PHY must be reset after TxImgCal.
 */
void LL_SYSCON_PHY_Reset(void)
{
	int i;
	sysc_awo_srstn_phy_setf(0);
	for (i = 0; i< 8000; i++);
	sysc_awo_srstn_phy_setf(1);
}


///////////////////////////////////////////////////////////////////////////////
//////////////////////////////  AWO register  /////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////   RC32K_CTRL  /////////////////////////////////

void LL_SYSCON_RCO32K_Bitsel_Set(uint8_t bitsel)
{
    sysc_awo_r_rco32k_bitsel_setf(bitsel != 0);
}

uint8_t LL_SYSCON_RCO32K_Bitsel_Get(void)
{
    return sysc_awo_r_rco32k_bitsel_getf();
}

void LL_SYSCON_RCO32K_Cbit_Set(uint8_t cbit)
{
    sysc_awo_r_rco32k_cbit_setf(cbit);
}

///////////////////////////////  0x14 -- PMU_REG  /////////////////////////////
void LL_SYSCON_PMUReg_Set(uint32_t value)
{
    sysc_awo_pmu_reg_set(value);
}

void LL_SYSCON_Xtal40MCap_Set(uint8_t cap)
{
    sysc_awo_r_xtal40m_cap_bit_setf(cap);
}

///////////////////////////////  0x18 -- PMU_CFG  /////////////////////////////
void LL_SYSCON_PMUCfg_Set(uint32_t value)
{
    sysc_awo_pmu_cfg_set(value);
}

///////////////////////////////  0x34 -- MISC  /////////////////////////////
void LL_SYSCON_Misc_Set(uint32_t value)
{
    sysc_awo_misc_set(value);
}


void LL_SYSCON_EXT_INTR_Enable(SYSTEM_EXT_INT_Wakeup_Index ext_int_idx, bool enable)
{
    uint8_t inrp_en = sysc_awo_ext_inrp_en_getf();
    uint8_t inrp_src = sysc_awo_pin_is_inrp_src_getf();

    if(enable){//enable
        SET_BIT(inrp_en, ext_int_idx);
        SET_BIT(inrp_src, ext_int_idx);
        sysc_awo_ext_inrp_en_setf(inrp_en);
        sysc_awo_pin_is_inrp_src_setf(inrp_src);
    }else{//disable
        CLR_BIT(inrp_en, ext_int_idx);
        CLR_BIT(inrp_src, ext_int_idx);
        sysc_awo_ext_inrp_en_setf(inrp_en);
        sysc_awo_pin_is_inrp_src_setf(inrp_src);
    }
}

void LL_SYSCON_EXT_INTR_Set_Triggle_Condition(SYSTEM_EXT_INT_Wakeup_Index ext_int_idx, SYSTEM_EXT_INT_Triggle_Type triggle)
{

    switch(ext_int_idx)
    {
        case SYSTEM_EXT_INT0:
        {
            sysc_awo_ext_inrp_sense_0_setf(triggle);
        }
        break;

        case SYSTEM_EXT_INT1:
        {
            sysc_awo_ext_inrp_sense_1_setf(triggle);
        }
        break;

        case SYSTEM_EXT_INT2:
        {
            sysc_awo_ext_inrp_sense_2_setf(triggle);
        }
        break;

        case SYSTEM_EXT_INT3:
        {
            sysc_awo_ext_inrp_sense_3_setf(triggle);
        }
        break;

        case SYSTEM_EXT_INT4:
        {
            sysc_awo_ext_inrp_sense_4_setf(triggle);
        }
        break;

        case SYSTEM_EXT_INT5:
        {
            sysc_awo_ext_inrp_sense_5_setf(triggle);
        }
        break;

        case SYSTEM_EXT_INT6:
        {
            sysc_awo_ext_inrp_sense_6_setf(triggle);
        }
        break;

        case SYSTEM_EXT_INT7:
        {
            sysc_awo_ext_inrp_sense_7_setf(triggle);
        }
        break;

        default:
        break;
   }
}

uint8_t LL_SYSCON_EXT_INTR_Stat(void)
{
    return sysc_awo_ext_inrp_value_r_getf();
}
uint8_t LL_SYSCON_EXT_INTR_Stat_Raw(void)
{
    return sysc_awo_ext_rawinrp_value_getf();
}
void LL_SYSCON_EXT_INTR_Clear(void)
{
    sysc_awo_ext_inrp_clr_set(0xFF);
}


