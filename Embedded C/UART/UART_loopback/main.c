#include"uart.h"

unsigned char ch='A';
unsigned char temp;

int main()
{

	UART_init();
	UART_config();
	UART1_OUTchar(ch);
	//UART1_OUTchar(0X0D);
	//UART1_OUTchar(0X0A);
	temp=UART1_INchar();		
	
	return 0;
}

void UART1_OUTchar(unsigned char ch)
{
	while(((USART_SR)&(0X01 << 7))==0)  //TXE=1 means transmission is completed
	{
		;
	}
	USART_DR = ch;            //load ch into data register
}
unsigned char UART1_INchar(void)
{
	while(((USART_SR)&(0X01 << 5))==1)   //RXNE=1 then only reception is completed
	{
		;
	}
	return USART_DR;
}
