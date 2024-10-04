/*
 * ex5.h
 *
 *  Created on: Sep 24, 2024
 *      Author: THUAN
 */

#ifndef INC_EX5_H_
#define INC_EX5_H_

#include "software_timer.h"
#include "main.h"
#include "ex1.h"
#include "ex3.h"

extern int hour, minute, second;
extern int en_status;
extern int led_index;

void updateClockBuffer();
void ex5_run();

#endif /* INC_EX5_H_ */
