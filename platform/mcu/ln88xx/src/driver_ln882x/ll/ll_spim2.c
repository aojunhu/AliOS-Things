#include "types.h"
#include "reg_spim2.h"
#include "ll/ll_spim2.h"

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: MISC_CFG
//// Description:
///////////////////////////////////////////////////////////////////////////////

void LL_SPIM2_MiscCfg(uint16_t val)
{
    spim2_misc_cfg_set(val);
}

void LL_SPIM2_ModefaultInt_Enable(uint8_t en)
{
    spim2_sp_modefault_int_ena_q_setf(en > 0);
}
void LL_SPIM2_OverflowInt_Enable(uint8_t en)
{
    spim2_sp_overflow_int_ena_q_setf(en > 0);
}
void LL_SPIM2_RxInt_Enable(uint8_t en)
{
    spim2_sp_rx_int_ena_q_setf(en > 0);
}

void LL_SPIM2_Master_Enable(uint8_t en)
{
    spim2_master_q_setf(en);
}
void LL_SPIM2_Clk_Polarity(uint8_t clk_polarity)
{
    spim2_clk_polarity_q_setf(clk_polarity);
}
void LL_SPIM2_Clk_Phase(uint8_t clk_phase)
{
    spim2_clk_phase_q_setf(clk_phase);
}

void LL_SPIM2_Enable(uint8_t en)
{
    spim2_enable_q_setf(en > 0);
}
void LL_SPIM2_TxInt_Enable(uint8_t en)
{
    spim2_sp_tx_int_ena_q_setf(en > 0);
}


///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: BAUD_SET
//// Description:
///////////////////////////////////////////////////////////////////////////////

void LL_SPIM2_BaudRate_Set(uint8_t baud_rate)
{
    spim2_baud_rate_sel_q_setf(baud_rate);
}

uint8_t LL_SPIM2_IsTxEmpty(void)
{
    return spim2_tx_empty_getf();
}

// FIXME: what is Mode Fault?
/**
 * @brief Mode Fault Enable bit.
 *
 * @param en
 */
void LL_SPIM2_ModeFault_Enable(uint8_t en)
{
    spim2_mf_enable_q_setf(en > 0);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: CMD_FMT
//// Description:
///////////////////////////////////////////////////////////////////////////////

void LL_SPIM2_StartTransfer(void)
{
    spim2_cmd_fmt_set( spim2_cmd_fmt_get() | (1<<7) );
}

/**
 * @brief Set transfer direction. 1 for read, 0 for write.
 *
 * @param rw
 */
void LL_SPIM2_Set_ReadWriteDir(uint8_t rw)
{
    spim2_set_rw_q_setf(rw > 0);
}

void LL_SPIM2_Set_AddrLength(uint8_t length)
{
    spim2_set_addr_length_q_setf(length-1);
}

void LL_SPIM2_Set_DataLength(uint8_t length)
{
    spim2_set_data_length_q_setf(length-1);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: TX_DATA0
//// Description:
///////////////////////////////////////////////////////////////////////////////

void LL_SPIM2_TxData0_Set(uint32_t data0)
{
    spim2_tx_data0_set(data0);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: TX_DATA1
//// Description:
///////////////////////////////////////////////////////////////////////////////

void LL_SPIM2_TxData1_Set(uint32_t data1)
{
    spim2_tx_data1_set(data1);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: RX_DATA0
//// Description:
///////////////////////////////////////////////////////////////////////////////

uint32_t LL_SPIM2_RxData0_Get(void)
{
    return spim2_rx_data0_get();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: RX_DATA1
//// Description:
///////////////////////////////////////////////////////////////////////////////

uint32_t LL_SPIM2_RxData1_Get(void)
{
    return spim2_rx_data1_get();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: INTR_STATUS
//// Description:
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIM2_RawInt_Status(void)
{
    return spim2_intr_rawstatus_getf();
}

uint8_t LL_SPIM2_Int_Status(void)
{
    return spim2_intr_status_getf();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: INTR_CLR
//// Description:
///////////////////////////////////////////////////////////////////////////////

void LL_SPIM2_IntClr(uint8_t int_map)
{
    spim2_intr_clr_set(int_map);
}

void LL_SPIM2_IntClr_All(void)
{
    spim2_intr_clr_set(0xFF);
}
