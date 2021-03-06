/****************************************************************************
 * arch/arm/src/nrf52/hardware/nrf52_spi.h
 *
 *   Copyright (C) 2019 Gregory Nutt. All rights reserved.
 *   Author: Mateusz Szafoni <raiden00@railab.me>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ***************************************************************************/

#ifndef __ARCH_ARM_SRC_NRF52_HARDWARE_NRF52_SPI_H
#define __ARCH_ARM_SRC_NRF52_HARDWARE_NRF52_SPI_H

/****************************************************************************
 * Included Files
 ***************************************************************************/

#include <nuttx/config.h>
#include "hardware/nrf52_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ***************************************************************************/

/* Register offsets for SPI master (SPIM) **********************************/

#define NRF52_SPIM_TASK_START_OFFSET      (0x0010) /* Start SPI transaction */
#define NRF52_SPIM_TASK_STOP_OFFSET       (0x0014) /* Stop SPI transaction */
#define NRF52_SPIM_TASK_SUSPEND_OFFSET    (0x001c) /* Suspend SPI transaction */
#define NRF52_SPIM_TASK_RESUME_OFFSET     (0x0020) /* Resume SPI transaction */
#define NRF52_SPIM_EVENTS_STOPPED_OFFSET  (0x0104) /* SPI transaction has stopped */
#define NRF52_SPIM_EVENTS_ENDRX_OFFSET    (0x0110) /* End of RXD buffer reached */
#define NRF52_SPIM_EVENTS_END_OFFSET      (0x0118) /* End of RXD buffer and TXD buffer reached */
#define NRF52_SPIM_EVENTS_ENDTX_OFFSET    (0x0120) /* End of TXD buffer reached */
#define NRF52_SPIM_EVENTS_STARTED_OFFSET  (0x014c) /* Transaction started */
#define NRF52_SPIM_SHORTS_OFFSET          (0x0200) /* Shortcuts between local events and tasks */
#define NRF52_SPIM_INTENSET_OFFSET        (0x0304) /* Enable interrupt */
#define NRF52_SPIM_INTENCLR_OFFSET        (0x0308) /* Disable interrupt */
#define NRF52_SPIM_STALLSTAT_OFFSET       (0x0400) /* Stall status for EasyDMA RAM accesses */
#define NRF52_SPIM_ENABLE_OFFSET          (0x0500) /* Enable SPIM */
#define NRF52_SPIM_PSELSCK_OFFSET         (0x0508) /* Pin select for SCK */
#define NRF52_SPIM_PSELMOSI_OFFSET        (0x050c) /* Pin select for MOSI */
#define NRF52_SPIM_PSELMISO_OFFSET        (0x0510) /* Pin select for MISO */
#define NRF52_SPIM_PSELCSN_OFFSET         (0x0514) /* Pin select for CSN */
#define NRF52_SPIM_FREQUENCY_OFFSET       (0x0524) /* SPI frequency. */
#define NRF52_SPIM_RXDPTR_OFFSET          (0x0534) /* Data pointer */
#define NRF52_SPIM_RXDMAXCNT_OFFSET       (0x0538) /* Maximum number of bytes in receive buffer */
#define NRF52_SPIM_RXDMAMOUNT_OFFSET      (0x053c) /* Number of bytes transferred in the last transaction */
#define NRF52_SPIM_RXDLIST_OFFSET         (0x0540) /* RXD EasyDMA list type */
#define NRF52_SPIM_TXDPTR_OFFSET          (0x0544) /* Data pointer */
#define NRF52_SPIM_TXDMAXCNT_OFFSET       (0x0548) /* Number of bytes in transmit buffer */
#define NRF52_SPIM_TXDAMOUNT_OFFSET       (0x054c) /* Number of bytes transferred in the last transaction */
#define NRF52_SPIM_TXDLIST_OFFSET         (0x0550) /* TXD EasyDMA list type */
#define NRF52_SPIM_CONFIG_OFFSET          (0x0554) /* Configuration register */
#define NRF52_SPIM_RXDELAY_OFFSET         (0x0560) /* Sample delay for input serial data on MISO */
#define NRF52_SPIM_CSNDUR_OFFSET          (0x0564) /* IFTIMING.CSNDUR */
#define NRF52_SPIM_CSNPOL_OFFSET          (0x0568) /* Polarity of CSN output */
#define NRF52_SPIM_PSELDCX_OFFSET         (0x056c) /* Pin select for DCX signal */
#define NRF52_SPIM_DCXCNT_OFFSET          (0x0570) /* DCX configuration */
#define NRF52_SPIM_ORC_OFFSET             (0x05c0) /* ORC */

/* Register offsets for SPI slave (SPIS) ***********************************/

#define NRF52_SPIS_SHORTS_OFFSET          (0x0200) /* Shortcuts between local events and tasks */
#define NRF52_SPIS_INTENSET_OFFSET        (0x0304) /* Enable interrupt */
#define NRF52_SPIS_INTENCLR_OFFSET        (0x0308) /* Disable interrupt */
#define NRF52_SPIS_SEMSTAT_OFFSET         (0x0400) /* Semaphore status register */
#define NRF52_SPIS_STATUS_OFFSET          (0x0440) /* Status from last transaction */
#define NRF52_SPIS_ENABLE_OFFSET          (0x0500) /* Enable SPIS */
#define NRF52_SPIS_PSELSCK_OFFSET         (0x0508) /* Pin select for SCK */
#define NRF52_SPIS_PSELMOSI_OFFSET        (0x050c) /* Pin select for MOSI signal */
#define NRF52_SPIS_PSELMISO_OFFSET        (0x0510) /* Pin select for MISO signal */
#define NRF52_SPIS_PSELCSN_OFFSET         (0x0514) /* Pin select for CSN */
#define NRF52_SPIS_RXDPTR_OFFSET          (0x0534) /* Data pointer */
#define NRF52_SPIS_RXDMAXCNT_OFFSET       (0x0538) /* Maximum number of bytes in receive buffer */
#define NRF52_SPIS_RXDMAMOUNT_OFFSET      (0x053c) /* Number of bytes transferred in the last transaction */
#define NRF52_SPIS_RXDLIST_OFFSET         (0x0540) /* RXD EasyDMA list type */
#define NRF52_SPIS_TXDPTR_OFFSET          (0x0544) /* Data pointer */
#define NRF52_SPIS_TXDMAXCNT_OFFSET       (0x0548) /* Number of bytes in transmit buffer */
#define NRF52_SPIS_TXDAMOUNT_OFFSET       (0x054c) /* Number of bytes transferred in the last transaction */
#define NRF52_SPIS_TXDLIST_OFFSET         (0x0550) /* TXD EasyDMA list type */
#define NRF52_SPIS_CONFIG_OFFSET          (0x0554) /* Configuration register */
#define NRF52_SPIS_DEF_OFFSET             (0x055c) /* Default character */
#define NRF52_SPIS_ORC_OFFSET             (0x05c0) /* Over-read character */

/* Register Bitfield Definitions for SPIM **********************************/

/* TASKS_START Register */

#define SPIM_TASKS_START            (1 << 0)  /* Bit 0: Start SPI transaction */

/* TASKS_STOP Register */

#define SPIM_TASKS_STOP             (1 << 0)  /* Bit 0: Stop SPI transaction */

/* TASKS_SUSPEND Register */

#define SPIM_TASKS_SUSPEND          (1 << 0)  /* Bit 0: Suspend SPI transaction */

/* TASKS_RESUME Register */

#define SPIM_TASKS_RESUME           (1 << 0)  /* Bit 0: Resume SPI transaction */

/* EVENTS_STOPPED Register */

#define SPIM_EVENTS_STOPPED         (1 << 0)  /* Bit 0: SPI transaction has stopped */

/* EVENTS_ENDRX Register */

#define SPIM_EVENTS_ENDRX           (1 << 0)  /* Bit 0: End of RXD buffer reached */

/* EVENTS_END Register */

#define SPIM_EVENTS_END             (1 << 0)  /* Bit 0: End of RXD buffer and TXD buffer reached */

/* EVENTS_ENDTX Register */

#define SPIM_EVENTS_ENDTX           (1 << 0)  /* Bit 0: End of TXD buffer reached */

/* EVENTS_STARTED Register */

#define SPIM_EVENTS_STARTED         (1 << 0)  /* Bit 0: Transaction started */

/* SHORTS Register */

#define SPIM_SHORTS_ENDSTART        (1 << 0)  /* Bit 0: Shortcut between event END and task START */

/* INTENSET/INTENCLR Register */

#define SPIM_INT_STOPPED            (1 << 1)  /* Bit 1: Enable interrupt for STOPPED */
#define SPIM_INT_ENDRX              (1 << 4)  /* Bit 4: Enable interrupt for ENDRX */
#define SPIM_INT_END                (1 << 6)  /* Bit 6: Enable interrupt for END */
#define SPIM_INT_ENDTX              (1 << 8)  /* Bit 8: Enable interrupt for ENDTX */
#define SPIM_INT_STARTED            (1 << 19) /* Bit 19: Enable interrupt for STARTED */

/* STALLLSTAT Register */

#define SPIM_STALLSTAT_RX           (1 << 0)  /* Bit 0: Stall status for EasyDMA RAM reads */
#define SPIM_STALLSTAT_TX           (1 << 1)  /* Bit 1: Stall status for EasyDMA RAM writes */

/* ENABLE Register */

#define SPIM_ENABLE_DIS             (0)        /* Disable SPIM */
#define SPIM_ENABLE_EN              (0x7 << 0) /* Enable SPIM */

/* PSELSCK Register */

#define SPIM_PSELSCK_PIN_SHIFT      (0)       /* Bits 0-4: SCK pin number */
#define SPIM_PSELSCK_PIN_MASK       (0xf << SPIM_PSELSCK_PIN_SHIFT)
#define SPIM_PSELSCK_PORT_SHIFT     (5)       /* Bit 5: SCK port number */
#define SPIM_PSELSCK_PORT_MASK      (0x1 << SPIM_PSELSCK_PORT_SHIFT)
#define SPIM_PSELSCK_CONNECTED      (1 << 31) /* Bit 31: Connection */
#define SPIM_PSELSCK_RESET          (0xffffffff)

/* PSELMOSI Register */

#define SPIM_PSELMOSI_PIN_SHIFT     (0)       /* Bits 0-4: MOSI pin number */
#define SPIM_PSELMOSI_PIN_MASK      (0xf << SPIM_PSELMOSI_PIN_SHIFT)
#define SPIM_PSELMOSI_PORT_SHIFT    (5)       /* Bit 5: MOSI port number */
#define SPIM_PSELMOSI_PORT_MASK     (0x1 << SPIM_PSELMOSI_PORT_SHIFT)
#define SPIM_PSELMOSI_CONNECTED     (1 << 31) /* Bit 31: Connection */
#define SPIM_PSELMOSI_RESET         (0xffffffff)

/* PSELMISO Register */

#define SPIM_PSELMISO_PIN_SHIFT     (0)       /* Bits 0-4: MISO pin number */
#define SPIM_PSELMISO_PIN_MASK      (0xf << SPIM_PSELMISO_PIN_SHIFT)
#define SPIM_PSELMISO_PORT_SHIFT    (5)       /* Bit 5: MISO port number */
#define SPIM_PSELMISO_PORT_MASK     (0x1 << SPIM_PSELMISO_PORT_SHIFT)
#define SPIM_PSELMISO_CONNECTED     (1 << 31) /* Bit 31: Connection */
#define SPIM_PSELMISO_RESET         (0xffffffff)

/* PSELCSN Register */

#define SPIM_PSELCSN_PIN_SHIFT      (0)       /* Bits 0-4: CSN pin number */
#define SPIM_PSELCSN_PIN_MASK       (0xf << SPIM_PSELCSN_PIN_SHIFT)
#define SPIM_PSELCSN_PORT_SHIFT     (5)       /* Bit 5: CSN port number */
#define SPIM_PSELCSN_PORT_MASK      (0x1 << SPIM_PSELCSN_PORT_SHIFT)
#define SPIM_PSELCSN_CONNECTED      (1 << 31) /* Bit 31: Connection */
#define SPIM_PSELCSN_RESET          (0xffffffff)

/* FREQUENCY Register */

#define SPIM_FREQUENCY_125KBPS      (0x02000000) /* 125 kbps */
#define SPIM_FREQUENCY_250KBPS      (0x04000000) /* 250 kbps */
#define SPIM_FREQUENCY_500KBPS      (0x08000000) /* 500 kbps */
#define SPIM_FREQUENCY_1MBPS        (0x10000000) /* 1 Mbps */
#define SPIM_FREQUENCY_2MBPS        (0x20000000) /* 2 Mbps */
#define SPIM_FREQUENCY_4MBPS        (0x40000000) /* 4 Mbps */
#define SPIM_FREQUENCY_8MBPS        (0x80000000) /* 8 Mbps */
#define SPIM_FREQUENCY_16MBPS       (0x0A000000) /* 16 Mbps */
#define SPIM_FREQUENCY_32MBPS       (0x14000000) /* 32 Mbps */

/* RXDMAXCNT Register */

#define SPIM_RXDMAXCNT_SHIFT        (0)       /* Bits 0-15: Maximum number of bytes in receive buffer */
#define SPIM_RXDMAXCNT_MASK         (0xffff << SPIM_RXDMAXCNT_SHIFT)

/* RXDAMOUNT Register */

#define SPIM_RXDAMOUNT_SHIFT        (0)       /* Bits 0-15: Number of bytes transferred in the last transaction */
#define SPIM_RXDAMOUNT_MASK         (0xffff << SPIM_RXDAMOUNT_SHIFT)

/* TXDMAXCNT Register */

#define SPIM_TXDMAXCNT_SHIFT        (0)       /* Bits 0-15: Maximum number of bytes in transmit buffer */
#define SPIM_TXDMAXCNT_MASK         (0xffff << SPIM_TXDMAXCNT_MASK)

/* TXDAMOUNT Register */

#define SPIM_TXDAMOUNT_SHIFT        (0)       /* Bits 0-15: Number of bytes transferred in the last transaction */
#define SPIM_TXDAMOUNT_MASK         (0xffff << SPIM_TXDAMOUNT_SHIFT)

/* CONFIG Register */

#define SPIM_CONFIG_ORDER           (1 << 0)  /* Bit 0: Bit order */
#define SPIM_CONFIG_CPHA            (1 << 1)  /* Bit 1: Serial clock phase */
#define SPIM_CONFIG_CPOL            (1 << 2)  /* Bit 2: Serial clock polarity */

/* PSELDCX Register */

#define SPIM_PSELDCX_PIN_SHIFT      (0)       /* Bits 0-4: DCX pin number */
#define SPIM_PSELDCX_PIN_MASK       (0xf << SPIM_PSELDCX_PIN_SHIFT)
#define SPIM_PSELDCX_PORT_SHIFT     (5)       /* Bit 5: SCK port number */
#define SPIM_PSELDCX_PORT_MASK      (0x1 << SPIM_PSELDCX_PORT_SHIFT)
#define SPIM_PSELDCX_CONNECTED      (1 << 31) /* Bit 31: Connection */

/* Register Bitfield Definitions for SPIS *******************************************************/

/* TODO */

#endif /* __ARCH_ARM_SRC_NRF52_HARDWARE_NRF52_SPI_H */
