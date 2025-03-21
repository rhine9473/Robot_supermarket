#include "stm32f1xx_hal.h"

#ifndef __MOTOR_H_
#define __MOTOR_H_

void motor_Enable(uint8_t location);
void motor_Disable(uint8_t location);
void motor_Forward(uint8_t location);
void motor_Backward(uint8_t location);

#endif
