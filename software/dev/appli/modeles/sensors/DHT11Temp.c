//
// Created by Thomas on 05/05/2023.
//

#include <modeles/sensors/DHT11Temp.h>
#include "stm32f1_gpio.h"

#define DHT11_GPIO    GPIOA
#define DHT11_PIN    GPIO_PIN_0

void DHT11Temp_init(void) {
    DHT11_init(DHT11_GPIO, DHT11_PIN);
}

int DHT11Temp_getTemperature(void) {
    uint8_t tmp = 0;
    DHT11_state_machine_get_datas(NULL, NULL, &tmp, NULL);
    return tmp;
}

int DHT11Temp_getHumidity(void) {
    uint8_t tmp = 0;
    DHT11_state_machine_get_datas(NULL, &tmp, NULL, tmp);
    return tmp;
}

