/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
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

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .stack_size = 256 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for app_main_task */
osThreadId_t app_main_taskHandle;
const osThreadAttr_t app_main_task_attributes = {
  .name = "app_main_task",
  .stack_size = 512 * 4,
  .priority = (osPriority_t) osPriorityNormal1,
};
/* Definitions for packet_rx_task */
osThreadId_t packet_rx_taskHandle;
const osThreadAttr_t packet_rx_task_attributes = {
  .name = "packet_rx_task",
  .stack_size = 2048 * 4,
  .priority = (osPriority_t) osPriorityAboveNormal5,
};
/* Definitions for packet_tx_task */
osThreadId_t packet_tx_taskHandle;
const osThreadAttr_t packet_tx_task_attributes = {
  .name = "packet_tx_task",
  .stack_size = 1024 * 4,
  .priority = (osPriority_t) osPriorityAboveNormal3,
};
/* Definitions for led0_ctrl_queue */
osMessageQueueId_t led0_ctrl_queueHandle;
const osMessageQueueAttr_t led0_ctrl_queue_attributes = {
  .name = "led0_ctrl_queue"
};
/* Definitions for led1_ctrl_queue */
osMessageQueueId_t led1_ctrl_queueHandle;
const osMessageQueueAttr_t led1_ctrl_queue_attributes = {
  .name = "led1_ctrl_queue"
};
/* Definitions for packet_tx_queue */
osMessageQueueId_t packet_tx_queueHandle;
const osMessageQueueAttr_t packet_tx_queue_attributes = {
  .name = "packet_tx_queue"
};
/* Definitions for buzzer_timer */
osTimerId_t buzzer_timerHandle;
const osTimerAttr_t buzzer_timer_attributes = {
  .name = "buzzer_timer"
};
/* Definitions for led_timer */
osTimerId_t led_timerHandle;
const osTimerAttr_t led_timer_attributes = {
  .name = "led_timer"
};
/* Definitions for button_timer */
osTimerId_t button_timerHandle;
const osTimerAttr_t button_timer_attributes = {
  .name = "button_timer"
};
/* Definitions for serial_servo_rx_complete */
osSemaphoreId_t serial_servo_rx_completeHandle;
const osSemaphoreAttr_t serial_servo_rx_complete_attributes = {
  .name = "serial_servo_rx_complete"
};
/* Definitions for packet_tx_idle */
osSemaphoreId_t packet_tx_idleHandle;
const osSemaphoreAttr_t packet_tx_idle_attributes = {
  .name = "packet_tx_idle"
};
/* Definitions for packet_rx_not_empty */
osSemaphoreId_t packet_rx_not_emptyHandle;
const osSemaphoreAttr_t packet_rx_not_empty_attributes = {
  .name = "packet_rx_not_empty"
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);
void app_main(void *argument);
void packet_rx_task_entry(void *argument);
void packet_tx_task_entry(void *argument);
void buzzer_timer_callback(void *argument);
void led_timer_callback(void *argument);
void button_timer_callback(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/* Hook prototypes */
void vApplicationMallocFailedHook(void);

/* USER CODE BEGIN 5 */
void vApplicationMallocFailedHook(void)
{
   /* vApplicationMallocFailedHook() will only be called if
   configUSE_MALLOC_FAILED_HOOK is set to 1 in FreeRTOSConfig.h. It is a hook
   function that will get called if a call to pvPortMalloc() fails.
   pvPortMalloc() is called internally by the kernel whenever a task, queue,
   timer or semaphore is created. It is also called by various parts of the
   demo application. If heap_1.c or heap_2.c are used, then the size of the
   heap available to pvPortMalloc() is defined by configTOTAL_HEAP_SIZE in
   FreeRTOSConfig.h, and the xPortGetFreeHeapSize() API function can be used
   to query the size of free heap space that remains (although it does not
   provide information on how the remaining heap might be fragmented). */
}
/* USER CODE END 5 */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* Create the semaphores(s) */
  /* creation of serial_servo_rx_complete */
  serial_servo_rx_completeHandle = osSemaphoreNew(1, 1, &serial_servo_rx_complete_attributes);

  /* creation of packet_tx_idle */
  packet_tx_idleHandle = osSemaphoreNew(1, 1, &packet_tx_idle_attributes);

  /* creation of packet_rx_not_empty */
  packet_rx_not_emptyHandle = osSemaphoreNew(1, 1, &packet_rx_not_empty_attributes);

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* Create the timer(s) */
  /* creation of buzzer_timer */
  buzzer_timerHandle = osTimerNew(buzzer_timer_callback, osTimerPeriodic, NULL, &buzzer_timer_attributes);

  /* creation of led_timer */
  led_timerHandle = osTimerNew(led_timer_callback, osTimerPeriodic, NULL, &led_timer_attributes);

  /* creation of button_timer */
  button_timerHandle = osTimerNew(button_timer_callback, osTimerPeriodic, NULL, &button_timer_attributes);

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* Create the queue(s) */
  /* creation of led0_ctrl_queue */
  led0_ctrl_queueHandle = osMessageQueueNew (5, 16, &led0_ctrl_queue_attributes);

  /* creation of led1_ctrl_queue */
  led1_ctrl_queueHandle = osMessageQueueNew (5, 16, &led1_ctrl_queue_attributes);

  /* creation of packet_tx_queue */
  packet_tx_queueHandle = osMessageQueueNew (32, sizeof(void*), &packet_tx_queue_attributes);

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* creation of app_main_task */
  app_main_taskHandle = osThreadNew(app_main, NULL, &app_main_task_attributes);

  /* creation of packet_rx_task */
  packet_rx_taskHandle = osThreadNew(packet_rx_task_entry, NULL, &packet_rx_task_attributes);

  /* creation of packet_tx_task */
  packet_tx_taskHandle = osThreadNew(packet_tx_task_entry, NULL, &packet_tx_task_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_app_main */
/**
* @brief Function implementing the app_main_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_app_main */
__weak void app_main(void *argument)
{
  /* USER CODE BEGIN app_main */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END app_main */
}

/* USER CODE BEGIN Header_packet_rx_task_entry */
/**
* @brief Function implementing the packet_rx_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_packet_rx_task_entry */
__weak void packet_rx_task_entry(void *argument)
{
  /* USER CODE BEGIN packet_rx_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END packet_rx_task_entry */
}

/* USER CODE BEGIN Header_packet_tx_task_entry */
/**
* @brief Function implementing the packet_tx_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_packet_tx_task_entry */
__weak void packet_tx_task_entry(void *argument)
{
  /* USER CODE BEGIN packet_tx_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END packet_tx_task_entry */
}

/* buzzer_timer_callback function */
__weak void buzzer_timer_callback(void *argument)
{
  /* USER CODE BEGIN buzzer_timer_callback */

  /* USER CODE END buzzer_timer_callback */
}

/* led_timer_callback function */
__weak void led_timer_callback(void *argument)
{
  /* USER CODE BEGIN led_timer_callback */

  /* USER CODE END led_timer_callback */
}

/* button_timer_callback function */
__weak void button_timer_callback(void *argument)
{
  /* USER CODE BEGIN button_timer_callback */

  /* USER CODE END button_timer_callback */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

