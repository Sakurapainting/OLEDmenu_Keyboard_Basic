#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "MatrixKey.h"
#include "Delay.h"

/*Matrix :
1: down
2: up
3: left
4: right
*/

uint8_t KeyNum;
int8_t menu_flag = 1;


int8_t Menu_MAIN(void){
	OLED_ShowString(2, 2, "Album");
	OLED_ShowString(3, 2, "Singer");
	OLED_ShowString(4, 2, "Likes");
	OLED_ShowString(2, 10, "Genre");
	OLED_ShowString(3, 10, "Time");
	OLED_ShowString(4, 10, "Search");
	
	MatrixKey_Init();
	
	while(1){
		KeyNum = MatrixKey_GetValue();
		OLED_ShowNum(1, 1, KeyNum, 2);
		
		if(KeyNum == 1){
			//ctrl * down
			Delay_ms(200);
			menu_flag++;
			if(menu_flag == 7){
				menu_flag = 1;
			}
		}
		if(KeyNum == 2){
			//* up
			Delay_ms(200);
			menu_flag--;
			if(menu_flag == 0){
				menu_flag = 6;
			}
		}
		if(KeyNum == 3){
			//*left
			Delay_ms(200);
			menu_flag -= 3;
			if(menu_flag <= 0){
				menu_flag += 6;
			}
		}
		if(KeyNum == 4){
			//*right
			Delay_ms(200);
			menu_flag += 3;
			if(menu_flag >= 7){
				menu_flag -= 6;
			}
		}
		if(KeyNum == 5){
			//enter
			Delay_ms(200);
			OLED_Clear();
			return menu_flag;
		}
		switch(menu_flag){
			case 1:
				OLED_ShowString(2, 1, "*");
				OLED_ShowString(3, 1, " ");
				OLED_ShowString(4, 1, " ");
				OLED_ShowString(2, 9, " ");
				OLED_ShowString(3, 9, " ");
				OLED_ShowString(4, 9, " ");
				break;
			case 2:
				OLED_ShowString(2, 1, " ");
				OLED_ShowString(3, 1, "*");
				OLED_ShowString(4, 1, " ");
				OLED_ShowString(2, 9, " ");
				OLED_ShowString(3, 9, " ");
				OLED_ShowString(4, 9, " ");
				break;
			case 3:
				OLED_ShowString(2, 1, " ");
				OLED_ShowString(3, 1, " ");
				OLED_ShowString(4, 1, "*");
				OLED_ShowString(2, 9, " ");
				OLED_ShowString(3, 9, " ");
				OLED_ShowString(4, 9, " ");
				break;
			case 4:
				OLED_ShowString(2, 1, " ");
				OLED_ShowString(3, 1, " ");
				OLED_ShowString(4, 1, " ");
				OLED_ShowString(2, 9, "*");
				OLED_ShowString(3, 9, " ");
				OLED_ShowString(4, 9, " ");
				break;
			case 5:
				OLED_ShowString(2, 1, " ");
				OLED_ShowString(3, 1, " ");
				OLED_ShowString(4, 1, " ");
				OLED_ShowString(2, 9, " ");
				OLED_ShowString(3, 9, "*");
				OLED_ShowString(4, 9, " ");
				break;
			case 6:
				OLED_ShowString(2, 1, " ");
				OLED_ShowString(3, 1, " ");
				OLED_ShowString(4, 1, " ");
				OLED_ShowString(2, 9, " ");
				OLED_ShowString(3, 9, " ");
				OLED_ShowString(4, 9, "*");
				break;
		}
	}
}

void menu_1(void){
	
	while(1){
		int8_t KeyNum = MatrixKey_GetValue();
		OLED_ShowNum(1, 1, KeyNum, 2);
		OLED_ShowString(2, 2, "Album below...");
		if(KeyNum == 6){
			//exit
			Delay_ms(200);
			OLED_Clear();
			return;
		}
	}
}
void menu_2(void){

	while(1){
		int8_t KeyNum = MatrixKey_GetValue();
		OLED_ShowNum(1, 1, KeyNum, 2);
		OLED_ShowString(2, 2, "Singer below...");
		if(KeyNum == 6){
			//exit
			Delay_ms(200);
			OLED_Clear();
			return;
		}
	}
}
void menu_3(void){

	while(1){
		int8_t KeyNum = MatrixKey_GetValue();
		OLED_ShowNum(1, 1, KeyNum, 2);
		OLED_ShowString(2, 2, "Likes below...");
		if(KeyNum == 6){
			//exit
			Delay_ms(200);
			OLED_Clear();
			return;
		}
	}
}
void menu_4(void){

	while(1){
		int8_t KeyNum = MatrixKey_GetValue();
		OLED_ShowNum(1, 1, KeyNum, 2);
		OLED_ShowString(2, 2, "Genre below...");
		if(KeyNum == 6){
			//exit
			Delay_ms(200);
			OLED_Clear();
			return;
		}
	}
}
void menu_5(void){

	while(1){
		int8_t KeyNum = MatrixKey_GetValue();
		OLED_ShowNum(1, 1, KeyNum, 2);
		OLED_ShowString(2, 2, "Time below...");
		if(KeyNum == 6){
			//exit
			Delay_ms(200);
			OLED_Clear();
			return;
		}
	}
}
void menu_6(void){

	while(1){
		int8_t KeyNum = MatrixKey_GetValue();
		OLED_ShowNum(1, 1, KeyNum, 2);
		OLED_ShowString(2, 2, "Search below...");
		if(KeyNum == 6){
			//exit
			Delay_ms(200);
			OLED_Clear();
			return;
		}
	}
}
