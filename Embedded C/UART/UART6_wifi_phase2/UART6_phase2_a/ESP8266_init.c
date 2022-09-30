#include"uart6_a.h"
extern char str[500];
extern int val;
extern int i;  
char Fetch[100];
char temp=33;
char hum=94;

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

    
	UART6_OUTstring("AT\r\n");       //for basic communication
	KM_Delayms(500);
	
	UART6_OUTstring("AT+RST\r\n");    //for reset
	KM_Delayms(500);
	

	UART6_OUTstring("AT+CWMODE=3\r\n");   //for mode setting as wifi
	KM_Delayms(500);
	
	UART6_OUTstring("AT+CWJAP=\"sai\",\"sai 1919\"\r\n");   //for joining access point
	KM_Delayms(500);
	
	UART6_OUTstring("AT+CIFSR\r\n");    //for ip address of access point
	KM_Delayms(500);
	
	UART6_OUTstring("AT+CIPMUX=0\r\n"); //for setting connection mux
	KM_Delayms(500);

	UART6_OUTstring("AT+CWLAP\r\n");    //for list of access points
  KM_Delayms(500);

	UART6_OUTstring("AT+CIPMODE=0\r\n"); // for data transmission mode
	KM_Delayms(500);
}

void UART6_operation()
{
		//UART6 operatin

	UART6_OUTstring("AT+CIPSTATUS\r\n");
	KM_Delayms(500);
	
	UART6_OUTstring("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
	KM_Delayms(500);
		
		sprintf(Fetch,"GET /page.php?temp=%d&hum=%d&dev=19\r\n\r\n", temp,hum);
		KM_Delayms(1000);

	  UART6_OUTstring("AT+CIPSEND=42\r\n");
	  KM_Delayms(100);
	
    UART6_OUTstring(Fetch);
    KM_Delayms(1000);
		
		UART6_OUTstring("AT+CIPCLOSE\r\n");
    KM_Delayms(1000);
}

