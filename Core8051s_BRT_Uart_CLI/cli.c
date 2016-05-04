#include "core_gpio.h"  /* For getting GPIO read/write functions */
#include "core_uart_apb.h"
#include "socDefs.h"
#include "hal.h"

#include "Top_Level_hw_platform.h"

#include "cli.h"
#include "brt.h"


uint32_t  user_input = 0;
uint8_t last_rt_subaddress= BRT_RX_SA1;
uint8_t last_sub_address;
uint8_t last_msg_no;
uint8_t  temp;



void display_help(void){
	uint8_t tx_data[24][40] = {

	      {"\r\nR Read BRT Register  		   "},
	      {"\r\nM Modify  BRT TX Buffer 		   "},
	      {"\r\nD Display BRT  TX/RX Buffer Data"},
	      {"\r\nB Display BC messages        "},
	      {"\r\nX Start BRM BC               "},
	      {"\r\nC Change the BRT Address(Default:0x4 "},
	      {"\r\nN change the BC Data values   "},
	      {"\r\nH Display This Menu        \r\n"}
	 };

	      UART_send(&g_stdio_uart, tx_data[0],sizeof(tx_data));


}

/* Display the Prompt for the User Interaction */

void display_prompt(void) {

	dp_display_text("\r\nCore1553BRT>");


}

/* Decode the Key pressed by the User to select the Apropriate Action */

uint8_t get_key_selection(void)
{

      uint8_t rx_data[2];
      uint8_t rx_size =0;


           do {
               rx_size = UART_get_rx(&g_stdio_uart, &rx_data[1],1);
           }while(rx_size == 0);

           key = rx_data[1];
           //dp_display_text("\n\r Selected fuction is: ");
           UART_send (&g_stdio_uart, &key,sizeof (key));
           return rx_data[1];

    }


/* This function reads the user input such as address and data required for any
 * memory read/write operation
 *
 *  */
		void read_user_input (uint8_t *rx_char_ptr)
		{
		    uint8_t recv_char=0;
		    uint8_t size=0;
		    uint8_t index = 0;
		    for(index = 0; index < 10; index++)
		    {
		    	rx_char[index] = '0';
		    }
		    index = 0;
		    while(recv_char != 13)  //'\n'
		    {
		      size = UART_get_rx(&g_stdio_uart, &recv_char,1);
			  if(size > 0)
			  {

				  rx_char_ptr[index] = recv_char;
				  UART_send (&g_stdio_uart, (uint8_t *)&recv_char,sizeof(recv_char));
				  index++;
				  size = 0; // clear the rcvd flag
			  }
			}

		}

/* Display the contents of BRT Control and Status Registers
 * These are located at offset 0x1f80
 * Total number of registers 32
 */

void display_brt_regs(void){

			 uint32_t  mem_addr,mem_data;
			 //uint32_t   bc_reg[16];
			 uint8   i;
			mem_addr  = ( APB3_BASE_ADDRESS + CORE1553BRT_0) + BRT_REG_OFFSET ;  // base address of BRT instance, 32location from here onwards

			 dp_display_text("\n\r BRT Register Contents\r\n ");
			 for ( i=0; i<= 32 ;i++) {
			   dp_display_text("\r\n");
			   dp_display_value(i,DEC);
			   dp_display_text("\t");
			   dp_display_value(mem_addr,HEX);
			   dp_display_text("\t");
			   mem_data = HW_get_16bit_reg(mem_addr);
			   dp_display_value(mem_data,HEX);
			   mem_addr = mem_addr++;
			 }
		 }



/* Display Contents of BRT Sub addresses.
 *
 *
 * */

void display_brt_data(uint32_t brt_baseaddr,uint8_t subaddr){

			 uint16_t   mem_addr,mem_data;
			 uint16_t   tx_sub_address,rx_sub_address;

			 uint8_t   i,m;

			 mem_addr  = (APB3_BASE_ADDRESS +  brt_baseaddr);  // 16 location from here onwards

			 rx_sub_address = mem_addr + (BRT_RX_SA1 * subaddr);   //0x1080
			 tx_sub_address = rx_sub_address + BRT_RX_TX_ADDR_OFSET;

			 dp_display_text("\n\r BRT SA");
			 dp_display_value(subaddr,DEC);
			 dp_display_text("   RX Buffer\r\n");

			 for ( i=1; i <= 4 ;i++) {
				dp_display_text("\r\n");
				dp_display_value(i,DEC);
				dp_display_text("\t");
				dp_display_value(rx_sub_address ,HEX);// ( 8* i) for calculating current address of the total 32 location
				dp_display_text("\t");

				for (m=1; m <=8 ;m++){

				  mem_data= HW_get_16bit_reg(rx_sub_address);
				 dp_display_value(mem_data,HEX);
				 dp_display_text("\t");
				 rx_sub_address = rx_sub_address + 1;
				}

			 }


			 dp_display_text("\n\r BRT SA");
			 dp_display_value(subaddr,DEC);
			 dp_display_text("  TX Buffer\r\n");

			 			 for ( i=1; i <= 4 ;i++) {
			 				dp_display_text("\r\n");
			 				dp_display_value(i,DEC);
			 				dp_display_text("\t");
			 				dp_display_value(tx_sub_address,HEX);
			 				dp_display_text("\t");

			 				for (m=1; m <=8 ;m++){

			 				  mem_data= HW_get_16bit_reg(tx_sub_address);
			 				 dp_display_value(mem_data,HEX);
			 				 dp_display_text("\t");
			 				tx_sub_address = tx_sub_address + 1;
			 				}

			 			 }

		 }




/*  Process the User Input Selection and display teh Relevent data */


void process_uart_data(uint8_t key)
		   {
			   switch(key)
		       {

				   case 'R' : case 'r':
			   	   {
			   			//print_registers();
			   		display_brt_regs();



			   		break;
			   	   }



				   case 'H': case 'h':
				  	    {

				   		display_help();
                        break;
				  	    }

				   case 'D': case 'd':
					   {


						   display_brt_sa (); //get user input and display SA data
						  // display_brt_data(CORE1553BRT_0 ,1);
						  // display_mem_data();
							break;
					   }


				   default:  /* If selected key is out of range */
				   {

					   break;
				   }
		       }


			   display_prompt();

		   }



/*  this is test program */
void display_mem_data(void){

			 uint16_t   mem_addr,mem_data;
			 uint16_t   tx_sub_address,rx_sub_address;


			 uint8_t   i,m;

			 mem_addr  = (APB3_BASE_ADDRESS +  COREAPBSRAM_0);  // 16 location from here onwards

			 rx_sub_address = mem_addr;   //0x1080
			 tx_sub_address = mem_addr;
			 mem_data   = 0x0000;

			 dp_display_text("\n\r MEMORY FiLLING WIETH FOLLOWING DATA ");
			// dp_display_value(subaddr,DEC);
			// dp_display_text("   RX Buffer\r\n");

			 for ( i=0; i <= 3 ;i++) {
				dp_display_text("\r\n");
				dp_display_value(i,DEC);
				dp_display_text("\t");
				dp_display_value(rx_sub_address,HEX);// ( 8* i) for calculating current address of the total 32 location
				dp_display_text("\t");

				for (m=1; m <=8 ;m++){

				  HW_set_16bit_reg(rx_sub_address,mem_data);
				 dp_display_value(mem_data,HEX);
				 dp_display_text("\t");
				 rx_sub_address = rx_sub_address + 1;
				 mem_data = mem_data + 4;
				}

			 }


			 dp_display_text("\n\r Reading back the data from the same location");
			// dp_display_value(subaddr,DEC);
			// dp_display_text("  TX Buffer\r\n");

			 			 for ( i=0; i <= 3 ;i++) {
			 				dp_display_text("\r\n");
			 				dp_display_value(i,DEC);
			 				dp_display_text("\t");
			 				dp_display_value(tx_sub_address,HEX);
			 				dp_display_text("\t");

			 				for (m=1; m <=8 ;m++){

			 				  mem_data= HW_get_16bit_reg(tx_sub_address);
			 				 dp_display_value(mem_data,HEX);
			 				 dp_display_text("\t");
			 				tx_sub_address = tx_sub_address + 1;
			 				}

			 			 }

		 }


/* This functions gets a user input from terminal and display the memory data for the correspendign SA */
void  display_brt_sa ( void) {
	  uint8_t  subaddr;

							while (1) {
							dp_display_text("Sub Address #(1 to 31 ): ");
							rx_char_ptr = rx_char;
							read_user_input(rx_char_ptr);
							xatoi ( &rx_char_ptr, &subaddr);
							dp_display_text("\r\nInput recived :  ");
							dp_display_value(subaddr,HEX);

							if ((subaddr > 0 ) && (subaddr < 32))
								{

								display_brt_data(CORE1553BRT_0 ,subaddr);

								 break;

								}
							   else {

								   dp_display_text("\r\n\Invaid input !!!!! Enter the Sub Address # ( 1 to 31)to display Data: ");

									}

						   }


}


