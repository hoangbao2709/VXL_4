/*
 * fsm_automatic.c
 *
 *  Created on: 27 Oct 2024
 *      Author: PC
 */

#include "fsm_automatic.h"
#include "global.h"

void Reset(){
	en0 = 1; en1 = 0; en2 = 1; en3 = 0;
	i_1 = max_Red;
	j_1 = max_Yellow;
	t_1 = max_Green;
	i_2 = max_Red;
	j_2 = max_Yellow;
	t_2 = max_Green;
	test = 1; r = 1; dem = 2;
	turn = 0;
	counter = 0, counter2 = 1;
	bool = 0;
}
void case1() {
	switch(counter){
	case 0:
		LED_RED_3();
		if (r == 1) {
			display7SEG(i_1 / 10);
		} else {
			display7SEG(i_1 % 10);
		}
		if(dem == 0){
			i_1--;
		}
		if(i_1 == 0) {
			i_1 = max_Red;
			counter++;
		}
		break;
	case 1:
		LED_GREEN_3();
		if (r == 1) {
			display7SEG(t_1 / 10);
		} else {
			display7SEG(t_1 % 10);
		}
		if(dem == 0){
			t_1--;
		}
		if(t_1 == 0) {
			t_1 = max_Green;
			counter++;
		}
		break;
	case 2:
		LED_YELLOW_3();
		if (r == 1) {
			display7SEG(j_1 / 10);
		} else {
			display7SEG(j_1 % 10);
		}
		if(dem == 0){
			j_1--;
		}
		if(j_1 == 0) {
			j_1 = max_Yellow;
			counter = 0;
		}
		break;
	}

	switch(counter2){
	case 0:
		LED_RED_4();
		if (r == 1) {
			display7SEG_1(i_2 / 10);
		} else {
			display7SEG_1(i_2 % 10);
		}
		if(dem == 0){
			i_2--;
		}
		if(i_2 == 0) {
			i_2 = max_Red;
			counter2++;
		}
		break;
	case 1:
		LED_GREEN_4();
		if (r == 1) {
			display7SEG_1(t_2 / 10);
		} else {
			display7SEG_1(t_2 % 10);
		}
		if(dem == 0){
			t_2--;
		}
		if(t_2 == 0) {
			t_2 = max_Green;
			counter2++;
		}
		break;
	case 2:
		LED_YELLOW_4();
		if (r == 1) {
			display7SEG_1(j_2 / 10);
		} else {
			display7SEG_1(j_2 % 10);
		}
		if(dem == 0){
			j_2--;
		}
		if(j_2 == 0) {
			j_2 = max_Yellow;
			counter2 = 0;
		}
		break;
	}
}
//void case3() {
//	switch(counter){
//	case 0:
//		LED_RED_1();
//		LED_RED_3();
//		sprintf(buffer1, "Den 1: %d", i_1);
//		counter++;
//		break;
//	case 1:
//		LED_GREEN_1();
//		LED_GREEN_3();
//		sprintf(buffer1, "Den 1: %d", t_1);
//		counter++;
//		break;
//	 case 2:
//		LED_YELLOW_1();
//		LED_YELLOW_3();
//		sprintf(buffer1, "Den 1: %d", j_1);
//		counter = 0;
//		break;
//	}
//
//	switch(counter2){
//	case 0:
//		LED_RED_2();
//		LED_RED_4();
//		sprintf(buffer2, "Den 2: %d", i_2);
//		counter2++;
//		break;
//	case 1:
//		LED_GREEN_2();
//		LED_GREEN_4();
//		sprintf(buffer2, "Den 2: %d", t_2);
//		counter2++;
//		break;
//	case 2:
//		LED_YELLOW_2();
//		LED_YELLOW_4();
//		sprintf(buffer2, "Den 2: %d", j_2);
//		counter2 = 0;
//		break;
//	}
//}
