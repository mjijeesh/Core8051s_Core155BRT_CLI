/*
 * Main.c
 *
 *  Created on: Sep 28, 2011
 *      Author: padalak
 */

#include "core_gpio.h"
#include "core_uart_apb.h"
#include "core_watchdog.h"
#include "core_irq_ctrl.h"
#include "core_timer.h"
#include "hal.h"
#include "Top_Level_hw_platform.h"
#include "stdio.h"



#define LED_D0		GPIO_0

#define LED_D1		GPIO_1

#define LED_D2		GPIO_2

#define LED_D3		GPIO_3

#define LED_D4		GPIO_4

#define LED_D5		GPIO_5

#define LED_D6		GPIO_6

#define LED_D7		GPIO_7

#define LED_D8		GPIO_8



#define WatchDog_COUNT 1000
#define APB3_BASE_ADDRESS	    	0xF000
#define TIMER_LOAD_VALUE	23436			// 2 second timeout

//#define TIMER_LOAD_VALUE	57383			// 5 second timeout

// UART Baud rate

#define UART_57600_BAUD  12	 // 57600 baud @ 12MHz
//#define UART_9600_BAUD   77	// 9600 baud @ 12MHz

#define UART_9600_BAUD   38	// 9600 baud @ 6MHz



// Define the instances

gpio_instance_t g_gpio;
UART_instance_t g_uart0;
wd_instance_t g_wd;
timer_instance_t g_timer0;





void timer0_isr( void );

void INT0_IRQHandler( void ) __interrupt (0)
{
//CIC_irq_handler();
timer0_isr();
}

void timer0_isr( void )
 {
 static int32_t output_state = 0;
 const uint8_t interrupt_msg[] = "\n\r** Timer interrupt received to 8051s INT 0 **\n\r";
 const uint8_t linefeed[] = "\n\r";

UART_send( &g_uart0, interrupt_msg, sizeof(interrupt_msg) );
UART_send( &g_uart0, linefeed, sizeof(linefeed) );

GPIO_set_output( &g_gpio, LED_D1, 1);

if ( output_state > 0 )
{
output_state = 0;
}
else
{
output_state = 1;
}
GPIO_set_output( &g_gpio, LED_D0, output_state);

// Clear the Timer Interrupt
TMR_clear_int( &g_timer0 );
}

void enable_8051_interrupts( void )
{
		__asm
		setb ex0 ; if using INT0
		setb ex1 ; if using INT1
		setb ea
		__endasm;
}

void C8051_interrupt_type( void )
	{
	__asm
	setb it0 ; if set INT0 for edge operation
	setb it1 ; if set INT1 for edge operation
	__endasm;
}

// Main code
int main( void )
{
	const uint8_t greeting_msg[] = "\n\r* Start the 8051s Interrupts test *\n\r";
	const uint8_t linefeed[] = "\n\r";
	const uint8_t scanning_msg[] = "\n\r    Scanning......       \n\r";
	enable_8051_interrupts( );
	//CIC_init( APB3_BASE_ADDRESS + COREINTERRUPT_0 );
	//CIC_set_irq_handler( TIMER0_IRQ_NB, timer0_isr );

	// Initialize the UART
UART_init( &g_uart0, APB3_BASE_ADDRESS + COREUARTAPB_0,      UART_9600_BAUD, DATA_8_BITS | NO_PARITY );
WD_init( &g_wd, APB3_BASE_ADDRESS + COREWATCHDOG_0,     WatchDog_COUNT, WD_PRESCALER_DIV_16 );
            WD_disable( &g_wd );
GPIO_init( &g_gpio,APB3_BASE_ADDRESS + COREGPIO_0, GPIO_APB_32_BITS_BUS );

/* Configure  GPIOs  */



    GPIO_config( &g_gpio, LED_D0, GPIO_OUTPUT_MODE );
    GPIO_config( &g_gpio, LED_D5, GPIO_OUTPUT_MODE );

    // Initialize and configure the timer.
   TMR_init( &g_timer0, APB3_BASE_ADDRESS + CORETIMER_0,                 TMR_CONTINUOUS_MODE,PRESCALER_DIV_1024, TIMER_LOAD_VALUE );



    // Enable the timer interrupt at the CoreInterrupt level.
    //CIC_enable_irq( TIMER0_IRQ_NB );



      UART_send( &g_uart0, greeting_msg, sizeof(greeting_msg) );
      UART_send( &g_uart0, linefeed, sizeof(linefeed) );

       // Enable the timer to generate interrupts.
           TMR_enable_int( &g_timer0 );
       // Start the timer.
       TMR_start( &g_timer0 );

       // LED0 on
         GPIO_set_output( &g_gpio, LED_D0, 0);

         // Infinite loop

         while( 1 )
	{

		;
	}
}
