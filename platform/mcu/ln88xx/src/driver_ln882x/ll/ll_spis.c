#include "reg_spis.h"
#include "ll/ll_spis.h"


///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: CTRLR0
//// Description: Control Register.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_CtrlR0(uint8_t dfs, uint8_t cfs, uint8_t srl, uint8_t slv_oe, uint8_t tmod, uint8_t scpol, uint8_t scph, uint8_t frf)
{
    spis_ctrlr0_pack(dfs, cfs, srl, slv_oe, tmod, scpol, scph, frf);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: SSIENR
//// Description: SPIS enable and disable.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_Enable(uint8_t en)
{
    spis_ssi_en_setf(en > 0);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: MWCR
//// Description: Microwire configuration.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_MW_HandShake_Enable(uint8_t en)
{
    spis_mhs_setf(en > 0);
}

void LL_SPIS_MW_Mode_Set(uint8_t mode)
{
    spis_mod_setf(mode);
}

void LL_SPIS_MW_TxMode_Set(uint8_t transfer_mode)
{
    spis_mwmod_setf(transfer_mode);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: TXFTLR
//// Description: Transmit FIFO Threshold. Controls the level of entries (or below)
////              at which the transmit FIFO controller triggers an interrupt.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_TxFIFO_Threshold_Set(uint8_t tx_thd)
{
    spis_tft_setf(tx_thd);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: RXFTLR
//// Description: Receive FIFO Threshold. Controls the level of entries (or above)
////              at which the receive FIFO controller triggers an interrupt.
////              When the number of receive FIFO entries is greater than or equal
////              to this value + 1, the receive FIFO full interrupt is triggered.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_RxFIFO_Threshold_Set(uint8_t rx_thd)
{
    spis_rft_setf(rx_thd);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: TXFLR
//// Description: Transmit FIFO Level. Contains the number of valid data entries
////              in the transmit FIFO.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_Current_TxFIFO_Level(void)
{
    return spis_txtfl_getf();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: RXFLR
//// Description: Receive FIFO Level. Contains the number of valid data entries
////              in the receive FIFO.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_Current_RxFIFO_Level(void)
{
    return spis_rxtfl_getf();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: SR
//// Description: Status Register.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_Normal_Status(void)
{
    return spis_sr_get();
}

uint8_t LL_SPIS_Is_DataCollision(void)
{
    return spis_dcol_getf();
}

uint8_t LL_SPIS_Is_TxError(void)
{
    return spis_txe_getf();
}

uint8_t LL_SPIS_Is_RxFIFO_Full(void)
{
    return spis_rff_getf();
}

uint8_t LL_SPIS_Is_RxFIFO_NotEmpty(void)
{
    return spis_rfne_getf();
}

uint8_t LL_SPIS_Is_TxFIFO_Empty(void)
{
    return spis_tfe_getf();
}

uint8_t LL_SPIS_Is_TxFIFO_NotFull(void)
{
    return spis_tfnf_getf();
}

uint8_t LL_SPIS_Is_Busy(void)
{
    return spis_busy_getf();
}


///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: IMR
//// Description: Interrupt Mask Register.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_IntMask_Set(uint8_t mask_map)
{
    spis_imr_set(mask_map);
}

uint8_t LL_SPIS_IntMask_Get(void)
{
    return spis_imr_get();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: ISR
//// Description: Interrupt Status.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_Int_Status(void)
{
    return spis_isr_get();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: RISR
//// Description: Raw Interrupt Status.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_RawInt_Status(void)
{
    return spis_risr_get();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: TXOICR
//// Description: Clear Transmit FIFO Overflow Interrupt.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_IntClr_TxOverflow(void)
{
    return spis_txoicr_getf();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: RXOICR
//// Description: Clear Receive FIFO Overflow interrupt.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_IntClr_RxOverflow(void)
{
    return spis_rxoicr_getf();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: RXUICR
//// Description: Clear Receive FIFO Underflow Interrupt.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_IntClr_RxUnderflow(void)
{
    return spis_rxuicr_getf();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: MSTICR
//// Description: Clear Multi-Master Contention Interrupt.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_IntClr_MultiMaster(void)
{
    return spis_msticr_getf();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: ICR
//// Description: Clear interrupts. A read clears the txo, rxu, rxo, mst interrupts.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_SPIS_IntClr_All(void)
{
    return spis_icr_getf();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: DMACR
//// Description: DMA configuration. It enables/disables/ TDMAE and RDMAE.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_DMA_Ctrl(uint8_t tx_dma_en, uint8_t rx_dma_en)
{
    spis_tdmae_setf(tx_dma_en > 0);
    spis_rdmae_setf(rx_dma_en > 0);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: DMATDLR
//// Description: Transmit Data Level. It controls the level at which a DMA
//// request is made by the transmit logic. It is equal to the watermark level;
//// that is, the dma_tx_req signal is generated when the number of valid data
//// entries in the transmit FIFO is equal to or below this field value, and
//// TDMAE = 1.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_DMA_TxDataLevel(uint8_t tx_lvl)
{
    spis_dmatdl_setf(tx_lvl);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: DMARDLR
//// Description: Receive Data Level. It controls the level at which a DMA
//// request is made by the receive logic. The watermark level=DMARDL+1; that is
//// dma_rx_req is generated when the number of valid data entries in the receive
//// FIFO is equal to or above this field value+1, and RDMAE=1.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_DMA_RXDataLevel(uint8_t rx_lvl)
{
    spis_dmardl_setf(rx_lvl);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg    Name: DR
//// Description: Data Register. When writing to this register, you must right-
//// justify the data. Read data are automatically right-justified.
///////////////////////////////////////////////////////////////////////////////

void LL_SPIS_DataReg_Set(uint32_t data)
{
    spis_dr_setf(data);
}

uint32_t LL_SPIS_DataReg_Get(void)
{
    return spis_dr_getf();
}
