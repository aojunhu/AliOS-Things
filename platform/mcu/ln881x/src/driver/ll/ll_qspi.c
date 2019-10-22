#include "include/reg_qspi.h"
#include "driver/ll/ll_qspi.h"
#include "driver/hal/spi_type.h"
#include "types.h"

#pragma push
#pragma O2

/*********************************  CTRLR0  **********************************/

/**
 * @brief Control the serial data transfer. It is impossible to write to this
 * register when the QSPI controller is enabled.
 *
 * @param spi_frf SPI Frame Format. @see SPI_Format
 * @param dfs Data Frame Size in 32-bit mode. @see SPI_DataFrame_Size
 * @param cfs Control Frame Size. Selects the length of the control word for
 *          the Microwire frame format. @see SPI_Controlframe_Size
 * // FIXME: srl, just use for testing, should be removed here.
 * @param srl Shift Register Loop. Always set to zero.
 * @param slv_oe Slave Output Enable. Only used when in serial-slave device.
 * @param tmod Transfer Mode. Selects the mode of transfer for serial comunication.
 *          Only indicates whether the receive or transmit data are valid. @see SPI_Transmit_Mode
 * @param scpol Serial Clock Polarity. Valid when the frame format (FRF) is set
 *          to Motorola SPI. @see SPI_Clock_Polarity.
 * @param scph Serial Clock Phase. Valid when the frame format (FRF) is set to
 *          Motorola SPI. @see SPI_Clock_Phase.
 * @param frf Frame Format. Selects which serial protocol transfers the data.
 *          @see SPI_Protocol_Type.
 */
void LL_QSPI_CtrlR0Set( uint8_t spi_frf, uint8_t dfs, uint8_t cfs,
                        uint8_t srl, uint8_t slv_oe, uint8_t tmod,
                        uint8_t scpol, uint8_t scph, uint8_t frf)
{
    qspi_ctrlr0_pack(spi_frf, dfs, cfs, srl, slv_oe, tmod, scpol, scph, frf);
}

/*********************************  CTRLR1  **********************************/

/**
 * @brief Control register 1 controls the end of serial transfers when in
 * receive-only mode.
 *
 * @param ndf Number of Data Frames. When TMOD = 10 or 11, this register field
 * sets the number of data frames to be continuously received.
 */
void LL_QSPI_CtrlR1Set(uint16_t ndf)
{
    qspi_ctrlr1_pack(ndf);
}

/**
 * @brief
 *
 * @param ndf
 */
void LL_QSPI_NumOfDataFrameSet(uint16_t ndf)
{
    qspi_ndf_setf(ndf);
}

uint16_t LL_QSPI_NumOfDataFrameGet(void)
{
    return qspi_ndf_getf();
}

/*********************************  SSIENR  **********************************/

/**
 * @brief SSI Enable.
 * When disabled, all serial transfers are halted immediately. Transmit and receive
 * FIFO buffers are cleared when the device is disabled. It is impossible to
 * program some control registers when enabled.
 *
 * @param enable 0 for disable; 1 for enable.
 */
void LL_QSPI_Enable(uint8_t enable)
{
    if (enable) {
        qspi_ssi_en_setf(1);
    } else {
        qspi_ssi_en_setf(0);
    }
}

/*********************************   MWCR  ***********************************/

/**
 * @brief Microwire Control.
 * Controls the direction of the data word for the half-duplex Microwire serial protocol.
 * 
 * @param mhs Microwire Handshaking. 0 -- handshaking disabled; 1 -- handshaking enabled.
 * @param mod Microwire Control. 0 -- receive data word; 1 -- send data word.
 * @param mwmod Microwire Transfer Mode. 0 -- non-sequential; 1 -- sequential transfer.
 */
void LL_QSPI_MicrowireCtrl(uint8_t mhs, uint8_t mod, uint8_t mwmod)
{
    qspi_mwcr_pack(mhs, mod, mwmod);
}

/*********************************   SER   ***********************************/

/**
 * @brief Slave Select Enable Flag.
 *
 * @param slave_index 1bit for one slave; 0 -- not selected.
 */
void LL_QSPI_SlaveSelect(uint8_t slave_index)
{
    qspi_ser_setf(slave_index);
}

/*********************************  BAUDR  ***********************************/

/**
 * @brief SSI Clock Divider.
 *
 * @param sckdiv
 */
void LL_QSPI_SckDivSet(uint16_t sckdiv)
{
    qspi_sckdv_setf(sckdiv);
}

/********************************  TXFTLR  ***********************************/

/**
 * @brief Transmit FIFO Threshold Level
 * Controls the level of entries (or below) at which the transmit FIFO controller
 * triggers an interrupt. The FIFO depth is configurable in the range 2~256.
 * 
 * @param lvl 
 */
void LL_QSPI_TxFIFOThresholdLvlSet(uint8_t lvl)
{
    qspi_txftlr_set(lvl);
}

/********************************  RXFTLR  ***********************************/

/**
 * @brief Receive FIFO Threshold Level
 * Controls the level of entries (or above) at which the recieve FIFO controller
 * triggers an interrupt. The FIFO depth is configurable in the range 2~256.
 * 
 * @param lvl 
 */
void LL_QSPI_RxFIFOThresholdLvlSet(uint8_t lvl)
{
    qspi_rxftlr_set(lvl);
}


/********************************   TXFLR (RO) *******************************/

/**
 * @brief Transmit FIFO Level
 * 
 * @return uint8_t 
 */
uint8_t LL_QSPI_TxFIFOLvlGet(void)
{
    return (uint8_t)qspi_txflr_get();
}

/********************************   RXFLR (RO) *******************************/

/**
 * @brief Receive FIFO Level
 * 
 * @return uint8_t 
 */
uint8_t LL_QSPI_RxFIFOLvlGet(void)
{
    return (uint8_t)qspi_rxflr_get();
}

/*********************************    SR   ***********************************/

/**
 * @brief Indicates the current transfer status, FIFO status, and any transmission
 * or reception errors that may have occured. The status register may be read at
 * any time. None of the bits in this register request an interrupt.
 *
 * @return uint8_t
 */
uint8_t LL_QSPI_Status(void)
{
    return (uint8_t)qspi_sr_get();
}

uint8_t LL_QSPI_IsDataCollision(void)
{
    return qspi_dcol_getf();
}

uint8_t LL_QSPI_IsTxError(void)
{
    return qspi_txe_getf();
}

uint8_t LL_QSPI_IsRxFIFOFull(void)
{
    return qspi_rff_getf();
}

uint8_t LL_QSPI_IsRxFIFONotEmpty(void)
{
    return qspi_rfne_getf();
}

uint8_t LL_QSPI_IsTxFIFOEmpty(void)
{
    return qspi_tfe_getf();
}

uint8_t LL_QSPI_IsTxFIFONotFull(void)
{
    return qspi_tfnf_getf();
}

uint8_t LL_QSPI_IsBusy(void)
{
    return qspi_busy_getf();
}

/*********************************   IMR   ***********************************/

/**
 * @brief Disable all interruts.
 *
 */
void LL_QSPI_IntMaskAll(void)
{
    qspi_imr_set(0);
}

/**
 * @brief Enable all interrupts.
 * 
 */
void LL_QSPI_IntUnMaskAll(void)
{
    qspi_imr_set(0xFF);
}

/**
 * @brief Disable particular interrupt.
 * 
 * @param intMaskBit @see LL_QSPI_INT_MASK_MSTIM
 */
void LL_QSPI_IntMask(uint8_t intMaskBit)
{
    if (intMaskBit & LL_QSPI_INT_MASK_MSTIM)
        qspi_mstim_setf(0);
    if (intMaskBit & LL_QSPI_INT_MASK_RXFIM)
        qspi_rxfim_setf(0);
    if (intMaskBit & LL_QSPI_INT_MASK_RXOIM)
        qspi_rxoim_setf(0);
    if (intMaskBit & LL_QSPI_INT_MASK_RXUIM)
        qspi_rxuim_setf(0);
    if (intMaskBit & LL_QSPI_INT_MASK_TXOIM)
        qspi_txoim_setf(0);
    if (intMaskBit & LL_QSPI_INT_MASK_TXEIM)
        qspi_txeim_setf(0);
}

/**
 * @brief Enable particular interrupts.
 * 
 * @param intMaskBit @see LL_QSPI_INT_MASK_MSTIM
 */
void LL_QSPI_IntUnMask(uint8_t intMaskBit)
{
    if (intMaskBit & LL_QSPI_INT_MASK_MSTIM)
        qspi_mstim_setf(1);
    if (intMaskBit & LL_QSPI_INT_MASK_RXFIM)
        qspi_rxfim_setf(1);
    if (intMaskBit & LL_QSPI_INT_MASK_RXOIM)
        qspi_rxoim_setf(1);
    if (intMaskBit & LL_QSPI_INT_MASK_RXUIM)
        qspi_rxuim_setf(1);
    if (intMaskBit & LL_QSPI_INT_MASK_TXOIM)
        qspi_txoim_setf(1);
    if (intMaskBit & LL_QSPI_INT_MASK_TXEIM)
        qspi_txeim_setf(1);
}

/*********************************   ISR   ***********************************/

/**
 * @brief Get Interrupt status.
 *
 * @return uint8_t interrupt status after they have been masked.
 */
uint8_t LL_QSPI_IntStatus(void)
{
    return (uint8_t)qspi_isr_get();
}

/*********************************   RISR  ***********************************/

/**
 * @brief Get raw interrupt status.
 *
 * @return uint8_t raw interrupts prior to masking.
 */
uint8_t LL_QSPI_RawIntStatus(void)
{
    return (uint8_t)qspi_risr_get();
}

/*********************************  TXOCIR ***********************************/

/**
 * @brief Clear Transmit FIFO Overflow Interrupt.
 *
 */
void LL_QSPI_IntClearTxFIFOOverflow(void)
{
    qspi_txoicr_get();
}

/*********************************  RXOCIR ***********************************/

/**
 * @brief Clear Receive FIFO Overflow Interrupt.
 *
 */
void LL_QSPI_IntClearRxFIFOOverflow(void)
{
    qspi_rxoicr_get();
}

/*********************************  RXUICR ***********************************/

/**
 * @brief Clear Receive FIFO Underflow Interrupt.
 *
 */
void LL_QSPI_IntClearRxFIFOUnderflow(void)
{
    qspi_rxuicr_get();
}

/*********************************  MSTICR ***********************************/

/**
 * @brief Clear Multi-Master Contention Interrupt.
 *
 */
void LL_QSPI_IntClearMultiMasterContention(void)
{
    qspi_msticr_get();
}

/*********************************   ICR   ***********************************/

/**
 * @brief Clear Interrupts.
 *
 */
void LL_QSPI_IntClearAll(void)
{
    qspi_icr_get();
}

/*********************************  DMACR  ***********************************/

/**
 * @brief DMA Control
 *
 * @param tdmae Transmit DMA Enable
 * @param rdmae Receive DMA Enable
 */
void LL_QSPI_DMACtrl(uint8_t tdmae, uint8_t rdmae)
{
    qspi_dmacr_pack(tdmae, rdmae);
}

/*******************************    DMATDLR  *********************************/

/**
 * @brief DMA Transmit Data Level.
 *
 * @param level
 */
void LL_QSPI_DMATxDataLvlSet(uint8_t level)
{
    qspi_dmatdl_setf(level);
}

/*******************************    DMARDLR  *********************************/

/**
 * @brief DMA Receive Data Level.
 * 
 * @param level 
 */
void LL_QSPI_DMARxDataLvlSet(uint8_t level)
{
    qspi_dmardl_setf(level);
}

/**********************************    DR  ***********************************/

/**
 * @brief Data Register
 *
 * @return uint32_t
 */
uint32_t LL_QSPI_DataRegGet(void)
{
    return qspi_dr_get();
}

void LL_QSPI_DataRegSet(uint32_t val)
{
    qspi_dr_set(val);
}

/**
 * @brief Return DR register address.
 * 
 * @return uint32_t* address of DR register.
 */
uint32_t * LL_QSPI_DataRegAddrGet(void)
{
    return (uint32_t *)&(hwp_qspi->dr);
}

/*******************************   DR_REVERSED   ******************************/

/**
 * @brief Get address of DR_Reversed Register.
 *
 * @return uint32_t*
 */
uint32_t * LL_QSPI_DRReversedAddrGet(void)
{
    return (uint32_t *)&(hwp_qspi->dr_reversed);
}


void LL_QSPI_DRReversedSet(uint32_t val)
{
    qspi_dr_reversed_setf(val);
}

uint32_t LL_QSPI_DRReversedGet(void)
{
    return qspi_dr_reversed_getf();
}

/*******************************   RXSAMPLE_DLY  ******************************/

/**
 * @brief Set Rx Sample Delay.
 *
 * @param rsd
 */
void LL_QSPI_RxSampleDlySet(uint8_t rsd)
{
    qspi_rsd_setf(rsd);
}

/*******************************    SPI_CTRLR0   ******************************/

/**
 * @brief Control the serial data transfer in SPI mode of operation.
 *
 * @param wait_cycles defines the wait cycles in dual/quad mode between control
 *          frames transmit and data reception.
 * @param inst_len Dual/Quad mode instruction length in bits. @see LL_QSPI_INST_LEN_0_BIT
 * @param addr_len defines length of address to be transmitted. @see LL_QSPI_ADDR_LEN_0_BIT
 * @param trans_type Address and instruction transfer format.
 */
void LL_QSPI_SPICtrl(uint8_t wait_cycles, uint8_t inst_len, uint8_t addr_len, uint8_t trans_type)
{
    qspi_spi_ctrlr0_pack(wait_cycles, inst_len, addr_len, trans_type);
}

#pragma pop
