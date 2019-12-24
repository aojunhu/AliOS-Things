#include "reg_uart.h"
#include "ln88xx.h"
#include "ll/ll_uart.h"


uint8_t LL_UART_ReadChar(UartInstance *UARTx)
{
    // FIXME: polling in HAL not in LL.
    // while(uart_dr_getf(UARTx) == 0);        // Polling, valid only if DR in LSR is set.
    return uart_rbr_lsb_8bits_getf(UARTx);
}

void LL_UART_WriteChar(UartInstance *UARTx, uint8_t ch)
{
    // FIXME: do the right logic in HAL, do the basic register in LL, do not implement logic in LL.
    // while(uart_tfnf_getf((T_HWP_UART_T *)UARTx) == 0);
	uart_thr_set(UARTx, ch);
}

/********************************  UART Enable  **************************************/
void LL_UART_En(UartInstance *UARTx, uint8_t value)
{
    uart_uart_en( UARTx, value );
}

/********************************  DLH/DLL/DLF  **************************************/
void LL_UART_DLL_Set(UartInstance *UARTx, uint8_t value)
{
    uart_dll_set( UARTx, value );
}

void LL_UART_DLH_Set(UartInstance *UARTx, uint8_t value)
{
    uart_dlh_set( UARTx, value );
}

void LL_UART_DLF_Set(UartInstance *UARTx, uint8_t value)
{
    uart_dlf_set( UARTx, value );
}

/********************************  IER  **************************************/
void LL_UART_IT_Enable_ReceivedDataAvailable(UartInstance *UARTx, bool enable)
{
    // ERBFI --> Received Data Available Interrupt;
    //       --> Character Timeout Interrupt
    uart_erbfi_setf(UARTx, enable);
}

void LL_UART_IT_Enable_TransmitHoldingRegisterEmpty(UartInstance *UARTx, bool enable)
{
    // ETBEI --> Transmit Holding Register Empty Interrupt.
    uart_etbei_setf(UARTx, enable);
}

void LL_UART_IT_Enable_ReceiverLineStatus(UartInstance *UARTx, bool enable)
{
    uart_elsi_setf(UARTx, enable);
}

void LL_UART_IT_Enable_ModemStatus(UartInstance *UARTx, bool enable)
{
    uart_edssi_setf(UARTx, enable);
}

void LL_UART_IT_Enable_ProgramTransmitHoldingRegisterEmpty(UartInstance *UARTx, bool enable)
{
    uart_ptime_setf(UARTx, enable);
}

void LL_UART_INT_Config(UartInstance *UARTx, uint8_t irq_map)
{
    uart_ier_set(UARTx, irq_map);
}

/********************************  IIR  **************************************/
uint8_t LL_UART_GetInterruptId(UartInstance *UARTx)
{
	return uart_iid_getf(UARTx);
}

bool LL_UART_IsFIFOEnable(UartInstance *UARTx)
{
	return uart_fifose_getf(UARTx) ? true : false;
}


//FCR (write only):FIFO Control Reg
/* 1、RCVR Trigger. 
 *  This is used to select the trigger level in the receiver FIFO at which the Received Data Available Interrupt is generated. 
 *  In auto flow control mode, this trigger is used to determine when the rts_n signal is de-asserted only when RTC_FCT is disabled. 
 *  It also determines when the dma_rx_req_n signal is asserted in certain modes of operation. 
 *  00 – 1 character in the FIFO
 *  01 – FIFO 1/4 full
 *  10 – FIFO 1/2 full
 *  11 – FIFO 2 less than full
 */


/* 2、TX Empty Trigger. Writes have no effect when THRE_MODE_USER = Disabled. 
 *  This is used to select the empty threshold level at which the THRE Interrupts are generated when the mode is active. 
 *  It also determines when the dma_tx_req_n signal is asserted when in certain modes of operation.The following trigger levels are supported:
 *  00 – FIFO empty
 *  01 – 2 characters in the FIFO
 *  10 – FIFO 1/4 full
 *  11 – FIFO 1/2 full
 */
 
/* 3、DMA Mode. 
 *  This determines the DMA signalling mode used for the dma_tx_req_n and dma_rx_req_n output signals when additional DMA handshaking signals are not selected (DMA_EXTRA = No).
 *  0 – mode 0
 *  1 – mode 1
 */
 
/* 4、XMIT FIFO Reset. This resets the control portion of the transmit FIFO and treats the FIFO as empty. 
 *  This also de-asserts the DMA TX request and single signals when additional DMA handshaking signals are selected (DMA_EXTRA = YES).
 *  Note that this bit is 'self-clearing'. It is not necessary to clear this bit.
 */

/* 5、RCVR FIFO Reset. This resets the control portion of the receive FIFO and treats the FIFO as empty. 
 *  This also de-asserts the DMA RX request and single signals when additional DMA handshaking signals are selected (DMA_EXTRA = YES).
 *  Note that this bit is 'self-clearing'. It is not necessary to clear this bit.
 */

/* 6、FIFO Enable. This enables/disables the transmit (XMIT) and receive (RCVR) FIFOs. 
 *  Whenever the value of this bit is changed both the XMIT and RCVR controller portion of FIFOs is reset.
 */


void LL_UART_FIFO_Control(UartInstance *UARTx, uint8_t rxLvl, uint8_t txLvl, uint8_t dma_mode)
{
    uart_fcr_pack(UARTx, rxLvl, txLvl, dma_mode, 0, 0, 1);
}

void LL_UART_FIFO_Set_RX_TrigLvl(UartInstance *UARTx, uint8_t rxLvl)
{
    uart_fcr_rcvr_triglvl(UARTx, rxLvl);
}

void LL_UART_FIFO_Set_TX_Empty_TrigLvl(UartInstance *UARTx, uint8_t txLvl)
{
    uart_fcr_tx_empty_triglvl(UARTx, txLvl);
}


// FIXME: Will this take effect by write the single bit of FCR register?
void LL_UART_FIFO_Enable(UartInstance *UARTx, bool enable)
{
    uart_fcr_fifo_enable(UARTx, enable);
}

void LL_UART_RX_FIFO_Reset(UartInstance *UARTx)
{
    uart_fcr_rfifo_reset(UARTx);
}

void LL_UART_TX_FIFO_Reset(UartInstance *UARTx)
{
    uart_fcr_xfifo_reset(UARTx);
}

//LCR (read/write):Line Control Reg
/*******************************  LCR  *********************************/
bool LL_UART_DLAB_Set(UartInstance *UARTx, uint8_t value)
{
    if (LL_UART_IsUARTBusy(UARTx) == 0) { // only when BUSY == 0, then DLAB is writable.
        uart_dlab_setf(UARTx, value);
        return true;
    }
    return false;
}

void LL_UART_Parity_Enable(UartInstance *UARTx, bool enable)
{
    uart_pen_setf(UARTx, enable);
}

void LL_UART_Parity_Set_EvenOdd(UartInstance *UARTx, uint8_t parity)
{
    uart_eps_setf(UARTx, parity);
}

void LL_UART_Stopbits_Set(UartInstance *UARTx, uint8_t stopbit)
{
    uart_stop_setf(UARTx, stopbit);
}

void LL_UART_DataLenth_Set(UartInstance *UARTx, uint8_t length)
{
    uart_dls_setf(UARTx, length);
}

void LL_UART_FlowControl_Set(UartInstance *UARTx, uint8_t control)
{
    if (UARTx == UART0) { // only UART0 supports hardware flow control
        uart_afce_setf(UARTx, control);
    }
}

//MCR (read/write):Modem Control Reg


// TODO: not used by now.
void LL_UART_Finish_Transfer(UartInstance *UARTx)
{
    uart_rts_setf(UARTx, 0);        // RTS_Signal_High
    while(uart_tfe_getf(UARTx) == 0);
}

//LSR(read only):Line Status Reg
uint32_t LL_UART_GetLineStatus(UartInstance *UARTx)
{
    return uart_lsr_get((T_HWP_UART_T *)UARTx);
}

bool LL_UART_isDataReady(UartInstance *UARTx)
{
    return uart_dr_getf(UARTx) ? true : false;
}

//MSR(read only):Modem Status Reg
uint8_t LL_UART_Get_Modem_Status(UartInstance *UARTx)
{
    return (uint8_t)uart_msr_get((T_HWP_UART_T *)UARTx);
}

//TODO: SCR 待跟数字组确认功能
//LPDLL(read/write):Low Power Divisor Latch (Low)
//LPDLH(read/write):Low Power Divisor Latch (High)
void LL_UART_Low_Power_Divisor_Set(UartInstance *UARTx, uint16_t divisor)
{
    if (UARTx == UART1) { // only UART0 support Low Power Divisor
        return;
    }

    // FIXME: see DLAB from PDF.
    if (uart_busy_getf(UARTx) == 0) { // only when BUSY == 0, then DLAB is writable.
        uart_dlab_setf(UARTx, 1);
        if ( uart_busy_getf(UARTx) == 0) {
            uart_lpdlh_setf(UARTx, divisor >> 8);
            uart_lpdll_setf(UARTx, divisor & 0xFF);
        }
        uart_dlab_setf(UARTx, 0);
    }
}

uint16_t LL_UART_Low_Power_Divisor_Get(UartInstance *UARTx)
{
    uint16_t divisor;

    if (UARTx == UART1) { // only UART0 support Low Power Divisor
        return 0;
    }

    if (uart_busy_getf(UARTx) == 0) { // only when BUSY == 0, then DLAB is writable.
        uart_dlab_setf(UARTx, 1);
        divisor = ( uart_lpdlh_getf(UARTx) << 8 ) | ( uart_lpdll_getf(UARTx));
        uart_dlab_setf(UARTx, 0);
    }
    return divisor;
}

//USR(read only):UART Status
uint8_t LL_UART_Normal_Status(UartInstance *UARTx)
{
    return uart_usr_get(UARTx);
}

bool LL_UART_IsRxFIFOFull(UartInstance *UARTx)
{
    return uart_rff_getf(UARTx) ? true : false;
}

bool LL_UART_IsRxFIFONotEmpty(UartInstance *UARTx)
{
    return uart_rfne_getf(UARTx) ? true : false;
}

bool LL_UART_IsTxFIFOEmpty(UartInstance *UARTx)
{
    return uart_tfe_getf(UARTx) ? true : false;
}

bool LL_UART_IsTxFIFONotFull(UartInstance *UARTx)
{
    return uart_tfnf_getf(UARTx) ? true : false;
}

bool LL_UART_IsUARTBusy(UartInstance *UARTx)
{
    return uart_busy_getf(UARTx) ? true : false;
}
uint8_t LL_UART_GetRxFIFOLevel(UartInstance *UARTx)
{
    return uart_rfl_getf(UARTx);
}

