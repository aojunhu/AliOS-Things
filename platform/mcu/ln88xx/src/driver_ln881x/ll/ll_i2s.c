#include "types.h"
#include "reg_i2s.h"
#include "ll/ll_i2s.h"

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: IER
//// describe: global enable/disable I2S module
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief A disable on this bit overrides any other block or channel enables
 * and flushes all FIFOs.
 *
 * @param en 1 -- enable; 0 -- disable.
 */
void LL_I2S_Enable(uint8_t en)
{
    i2s_ier_setf(en > 0);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: IRER
//// describe: Receiver Block Enable Register
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief A disable on this bit overrides any individual receive channel enables.
 *
 * @param en 1 -- enable receiver; 0 -- disable.
 */
void LL_I2S_RxBlock_Enable(uint8_t en)
{
    i2s_irer_setf(en > 0);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: ITER
//// describe: Transmitter Block Enable Register
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief A disable on this bit overrides any individual transmit channel enables.
 *
 * @param en 1 -- enable transmitter; 0 -- disable.
 */
void LL_I2S_TxBlock_Enable(uint8_t en)
{
    i2s_iter_setf(en > 0);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: CER
//// describe: Clock Enable Register, which is only relevant in master mode.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: CCR
//// describe: Clock Configuration Register, valid in master mode.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RXFFR
//// describe: Receiver Block FIFO Reset Register, write 1 to flush all RX FIFO
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: TXFFR
//// describe: Transmitter Block FIFO Reset Register, write 1 to flash TX FIFO
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: LRBRx
//// describe: Left Receive Buffer Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Put a data in the Left Receive Buffer Register.
 *
 * @param chan
 * @param data
 */
void LL_I2S_LeftRxBuf_Set(I2S_Chan_Enum_t chan, uint32_t data)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_lrbr_setf(data);
            break;
        case I2S_CHAN_1:
            i2s_ch1_lrbr_setf(data);
            break;
        default:
            break;
    }
}

/**
 * @brief Get a data from the Left Receive Buffer Register.
 *
 * @param chan
 * @return uint32_t
 */
uint32_t LL_I2S_LeftRxBuf_Get(I2S_Chan_Enum_t chan)
{
    uint32_t data = 0;
    switch (chan)
    {
        case I2S_CHAN_0:
            data = i2s_ch0_lrbr_getf();
            break;
        case I2S_CHAN_1:
            data = i2s_ch1_lrbr_getf();
            break;
        default:
            break;
    }
    return data;
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: LTHRx
//// describe: Left Transmit Holding Register.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RRBRx
//// describe: Right Receive Buffer Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Put a data in the Right Receive Buffer Register.
 *
 * @param chan
 * @param data
 */
void LL_I2S_RightRxBuf_Set(I2S_Chan_Enum_t chan, uint32_t data)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_rrbr_setf(data);
            break;
        case I2S_CHAN_1:
            i2s_ch1_rrbr_setf(data);
            break;
        default:
            break;
    }
}

/**
 * @brief Get a data from the Rigt Receive Buffer Register.
 *
 * @param chan
 * @return uint32_t
 */
uint32_t LL_I2S_RightRxBuf_Get(I2S_Chan_Enum_t chan)
{
    uint32_t data = 0;
    switch (chan)
    {
        case I2S_CHAN_0:
            data = i2s_ch0_rrbr_getf();
            break;
        case I2S_CHAN_1:
            data = i2s_ch1_rrbr_getf();
            break;
        default:
            break;
    }
    return data;
}
///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RTHRx
//// describe: Right Transmit Holding Register.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RERx
//// describe: Receive Enable Register
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief To enable/disable a receive channel, independently of all other channels.
 *
 * @param chan
 * @param en 1 -- enable; 0 -- disable.
 */
void LL_I2S_Rx_Enable(I2S_Chan_Enum_t chan, uint8_t en)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_rer_setf(en);
            break;
        case I2S_CHAN_1:
            i2s_ch1_rer_setf(en);
            break;
        default:
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: TERx
//// describe: Transmit Enable Register
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Enable/disable a transmit channel, independently of all other channels.
 * A global disable of IER[0] or Transmitter block ITER[0] overrides this value.
 *
 * @param chan
 * @param en 1 -- enable; 0 -- disable.
 */
void LL_I2S_TX_Enable(I2S_Chan_Enum_t chan, uint8_t en)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_ter_setf(en);
            break;
        case I2S_CHAN_1:
            i2s_ch1_ter_setf(en);
            break;
        default:
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RCRx
//// describe: Receive Configuration Register
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief To program the desired data resolution of the receiver and enables
 * the LSB of the incoming left (or right) word to be placed in the LSB of the
 * LRBRx (or RRBRx) register.
 *
 * @param chan
 * @param resolution
 */
void LL_I2S_RxResolution_Set(I2S_Chan_Enum_t chan, uint8_t resolution)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_rcr_setf(resolution);
            break;
        case I2S_CHAN_1:
            i2s_ch1_rcr_setf(resolution);
            break;
        default:
            break;
    }
}

void LL_I2S_RxResolution_Get(I2S_Chan_Enum_t chan, uint8_t *resolution)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            *resolution = i2s_ch0_rcr_getf();
            break;
        case I2S_CHAN_1:
            *resolution = i2s_ch1_rcr_getf();
            break;
        default:
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: TCRx
//// describe: Transmit Configuration Register
///////////////////////////////////////////////////////////////////////////////

void LL_I2S_TxResolution_Set(I2S_Chan_Enum_t chan, uint8_t resolution)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_tcr_setf(resolution);
            break;
        case I2S_CHAN_1:
            i2s_ch1_tcr_setf(resolution);
            break;
        default:
            break;
    }
}

void LL_I2S_TxResolution_Get(I2S_Chan_Enum_t chan, uint8_t *resolution)
{
    switch (chan) {
        case I2S_CHAN_0:
            *resolution = i2s_ch0_tcr_getf();
            break;
        case I2S_CHAN_1:
            *resolution = i2s_ch1_tcr_getf();
            break;
        default:
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: ISRx
//// describe: Interrupt Status Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Interrupt status of one channel.
 *
 * @param chan
 * @return uint8_t
 */
uint8_t LL_I2S_IntStatus(I2S_Chan_Enum_t chan)
{
    uint8_t status = 0;
    switch (chan)
    {
        case I2S_CHAN_0:
            status = i2s_ch0_isr_getf();
            break;
        case I2S_CHAN_1:
            status = i2s_ch1_isr_getf();
            break;
        default:
            break;
    }
    return status;
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: IMRx
//// describe: Interrupt Mask Register
///////////////////////////////////////////////////////////////////////////////

void LL_I2S_IntMask_Set(I2S_Chan_Enum_t chan, uint8_t mask_map)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_imr_setf(mask_map);
            break;
        case I2S_CHAN_1:
            i2s_ch1_imr_setf(mask_map);
            break;
        default:
            break;
    }
}

uint8_t LL_I2S_IntMask_Get(I2S_Chan_Enum_t chan)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            return i2s_ch0_imr_getf();
        case I2S_CHAN_1:
            return i2s_ch1_imr_getf();
        default:
            break;
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RORx
//// describe: Receive Overrun Register.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_I2S_IntClr_RxOverrun(I2S_Chan_Enum_t chan)
{
    uint8_t val = 0;
    switch (chan)
    {
        case I2S_CHAN_0:
            val = i2s_ch0_ror_getf();
            break;
        case I2S_CHAN_1:
            val = i2s_ch1_ror_getf();
            break;
        default:
            break;
    }
    return val;
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: TORx
//// describe: Transmit Overrun Register.
///////////////////////////////////////////////////////////////////////////////

uint8_t LL_I2S_IntClr_TxOverrun(I2S_Chan_Enum_t chan)
{
    uint8_t val = 0;
    switch (chan)
    {
        case I2S_CHAN_0:
            val = i2s_ch0_tor_getf();
            break;
        case I2S_CHAN_1:
            val = i2s_ch1_tor_getf();
            break;
        default:
            break;
    }
    return val;
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RFCRx
//// describe: Receive FIFO Configuration Register
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief To set the trigger level in the RX FIFO at which the Received Data
 * Available interrupt is generated.
 *
 * @param chan
 * @param level
 */
void LL_I2S_RxFIFO_TrigLvl_Set(I2S_Chan_Enum_t chan, uint8_t level)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_rfcr_setf(level-1);
            break;
        case I2S_CHAN_1:
            i2s_ch1_rfcr_setf(level-1);
            break;
        default:
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: TFCRx
//// describe: Transmit FIFO Configuration Register
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief To set the trigger level in the TX FIFO at which the Empty Threshold
 * Reached Interrupt is generated.
 *
 * @param chan
 * @param level
 */
void LL_I2S_TxFIFO_TrigLvl_Set(I2S_Chan_Enum_t chan, uint8_t level)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_tfcr_setf(level-1);
            break;
        case I2S_CHAN_1:
            i2s_ch1_tfcr_setf(level-1);
            break;
        default:
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RFFx
//// describe: Receive FIFO Flush Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Receive Channel FIFO Reset.
 * Rx channel or block must be disabled prior to writing to this bit.
 *
 * @param chan
 */
void LL_I2S_RxFIFO_Flush(I2S_Chan_Enum_t chan)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_rff_set(1);
            break;
        case I2S_CHAN_1:
            i2s_ch1_rff_set(1);
            break;
        default:
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: TFFx
//// describe: Transmit FIFO Flush Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Transmit Channel FIFO Reset.
 * Tx channel or block must be disabled prior to writing to this bit.
 *
 * @param chan
 */
void LL_I2S_TxFIFO_Flush(I2S_Chan_Enum_t chan)
{
    switch (chan)
    {
        case I2S_CHAN_0:
            i2s_ch0_tff_set(1);
            break;
        case I2S_CHAN_1:
            i2s_ch1_tff_set(1);
            break;
        default:
            break;
    }
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RXDMA
//// describe: Receiver Block DMA Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief If you enabled chan-0 and chan-1, order of returned read data:
 * 1. ch0 - left data
 * 2. ch0 - right data
 * 3. ch1 - left data
 * 4. ch1 - right data
 *
 * 5. ch0 - left data
 * 6. ch0 - right data
 * 7. ch1 - left data
 * 8. ch1 - right data
 *
 * @return uint32_t
 */
uint32_t LL_I2S_RxDMA_Get(void)
{
    return i2s_rxdma_get();
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RRXDMA
//// describe: Reset Receiver Block DMA Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Reset Receiver Block DMA.
 *
 */
void LL_I2S_Reset_RxDMA(void)
{
    i2s_rrxdma_setf(1);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: TXDMA
//// describe: Transmitter Block DMA Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief To cycle repeatedly through the enabled Transmit channels (from lowest
 * numbered to highest) to allow writing stereo data pairs.
 *
 * @param data
 */
void LL_I2S_TxDMA_Set(uint32_t data)
{
    i2s_txdma_set(data);
}

///////////////////////////////////////////////////////////////////////////////
//// Reg Name: RTXDMA
//// describe: Reset Transmitter Block DMA Register.
///////////////////////////////////////////////////////////////////////////////

/**
 * @brief Reset Transmitter Block DMA.
 *
 */
void LL_I2S_Reset_TxDMA(void)
{
    i2s_rtxdma_setf(1);
}
