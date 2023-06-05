//
// Created by Thomas on 05/05/2023.
//

#include "modeles/sensors/DHT11.h"
#include "stm32f1_gpio.h"

#define DHT11_GPIO   GPIOA
#define DHT11_PIN    GPIO_PIN_1


void DHT11Temp_init(void) {
    DHT11_init(DHT11_GPIO, DHT11_PIN);
}

float DHT11Temp_getTemperature(void) {
		static uint8_t humidity_int;
		static uint8_t humidity_dec;
		static uint8_t temperature_int;
		static uint8_t temperature_dec;

		while(1)		{

			switch(DHT11_state_machine_get_datas(&humidity_int, &humidity_dec, &temperature_int, &temperature_dec))
			{
				case END_OK:
					return (float) temperature_int + (float) temperature_dec/10;
	 				HAL_Delay(1500);
					break;
				case END_ERROR:
					HAL_Delay(1500);
					break;
				case END_TIMEOUT:
					HAL_Delay(1500);
					break;
				default:
					break;
			}
		}
	return (float) temperature_int + (float) temperature_dec/10;
}

int DHT11Temp_getHumidity(void) {
    uint8_t tmp = 0;
    //DHT11_state_machine_get_datas(NULL, &tmp, NULL, tmp);
    return tmp;
}
