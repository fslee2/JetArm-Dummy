#include "global_include.h"

PWMServoObjectTypeDef *pwm_servos[PWM_SERVO_NUM];

static void set_pwm(PWMServoObjectTypeDef *self,  uint32_t pulse_width)
{
    uint32_t channel = 4 * self->id;
    __HAL_TIM_SET_COMPARE(&htim2, pulse_width,  channel);
    HAL_TIM_PWM_Start(&htim2,  channel);
}


void pwm_servos_init(void)
{
    for(int i = 0; i < PWM_SERVO_NUM; ++i) {
        pwm_servos[i] = LWMEM_CCM_MALLOC(sizeof(PWMServoObjectTypeDef));
        pwm_servo_object_init(pwm_servos[i]);  // 初始化PWM舵机对象内存
        pwm_servos[i]->id = i;
        pwm_servos[i]->set_pwm = set_pwm;
    }

    __HAL_TIM_SET_COUNTER(&htim2, 0);
    __HAL_TIM_CLEAR_FLAG(&htim2, TIM_FLAG_UPDATE);
    __HAL_TIM_ENABLE_IT(&htim2, TIM_IT_UPDATE);
    __HAL_TIM_ENABLE(&htim2);
}


void pwm_servo_hw_timer_irq(void)
{
    if(__HAL_TIM_GET_FLAG(&htim2, TIM_FLAG_UPDATE) != RESET) {
        __HAL_TIM_CLEAR_FLAG(&htim2, TIM_FLAG_UPDATE);
        for(int i = 0; i < PWM_SERVO_NUM; ++i) {
            pwm_servo_duty_compare(pwm_servos[i]);
        }
    }
}