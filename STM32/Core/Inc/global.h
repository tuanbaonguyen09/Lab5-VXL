/*
 * global.h
 *
 *  Created on: Nov 23, 2022
 *      Author: tuanb
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "main.h"
#include "command.h"
#include "stdlib.h"
#include "stdio.h"

#define MAX_BUFFER_SIZE 30

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];

extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern uint32_t old_value;
extern uint32_t ADC_value;

#endif /* INC_GLOBAL_H_ */
