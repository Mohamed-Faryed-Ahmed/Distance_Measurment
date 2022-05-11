/* *****************************************************************************************************
 *
 * Name : main.c
 *
 * Author: Mohamed Faryed
 *
 * Description: this application responsible for calculate the distance
 *              then print it on LCD device
 *
 * Created on: March 4, 2022
 *
 ********************************************************************************************************/

#include "main.h"


int main(void)
{
	Ultrasonic_init();
	SREG |= (1<<7);
	LCD_init();
	uint16 distant=0;
	while(1)
	{
		distant= Ultrasonic_readDistance();
		LCD_moveCursor(0,2);
		LCD_displayString("dist = ");
		LCD_moveCursor(0,9);
		LCD_intgerToString(distant);
		LCD_displayString("CM  ");
	}
}
