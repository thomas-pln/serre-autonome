/**
  ******************************************************************************
  * @file    main.c
  * @author  Nirgal
  * @date    03-July-2019
  * @brief   Default main function.
  ******************************************************************************
*/
#include <stdio.h>
#include <inttypes.h>
#include "stm32f1xx_hal.h"
#include "stm32f1_uart.h"
#include "stm32f1_sys.h"
#include "stm32f1_gpio.h"
#include "macro_types.h"
#include "systick.h"
#include "modeles/sensors/LightSensor.h"
#include "modeles/sensors/SoilMoistureSensor.h"
#include "modeles/sensors/DHT11.h"
#include "tft_ili9341/stm32f1_ili9341.h"

int main(void) {
	 HAL_Init();
	 UART_init(UART3_ID, 115200);
	 SYS_set_std_usart(UART3_ID, UART3_ID, UART3_ID);
//	 lightSensor_init();
//	 printf("hello");
//	 SoilMoistureSensor_init();
//	 DHT11Temp_init();
	 ILI9341_demo();
	 while(1)
	 {

//		 HAL_Delay(500);
//		 double value = getBrightness();
//		 printf("Value: %f\t", value);
//		 printf("Moisture: %f\t", SoilMoistureSensor_getMoistureValue());
//		 printf("Temperature: %f\t", DHT11Temp_getTemperature());
	 }

}
