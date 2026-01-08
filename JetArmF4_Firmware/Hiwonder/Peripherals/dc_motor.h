/**
 * @file dc_motor.h
 * @author Lu Yongping (Lucas@hiwonder.com)
 * @brief 直流电机控制头文件
 * @version 0.1
 * @date 2023-10-24
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __DC_MOTOR_H_
#define __DC_MOTOR_H_

#include <stdint.h>
#include "pid.h"

typedef struct DC_MotorObject DC_MotorObjectTypeDef;

/**
 * @brief 编码器电机对象结构体
*/
struct DC_MotorObject{
    /**
      * @brief 设置电机速度  -1000 ~ 1000
      * @param self 编码器电机对象
      * @param pulse 新的PWM值, -1000~1000, 对应正反转0~100%转速
      * @retval None.
      */
    void (*set_duty_cycle)(DC_MotorObjectTypeDef *self, float duty_cycle);
};


/**
 * @breif 编码器电机对象初始化
 * @param self 编码器电机对象指针
 * @retval None.
*/
void dc_motor_object_init(DC_MotorObjectTypeDef *self);

#endif

