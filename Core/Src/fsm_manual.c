/*
 * fsm_manual.c
 *
 *  Created on: 27 Oct 2024
 *      Author: PC
 */

#include "fsm_manual.h"
#include "scheduler.h"
int temp, test_1 = 0;

int case2(int mode, int a){
	if(en0 == 1)
		switch(mode){
		case 1:
//			LED_RED_1();
//			LED_RED_2();
			LED_RED_3();
			LED_RED_4();
			break;
		case 2:
//			LED_YELLOW_1();
//			LED_YELLOW_2();
			LED_YELLOW_3();
			LED_YELLOW_4();
			break;
		case 3:
//			LED_GREEN_1();
//			LED_GREEN_2();
			LED_GREEN_3();
			LED_GREEN_4();
			break;
		}
	else{
		off_LED();
	}

	if(button_flag[1] == 1){
	  button_flag[1] = 0;
	  if(a == 99){
		  a = 1;
	  }else
		  a++;
	}
	if(button_flag[3] == 1){
	  button_flag[3] = 0;
	  a--;
	}
	if(a == 0){
	  a = 99;
	}
	if(button_flag[2] == 1){
	  button_flag[2] = 0;
	  switch(mode){
	  case 1:
		  prev_max_Red = a;
		  break;
	  case 2:
		  prev_max_Yellow = a;
		  break;
	  case 3:
		  prev_max_Green = a;
		  break;
	  }
	}
	x = a;
	display7SEG_1(mode + 1);
	return a;
}

void fsm_manual(){
	if(button_flag[0] == 1){
		button_flag[0] = 0;
		mode++;
		test_1 = 1;
		if(mode == 4) {
			SCH_Delete_Task(3);
			if(prev_max_Red == prev_max_Green + prev_max_Yellow){
				max_Red = prev_max_Red;
				max_Green = prev_max_Green;
				max_Yellow = prev_max_Yellow;
			}else if(prev_max_Red > prev_max_Yellow){
				prev_max_Green = prev_max_Red - prev_max_Yellow;
				max_Red = prev_max_Red;
				max_Green = prev_max_Green;
				max_Yellow = prev_max_Yellow;
			}
			Reset();
			mode = 0;
		}else if(mode == 1){
			SCH_Add_Task(setup_Led7SEG, 0, 50);
		}
	}

	switch(mode){
	case 0:
		switch(en0){
		case 0:
			en0 = 1;
			en1 = 0;
			break;
		case 1:
			en0 = 0;
			en1 = 1;
			break;
		}
		if(mode == 0){
			en2 = en0;
			en3 = en1;
		}else{
			en2 = 0;
			en3 = 1;
		}
		r = -r;
		dem--;
		case1();
		if(dem == 0){
			dem = 2;
		}
	  break;
	case 1:
		if(test_1 == 1){
			temp = max_Red;
			test_1 = 0;
		}
		temp = case2(mode,temp);
		break;
	case 2:
		if(test_1 == 1){
			temp = max_Yellow;
			test_1 = 0;
		}
		temp = case2(mode, temp);
		break;
	case 3:
		if(test_1 == 1){
			temp = max_Green;
			test_1 = 0;
		}
		temp = case2(mode, temp);
		break;
	}
}
