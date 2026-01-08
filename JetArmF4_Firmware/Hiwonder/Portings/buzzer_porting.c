/**
 * @file buzzer_porting.c
 * @author Lu Yongping (Lucas@hiwonder.com)
 * @brief 板载蜂鸣器实例及接口
 * @version 0.1
 * @date 2023-05-18
 *
 * @copyright Copyright (c) 2023
 *
 */


#include "global_include.h"


/* 全系统全局变量 */
BuzzerObjectTypeDef *buzzers[BUZZER_NUM];
static osMessageQueueId_t buzzer_ctrl_ququeHandle; /* 蜂鸣器控制队列Handle */

static void buzzer_set_pwm(BuzzerObjectTypeDef *self, uint32_t freq);          /* pwm设置接口 */
static int put_ctrl_block(BuzzerObjectTypeDef *self, BuzzerCtrlTypeDef *p);   /* 控制入队接口 */
static int get_ctrl_block(BuzzerObjectTypeDef *self, BuzzerCtrlTypeDef *p);   /* 控制出队接口 */


/**
  * @brief 蜂鸣器相关的初始化
  * @retval None.
  *
*/
void buzzers_init(void)
{
	HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);  /* 设置蜂鸣器引脚IO为低电平 */
	
	/* 建立蜂鸣器控制队列 */
	buzzer_ctrl_ququeHandle = osMessageQueueNew (5, sizeof(BuzzerCtrlTypeDef), NULL);
	
	/* 建立蜂鸣器对象实例 */
    buzzers[0] = LWMEM_CCM_MALLOC(sizeof(BuzzerObjectTypeDef)); 
	buzzer_object_init(buzzers[0]);
	buzzers[0]->id = 0;
    buzzers[0]->set_pwm = buzzer_set_pwm;
	buzzers[0]->get_ctrl_block = get_ctrl_block;
	buzzers[0]->put_ctrl_block = put_ctrl_block;

	/* 定时器的各个参数配置有 STM32CubeMX 软件配置生成 */
    __HAL_TIM_SET_COUNTER(&htim11, 0);               /* 清零定时器计数值 */
	__HAL_TIM_ENABLE(&htim11);
}


/**
  * @brief 系统定时器回调
  * @detials 定时刷新LED灯状态，定时时间通过 CubeMx 设置
  * @retval None.
  *
*/
void buzzer_timer_callback(void *argument)
{
		for(int i = 0; i < BUZZER_NUM; ++i) {
			buzzer_task_handler(buzzers[i], BUZZER_TASK_PERIOD);
		}
}


/**
  * @brief 蜂鸣器 PWM 设置接口
  * @param freq PWM 频率
  * @retval None.
  *
*/
static void buzzer_set_pwm(BuzzerObjectTypeDef *self, uint32_t freq)
{
	freq  = freq > 20000 ? 20000: freq;

    if(freq < 10) {
		HAL_TIM_PWM_Stop(&htim11, TIM_CHANNEL_1); 
        return;
    }

    uint32_t period = 100000u / freq;
    uint16_t pulse = period / 2 - 1;
    uint32_t counter_period = period - 1;
    __HAL_TIM_SET_AUTORELOAD(&htim11, counter_period);
	__HAL_TIM_SET_COMPARE(&htim11, TIM_CHANNEL_1, pulse);
	HAL_TIM_PWM_Start(&htim11, TIM_CHANNEL_1);
}

/**
  * @brief 蜂鸣器控制队列入队接口
  * @param p 要出队的控制参数结构体指针
  * @retval 0 成功
  * @retval !=0 失败 
  *
*/
static int put_ctrl_block(BuzzerObjectTypeDef *self, BuzzerCtrlTypeDef *p) {
	return (int)osMessageQueuePut(buzzer_ctrl_ququeHandle, p, 0, 0);
}

/**
  * @brief 蜂鸣器控制队列出队接口
  * @param  出队数据的存储指针
  * @retval 0 成功
  * @retval !=0 失败 
  *
*/
static int get_ctrl_block(BuzzerObjectTypeDef *self, BuzzerCtrlTypeDef *p) {
	return (int)osMessageQueueGet(buzzer_ctrl_ququeHandle, p, 0, 0);
}


