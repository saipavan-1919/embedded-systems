#include"iot.h"


char str1[16]="Temp : ";
char str2[16];
char str3[16]="";
char str[500];
int val;
int i=0;
char Fetch[100];
int temp2=0;
int hum=94;

int main()
{

	UART6_init();
	UART6_config();
	systick_init();
	ESP8266_init();
	portC_Init();
	portB_Init();        
	LCD_Init();
	ADC_init();
	
  while(1)
	{
	ADC_operation();
	
  UART6_operation();
		
		for(i=0;i<5;i++)
		KM_Delayms(1000);
		
	}
	
	return 0;
	
}
void USART6_IRQHandler()
{
	if((USART_SR)&(0X01 << 5))
	{
		str[i] = USART_DR;
		if((str[i]=='K')&&(str[i-1]=='O'))
		{
			val=1;
		}
		i++;
	}
}
