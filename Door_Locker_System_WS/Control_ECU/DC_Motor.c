/*
 * DC_Motor.c
 *
 *  Created on: Nov 2, 2024
 *      Author: Moham
 */


#include "GPIO.h"
#include "PWM.h"
#include "DC_Motor.h"
 void DcMotor_Init(void)
 {
	 /* configure pin PB0 and PB1 as output pins */
	 GPIO_setupPinDirection(PORTD_ID,PIN6_ID,PIN_OUTPUT);
	 GPIO_setupPinDirection(PORTD_ID,PIN7_ID,PIN_OUTPUT);
	 /* Motor is stop at the beginning */
	 GPIO_writePin(PORTD_ID, PIN6_ID, LOGIC_LOW);
	 GPIO_writePin(PORTD_ID, PIN7_ID, LOGIC_LOW);

 }
 void DcMotor_Rotate(DcMotor_State state, uint8 speed)
 {
	 PWM_Timer0_Start(speed);
	 switch (state){
	 case CW:
		 GPIO_writePin(PORTD_ID, PIN6_ID, LOGIC_LOW);
		 GPIO_writePin(PORTD_ID, PIN7_ID, LOGIC_HIGH);
		 break;
	 case A_CW:
		 GPIO_writePin(PORTD_ID, PIN6_ID, LOGIC_HIGH);
		 GPIO_writePin(PORTD_ID, PIN7_ID, LOGIC_LOW);
		 break;
	 case stop:
		 GPIO_writePin(PORTD_ID, PIN6_ID, LOGIC_LOW);
		 GPIO_writePin(PORTD_ID, PIN7_ID, LOGIC_LOW);
		 break;

	 }

 }

