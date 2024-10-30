/**
 * @file same54p20a.h
 * 
 * @brief Define the registers addresses.
 * This file contains the addresses of the microcontroller ATSAME54P20A
 * 
 * @author Miguel Ruiz Esparza
 * 
 * @copyright 2024
 */

#ifndef _SAME54P20A_H_ // Guard against multiple inclusion
#define _SAME54P20A_H_

/* INCLUDE FILES */
#ifdef __cplusplus // ProvideC++ compatibility
extern "C" {
#endif

#include "nvmctrl.h"

/* MACROS */
// APBB Peripherals
#define NVMCTRL_REGS    ((nvmctrl_registers)0x41004000) // NVMCTRL Register Address

/* LOCAL VARIABLES (static) */
/* GLOBAL VARIABLES (global) */
/* LOCAL PROTOTYPES */
/* GLOBAL PROTOTYPES */

#ifdef __cplusplus // ProvideC++ compatibility
}
#endif
#endif /* _SAME54P20A_H_ */
