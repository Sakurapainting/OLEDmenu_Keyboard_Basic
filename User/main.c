#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Menu.h"

uint16_t menu_n = 0;

int main(){
	OLED_Init();	

	while(1){
		menu_n = Menu_MAIN();
		if(menu_n == 1){
			menu_1();
		}
		if(menu_n == 2){
			menu_2();
		}
		if(menu_n == 3){
			menu_3();
		}
		if(menu_n == 4){
			menu_4();
		}
		if(menu_n == 5){
			menu_5();
		}
		if(menu_n == 6){
			menu_6();
		}
	}
}
