#include"uart6_a.h"
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
	return 0;
}