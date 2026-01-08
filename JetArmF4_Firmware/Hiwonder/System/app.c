/**
 * @file app.c
 * @author Lu Yongping (Lucas@hiwonder.com)
 * @brief 主应用逻辑
 * @version 0.1
 * @date 2023-05-08
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "global_conf.h"
#include "global_include.h"
#include "lwmem_porting.h"


void button_event_callback(ButtonObjectTypeDef *button,  ButtonEventIDEnum event)
{
	printf("key_id:%d, key_event:%d\r\n", button->id, (int)event);
	if(BUTTON_EVENT_PRESSED == event) {
		led_flash(leds[0], 10,  1, 1);
		buzzer_didi(buzzers[0], 1000, 50, 1, 1);
	}
    PacketReportKeyEventTypeDef report = {
        .key_id = button->id,
        .event = (uint8_t)(int)event,
    };
    packet_transmit(&packet_controller, PACKET_FUNC_KEY, &report, sizeof(PacketReportKeyEventTypeDef));
	if(event == BUTTON_EVENT_CLICK) {
		buzzer_didi(buzzers[0], 2000, 50, 50, 1);
	}
}

void app_main(void *argument)
{
    extern osTimerId_t led_timerHandle;
    extern osTimerId_t button_timerHandle;
    extern osTimerId_t buzzer_timerHandle;

    leds_init();
    buttons_init();
    buzzers_init();

		serial_servo_init();
		motors_init();
    button_register_callback(buttons[0], button_event_callback);
	
    osTimerStart(led_timerHandle, LED_TASK_PERIOD);
    osTimerStart(button_timerHandle, BUTTON_TASK_PERIOD);
		osTimerStart(buzzer_timerHandle, BUZZER_TASK_PERIOD);
    packet_handle_init();




    for(;;) {
		osDelay(10000);
    }
}