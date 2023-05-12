//
// Created by Thomas on 05/05/2023.
//

#include "SoilMoistureSensor.h"

#define ADC_SENSOR_CHANNEL ADC_0

void SoilMoistureSensor_init(void) {
	ADC_init();
}

double SoilMoistureSensor_getMoistureValue(void){
    return ADC_getValue(ADC_SENSOR_CHANNEL)*3.3/4095;
}
