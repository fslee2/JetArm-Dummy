/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ADC_BAT_Pin GPIO_PIN_0
#define ADC_BAT_GPIO_Port GPIOC
#define PWM_SERVO1_Pin GPIO_PIN_0
#define PWM_SERVO1_GPIO_Port GPIOA
#define PWM_SERVO2_Pin GPIO_PIN_1
#define PWM_SERVO2_GPIO_Port GPIOA
#define PWM_SERVO3_Pin GPIO_PIN_2
#define PWM_SERVO3_GPIO_Port GPIOA
#define PWM_SERVO4_Pin GPIO_PIN_3
#define PWM_SERVO4_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_10
#define LED1_GPIO_Port GPIOB
#define KEY1_Pin GPIO_PIN_11
#define KEY1_GPIO_Port GPIOB
#define MOTOR2_F_Pin GPIO_PIN_12
#define MOTOR2_F_GPIO_Port GPIOD
#define MOTOR2_B_Pin GPIO_PIN_13
#define MOTOR2_B_GPIO_Port GPIOD
#define MOTOR1_F_Pin GPIO_PIN_14
#define MOTOR1_F_GPIO_Port GPIOD
#define MOTOR1_B_Pin GPIO_PIN_15
#define MOTOR1_B_GPIO_Port GPIOD
#define SERIAL_SERVO_TX_Pin GPIO_PIN_6
#define SERIAL_SERVO_TX_GPIO_Port GPIOC
#define SERIAL_SERVO_RX_Pin GPIO_PIN_7
#define SERIAL_SERVO_RX_GPIO_Port GPIOC
#define SERIAL_SERVO_RX_EN_Pin GPIO_PIN_8
#define SERIAL_SERVO_RX_EN_GPIO_Port GPIOC
#define LED_BOARD_Pin GPIO_PIN_8
#define LED_BOARD_GPIO_Port GPIOA
#define CH559_TX_Pin GPIO_PIN_6
#define CH559_TX_GPIO_Port GPIOD
#define SERIAL_SERVO_TX_EN_Pin GPIO_PIN_8
#define SERIAL_SERVO_TX_EN_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_9
#define BUZZER_GPIO_Port GPIOB
#define KEY0_Pin GPIO_PIN_0
#define KEY0_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
