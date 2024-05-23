#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "KEY.h"

uint8_t KeyNum;

int main(void)
{
	uint8_t KeyNum;
	LED_Init();
	Key_Init();	
	while(1)
	{
		KeyNum=Key_GetNum();
		if(KeyNum==1)
		{
			LED0_ON();		
		}

		if(KeyNum==2)
		{
			LED0_OFF();		
		}	
	}
}
	