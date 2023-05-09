//
// Created by Thomas on 05/05/2023.
//

#include "Potentiometer.h"

#include "stm32f1_gpio.h"
#include "stm32f1_adc.h"

void Potentiometer_init(void){
    ADC_init();
}

int16_t Potentiometer_getValue(void){
    return ADC_getValue();
}
