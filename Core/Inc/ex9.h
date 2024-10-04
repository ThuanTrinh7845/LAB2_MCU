/*
 * ex9.h
 *
 *  Created on: Sep 26, 2024
 *      Author: THUAN
 */

#ifndef SRC_EX9_H_
#define SRC_EX9_H_

#include "main.h"
#include "software_timer.h"

extern uint8_t matrix_buffer[8];
extern int index_led_matrix;

void displayRow(uint8_t buffer);
void updateLEDMatrix(int index);
void ex9_run();

#endif /* SRC_EX9_H_ */
