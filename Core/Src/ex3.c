/*
 * ex3.c
 *
 *  Created on: Sep 22, 2024
 *      Author: THUAN
 */
#include "software_timer.h"
#include "ex1.h"
#include "ex3.h"

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

void update7SEG(int index)
{
	switch (index)
	{
		case 0:
			// Display the first 7 SEG with led_buffer [0]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[0]);
			break ;
		case 1:
			// Display the second 7 SEG with led_buffer [1]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[1]);
			break ;
		case 2:
			// Display the third 7 SEG with led_buffer [2]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[2]);
			break ;
		case 3:
			// Display the forth 7 SEG with led_buffer [3]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(led_buffer[3]);
			break ;
		default :
			break ;
	}
}
void ex3_run()
{
	setTimer1(10);
	while(1)
	{
		if (index_led >= MAX_LED)
		{
			index_led = 0;
		}
		if (timer_flag1 == 1)
		{
			setTimer1(100);
			HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
			update7SEG(index_led++);
		}
	}
}
