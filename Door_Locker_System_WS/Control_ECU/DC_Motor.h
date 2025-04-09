/*
 * DC_Motor.h
 *
 *  Created on: Nov 2, 2024
 *      Author: Moham
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "std_types.h"

typedef enum
{
	CW, A_CW , stop
}DcMotor_State;


void DcMotor_Init(void);
void DcMotor_Rotate(DcMotor_State state, uint8 speed);

#endif /* DC_MOTOR_H_ */
