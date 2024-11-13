/**
 * @file port.h
 * 
 * @brief Define the registers addresses.
 * This file contains the registers of the microcontroller ATSAME54P20A
 * Note: Register summary on page 820 of datasheet
 * 
 * @author Miguel Ruiz Esparza
 * 
 * @copyright 2024
 */

#ifndef _PORT_H_ // Guard against multiple inclusion
#define _PORT_H_

/* INCLUDE FILES */
#include <stdint.h>

#ifdef __cplusplus // ProvideC++ compatibility
extern "C" {
#endif

/* MACROS */


/* LOCAL VARIABLES (static) */

/* GLOBAL VARIABLES (global) */
typedef struct port
{
    uint32_t    PORT_DIR;
    uint32_t    PORT_DIRCLR;
    uint32_t    PORT_DIRSET;
    uint32_t    PORT_DIRTGL;
    uint32_t    PORT_OUT;
    uint32_t    PORT_OUTCLR;
    uint32_t    PORT_OUTSET;
    uint32_t    PORT_OUTTGL;
    uint32_t    PORT_IN;
    uint32_t    PORT_CTRL;
    uint32_t    PORT_WRCONFIG;
    uint32_t    PORT_EVCTRL;
    uint8_t     PORT_PMUX0;
    uint8_t     PORT_PMUX1;
    uint8_t     PORT_PMUX2;
    uint8_t     PORT_PMUX3;
    uint8_t     PORT_PMUX4;
    uint8_t     PORT_PMUX5;
    uint8_t     PORT_PMUX6;
    uint8_t     PORT_PMUX7;
    uint8_t     PORT_PMUX8;
    uint8_t     PORT_PMUX9;
    uint8_t     PORT_PMUX10;
    uint8_t     PORT_PMUX11;
    uint8_t     PORT_PMUX12;
    uint8_t     PORT_PMUX13;
    uint8_t     PORT_PMUX14;
    uint8_t     PORT_PMUX15;
    uint8_t     PORT_PINCFG0;
    uint8_t     PORT_PINCFG1;
    uint8_t     PORT_PINCFG2;
    uint8_t     PORT_PINCFG3;
    uint8_t     PORT_PINCFG4;
    uint8_t     PORT_PINCFG5;
    uint8_t     PORT_PINCFG6;
    uint8_t     PORT_PINCFG7;
    uint8_t     PORT_PINCFG8;
    uint8_t     PORT_PINCFG9;
    uint8_t     PORT_PINCFG10;
    uint8_t     PORT_PINCFG11;
    uint8_t     PORT_PINCFG12;
    uint8_t     PORT_PINCFG13;
    uint8_t     PORT_PINCFG14;
    uint8_t     PORT_PINCFG15;
    uint8_t     PORT_PINCFG16;
    uint8_t     PORT_PINCFG17;
    uint8_t     PORT_PINCFG18;
    uint8_t     PORT_PINCFG19;
    uint8_t     PORT_PINCFG20;
    uint8_t     PORT_PINCFG21;
    uint8_t     PORT_PINCFG22;
    uint8_t     PORT_PINCFG23;
    uint8_t     PORT_PINCFG24;
    uint8_t     PORT_PINCFG25;
    uint8_t     PORT_PINCFG26;
    uint8_t     PORT_PINCFG27;
    uint8_t     PORT_PINCFG28;
    uint8_t     PORT_PINCFG29;
    uint8_t     PORT_PINCFG30;
    uint8_t     PORT_PINCFG31;
}port_registers;

/* LOCAL PROTOTYPES */
/* GLOBAL PROTOTYPES */

#ifdef __cplusplus // ProvideC++ compatibility
}
#endif
#endif /* _PORT_H_ */
