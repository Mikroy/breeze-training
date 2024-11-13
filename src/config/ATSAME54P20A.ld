/* Linker script for ATSAME54P20A */

MEMORY
{
    /* Define memory regions */
    FLASH (rx) : ORIGIN = 0x00400000, LENGTH = 2048K /* 2MB flash */
    RAM (rwx)  : ORIGIN = 0x20000000, LENGTH = 128K   /* 128KB SRAM */
}

/* Define the entry point */
/* Run when program starts */
ENTRY(Reset_Handler)

SECTIONS
{
    /* Interuption vector table */
    .isr_vector :
    {
        KEEP(*(.isr_vector)) /* Interrupt vectors */
    } > FLASH

    /* Code section */
    .text :
    {
        *(.text*)            /* Code */
        *(.rodata*)          /* Read-only data */
        *(.glue_7) *(.glue_7t) /* Thumb glue */
        *(.eh_frame)
    } > FLASH

    /* Data section */
    /* Data is copied from FLASH to RAM */
    .data : AT(ADDR(.text) + SIZEOF(.text))
    {
        *(.data*)            /* Initialized data */
    } > RAM

    /* BSS section */
    /* Data is initialized as zero */
    .bss :
    {
        *(.bss*)             /* Uninitialized data */
        *(COMMON)
    } > RAM

    /* Stack and heap space */
    _estack = ORIGIN(RAM) + LENGTH(RAM);  /* End of stack */
    _sheap = _estack;                     /* Start of heap */
    _eheap = _estack;                     /* End of heap */
}
