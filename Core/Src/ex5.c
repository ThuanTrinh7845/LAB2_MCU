/*
 * ex5.c
 *
 *  Created on: Sep 24, 2024
 *      Author: THUAN
 */

#include "ex5.h"

int en_status = 0;
int led_index = 0;
int hour = 15, minute = 8, second = 50;

void ex5_run()
{
	while (1)
	{
		second++;
		if (second >= 60)
		{
			second = 0;
			minute++;
		}
		if (minute >= 60)
		{
			minute = 0;
			hour++;
		}
		if (hour >= 24)
		{
			hour = 0;
		}
		HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
		updateClockBuffer();
		HAL_Delay(1000);
	}
}
void updateClockBuffer()
{
	if (led_index >= 4)
	{
		led_index = 0;
	}
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;

	led_buffer[2] = minute / 10;
	led_buffer[3] = minute %10;

	update7SEG(led_index++);
}
