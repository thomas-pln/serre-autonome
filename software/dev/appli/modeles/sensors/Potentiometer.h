//
// Created by Thomas on 05/05/2023.
//

#ifndef DEV_POTENTIOMETER_H
#define DEV_POTENTIOMETER_H

#include "stm32f1xx_hal.h"
#include "stm32f1_sys.h"
#include "stm32f1_gpio.h"
#include "macro_types.h"
#include "systick.h"
#include "stm32f1_adc.h"

void Potentiometer_init(void);

int16_t Potentiometer_getValue(void);

#endif //DEV_POTENTIOMETER_H
