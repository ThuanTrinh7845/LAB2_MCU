/*
 * software_timer.c
 *
 *  Created on: Sep 22, 2024
 *      Author: THUAN
 */
#include "software_timer.h"

int timer_flag1 = 0, timer_flag2 = 0;
int counter1, counter2;

void setTimer1(int duration)
{
	counter1 = duration;
	timer_flag1 = 0;
}

void setTimer2(int duration)
{
	counter2 = duration;
	timer_flag2 = 0;
}

void timerRun()
{
	if (counter1 > 0)
	{
		counter1--;
		if (counter1 <= 0)
		{
			timer_flag1 = 1;
		}
	}

	if (counter2 > 0)
	{
		counter2--;
		if (counter2 <= 0)
		{
			timer_flag2 = 1;
		}
	}
}
