# Toolchain
CC=arm-none-eabi-gcc
OBJCOPY=arm-none-eabi-objcopy

# Directories
CMSIS_DIR=./CMSIS
HAL_DIR=./hal
INC_DIR=./inc
SRC_DIR=./src

# Flags
CFLAG=-mcpu=cortex-m4 -mthumb -O2 -Wall -I$(CMSIS_DIR) -I$(HAL_DIR) -I$(INC_DIR)
LDFLAGS=-T $(SRC_DIR)/config/ATSAME54P20A.ld -nostartfiles

# Source Files
SRC_FILES=$(wildcard $(SRC_DIR)/*.c)

# Output
TARGET=breeze-training

# Build steps
all: $(TARGET).elf

$(TARGET).elf: $(SRC_FILES)
	$(CC) $(CFLAG) $(SRC_FILES) -o $@ $(LDFLAGS)
	$(OBJCOPY) -O binary $@ $(TARGET).bin 

clean:
	rm -f $(TARGET).elf $(TARGET).bin 