/*
 * ex10.c
 *
 *  Created on: Sep 28, 2024
 *      Author: THUAN
 */

#include "ex10.h"


void shift_left()
{
	uint8_t temp = matrix_buffer[0];
	for (int i = 0; i < 7; i++)
	{
		matrix_buffer[i] = matrix_buffer[i+1];
	}
	matrix_buffer[7] = temp;
}


void ex10_run()
{
	setTimer1(10);
	setTimer2(10);
	while (1)
	{
		if (index_led_matrix >= 8)
		{
			index_led_matrix = 0;
		}

		if (timer_flag1 == 1)
		{
			setTimer1(10);
			updateLEDMatrix(index_led_matrix++);
		}
		if (timer_flag2 == 1)
		{
			setTimer2(50);
			shift_left();
		}
	}
}
