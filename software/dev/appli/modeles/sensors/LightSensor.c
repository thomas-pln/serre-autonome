//
// Created by Thomas on 05/05/2023.
// Edit by Dorian on 09/05/2023.
//

#include "LightSensor.h"
#include "stm32f1xx_hal.h"


#define LIGHTSENSOR_GPIO GPIOA
#define LIGHTSENSOR_PIN GPIO_PIN_4

void lightSensor_init(void) {
	ADC_init();
}

double getBrightness(void) {
	return (double)((ADC_getValue(ADC_4)*3.3)/4095); //return une tension
}
