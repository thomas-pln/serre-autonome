//
// Created by Thomas on 05/05/2023.
//

#ifndef DEV_DHT11Temp_H
#define DEV_DHT11Temp_H
#include "DHT11/dht11.h"

void DHT11Temp_init(void);

float DHT11Temp_getTemperature(void);

int DHT11Temp_getHumidity(void);

#endif //DEV_DHT11Temp_H
