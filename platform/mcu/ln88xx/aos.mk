include $(SOURCE_ROOT)/platform/mcu/ln88xx/config.mk
#include $(SOURCE_ROOT)/platform/mcu/ln881x/sdk_files.mk

NAME := mcu_ln88xx

HOST_OPENOCD := ln88xx
#GLOBAL_DEFINES += CONFIG_LN88XX

ifneq ($(COMPILER),armcc)
GLOBAL_CFLAGS += -mcpu=cortex-m4     \
                 -mthumb -mthumb-interwork  \
                 -mlittle-endian            \
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
endif

ifneq ($(COMPILER),armcc)
GLOBAL_ASMFLAGS += -mcpu=cortex-m4 -mlittle-endian -mthumb -mthumb-interwork -w
else
#GLOBAL_ASMFLAGS += --cpu=7E-M -g --apcs=interwork -D__MICROLIB
endif

#GLOBAL_CFLAGS  += -D__CONFIG_OS_USE_YUNOS
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
ifneq ($(COMPILER),armcc)
GLOBAL_LDFLAGS += -mcpu=cortex-m4 -mthumb -mthumb-interwork -mlittle-endian --specs=nosys.specs $(CLIB_LDFLAGS_NANO_FLOAT)
GLOBAL_LDFLAGS += -Wl,--gc-sections -u _printf_float -Wall -Werror -Wno-error=unused-function
GLOBAL_LDFLAGS += -Wl,--wrap,main
GLOBAL_LDFLAGS += -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys
endif

$(NAME)_INCLUDES += ./

GLOBAL_INCLUDES += include \
                   include/libc/ \
                   include/net/lwip-2.0.3/ \
                   include/cpu/ARM_CM4F/CMSIS_5.3.0/ \
                   include/cpu/ARM_CM4F/ln88xx/ \
                   include/kernel/


ifeq ($(AOS_2NDBOOT_SUPPORT), yes)
$(NAME)_COMPONENTS += ota_2ndboot
$(NAME)_LIBSUFFIX := _2ndboot

#GLOBAL_LDS_FILES += platform/mcu/moc108/link/mx108_2ndboot.ld.S

#$(NAME)_CFLAGS += -marm
#$(NAME)_SOURCES  += 2ndboot/flash.c \
					2ndboot/uart.c  \
					2ndboot/sys.c   \
					2ndboot/wdg.c   \
					2ndboot/boot_2ndboot.S
else
$(NAME)_MBINS_TYPE := kernel
$(NAME)_VERSION    := 1.0.1
$(NAME)_SUMMARY    := driver & sdk for platform/mcu ln88xx
$(NAME)_COMPONENTS := arch_armv7m
$(NAME)_COMPONENTS += newlib_stub rhino yloop
$(NAME)_COMPONENTS += netmgr lwip cli fatfs


$(NAME)_SOURCES += hal/hal.c \
                   hal/uart.c \
                   hal/flash.c \
                   hal/sd.c \
                   hal/timer.c \
                   src/cpu/ARM_CM4F/ln88xx/system_ln88xx.c \
                   src/utils/debug/log.c \
                   src/utils/debug/art_assert.c \
                   src/utils/wrap_stdio.c \
                   src/net/lwip/memcpy.c \
                   src/net/lwip/checksum.c


ifeq ($(HOST_MCU_NAME), ln881x)
GLOBAL_INCLUDES += include/driver_ln881x \
                   src/driver_ln881x/ll/include

$(NAME)_SOURCES += src/driver_ln881x/ll/ll_syscon.c \
                   src/driver_ln881x/ll/ll_cache.c \
                   src/driver_ln881x/ll/ll_dma.c \
                   src/driver_ln881x/ll/ll_qspi.c \
                   src/driver_ln881x/ll/ll_uart.c \
                   src/driver_ln881x/ll/ll_timer.c \
                   src/driver_ln881x/hal/hal_syscon.c \
                   src/driver_ln881x/hal/hal_common.c \
                   src/driver_ln881x/hal/hal_uart.c \
                   src/driver_ln881x/hal/hal_timer.c \
                   src/driver_ln881x/hal/flash.c \
                   src/driver_ln881x/hal/hal_dma.c \
                   src/driver_ln881x/hal/qspi.c \
                   src/driver_ln881x/hal/cache.c

GLOBAL_DEFINES += LN881x
endif

ifeq ($(HOST_MCU_NAME), ln882x)
GLOBAL_INCLUDES += include/driver_ln882x \
                   src/driver_ln882x/ll/include

$(NAME)_SOURCES += src/driver_ln882x/ll/ll_syscon.c \
                   src/driver_ln882x/ll/ll_uart.c \
                   src/driver_ln882x/hal/hal_syscon.c \
                   src/driver_ln882x/hal/hal_common.c \
                   src/driver_ln882x/hal/hal_uart.c

GLOBAL_DEFINES += LN882x
endif

#$(NAME)_PREBUILT_LIBRARY := \
                            drivers/lib/libamr.a \
                            drivers/lib/libsc_assistant.a \
                            drivers/lib/libxz/libxz.a

#$(NAME)_CFLAGS += -include platform/mcu/ln881x/drivers/project/common/prj_conf_opt.h
#$(NAME)_CFLAGS += -include platform/mcu/ln881x/drivers/project/main/prj_config.h

endif


