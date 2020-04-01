KBUILD_BUILD_USER := "support"
KBUILD_BUILD_HOST := "karo-electronics.de"

# Set specific make target and binary suffix
PREFERRED_PROVIDER_u-boot ??= "u-boot-karo"
PREFERRED_PROVIDER_virtual/bootloader ??= "u-boot-karo"

UBOOT_MAKE_TARGET ??= "u-boot.bin"
UBOOT_SUFFIX ??= "bin"

UBOOT_ENTRYPOINT_tx6  ?= "0x10008000"
UBOOT_ENTRYPOINT_txul ?= "0x80008000"
UBOOT_CONFIG ??= "generic"

DEFAULTTUNE_tx6 ?= "cortexa9hf-neon"
DEFAULTTUNE_txul ?= "cortexa7hf-neon"

PACKAGE_EXCLUDE_COMPLEMENTARY = ".*"

PREFERRED_PROVIDER_virtual/kernel ??= "linux-karo"
PREFERRED_VERSION_linux-karo ??= "5.4"
KERNEL_IMAGETYPE ??= "uImage"

# Ship kernel modules
MACHINE_EXTRA_RRECOMMENDS ??= " \
                          kernel-modules \
"

# Set Serial console
SERIAL_CONSOLE = "115200 ttymxc0"

SERIAL_CONSOLES ??= " \
                115200;ttymxc0 \
                115200;ttymxc1 \
                115200;ttymxc2 \
"

MACHINE_FEATURES = " \
                 alsa \
                 rtc \
                 serial \
                 touchscreen \
                 usbgadget \
                 usbhost \
                 vfat \
"

# Default baseboard name
DEFAULT_BASEBOARD_tx6 ?= "mb7"
DEFAULT_BASEBOARD_txul ?= "evalkit"