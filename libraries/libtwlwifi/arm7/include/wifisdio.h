#ifndef __WIFISDIO_H__
#define __WIFISDIO_H__

#include <nds.h>

#define WIFISDIO_BASE 0x04004a00

#define REG_SDDEVICE    0x02
#define REG_SDSTATUS0	  0x1c
#define REG_SDSTATUS1	  0x1e
#define REG_SDRESET     0xe0
#define REG_SDCLKCTL    0x24 
#define REG_SDOPT       0x28
#define REG_SDCMD       0x00
#define REG_SDCMDARG    0x04
#define REG_SDCMDARG0   0x04
#define REG_SDCMDARG1  	0x06
#define REG_SDSTOP      0x08
#define REG_SDRESP      0x0c

#define REG_SDRESP0     0x0c
#define REG_SDRESP1     0x0e
#define REG_SDRESP2     0x10
#define REG_SDRESP3     0x12
#define REG_SDRESP4     0x14
#define REG_SDRESP5     0x16
#define REG_SDRESP6     0x18
#define REG_SDRESP7     0x1a

#define REG_SDBLKLEN    0x26
#define REG_SDBLKCOUNT  0x0a
#define REG_SDFIFO      0x30

//The below defines are from tmio_mmc.h.
/* Definitions for values the CTRL_STATUS register can take. */
#define TMIO_STAT_CMDRESPEND    0x00000001
#define TMIO_STAT_DATAEND       0x00000004
#define TMIO_STAT_CARD_REMOVE   0x00000008
#define TMIO_STAT_CARD_INSERT   0x00000010
#define TMIO_STAT_SIGSTATE      0x00000020
#define TMIO_STAT_WRPROTECT     0x00000080
#define TMIO_STAT_CARD_REMOVE_A 0x00000100
#define TMIO_STAT_CARD_INSERT_A 0x00000200
#define TMIO_STAT_SIGSTATE_A    0x00000400
#define TMIO_STAT_CMD_IDX_ERR   0x00010000
#define TMIO_STAT_CRCFAIL       0x00020000
#define TMIO_STAT_STOPBIT_ERR   0x00040000
#define TMIO_STAT_DATATIMEOUT   0x00080000
#define TMIO_STAT_RXOVERFLOW    0x00100000
#define TMIO_STAT_TXUNDERRUN    0x00200000
#define TMIO_STAT_CMDTIMEOUT    0x00400000
#define TMIO_STAT_RXRDY         0x01000000
#define TMIO_STAT_TXRQ          0x02000000
#define TMIO_STAT_ILL_FUNC      0x20000000
#define TMIO_STAT_CMD_BUSY      0x40000000
#define TMIO_STAT_ILL_ACCESS    0x80000000

#ifndef USELIBMININDS
#define wifisdio_controller_init twlwifisdio_wifisdio_controller_init
#define wifisdio_initirq twlwifisdio_wifisdio_initirq

#define wifisdio_ath_init twlwifisdio_wifisdio_sdcard_init
#endif

void wifisdio_controller_init();
void wifisdio_initirq();

int wifisdio_ath_init();

#endif
