/*
 * PIR.c
 *
 *  Created on: Nov 2, 2024
 *      Author: Moham
 */

#include "PIR.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

/* initializes the PIR sensor pin direction */
void PIR_init(void) {
    GPIO_setupPinDirection(PIR_SENSOR_PORT, PIR_SENSOR_PIN, PIN_INPUT);
}

/* get PIR sensor value and returns it */
/* 1 -> there is someone, 0->no one detected */
uint8 PIR_getValue(void) {
    return GPIO_readPin(PIR_SENSOR_PORT, PIR_SENSOR_PIN);
}

