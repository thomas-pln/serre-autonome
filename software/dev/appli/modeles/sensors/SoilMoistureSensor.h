//
// Created by Thomas on 05/05/2023.
//


#include "stm32f1_adc.h"
#include "stm32f1xx_hal.h"
#include "stm32f1_sys.h"

#ifndef DEV_SOILMOISTURESENSOR_H
#define DEV_SOILMOISTURESENSOR_H

void SoilMoistureSensor_init(void);

double SoilMoistureSensor_getMoistureValue(void);

#endif //DEV_SOILMOISTURESENSOR_H
