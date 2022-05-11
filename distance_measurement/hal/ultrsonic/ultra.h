/* ***********************************************************************************************
 *
 *Module : ULTRASONIC
 *
 * Name  :  ultra.h
 *
 * Author: Mohamed Faryed
 *
 * Description: header file of ultrasonic driver for AVR
 *
 * Created on: March 3, 2022
 *
 ***************************************************************************************************/
#include "../../std_types.h"

#ifndef HAL_ULTRSONIC_ULTRA_H_
#define HAL_ULTRSONIC_ULTRA_H_
/********************************************************************************************************
 *                                Definition                                                            *
 ********************************************************************************************************/
#define TRIGER_PORT       PORTB_ID
#define TRIGER_PIN        PIN5_ID

#define ECHO_PORT       PORTD_ID
#define ECHO_PIN        PIN6_ID
/********************************************************************************************************
 *                               Function Prototype                                                     *
 ********************************************************************************************************/


/*
 *  Description:
 *               give the require input for ICU
 *               determine which pin will be trigger signal
 *               start signal to calculate time distance
 ********************************************************************************************************/
void Ultrasonic_init(void);




/*
 *  Description:
 *               start signal to calculate time distance
 ********************************************************************************************************/
void Ultrasonic_Trigger(void);




/*
 *  Description:
 *                calculate the distance and return the value
 ********************************************************************************************************/
uint16 Ultrasonic_readDistance(void);

#endif /* HAL_ULTRSONIC_ULTRA_H_ */
