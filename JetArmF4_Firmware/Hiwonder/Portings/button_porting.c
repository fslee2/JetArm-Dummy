/**
 * @file button_portting.c
 * @author Lu Yongping (Lucas@hiwonder.com)
 * @brief 板载按键接口实例及接口
 * @version 0.1
 * @date 2023-05-18
 *
 * @copyright Copyright (c) 2023
 *
 */
 
#include "main.h"
#include "button.h"
#include "global_conf.h"
#include "cmsis_os2.h"
#include "stm32f4xx.h"
#include "lwmem_porting.h"

// 全系统全局变量
ButtonObjectTypeDef* buttons[BUTTON_NUM];
static uint32_t button_read_pin(ButtonObjectTypeDef *self); /* 读取按键IO状态 */


void buttons_init(void)
{
	for(int i = 0; i < BUTTON_NUM; ++i) {
		buttons[i] = LWMEM_CCM_MALLOC(sizeof(ButtonObjectTypeDef));
		button_object_init(buttons[i]);
		buttons[i]->id = i;
	    buttons[i]->read_pin = button_read_pin;
		buttons[i]->combin_th = 300; 
		buttons[i]->lp_th = 1500;  
		buttons[i]->repeat_th = 400;
	}
}

static uint32_t button_read_pin(ButtonObjectTypeDef *self)
{
    switch(self->id) {
        case 0:
            return ((uint32_t)HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin)) ^ 1;
		default:
            return 0;
    }
}


/**
 * @brief 按键扫描
 *
 * @param argument
 */
void button_timer_callback(void *argument)
{
	for(int i = 0; i < BUTTON_NUM; ++i) {
		button_task_handler(buttons[i], BUTTON_TASK_PERIOD);
	}
}





