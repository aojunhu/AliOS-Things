#ifndef __COMMON_DEF_LN88XX_H__
#define __COMMON_DEF_LN88XX_H__

#ifdef __cplusplus
extern "C" {
#endif

#define DISABLE                 0
#define ENABLE                  1

#define RUN_ON_CHIP                         0
#define RUN_ON_FPGA                         1
#define RUN_ON_SIMU                         2


#define CHIP_SLAVE                          0 //As a device for the master chip
#define CHIP_MCU                            1


#define WIFI_AP                             0
#define WIFI_STA                            1
#define WIFI_APSTA                          2

#define RTOS_FREERTOS						0
#define RTOS_ALIOS   						1
#define RTOS_RT_THREAD     				    2
#define RTOS_UCOS     						3

/*
 * Clock settings section
 */
#define PLL_CLOCK                               (160000000)
#define XTAL_CLOCK                              (40000000)

#ifdef __cplusplus
}
#endif

#endif  /* __COMMON_DEF_LN88XX_H__ */
