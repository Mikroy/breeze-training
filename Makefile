# Toolchain
CC=arm-none-eabi-gcc
OBJCOPY=arm-none-eabi-objcopy

# Directories
CMSIS_DIR=./CMSIS
HAL_DIR=./hal
SRC_DIR=./src
INC_DIR=./inc

# Flags
CFLAG=-mcpu=cortex-m4 -mthumb -02 -Wall -I$(CMSIS_DIR) -I$(HAL_DIR) -I$(INC_DIR)
LDFLAGS=-T $(SRC_DIR)/linker_script.ld -nostartfile

# Source Files
SRC_FILES=$(wildcard $(SRC_DIR)/*.c)

# PHONY Target
.PHONY: all clean

# Output
TARGET=firmware

# Build steps
all: $(TARGET).elf

$(TARGET).elf: $(SRC_FILES)
	$(CC) $(CFLAG) $(SRC_FILES) -o $@ $(LDFLAGS)
	$(OBJCOPY) -O binary $@ $(TARGET).bin 

clean:
	rm -f $(TARGET).elf $(TARGET).bin 