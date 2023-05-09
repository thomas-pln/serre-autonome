//
// Created by Thomas on 05/05/2023.
//

#include "Potentiometer.h"

#define ADC_SENSOR_CHANNEL ADC_9

void Potentiometer_init(void){
    ADC_init();
}

int16_t Potentiometer_getValue(void){
    return ADC_getValue(ADC_SENSOR_CHANNEL);
}
