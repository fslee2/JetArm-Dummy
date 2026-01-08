#include "serial_servo.h"
#include "gpio.h"
#include "usart.h"
#include "stm32f4xx_hal.h"
#include "cmsis_os2.h"
#include <string.h>

/* 全局变量 */
SerialServoControllerTypeDef serial_servo_controller;
extern osSemaphoreId_t serial_servo_rx_completeHandle;

static int serial_write_and_read(SerialServoControllerTypeDef *self, SerialServoCmdTypeDef *frame, bool tx_only)
{
    int ret = 0;
    /* 进入写模式 */
    HAL_GPIO_WritePin( SERIAL_SERVO_RX_EN_GPIO_Port, SERIAL_SERVO_RX_EN_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SERIAL_SERVO_TX_EN_GPIO_Port, SERIAL_SERVO_TX_EN_Pin, GPIO_PIN_SET);
    memcpy(&self->tx_frame, frame, sizeof(SerialServoCmdTypeDef));
	memset(&self->rx_frame, 0, sizeof(SerialServoCmdTypeDef));
    self->tx_byte_index = 0;
    self->tx_only = tx_only;
	self->rx_args_index = 0;
    self->rx_state = SERIAL_SERVO_RECV_STARTBYTE_1;
    __HAL_UART_CLEAR_FLAG(&huart6, UART_FLAG_RXNE);
	 __HAL_UART_CLEAR_FLAG(&huart6, UART_FLAG_TC);
	__HAL_UART_ENABLE_IT(&huart6, UART_IT_RXNE);
    __HAL_UART_ENABLE_IT(&huart6, UART_IT_TXE);
    __HAL_UART_ENABLE_IT(&huart6, UART_IT_TC);			   


    if(osOK != osSemaphoreAcquire(serial_servo_rx_completeHandle, self->proc_timeout)) {
        ret = -1;
	}
    __HAL_UART_DISABLE_IT(&huart6, UART_IT_TXE);
    __HAL_UART_DISABLE_IT(&huart6, UART_IT_TC);
    __HAL_UART_DISABLE_IT(&huart6, UART_IT_RXNE);
    HAL_GPIO_WritePin(SERIAL_SERVO_RX_EN_GPIO_Port, SERIAL_SERVO_RX_EN_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SERIAL_SERVO_TX_EN_GPIO_Port, SERIAL_SERVO_TX_EN_Pin, GPIO_PIN_RESET);
    return ret;
}


void serial_servo_init(void)
{
    serial_servo_controller_object_init(&serial_servo_controller);
    serial_servo_controller.proc_timeout = 5;
    serial_servo_controller.serial_write_and_read = serial_write_and_read;
	osSemaphoreAcquire(serial_servo_rx_completeHandle, 0);

	uint8_t data[3] = {0x55, 0x55, 0x55};
    /* 写入模式, 只有在带接收过程的指令才会打开接收 */
    HAL_GPIO_WritePin(SERIAL_SERVO_RX_EN_GPIO_Port, SERIAL_SERVO_RX_EN_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SERIAL_SERVO_TX_EN_GPIO_Port, SERIAL_SERVO_TX_EN_Pin, GPIO_PIN_RESET);
	HAL_UART_Transmit(&huart6, data, 3, 100);
    __HAL_UART_CLEAR_FLAG(&huart6, UART_FLAG_TC);
    __HAL_UART_CLEAR_FLAG(&huart6, UART_FLAG_RXNE);
}

void serial_servo_irq_handler() {
    if(__HAL_UART_GET_FLAG(&huart6, UART_FLAG_TC) != RESET) {
		__HAL_UART_CLEAR_FLAG(&huart6, UART_FLAG_TC);
		//printf("tx_finished\r\n");
        if(serial_servo_controller.tx_only) {
            osSemaphoreRelease(serial_servo_rx_completeHandle);
        }else{
			HAL_GPIO_WritePin(SERIAL_SERVO_RX_EN_GPIO_Port, SERIAL_SERVO_RX_EN_Pin, GPIO_PIN_SET);  /* 转入接收模式 */
			HAL_GPIO_WritePin(SERIAL_SERVO_TX_EN_GPIO_Port, SERIAL_SERVO_TX_EN_Pin, GPIO_PIN_RESET);
		}
		__HAL_UART_DISABLE_IT(&huart6, UART_IT_TC);
    }

    if(__HAL_UART_GET_IT_SOURCE(&huart6, UART_IT_TXE) != RESET) {
		//printf("index%d,  length:%d\r\n", serial_servo_controller.tx_byte_index, serial_servo_controller.tx_frame.elements.length + 3);
        if(serial_servo_controller.tx_byte_index < serial_servo_controller.tx_frame.elements.length + 3) {  /* 判断数据是否发发送完成 */
            huart6.Instance->DR = ((uint8_t*)(&serial_servo_controller.tx_frame))[serial_servo_controller.tx_byte_index++]; /* 继续发下一个个字节 */
        } 
		if(serial_servo_controller.tx_byte_index >= serial_servo_controller.tx_frame.elements.length + 3) {  /* 判断数据是否发发送完成 */
				__HAL_UART_DISABLE_IT(&huart6, UART_IT_TXE);
		} 
    }

	if(__HAL_UART_GET_FLAG(&huart6, UART_FLAG_ORE) != RESET) {
		__HAL_UART_CLEAR_FLAG(&huart6, UART_FLAG_ORE);
        if(0 == serial_servo_rx_handler(&serial_servo_controller, (uint8_t)(huart6.Instance->DR & (uint8_t)0x00FF))) {
            osSemaphoreRelease(serial_servo_rx_completeHandle);
        }		
	}
	    if(__HAL_UART_GET_FLAG(&huart6, UART_FLAG_RXNE) != RESET) {
        __HAL_UART_CLEAR_FLAG(&huart6, UART_FLAG_RXNE);
        if(0 == serial_servo_rx_handler(&serial_servo_controller, (uint8_t)(huart6.Instance->DR & (uint8_t)0x00FF))) {
            osSemaphoreRelease(serial_servo_rx_completeHandle);
        }
    }
}