/******************************************************************************
 * FileName: aap_main.h
 * Description: Alternate SDK (libmain.a)
 * Author: PV`
 * (c) PV` 2015
 * ver 0.0.0 (b0)
*******************************************************************************/

#ifndef _INCLUDE_APP_MAIN_H_
#define _INCLUDE_APP_MAIN_H_

#include "libmain.h"

extern struct s_info info; // ip,mask,gw,mac AP, ST
extern init_done_cb_t done_cb;
extern ETSTimer check_timeouts_timer; // timer_lwip
extern uint8 user_init_flag;
//=============================================================================
// funcs libmain.a: app_main.o
//-----------------------------------------------------------------------------
void sflash_something(uint32 flash_speed);
void read_macaddr_from_otp(uint8 *mac);
void user_uart_wait_tx_fifo_empty(uint32 n, uint32 x);
void startup(void) ICACHE_FLASH_ATTR;
void read_wifi_config(void)  ICACHE_FLASH_ATTR;
void init_wifi(uint8 * init_data, uint8 * mac) ICACHE_FLASH_ATTR;
void uart_wait_tx_fifo_empty(void) ICACHE_FLASH_ATTR;
//-----------------------------------------------------------------------------


#endif /* _INCLUDE_APP_MAIN_H_ */
