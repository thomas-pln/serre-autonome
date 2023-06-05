//
// Created by Thomas on 05/05/2023.
//

#include "TFT.h"


void TFT_init(){
	ILI9341_Init();
	ILI9341_Fill(ILI9341_COLOR_WHITE);
	ILI9341_DrawCircle(20,20,5,ILI9341_COLOR_BLUE);
	ILI9341_DrawLine(20,20,100,20,ILI9341_COLOR_RED);
	ILI9341_DrawLine(20,20,20,100,ILI9341_COLOR_RED);
	ILI9341_Putc(110,11,'x',&Font_11x18,ILI9341_COLOR_BLUE,ILI9341_COLOR_WHITE);
	ILI9341_Putc(15,110,'y',&Font_11x18,ILI9341_COLOR_BLUE,ILI9341_COLOR_WHITE);
	ILI9341_Puts(200,200, "chaine", &Font_11x18, ILI9341_COLOR_BROWN,
	ILI9341_COLOR_WHITE);
	printf("test");
}

void display_temperature(int temp){
	ILI9341_Fill(ILI9341_COLOR_WHITE);
	ILI9341_Puts(200,200, temp+"°C", &Font_11x18, ILI9341_COLOR_BROWN, ILI9341_COLOR_WHITE);
}

void display_moisture(int moisture);

void display_brightness(int moisture);

void display_configmode(void);
