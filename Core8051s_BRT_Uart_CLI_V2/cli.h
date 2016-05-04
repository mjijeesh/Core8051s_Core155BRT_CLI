/*
 * cli.h
 *
 *  Created on: 02-May-2016
 *      Author: jijeesh
 */

#ifndef CLI_H_
#define CLI_H_




extern UART_instance_t g_stdio_uart;


uint8_t rx_char[10];  // buffer for address/data from user input
uint8_t *rx_char_ptr;  // pointer to above buffer



void display_brt_regs(void);
void read_user_input (uint8_t *rx_char_ptr);
uint8_t get_key_selection(void);
void display_prompt(void);
void display_help(void);
void process_uart_data(uint8_t key);
void display_mem_data(void);
void  display_brt_sa ( void);
void display_brt_data(uint32_t brt_baseaddr,uint8_t subaddr);
uint8_t  validate_brt_sa_input ( void);


uint8_t  get_data_input ( void);


void change_rt_data(uint16_t rt_adress,uint8_t sub_addr);

void modify_mem_data (uint16_t addr,uint8_t ByteCount);



#endif /* CLI_H_ */
