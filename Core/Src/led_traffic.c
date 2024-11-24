/*
 * trafic_a.c
 *
 *  Created on: Sep a7, b0bd
 *      Author: PC
 */

#include "led_traffic.h"


//void LED_RED_a(void) {
//    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
//    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
//}
//
//void LED_GREEN_a(void) {
//    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
//    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
//}
//
//void LED_YELLOW_a(void){
//    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
//    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
//}
//
//void LED_RED_b(void) {
//    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
//    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
//}
//
//void LED_GREEN_b(void) {
//    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
//    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
//}
//
//void LED_YELLOW_b(void){
//    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
//    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
//}

void LED_RED_3(void) {
    HAL_GPIO_WritePin(bit_a_GPIO_Port, bit_a_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(bit_b_GPIO_Port, bit_b_Pin, GPIO_PIN_SET);
}

void LED_GREEN_3(void) {
    HAL_GPIO_WritePin(bit_a_GPIO_Port, bit_a_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(bit_b_GPIO_Port, bit_b_Pin, GPIO_PIN_RESET);
}

void LED_YELLOW_3(void){
    HAL_GPIO_WritePin(bit_a_GPIO_Port, bit_a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(bit_b_GPIO_Port, bit_b_Pin, GPIO_PIN_SET);
}

void LED_RED_4(void) {
    HAL_GPIO_WritePin(bit_c_GPIO_Port, bit_c_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(bit_d_GPIO_Port, bit_d_Pin, GPIO_PIN_SET);
}

void LED_GREEN_4(void) {
    HAL_GPIO_WritePin(bit_c_GPIO_Port, bit_c_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(bit_d_GPIO_Port, bit_d_Pin, GPIO_PIN_RESET);
}

void LED_YELLOW_4(void){
    HAL_GPIO_WritePin(bit_c_GPIO_Port, bit_c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(bit_d_GPIO_Port, bit_d_Pin, GPIO_PIN_SET);
}


void off_LED(void){
//	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bit_a_GPIO_Port, bit_a_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bit_b_GPIO_Port, bit_b_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bit_c_GPIO_Port, bit_c_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bit_d_GPIO_Port, bit_d_Pin, GPIO_PIN_RESET);
}
