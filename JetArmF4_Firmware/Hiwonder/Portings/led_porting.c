/**
 * @file led_portting.c
 * @author Lu Yongping (Lucas@hiwonder.com)
 * @brief 板载LED灯控制实例及接口实现
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 室内定位方案
 */

#include "led.h"
#include "global_conf.h"
#include "main.h"
#include "lwmem_porting.h"

/* 全系统全局变量 */
LEDObjectTypeDef *leds[LED_NUM];


static osMessageQueueId_t led_ctrl_queueHandlers[LED_NUM];  /* LED 控制队列Handle */

static void led_set_pin(LEDObjectTypeDef *self, uint32_t level);   /* LED_SYS 灯写 IO 口接口 */
static int put_ctrl_block(LEDObjectTypeDef *self, LEDCtrlTypeDef *p);   /* 控制入队接口 */
static int get_ctrl_block(LEDObjectTypeDef *self, LEDCtrlTypeDef *p);   /* 控制出队接口 */

/**
  * @brief 初始化led相关内存、变量
  * @retval None.
*/
void leds_init(void)
{
	/* 建立 LED1 控制队列 */
	for(int i = 0; i < LED_NUM; ++i) {
			led_ctrl_queueHandlers[i] = osMessageQueueNew (5, sizeof(LEDCtrlTypeDef), NULL);
			leds[i] = LWMEM_CCM_MALLOC(sizeof(LEDObjectTypeDef)); 
			led_object_init(leds[i]);
			leds[i]->id = i;
			leds[i]->set_pin = led_set_pin;
			leds[i]->get_ctrl_block = get_ctrl_block;
			leds[i]->put_ctrl_block = put_ctrl_block;
	}
}

/**
  * @brief 定时器回调
  * @detials 定时刷新LED灯状态
  * @retval None.
  *
*/
void led_timer_callback(void *argument) {
	for(int i = 0; i < LED_NUM; ++i) {
		led_task_handler(leds[i], LED_TASK_PERIOD);
	}
}


static void led_set_pin(LEDObjectTypeDef *self, uint32_t level)
{
	switch(self->id) {
		case 0:
			HAL_GPIO_WritePin(LED_BOARD_GPIO_Port, LED_BOARD_Pin, (GPIO_PinState)(level ^ 1u));
			break;
		case 1:
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin,  (GPIO_PinState)(level ^ 1u));
			break;
		default:
			break;
	}
}


/**
  * @brief LED控制队列入队接口
  * @param [in] p 要出队的控制参数结构体指针
  * @retval 0 成功
  * @retval !=0 失败 
  *
*/
static int put_ctrl_block(LEDObjectTypeDef *self, LEDCtrlTypeDef *p) {
	return (int)osMessageQueuePut(led_ctrl_queueHandlers[self->id], p, 0, 0);
}

/**
  * @brief LED 控制队列出队接口
  * @param [out] p 出队数据的存储指针
  * @retval 0 成功
  * @retval !=0 失败 
  *
*/
static int get_ctrl_block(LEDObjectTypeDef *self, LEDCtrlTypeDef *p) {
	return (int)osMessageQueueGet(led_ctrl_queueHandlers[self->id], p, 0, 0);
}

