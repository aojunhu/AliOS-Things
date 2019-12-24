NAME := mcu_ln88xx
HOST_OPENOCD := ln88xx

$(NAME)_MBINS_TYPE := kernel
$(NAME)_VERSION    := 1.0.1
$(NAME)_SUMMARY    := driver & sdk for platform/mcu ln88xx

include $(SOURCE_ROOT)/platform/mcu/ln88xx/config.mk

$(NAME)_COMPONENTS += arch_armv7m rhino

$(NAME)_INCLUDES += ./

GLOBAL_INCLUDES += include \
                   include/cpu/compiler/ \
                   include/cpu/ARM_CM4F/CMSIS_5.3.0/ \
                   include/cpu/ARM_CM4F/ln88xx/ \
                   include/kernel/

$(NAME)_SOURCES += hal/hal.c \
                   hal/hal_uart.c \
                   hal/hal_flash.c \
                   src/cpu/ARM_CM4F/ln88xx/system_ln88xx.c \
                   src/utils/debug/log.c \
                   src/utils/debug/art_assert.c \
                   src/utils/wrap_stdio.c

#include $(SOURCE_ROOT)/platform/mcu/ln881x/sdk_files.mk

ifeq ($(HOST_MCU_NAME), ln881x)
GLOBAL_INCLUDES += include/driver_ln881x \
                   src/driver_ln881x/ll/include

$(NAME)_SOURCES += src/driver_ln881x/ll/ll_syscon.c \
                   src/driver_ln881x/ll/ll_uart.c \
                   src/driver_ln881x/hal/hal_syscon.c \
                   src/driver_ln881x/hal/hal_common.c \
                   src/driver_ln881x/hal/hal_uart.c
GLOBAL_CFLAGS  += -DLN881x
endif

ifeq ($(HOST_MCU_NAME), ln882x)
GLOBAL_INCLUDES += include/driver_ln882x \
                   src/driver_ln882x/ll/include

$(NAME)_SOURCES += src/driver_ln882x/ll/ll_syscon.c \
                   src/driver_ln882x/ll/ll_uart.c \
                   src/driver_ln882x/hal/hal_syscon.c \
                   src/driver_ln882x/hal/hal_common.c \
                   src/driver_ln882x/hal/hal_uart.c
GLOBAL_CFLAGS  += -DLN882x
endif

#$(NAME)_PREBUILT_LIBRARY := \
                            drivers/lib/libamr.a \
                            drivers/lib/libsc_assistant.a \
                            drivers/lib/libxz/libxz.a

#$(NAME)_CFLAGS += -include platform/mcu/ln881x/drivers/project/common/prj_conf_opt.h
#$(NAME)_CFLAGS += -include platform/mcu/ln881x/drivers/project/main/prj_config.h

GLOBAL_CFLAGS += -mcpu=cortex-m4     \
                 -mthumb             \
                 -mfpu=fpv4-sp-d16  \
                 -mfloat-abi=softfp \
                 -w \
                 -fno-common \
                 -fmessage-length=0 \
                 -fno-exceptions \
                 -ffunction-sections \
                 -fdata-sections \
                 -fomit-frame-pointer \
                 -Wall \
                 -Werror \
                 -Wno-error=unused-function \
                 -MMD -MP \
                 -Os -DNDEBUG

GLOBAL_CFLAGS  += -D__CONFIG_OS_USE_YUNOS
#GLOBAL_CFLAGS  += -D__CONFIG_CPU_CM4F
#GLOBAL_CFLAGS  += -D__CONFIG_ARCH_DUAL_CORE
#GLOBAL_CFLAGS  += -D__CONFIG_ARCH_APP_CORE
#GLOBAL_CFLAGS  += -D__CONFIG_LIBC_REDEFINE_GCC_INT32_TYPE
#GLOBAL_CFLAGS  += -D__CONFIG_LIBC_PRINTF_FLOAT
#GLOBAL_CFLAGS  += -D__CONFIG_LIBC_SCANF_FLOAT
#GLOBAL_CFLAGS  += -D__CONFIG_MALLOC_USE_STDLIB
#GLOBAL_CFLAGS  += -D__CONFIG_MBUF_IMPL_MODE=0
#GLOBAL_CFLAGS  += -D__PRJ_CONFIG_WLAN_STA_AP

#ifneq ($(no_with_xip),1)
#GLOBAL_CFLAGS  += -D__PRJ_CONFIG_XIP
#endif

#ifneq ($(no_with_image_compress),1)
#GLOBAL_CFLAGS  += -D__CONFIG_BIN_COMPRESS
#GLOBAL_CFLAGS  += -D__PRJ_CONFIG_IMG_COMPRESS
#endif

GLOBAL_LDFLAGS += -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=softfp
GLOBAL_LDFLAGS += -Wl,--gc-sections --specs=nano.specs -u _printf_float
GLOBAL_LDFLAGS += -Wl,--wrap,main
GLOBAL_LDFLAGS += -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys
