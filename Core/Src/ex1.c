/*
 * ex1.c
 *
 *  Created on: Sep 22, 2024
 *      Author: THUAN
 */
#include "software_timer.h"
#include "ex1.h"

int num = 0;

void display7SEG(int num)
{
	HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
	if (num == 0)
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
	}
	if (num == 1)
	{
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
	}
	if (num == 2)
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
	}
	if (num == 3)
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
	}
	if (num == 4)
	{
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
	}
	if (num == 5)
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
	}
	if (num == 6)
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
	}
	if (num == 7)
	{
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
	}
	if (num == 7)
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
	}
	if (num == 8)
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
	}
	if (num == 9)
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
	}
}
void ex1_run()
{
	setTimer1(100);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	while(1)
	{
		if (num >= 10)
		{
			num = 0;
		}
		if (timer_flag1 == 1)
		{
			setTimer1(100);
			HAL_GPIO_TogglePin(EN0_GPIO_Port, EN0_Pin);
			HAL_GPIO_TogglePin(EN1_GPIO_Port, EN1_Pin);
			display7SEG(num++);
		}

	}
}
