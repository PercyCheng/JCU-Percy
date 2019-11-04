/* ###################################################################
**     Filename    : main.c
**     Project     : Corey_smith_Assignment1
**     Processor   : MK22FN512VDC12
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-08-29, 12:00, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Pins1.h"
#include "PTB3.h"
#include "BitIoLdd1.h"
#include "PTB2.h"
#include "BitIoLdd2.h"
#include "PTC2.h"
#include "BitIoLdd3.h"
#include "AS1.h"
#include "ASerialLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PDD_Includes.h"
#include "Init_Config.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include <stdbool.h>
#include <string.h>
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
  void send_string(char *str)
  {
	  byte c, err;
	  size_t len; // a size_t is an unsigned integer
	  len = strlen(str); // returns the number of chars in str
	  int i;
	  for (i = 0; i < len+1; i++) {

		  do {
			  err = AS1_SendChar(str[i]);
		  } while (err != ERR_OK);
	  }
  }

int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  for(;;){


  	byte c,err;
  	err = AS1_RecvChar(&c);

  	if (err == ERR_OK){
  		if (c == '1'){
  			PTB2_ClrVal();
  			PTB3_ClrVal();
  			PTC2_ClrVal();
  			send_string("The first LED is on\r\n");
  		}
  		if (c == '2'){
  		  	PTB2_SetVal();
  		  	PTB3_ClrVal();
  		  	PTC2_ClrVal();
  		  send_string("The second LED is on\r\n");
  		}
  		if (c == '3'){
  		  	PTB2_ClrVal();
  		  	PTB3_SetVal();
  		  	PTC2_ClrVal();
  		  send_string("The third LED is on\r\n");
  		}
  		if (c == '4'){
  		  	PTB2_SetVal();
  		  	PTB3_SetVal();
  		  	PTC2_ClrVal();
  		  send_string("The fourth LED is on\r\n");
  		}
  		if (c == '5'){
  		  	PTB2_ClrVal();
  		  	PTB3_ClrVal();
  		    PTC2_SetVal();
  		  send_string("The fifth LED is on\r\n");
  		}
  		if (c == '6'){
  		  	PTB2_SetVal();
  		  	PTB3_ClrVal();
  		  	PTC2_SetVal();
  		  send_string("The sixth LED is on\r\n");
  		}

  	}







  }

  /* For example: for(;;) { } */

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
