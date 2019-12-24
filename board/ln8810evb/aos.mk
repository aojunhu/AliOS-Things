NAME := board_ln8810evb

$(NAME)_MBINS_TYPE := kernel
$(NAME)_VERSION    := 1.0.1
$(NAME)_SUMMARY    := configuration for board ln8810evb
MODULE             := 1062
HOST_ARCH          := Cortex-M4
HOST_MCU_FAMILY    := mcu_ln88xx
SUPPORT_MBINS      := no
HOST_MCU_NAME      := ln881x
ENABLE_VFP         := 0

$(NAME)_COMPONENTS += $(HOST_MCU_FAMILY) newlib_stub kernel_init netmgr lwip cli yloop fatfs

GLOBAL_DEFINES += STDIO_UART=0
GLOBAL_DEFINES += CONFIG_AOS_FATFS_SUPPORT_MMC
GLOBAL_DEFINES += CONFIG_AOS_FATFS_SUPPORT
GLOBAL_DEFINES += RHINO_CONFIG_TICKS_PER_SECOND=100

GLOBAL_DEFINES += DEBUG_CONFIG_ERRDUMP=0

$(NAME)_SOURCES += config/k_config.c \
                   config/partition_conf.c \
                   startup/board.c   \
                   startup/startup.c

$(NAME)_SOURCES += startup/startup_gcc.s

$(NAME)_ASMFLAGS += -c -x assembler-with-cpp

include $(SOURCE_ROOT)/platform/mcu/ln88xx/config.mk
ifneq ($(no_with_xip),1)
GLOBAL_LDFLAGS += -T board/ln8810evb/ln881x-xip.ld
else
GLOBAL_LDFLAGS += -T board/ln8810evb/ln881x.ld
endif

GLOBAL_INCLUDES += .    \
                   config/


CURRENT_TIME = $(shell /bin/date +%Y%m%d.%H%M)
define get-os-version
"AOS-R"-$(CURRENT_TIME)
endef

CONFIG_SYSINFO_OS_VERSION := $(call get-os-version)

CONFIG_SYSINFO_PRODUCT_MODEL := ALI_AOS_LN881X
CONFIG_SYSINFO_DEVICE_NAME := LN881X

GLOBAL_CFLAGS += -DSYSINFO_OS_VERSION=\"$(CONFIG_SYSINFO_OS_VERSION)\"
GLOBAL_CFLAGS += -DSYSINFO_PRODUCT_MODEL=\"$(CONFIG_SYSINFO_PRODUCT_MODEL)\"
GLOBAL_CFLAGS += -DSYSINFO_DEVICE_NAME=\"$(CONFIG_SYSINFO_DEVICE_NAME)\"
#GLOBAL_CFLAGS += -DSYSINFO_ARCH=\"$(HOST_ARCH)\"
GLOBAL_CFLAGS += -DSYSINFO_ARCH=\"Cortex-M4F\"
GLOBAL_CFLAGS += -DSYSINFO_MCU=\"$(HOST_MCU_FAMILY)\"
GLOBAL_CFLAGS += -DSYSINFO_BOARD=\"$(MODULE)\"

#EXTRA_TARGET_MAKEFILES +=  $(SOURCE_ROOT)/platform/mcu/$(HOST_MCU_NAME)/mkimage.mk
