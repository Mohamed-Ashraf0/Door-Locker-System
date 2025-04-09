/*
 * Buzeer.c
 *
 *  Created on: Nov 2, 2024
 *      Author: Moham
 */

#include "GPIO.h"
#include "Buzzer.h"

void Buzzer_init(void)
{
	GPIO_setupPinDirection(PORTC_ID,PIN7_ID,PIN_OUTPUT);
	GPIO_writePin(PORTC_ID, PIN7_ID, LOGIC_LOW);
}

void Buzzer_on(void)
{
	GPIO_writePin(PORTC_ID, PIN7_ID, LOGIC_HIGH);
}

void Buzzer_off(void)
{
	GPIO_writePin(PORTC_ID, PIN7_ID, LOGIC_LOW);
}

