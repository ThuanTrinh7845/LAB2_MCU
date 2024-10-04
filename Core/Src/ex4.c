/*
 * ex4.c
 *
 *  Created on: Sep 24, 2024
 *      Author: THUAN
 */
#include "ex1.h"
#include "ex4.h"

void ex4_run()
{
	setTimer1(10);
	setTimer2(10);
	int en_stat = 0;
	while (1)
	{
		if (timer_flag1 == 1)
		{
			setTimer1(100);
			HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
		}
		if (timer_flag2 == 1)
		{
			setTimer2(25);
			switch(en_stat)
			{
				case 0:
					en_stat = 1;
						HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
						HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
						HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
						HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
						display7SEG(1);
						break;
					case 1:
						en_stat = 2;
						HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
						HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
						HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
						HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
						display7SEG(2);
						break;
					case 2:
						en_stat = 3;
						HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
						HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
						HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
						HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
						display7SEG(3);
						break;
					case 3:
						en_stat = 0;
						HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
						HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
						HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
						HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
						display7SEG(0);
						break;
				}
			}
		}
}
