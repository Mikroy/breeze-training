/**
 * @file nvmctrl.h
 * 
 * @brief Define the registers addresses.
 * This file contains the registers of the microcontroller ATSAME54P20A
 * 
 * @author Miguel Ruiz Esparza
 * 
 * @copyright 2024
 */

#ifndef _NVMCTRL_H_ // Guard against multiple inclusion
#define _NVMCTRL_H_

/* INCLUDE FILES */
#include <stdint.h>

#ifdef __cplusplus // ProvideC++ compatibility
extern "C" {
#endif

/* MACROS */


/* LOCAL VARIABLES (static) */

/* GLOBAL VARIABLES (global) */
typedef struct nvmctrl
{
    uint16_t    NVMCTRL_CTRLA;
    uint8_t     NVMCTRL_Reserved1[0x02];
    uint16_t    NVMCTRL_CTRLB;
    uint8_t     NVMCTRL_Reserved2[0x02];
    uint32_t    NVMCTRL_PARAM;
    uint16_t    NVMCTRL_INTENCLR;
    uint16_t    NVMCTRL_INTENSET;
    uint16_t    NVMCTRL_INTFLAG;
    uint16_t    NVMCTRL_STATUS;
    uint32_t    NVMCTRL_ADDR;
    uint32_t    NVMCTRL_RUNLOCK;
    uint32_t    NVMCTRL_PBLDATA0;
    uint32_t    NVMCTRL_PBLDATA1;
    uint32_t    NVMCTRL_ECCERR;
    uint8_t     NVMCTRL_DGBCTRL;
    uint8_t     NVMCTRL_Reserved3[0x01];
    uint8_t     NVMCTRL_SEECFG;
    uint8_t     NVMCTRL_Reserved4[0x01];
    uint32_t    NVMCTRL_SEESTAT;
}nvmctrl_registers;

/* LOCAL PROTOTYPES */
/* GLOBAL PROTOTYPES */

#ifdef __cplusplus // ProvideC++ compatibility
}
#endif
#endif /* _NVMCTRL_H_ */
