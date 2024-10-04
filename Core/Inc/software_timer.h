/*
 * software_timer.h
 *
 *  Created on: Sep 22, 2024
 *      Author: THUAN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag1, timer_flag2;

void setTimer1(int duration);
void setTimer2(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
