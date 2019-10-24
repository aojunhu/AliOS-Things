/*
 * Copyright (C) 2015-2018 Alibaba Group Holding Limited
 */
#include <assert.h>
#include <k_api.h>
#include <aos/kernel.h>
#include "aos/hal/uart.h"
#include "board.h"

//mcu related included
#include "driver/hal/hal_syscon.h"
#include "driver/hal/hal_uart.h"


#define UART_FIFO_SIZE 256

typedef enum {
    HAL_UART_STATUS_CLOSED = 0,
    HAL_UART_STATUS_OPENED,
}hal_uart_status_enum_t;

typedef struct {
    PORT_UART_TYPE              uart_id;
    hal_uart_status_enum_t      status;
    aos_mutex_t                 tx_mutex;
    kbuf_queue_t                *bufque;
    UART_DevTypeDef             uart_hw;
} hal_uart_drv_t;

static hal_uart_drv_t _hal_uart_drv[PORT_UART_MAX_NUM];

static hal_uart_drv_t *hal_uart_get_drvdata(uart_dev_t *uart)
{
    assert(uart != NULL);
    return &_hal_uart_drv[uart->port];
}
static void uart0_rx_callback(uint8_t *ch)
{
    hal_uart_drv_t *pdrv = &_hal_uart_drv[PORT_UART_STD];
    krhino_buf_queue_send(pdrv->bufque, ch, 1);
}
static void uart1_rx_callback(uint8_t *ch)
{
    hal_uart_drv_t *pdrv = &_hal_uart_drv[PORT_UART_AT];
    krhino_buf_queue_send(pdrv->bufque, ch, 1);
}

/*
 * *****************************  Port IO Config  ******************************
 */
static void hal_uart_io_pin_request(uint8_t port_id)
{
    int en = 1;

    if(port_id == PORT_UART_STD) {
#if   defined (LN881x)
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART0_RX, GPIO_AF_IO_0, en);
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART0_TX, GPIO_AF_IO_1, en);
#elif defined (LN882x)
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART0_RX, GPIO_AF_IO_18, en); //LN882x: GPIO_A[8], FULL_MUX_18, PAD24 [rom_uart0 RX]
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART0_TX, GPIO_AF_IO_19, en); //LN882x: GPIO_A[9], FULL_MUX_19, PAD25 [rom_uart0 TX]
#else
#error Add your bord type!!!
#endif
    } else if(port_id == PORT_UART_AT) {
#if   defined (LN881x)
        // EVB V2 ????????
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART1_RX, GPIO_AF_IO_2, en);
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART1_TX, GPIO_AF_IO_4, en);
#elif defined (LN882x)
        //TODO:?????emo??‘??
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART1_RX, GPIO_AF_IO_15, en);//LN882x: GPIO_1[5], FULL_MUX_15, PAD21
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART1_TX, GPIO_AF_IO_16, en);//LN882x: GPIO_1[6], FULL_MUX_16, PAD22
#else
#error Add your bord type!!!
#endif
    }
}

static void hal_uart_io_pin_release(uint8_t port_id)
{
    int en = 0;

    if(port_id == PORT_UART_STD) {
#if   defined (LN881x)
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART0_RX, GPIO_AF_IO_0, en);
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART0_TX, GPIO_AF_IO_1, en);
#elif defined (LN882x)
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART0_RX, GPIO_AF_IO_18, en);//LN882x: GPIO_1[8], FULL_MUX_18, PAD24 [rom_uart0 RX]
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART0_TX, GPIO_AF_IO_19, en);//LN882x: GPIO_1[9], FULL_MUX_19, PAD25 [rom_uart0 TX]
#else
#error Add your bord type!!!
#endif
    } else if(port_id == PORT_UART_AT) {
#if   defined (LN881x)
        // EVB V2 ????????
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART1_RX, GPIO_AF_IO_2, en);
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART1_TX, GPIO_AF_IO_4, en);
#elif defined (LN882x)
        //TODO:?????emo??‘??
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART1_RX, GPIO_AF_IO_15, en);//LN882x: GPIO_1[5], FULL_MUX_15, PAD21
        HAL_SYSCON_FuncIOSet(GPIO_AF_UART1_TX, GPIO_AF_IO_16, en);//LN882x: GPIO_1[6], FULL_MUX_16, PAD22
#else
#error Add your bord type!!!
#endif
    }
}

int32_t hal_uart_init(uart_dev_t *uart)
{
    int32_t ret = -1;
    hal_uart_drv_t *pdrv = NULL;
    IRQn_Type uart_irq_num = UART0_IRQn;
    UART_DevTypeDef *uart_hw = NULL;
    UART_ConfigTypeDef *board_uart_param = NULL;
    kstat_t stat;

    assert(uart != NULL);
    pdrv = hal_uart_get_drvdata(uart);
    assert(pdrv != NULL);
    uart_hw = &(pdrv->uart_hw);
    assert(uart_hw != NULL);
    board_uart_param = &(uart_hw->Config);
    assert(board_uart_param != NULL);

    if (pdrv->status == HAL_UART_STATUS_CLOSED) {
        //set uart_hw default value
        if(uart->port == PORT_UART_STD) {
            uart_hw->Instance = UART0;
        }else if(uart->port == PORT_UART_AT) {
            uart_hw->Instance = UART1;
        }
        // convert uart parameters
        board_uart_param->BaudRate = uart->config.baud_rate;
        if (uart->config.parity == ODD_PARITY) {
            board_uart_param->Parity = UART_PARITY_ODD;
        } else if (uart->config.parity == EVEN_PARITY) {
            board_uart_param->Parity = UART_PARITY_EVEN;
        } else {
            board_uart_param->Parity = UART_PARITY_NONE;
        }
        if (uart->config.stop_bits == STOP_BITS_2) {
            board_uart_param->StopBits = UART_STOP_BIT_1_5_OR_2;
        } else {
            board_uart_param->StopBits      = UART_STOP_BIT_1;
        }
        switch (uart->config.data_width) {
            case DATA_WIDTH_5BIT:
                board_uart_param->DataLength = UART_DATALEN_5BIT;
                break;
            case DATA_WIDTH_6BIT:
                board_uart_param->DataLength = UART_DATALEN_6BIT;
                break;
            case DATA_WIDTH_7BIT:
                board_uart_param->DataLength = UART_DATALEN_7BIT;
                break;
            case DATA_WIDTH_8BIT:
                board_uart_param->DataLength = UART_DATALEN_8BIT;
                break;
            default:
                board_uart_param->DataLength = UART_DATALEN_8BIT;
                break;
        }
        if (uart->config.flow_control != FLOW_CONTROL_DISABLED) {
            board_uart_param->FlowControl = UART_FLOW_CONTROL_HARDWARE;
        } else {
            board_uart_param->FlowControl   = UART_FLOW_CONTROL_SOFTWARE;
        }

        if(uart->port == PORT_UART_AT) {
            uart_irq_num = UART1_IRQn;
        }

        //request pin for uart
        hal_uart_io_pin_request(uart->port);

        //init uart hardware
        if(HAL_OK != HAL_UART_Init(uart_hw)) {
            return ret;
        }

        //config tx/rx trigger
        HAL_UART_FIFOControl(uart_hw, UART_TX_EMPTY_TRIGGER_FIFO_EMPTY, UART_RCVR_TRIGGER_FIFO_HAS_ONE_CHARACTER, UART_DMA_MODE0);
        //enable RX interrupt if necessary
        HAL_UART_INT_Switch_RecvDataAvailable(uart_hw, 1);
        //enable TX interrupt if necessary
        //hal_uart_xfer_data_interrupt(&uart_dev, 1);
        //Enable Receiver Line Status Interrupt if necessary
        HAL_UART_INT_Switch_RecvLineStatus(uart_hw, 1);
        //Enable Modem Status Interrupt if necessary
        //hal_uart_modem_status_interrupt(&uart_dev, 1);
        //Enable Programmable THRE Interrupt if necessary
        //hal_uart_thre_interrupt(&uart_dev, 1);
        if(uart->port == PORT_UART_STD) {
            HAL_UART_SetIsrRecvCharCallback(uart_hw->Instance, uart0_rx_callback);
        } else if (uart->port == PORT_UART_AT) {
            HAL_UART_SetIsrRecvCharCallback(uart_hw->Instance, uart1_rx_callback);
        }

        //enable uart interrupt
        NVIC_EnableIRQ(uart_irq_num);

        // create tx mutex
        stat = krhino_buf_queue_dyn_create(&pdrv->bufque, "cli", UART_FIFO_SIZE, 1);
        if(stat != RHINO_SUCCESS) {
            HAL_UART_Deinit(&(pdrv->uart_hw));
            return stat;
        }
        aos_mutex_new(&pdrv->tx_mutex);
        //HAL_UART_EnableRxCallback(uart->port, uart_rx_callback, uart);

        pdrv->status = HAL_UART_STATUS_OPENED;
        ret = 0;
    }
    return ret;
}

int32_t hal_uart_send(uart_dev_t *uart, const void *data, uint32_t size, uint32_t timeout)
{
    int32_t ret = 0;
    uint8_t *src = (uint8_t *)data;
    hal_uart_drv_t *pdrv = hal_uart_get_drvdata(uart);

    if (pdrv->status == HAL_UART_STATUS_OPENED) {
        aos_mutex_lock(&pdrv->tx_mutex, timeout);
        while(size > 0) {
            if(HAL_OK != HAL_UART_WriteOneChar(pdrv->uart_hw.Instance, src)) {
                ret = -1;
                break;
            }
            src++;
            size--;
        }
        aos_mutex_unlock(&pdrv->tx_mutex);
    } else {
        ret = -1;
    }
    return ret;
}

int32_t hal_uart_recv_II(uart_dev_t *uart, void *data, uint32_t expect_size,
                         uint32_t *recv_size, uint32_t timeout)
{
    kstat_t ret = (kstat_t)-1;
    uint8_t *_data = (uint8_t *)data;
    hal_uart_drv_t *pdrv = hal_uart_get_drvdata(uart);

    if (pdrv->status == HAL_UART_STATUS_OPENED) {
        uint32_t readlen  = 0;
        uint32_t totallen = 0;
        while (1) {
            ret = krhino_buf_queue_recv(pdrv->bufque, timeout, _data, &readlen);
            if (ret != RHINO_SUCCESS) {
                if (recv_size) {
                    *recv_size = totallen;
                }
                return (int32_t)-ret;
            }
            if (readlen == 0) {
                break;
            }
            totallen += readlen;
            _data += readlen;
            if (totallen >=  expect_size) {
                break;
            }
        }
        if (recv_size) {
            *recv_size = totallen;
        }
    }

    return 0;

}

int32_t hal_uart_finalize(uart_dev_t *uart)
{
    int32_t ret = -1;
    hal_uart_drv_t *pdrv = hal_uart_get_drvdata(uart);

    if (pdrv->status == HAL_UART_STATUS_OPENED) {
        aos_mutex_free(&pdrv->tx_mutex);
        krhino_buf_queue_dyn_del(pdrv->bufque);
        HAL_UART_Deinit(&(pdrv->uart_hw));
        hal_uart_io_pin_release(uart->port);
        pdrv->status = HAL_UART_STATUS_CLOSED;
    }

    return ret;
}


