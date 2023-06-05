//
// Created by Thomas on 05/05/2023.
//

#ifndef DEV_TFT_H
#define DEV_TFT_H
#include "tft_ili9341/stm32f1_ili9341.h"

void TFT_init();

void display_temperature(int temp);

void display_moisture(int moisture);

void display_brightness(int moisture);

void display_configmode(void);

#endif //DEV_TFT_H
