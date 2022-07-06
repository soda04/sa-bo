/*
 * cppmain.cpp
 *
 *  Created on: Jul 6, 2022
 *      Author: Owner
 */

#include"main.h"

extern  TIM_HandleTypeDef htim1;

void cppmain(){
	HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_2);

	while(1){
		__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_2,2000);
		HAL_Delay(4000);
		__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_2,1000);
		HAL_Delay(4000);
	}
}

