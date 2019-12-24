#include "proj_config.h"
#include "ln88xx.h"
#include "utils/debug/log.h"
#if !(defined(__CONFIG_OS_KERNEL) && (__CONFIG_OS_KERNEL == RTOS_ALIOS))
#include "serial/serial.h"
#endif

#if (PRINT_TO_RTT == ENABLE)
  #include "utils/debug/RTT/SEGGER_RTT.h"
#endif

#define LOG_PORT_BAUDRATE  CFG_UART_BAUDRATE_LOG
#if !(defined(__CONFIG_OS_KERNEL) && (__CONFIG_OS_KERNEL == RTOS_ALIOS))
static Serial_t m_LogSerial;
#endif

#if (EXEC_ENV == RUN_ON_SIMU)
  void simu_pass(void){
      *(volatile uint32_t *)SIM_REPORT_BASE = 0x10;
  }
  void simu_fail(void){
      *(volatile uint32_t *)SIM_REPORT_BASE = 0x20;
  }
  void simu_finish(void){
      *(volatile uint32_t *)SIM_REPORT_BASE = 0x30;
  }

  static void art_simulation_puts(const char *buf, size_t size){
      int i;
      for(i = 0; i < size; i++){
          *(uint8_t *)SIM_PRINT_BASE = (uint8_t)*(buf + i);
      }
  }
#endif


int log_stdio_write(char *buf, size_t size)
{
    int ret = 0;
#if (EXEC_ENV == RUN_ON_SIMU)
    art_simulation_puts(buf, size);
#else
    #if (PRINT_TO_RTT == ENABLE)
        ret = SEGGER_RTT_Write(0, (const void *)buf, size);
    #else
		#if !(defined(__CONFIG_OS_KERNEL) && (__CONFIG_OS_KERNEL == RTOS_ALIOS))
        ret = serial_write(&m_LogSerial, (const void *)buf, size);
		#else
        printf("%s", buf);
		#endif
    #endif
#endif
    return ret;
}

void hexdump(uint8_t level, uint8_t *info, void *buff, uint32_t count)
{
    uint32_t i;
    uint8_t *pbuff = (uint8_t *)buff;
    LOG(level, "%s: ", info);
    for(i = 0; i < count; i++){
        LOG(level, "%02x ", *(pbuff+i));
    }
    LOG(level, "\r\n");
}

#if !(defined(__CONFIG_OS_KERNEL) && (__CONFIG_OS_KERNEL == RTOS_ALIOS))
void log_init(void)
{
#if (EXEC_ENV == RUN_ON_SIMU)
#else
    #if (PRINT_TO_RTT == ENABLE)
        SEGGER_RTT_Init();
    #else
        serial_init(&m_LogSerial, SER_PORT_UART0, LOG_PORT_BAUDRATE, NULL);//2000000 SER_PORT_UART1
    #endif
#endif
}
#endif



