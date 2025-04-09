/*
 * PIR.h
 *
 *  Created on: Nov 2, 2024
 *      Author: Moham
 */

#ifndef PIR_H_
#define PIR_H_

#include "std_types.h"
#include "GPIO.h"
/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define PIR_SENSOR_PORT PORTC_ID
#define PIR_SENSOR_PIN  PIN2_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/* initializes the PIR sensor pin direction */
void PIR_init(void);

/* get PIR sensor value and returns it */
uint8 PIR_getValue(void);


#endif /* PIR_H_ */
