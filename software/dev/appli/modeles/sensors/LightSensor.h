//
// Created by Thomas on 05/05/2023.
// Edit by Dorian on 09/05/2023
//

#ifndef DEV_LIGHTSENSOR_H
#define DEV_LIGHTSENSOR_H

#include "stm32f1xx_hal.h"
#include "stm32f1_sys.h"
#include "stm32f1_gpio.h"
#include "macro_types.h"
#include "systick.h"
#include "stm32f1_adc.h"

void lightSensor_init(void);

double getBrightness(void);


#endif //DEV_LIGHTSENSOR_H
