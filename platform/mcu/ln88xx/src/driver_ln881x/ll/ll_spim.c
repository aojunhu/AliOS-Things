#include "types.h"
#include "reg_spim.h"
#include "ll/ll_spim.h"

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  CTRLR0  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief
 *
 * @param dfs Data Frame Size in 32-bit mode.
 * @param cfs Control Frame Size.
 * @param srl Shift Register Loop.
 * @param slv_oe NOT usued.
 * @param tmod Transfer mode. Only indicates whether the receive or transmit data are valid.
 * 00 -- Transmit & Receive
 * 01 -- Transmit Only
 * 10 -- Receive Only
 * 11 -- EEPROM Read
 * @param scpol Serial Clock Polarity.
 * 0 -- Inactive state of serial clock is low.
 * 1 -- Inactive state of serial clock is high.
 * @param scph Serial Clock Phase.
 * 0 -- Serial clock toggles in middle of first data bit.
 * 1 -- Serial clock toggles at start of first data bit.
 * @param frf Frame Format. Selects which serial protocol transfers the data.
 * 00 -- Motorola SPI
 * 01 -- Texas Instruments SSP
 * 10 -- National Semiconductors Microwire
 * 11 -- Reserved
 */
void LL_SPIM_CtrlR0(uint8_t dfs,uint8_t cfs,uint8_t srl,uint8_t slv_oe,uint8_t tmod,uint8_t scpol,uint8_t scph,uint8_t frf)
{
    spim_ctrlr0_pack(dfs, cfs, srl, slv_oe, tmod, scpol, scph, frf);
}

/**
 * @brief Data Frame Size in 32-bit mode.
 *
 * @param dfs
 */
void LL_SPIM_DataFrameSize_Set(uint8_t dfs)
{
    spim_dfs_setf(dfs);
}

/**
 * @brief Control Frame Size. Selects the length of the control word for the
 * Microwire frame format.
 *
 * @param cfs
 */
void LL_SPIM_CtrlFrameSize_Set(uint8_t cfs)
{
    spim_cfs_setf(cfs);
}

/**
 * @brief Transfer Mode. Selects the mode of transfer for serial communication.
 *
 * @param tmod
 * 00 -- Transmit & Receive
 * 01 -- Transmit Only
 * 10 -- Receive Only
 * 11 -- EEPROM Read
 */
void LL_SPIM_TransferMode_Set(uint8_t tmod)
{
    spim_tmod_setf(tmod);
}

/**
 * @brief Serial Clock Polarity. Valid when the FRF is set to Motorola SPI.
 *
 * @param scpol
 * 0 -- Inactive state of serial clock is low
 * 1 -- Inactive state of serial clock is high
 */
void LL_SPIM_ClkPolarity_Set(uint8_t scpol)
{
    spim_scpol_setf(scpol);
}

/**
 * @brief Serial Clock Phase. Valid when the FRF is set to Motorola SPI.
 *
 * @param scph
 * 0 -- Serial Clock toggles in middle of first data bit
 * 1 -- Serial Clock toggles at start of first data bit
 */
void LL_SPIM_ClkPhase_Set(uint8_t scph)
{
    spim_scph_setf(scph);
}

/**
 * @brief Frame Format. Selects which serial protocol transfers the data.
 *
 * @param frf
 * 00 -- Motorola SPI
 * 01 -- Texas Instruments SSP
 * 10 -- National Semeconductors Microwire
 * 11 -- Reserved
 */
void LL_SPIM_FrameFormat_Set(uint8_t frf)
{
    spim_frf_setf(frf);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  CTRLR1  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief
 *
 * @param ndf Number of Data Frames. When TMOD = 10 or TMOD = 11, this register
 * field sets the number of data frames to be continuously received by the SPIM
 * controller.
 */
void LL_SPIM_CtrlR1(uint16_t ndf)
{
    spim_ctrlr1_set(ndf);
}

/**
 * @brief
 *
 * @param ndf Number of Data Frames. When TMOD = 10 or TMOD = 11, this register
 * field sets the number of data frames to be continuously received by the SPIM
 * controller.
 */
void LL_SPIM_NumDataFrame_Set(uint16_t ndf)
{
    spim_ndf_setf(ndf);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  SSIENR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Enable/Disable the SPIM controller.
 *
 * @param en 1--enable; 0--disable.
 */
void LL_SPIM_Enable(uint8_t en)
{
    spim_ssi_en_setf(en);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////   MWCR   ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Microwire Setting.
 *
 * @param handshake_en Used to enable/disable the "busy/ready" handshaking interface
 * for the Microwire protocol.
 * 0 -- handshaking disabled;
 * 1 -- handshaking enabled.
 * @param mw_mod Microwire Control.
 * 0 -- receive data word from external serial device.
 * 1 -- Send data word to external serial device.
 * @param mw_txmod Microwrie Transfer Mode. Defines whether the Microwire transfer is
 * sequential or non-sequential.
 * 0 -- non-sequential transfer.
 * 1 -- sequential transfer.
 */
void LL_SPIM_Microwire_Setting(uint8_t handshake_en, uint8_t mw_mod, uint8_t mw_txmod)
{
    spim_mhs_setf(handshake_en);
    spim_mod_setf(mw_mod);
    spim_mwmod_setf(mw_txmod);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////   SER    ////////////////////////////////////
//////////////////////////// Slave Select Enable //////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Slave Select. Each bit in this register corresponds to a slave select
 * line from the SPIM controller. When a bit in this register is set(1), the
 * corresponding slave select line is activated whena serial transfer begins.
 *
 * @param id slave id.
 */
void LL_SPIM_Slave_Select(uint8_t id)
{
    spim_ser_set(id);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////   BAUDR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Clock Divider.
 *
 * @param div
 */
void LL_SPIM_CLK_Div(uint16_t div)
{
    spim_sckdv_setf(div);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  TXFTLR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Transmit FIFO Threshold. Controls the level of entries (or below) at
 * which the transmit FIFO controller triggers an interrupt.
 *
 * @param tx_thd valid range is 2~256.
 */
void LL_SPIM_TX_FIFO_Threshold_Set(uint8_t tx_thd)
{
    spim_tft_setf(tx_thd);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  RXFTLR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Receive FIFO Threshold. Controls the level of entries (or above) at
 * which the receive FIFO controller triggers an interrupt.
 *
 * @param rx_thd valid range is 2~256.
 */
void LL_SPIM_RX_FIFO_Threshold_Set(uint8_t rx_thd)
{
    spim_rft_setf(rx_thd);
}

/**
 * @brief Set TX and RX FIFO threshold.
 *
 * @param tx_thd
 * @param rx_thd
 */
void LL_SPIM_FIFO_Threshold_Set(uint8_t tx_thd, uint8_t rx_thd)
{
    spim_tft_setf(tx_thd);
    spim_rft_setf(rx_thd);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////   TXFLR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Transmit FIFO Level. Contains the number of valid data entries in the TX FIFO.
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Current_TxFIFO_Level(void)
{
    return spim_txtfl_getf();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////   RXFLR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Receive FIFO Level. Contains the number of valid data entries in the RX FIFO.
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Current_RxFIFO_Level(void)
{
    return spim_rxtfl_getf();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////    SR    ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Status Register. Contains the following status:
 * 0. Busy, indicates that a serial transfer is in progress
 * 1. tfnf, Transmit FIFO Not Full
 * 2. tfe, Transmit FIFO Empty
 * 3. rfne, Receive FIFO Not Empty
 * 4. rff, Receive FIFO Full
 * 5. txe, Transmission Error
 * 6. dcol, Data Collision Error
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Normal_Status(void)
{
    return spim_sr_get();
}

/**
 * @brief Is SPIM Data collision?
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Is_DataColError(void)
{
    return spim_dcol_getf();
}

/**
 * @brief Is SPIM Transmission Error?
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Is_TxError(void)
{
    return spim_txe_getf();
}

/**
 * @brief Is SPIM Rx FIFO full?
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Is_RxFIFOFull(void)
{
    return spim_rff_getf();
}

/**
 * @brief Is SPIM Rx FIFO not empty?
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Is_RxFIFONotEmpty(void)
{
    return spim_rfne_getf();
}

/**
 * @brief Is SPIM Tx FIFO empty?
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Is_TxFIFOEmpty(void)
{
    return spim_tfe_getf();
}

/**
 * @brief Is SPIM Tx FIFO not full?
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Is_TxFIFONotFull(void)
{
    return spim_tfnf_getf();
}

/**
 * @brief Is SPIM busy?
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_Is_Busy(void)
{
    return spim_busy_getf();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////   IMR    ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Each bit represents an interrupt mask, write 0 to disable interrupt.
 *
 * @param mask
 * 0 -- masked (disabled).
 * 1 -- not masked (enabled).
 */
void LL_SPIM_IntMask_Set(uint8_t mask)
{
    spim_imr_set(mask);
}

uint8_t LL_SPIM_IntMask_Get(void)
{
    return spim_imr_get();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////   ISR    ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Interrupt Status after masked.
 *
 * @return uint8_t one bit for one interrupt.
 * bit5 -- mstis, Multi-Master Contention Interrupt Status
 * bit4 -- rxfis, Receive FIFO Full Interrupt Status
 * bit3 -- rxois, Receive FIFO Overflow Interrupt Status
 * bit2 -- rxuis, Receive FIFO Underflow Interrupt Status
 * bit1 -- txois, Transmit FIFO Overflow Interrupt Status
 * bit0 -- txeis, Transmit FIFO Empty Interrupt Status
 */
uint8_t LL_SPIM_Int_Status(void)
{
    return spim_isr_get();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////   RISR    ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Return Raw Interrupt Status.
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_RawInt_Status(void)
{
    return spim_risr_get();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  TXOICR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Clear Transmit FIFO Overflow Interrupt, and return the interrupt status.
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_IntClr_TxFIFOOverflow(void)
{
    return spim_txoicr_getf();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  RXOICR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Clear Receive FIFO Overflow Interrupt and return the interrupt status.
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_IntClr_RxFIFOOverflow(void)
{
    return spim_rxoicr_getf();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  RXUICR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Clear Receive FIFO Underflow Interrupt and return the interrupt status.
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_IntClr_RxFIFOUnderflow(void)
{
    return spim_rxuicr_getf();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  MSTICR  ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Clear Multi-Master Contention Interrupt and return the interrupt status.
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_IntClr_MultiMaster(void)
{
    return spim_msticr_getf();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////    ICR   ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Clear Interrupts (txo, rxu, rxo, mst).
 *
 * @return uint8_t
 */
uint8_t LL_SPIM_IntClr_All(void)
{
    return spim_icr_getf();
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  DMACR   ////////////////////////////////////
//////////////////////// DMA Tx, Rx enable/disabel  ///////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Enable/Disable Transmit DMA.
 *
 * @param en 1--enable; 0--disable.
 */
void LL_SPIM_TxDMA_Enable(uint8_t en)
{
    spim_tdmae_setf(en);
}

/**
 * @brief Enable/Disable Receive DMA.
 *
 * @param en 1--enable; 0--disable.
 */
void LL_SPIM_RxDMA_Enable(uint8_t en)
{
    spim_rdmae_setf(en);
}

/**
 * @brief SPIM DMA Tx, Rx enable/disable.
 *
 * @param tx_en 0 -- disable; 1 -- enable.
 * @param rx_en 0 -- disable; 1 -- enable.
 */
void LL_SPIM_DMA_Ctrl(uint8_t tx_en, uint8_t rx_en)
{
    spim_tdmae_setf(tx_en);
    spim_rdmae_setf(rx_en);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  DMATDLR ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief SPIM DMA Transmit Data Level.
 *
 * @param tx_lvl
 */
void LL_SPIM_DMA_TxLvl_Set(uint8_t tx_lvl)
{
    spim_dmatdlr_set(tx_lvl);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  DMARDLR ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief SPIM DMA Receive Data Level.
 *
 * @param rx_lvl
 */
void LL_SPIM_DMA_RxLvl_Set(uint8_t rx_lvl)
{
    spim_dmardlr_set(rx_lvl);
}

/**
 * @brief SPIM DMA Tx, Rx Data Level set.
 *
 * @param tx_lvl
 * @param rx_lvl
 */
void LL_SPIM_DAM_DataLvl_Set(uint8_t tx_lvl, uint8_t rx_lvl)
{
    spim_dmatdlr_set(tx_lvl);
    spim_dmardlr_set(rx_lvl);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////    DR    ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Write to Data Register.
 *
 * @param data
 */
void LL_SPIM_DataReg_Set(uint32_t data)
{
    spim_dr_set(data);
}

/**
 * @brief Get data from Data Register.
 *
 * @return uint32_t
 */
uint32_t LL_SPIM_DataReg_Get(void)
{
    return spim_dr_get();
}

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////  RXSAMPLE_DLY  /////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Set SPIM Rx sample delay.
 *
 * @param dly
 */
void LL_SPIM_RxSampleDly_Set(uint8_t dly)
{
    spim_rsd_setf(dly);
}
