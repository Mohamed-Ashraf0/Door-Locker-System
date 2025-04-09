/*
 * Timer.h
 *
 *  Created on: Nov 1, 2024
 *      Author: Moham
 */
#ifndef TIMER_H_
#define TIMER_H_

#include "std_types.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "common_macros.h"


/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/



typedef enum {
	TIMER0,TIMER1,TIMER2
}Timer_ID_Type;
typedef enum
{
	NO_CLOCK,F_CPU_div_1,F_CPU_div_8,F_CPU_div_64, F_CPU_div_256,F_CPU_div_1024
}Timer_ClockType;

typedef enum
{
	NORMAL_MODE,CTC_MODE
}Timer_ModeType;


typedef struct
{
	uint16 timer_InitialValue;
	uint16 timer_compare_MatchValue;
	Timer_ID_Type  timer_ID;
	Timer_ClockType timer_clock;
	Timer_ModeType  timer_mode;
}Timer_ConfigType;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void TIMER_init(const Timer_ConfigType * Config_Ptr);
void Timer_deInit(Timer_ID_Type timer_type);
void Timer_setCallBack(void(*ptr)(void),Timer_ID_Type timer_ID);

#endif /* TIMER_H_ */
