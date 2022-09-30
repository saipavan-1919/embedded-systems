#include"uart6_c.h"
char str[500];
int val=0;
int i=0;

int main()
{
	UART6_init();
	UART6_config();
	systick_init();
	ESP8266_init();
	while(1)
	{
	UART6_operation();
	}
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
