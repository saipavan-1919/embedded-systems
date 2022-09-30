#include"uart6.h"
extern char str[500];
char ch,ch1;
extern int val;
int UART6_OK_status(char *ptr)
{
	int i=0;
	for(;i<500;i++)
	{
		str[i]=UART6_INchar();
		if((str[i]=='K')&&(str[i-1]=='O'))
	{
		return 1;
	}
	else
	{
		if(i==500)
			return 0;
	}
	}
	return 0;
}

void UART6_OUTstring(char *ptr)
{
	int i=0;
	for(;*(ptr+i)!='\0';i++)
	{
		UART6_OUTchar(*(ptr+i));            
	}
}
void UART6_OUTchar(unsigned char ch)       
{
	while(((USART_SR)&(0X01 << 7))==0)      //waiting until TXE bit is set
	{
		;
	}
	USART_DR = ch;                          //loading char into data register
}
int ESP8266_init()
{

	int i=0;
	
	UART6_OUTstring("AT\r\n");         //for basic communication

	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}

	UART6_OUTstring("AT+RST\r\n");    //for reset
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
	//KM_Delayms(500);
	UART6_OUTstring("AT+CWMODE=3\r\n");   //for mode setting as wifi
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
	//KM_Delayms(500);
	UART6_OUTstring("AT+CWJAP=\"sai\",\"sai 1919\"\r\n");   //for joining access point
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
	
//	KM_Delayms(500);
	UART6_OUTstring("AT+CIFSR\r\n");    //for ip address of access point
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
//	KM_Delayms(500);
	UART6_OUTstring("AT+CIPMUX=0\r\n"); //for setting connection mux
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
//	KM_Delayms(500);
	UART6_OUTstring("AT+CWLAP\r\n");    //for list of access points
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
//	KM_Delayms(500);
	UART6_OUTstring("AT+CIPMODE=0\r\n"); // for data transmission mode
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
//	KM_Delayms(500);
	
	
	
}
unsigned char UART6_INchar(void)
{
	while(((USART_SR)&(0X01 << 5))==0)         //checking RXNE bit is set or not
	{
		;
	}
	ch = USART_DR;

	return ch;
}

/*		while(i < 10)
	{
		str[i]=UART6_INchar();
		i++;
	}
	i=0;
	*/

