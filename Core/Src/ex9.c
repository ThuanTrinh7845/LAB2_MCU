/*
 * ex9.c
 *
 *  Created on: Sep 26, 2024
 *      Author: THUAN
 */
#include "ex9.h"
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x00, 0xFC, 0x12, 0x11, 0x11, 0x12, 0xFC, 0x00};

void displayRow(uint8_t buffer)
{
		if (buffer & 0x01)
			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_RESET);
		else
			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);

		if (buffer & 0x02)
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_RESET);
		else
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);

		if (buffer & 0x04)
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_RESET);
		else
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);

		if (buffer & 0x08)
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_RESET);
		else
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);

		if (buffer & 0x10)
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_RESET);
		else
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);

		if (buffer & 0x20)
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_RESET);
		else
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);

		if (buffer & 0x40)
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_RESET);
		else
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);

		if (buffer & 0x80)
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_RESET);
		else
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);
}

void updateLEDMatrix(int index)
{
	switch(index)
	{

		case 0:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
			displayRow(matrix_buffer[7]);
			break;
		case 1:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			displayRow(matrix_buffer[6]);
			break;
		case 2:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			displayRow(matrix_buffer[5]);
			break;
		case 3:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			displayRow(matrix_buffer[4]);
			break;
		case 4:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			displayRow(matrix_buffer[3]);
			break;
		case 5:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			displayRow(matrix_buffer[2]);
			break;
		case 6:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			displayRow(matrix_buffer[1]);
			break;
		case 7:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			displayRow(matrix_buffer[0]);
			break;
		default:
			break;
	}
}


void ex9_run()
{
	setTimer1(10);
	while(1)
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
	}
}
