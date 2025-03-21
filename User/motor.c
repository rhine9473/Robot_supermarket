#include "headfile.h"

/*PWM溢出频率是4KHz，如果选择每1600Pulse电机一转，则电机每0.4s一转*/

void motor_Enable(uint8_t location)//电机使能
{
    if(location == 1)//左前轮
    {
        HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_1);
    }
    else if(location == 2)//右前轮
    {
        HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_2);
    }
    else if(location == 3)//左后轮
    {
        HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_3);
    }
    else if(location == 4)//右后轮
    {
        HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_4);
    }
}

void motor_Disable(uint8_t location)//电机失能
{
    if(location == 1)//左前轮
    {
        HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_1);
    }
    else if(location == 2)//右前轮
    {
        HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_2);
    }
    else if(location == 3)//左后轮
    {
        HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_3);
    }
    else if(location == 4)//右后轮
    {
        HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_4);
    }
}

void motor_Forward(uint8_t location)//电机正转
{
    if(location == 1)//左前轮
    {
        HAL_GPIO_WritePin(MOTOR_FRONT_LEFT_DIR__GPIO_Port,MOTOR_FRONT_LEFT_DIR__Pin,GPIO_PIN_RESET);
    }
    else if(location == 2)//右前轮
    {
        HAL_GPIO_WritePin(MOTOR_FRONT_RIGHT_DIR__GPIO_Port,MOTOR_FRONT_RIGHT_DIR__Pin,GPIO_PIN_RESET);
    }
    else if(location == 3)//左后轮
    {
        HAL_GPIO_WritePin(MOTRO_BEHIND_LEFT_DIR__GPIO_Port,MOTRO_BEHIND_LEFT_DIR__Pin,GPIO_PIN_RESET);
    }
    else if(location == 4)//右后轮
    {
        HAL_GPIO_WritePin(MOTOR_BEHIND_RIGHT_DIR__GPIO_Port,MOTOR_BEHIND_RIGHT_DIR__Pin,GPIO_PIN_RESET);
    }
}

void motor_Backward(uint8_t location)//电机反转
{
    if(location == 1)//左前轮
    {
        HAL_GPIO_WritePin(MOTOR_FRONT_LEFT_DIR__GPIO_Port,MOTOR_FRONT_LEFT_DIR__Pin,GPIO_PIN_SET);
    }
    else if(location == 2)//右前轮
    {
        HAL_GPIO_WritePin(MOTOR_FRONT_RIGHT_DIR__GPIO_Port,MOTOR_FRONT_RIGHT_DIR__Pin,GPIO_PIN_SET);
    }
    else if(location == 3)//左后轮
    {
        HAL_GPIO_WritePin(MOTRO_BEHIND_LEFT_DIR__GPIO_Port,MOTRO_BEHIND_LEFT_DIR__Pin,GPIO_PIN_SET);
    }
    else if(location == 4)//右后轮
    {
        HAL_GPIO_WritePin(MOTOR_BEHIND_RIGHT_DIR__GPIO_Port,MOTOR_BEHIND_RIGHT_DIR__Pin,GPIO_PIN_SET);
    }
}
