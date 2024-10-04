/*
 * ex8.c
 *
 *  Created on: Sep 27, 2024
 *      Author: THUAN
 */
#include "ex8.h"


void ex8_run()
{

	setTimer1(10);
	setTimer2(10);
	while (1)
		{
			if (timer_flag2 == 1)
			{
				updateClockBuffer();
				setTimer2(25);
			}
			/*if (timer_flag1 == 1)
			{*/
				setTimer1(100);
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

			/*}*/
				HAL_Delay(1000);
		}
}
