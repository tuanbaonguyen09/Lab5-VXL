/*
 * command.c
 *
 *  Created on: Nov 23, 2022
 *      Author: tuanb
 */


#include "command.h"

int command_status = RST;

int check(int loc){
	if (buffer[loc] == 13){
		return 1;
	}
	return 0;
}

void command_parser_fsm(void){
	switch(command_status){
		case RST:{
		  if (buffer[0] == '!' && buffer[1] == 'R' && buffer[2] == 'S' && buffer[3] == 'T' && buffer[4] == '#'){
			  old_value = ADC_value;
			  command_status = OK;
			  index_buffer = 0;
		  }
			break;
		}
		case OK:{
		  if (buffer[0] == '!' && buffer[1] == 'O' && buffer[2] == 'K' && buffer[3] == '#'){
			  command_status = RST;
			  index_buffer = 0;
		  }
		}
	}
}
