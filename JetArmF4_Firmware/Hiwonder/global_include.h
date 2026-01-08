#ifndef __GLOBAL_H_
#define __GLOBAL_H_
#include <stdio.h>
#include <string.h> 

#include "main.h"
#include "cmsis_os2.h"
#include "tim.h"
#include "gpio.h"
#include "usart.h"

#include "global_conf.h"
#include "lwrb.h"
#include "lwmem.h"
#include "lwmem_porting.h"
#include "checksum.h"
#include "packet.h"
#include "led.h"
#include "button.h"
#include "buzzer.h"
#include "pwm_servo.h"
#include "serial_servo.h"
#include "dc_motor.h"
#include "packet_reports.h"

extern ButtonObjectTypeDef* buttons[BUTTON_NUM];
extern LEDObjectTypeDef *leds[LED_NUM];
extern BuzzerObjectTypeDef *buzzers[BUZZER_NUM];
extern SerialServoControllerTypeDef serial_servo_controller;
extern struct PacketController packet_controller; 
extern DC_MotorObjectTypeDef *motors[DC_MOTOR_NUM];

void buttons_init(void);
void leds_init(void);
void buzzers_init(void);
void serial_servo_init(void);
void packet_init(void);
void packet_handle_init(void);
void motors_init(void);

#endif

