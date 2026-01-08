#include "tim.h"
#include "lwmem_porting.h"
#include "dc_motor.h"

/* 全局变量 */
DC_MotorObjectTypeDef *motors[2];

static void motor1_set_pulse(DC_MotorObjectTypeDef *self, float speed);
static void motor2_set_pulse(DC_MotorObjectTypeDef *self, float speed);

void motors_init(void)
{
    for(int i = 0; i < 2; ++i) {
        motors[i] = LWMEM_CCM_MALLOC(sizeof(DC_MotorObjectTypeDef));
    }

    motors[0]->set_duty_cycle = motor1_set_pulse;
    motors[1]->set_duty_cycle = motor2_set_pulse;
    __HAL_TIM_SET_COUNTER(&htim4, 0);
    __HAL_TIM_MOE_ENABLE(&htim4);
    __HAL_TIM_ENABLE(&htim4);
}


static void motor1_set_pulse(DC_MotorObjectTypeDef *self, float speed)
{
    if(speed > 0) {
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_3, 0);
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, (int)(speed * 100));
    } else if(speed < 0) {
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_3, (int)(-speed * 100));
    } else {
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_3, 0);
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
    }
    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_3);
    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_4);
}


static void motor2_set_pulse(DC_MotorObjectTypeDef *self, float speed)
{
    if(speed > 0) {
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_1, 0);
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_2, (int)(speed * 100));
    } else if(speed < 0) {
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_2, 0);
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_1, (int)(-speed * 100));
    } else {
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_1, 0);
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_2, 0);
    }
    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_2);
}

