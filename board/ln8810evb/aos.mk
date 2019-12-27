NAME := board_ln8810evb

$(NAME)_MBINS_TYPE := kernel
$(NAME)_VERSION    := 1.0.1
$(NAME)_SUMMARY    := configuration for board ln8810evb
MODULE             := LN8810
HOST_ARCH          := Cortex-M4
HOST_MCU_FAMILY    := mcu_ln88xx
SUPPORT_MBINS      := no
HOST_MCU_NAME      := ln881x
ENABLE_VFP         := 0

ifeq ($(AOS_2NDBOOT_SUPPORT), yes)
$(NAME)_SOURCES := config/partition_conf.c
$(NAME)_LIBSUFFIX := _2ndboot
else
$(NAME)_COMPONENTS += $(HOST_MCU_FAMILY) kernel_init

$(NAME)_SOURCES += config/k_config.c \
                   config/partition_conf.c \
                   startup/board.c   \
                   startup/startup.c \
                   startup/startup_gcc.c
endif

GLOBAL_DEFINES += STDIO_UART=0
GLOBAL_DEFINES += CONFIG_AOS_FATFS_SUPPORT_MMC
GLOBAL_DEFINES += CONFIG_AOS_FATFS_SUPPORT
GLOBAL_DEFINES += RHINO_CONFIG_TICKS_PER_SECOND=100

GLOBAL_DEFINES += DEBUG_CONFIG_ERRDUMP=0



$(NAME)_ASMFLAGS += -c -x assembler-with-cpp

#include $(SOURCE_ROOT)/platform/mcu/ln88xx/config.mk
GLOBAL_LDFLAGS += -T board/ln8810evb/ln881x-xip.ld

GLOBAL_INCLUDES += .    \
                   config/


CURRENT_TIME = $(shell /bin/date +%Y%m%d.%H%M)

CONFIG_SYSINFO_PRODUCT_MODEL := ALI_AOS_LN881X
CONFIG_SYSINFO_DEVICE_NAME := LN881X

AOS_SDK_2NDBOOT_SUPPORT := yes

GLOBAL_CFLAGS += -DSYSINFO_OS_VERSION=\"$(CONFIG_SYSINFO_OS_VERSION)\"
GLOBAL_CFLAGS += -DSYSINFO_PRODUCT_MODEL=\"$(CONFIG_SYSINFO_PRODUCT_MODEL)\"
GLOBAL_CFLAGS += -DSYSINFO_DEVICE_NAME=\"$(CONFIG_SYSINFO_DEVICE_NAME)\"
#GLOBAL_CFLAGS += -DSYSINFO_ARCH=\"$(HOST_ARCH)\"
GLOBAL_CFLAGS += -DSYSINFO_ARCH=\"Cortex-M4F\"
GLOBAL_CFLAGS += -DSYSINFO_MCU=\"$(HOST_MCU_FAMILY)\"
GLOBAL_CFLAGS += -DSYSINFO_BOARD=\"$(MODULE)\"

#EXTRA_TARGET_MAKEFILES +=  $(SOURCE_ROOT)/platform/mcu/$(HOST_MCU_NAME)/mkimage.mk
