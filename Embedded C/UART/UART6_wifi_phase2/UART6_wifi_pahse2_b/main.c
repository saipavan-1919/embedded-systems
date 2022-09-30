#include"uart6.h"


char str1[16]="Temp : ";
char str2[16];
char str3[16]="";
char str[500];
int val;
	

int temp2=0;
int temp=25,hum=94;
int main()
{
	char Fetch[100];
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
		ADC_CR2 |= (0X01 << 30);     //set 30th bit (SWSTART) to strat conversion
		if(((ADC_SR)&(0X01 << 1)))
	{
		temp2=(ADC_DR);         //converted data stored into data register
		temp2=(temp2*290)/4096;
		ADC_CR2 &= (~(0X01 << 30));     //clear 30th bit (SWSTART) to stop conversion
		str2[1]=(temp2%10)+48;   
		str2[0]=(temp2/10)+48;
		
			KM_LCD_write_data(str2[0],0X87);
			KM_LCD_write_data(str2[1],0X88);
	//1	KM_LCD_write_data('0xDF',0X89);
		KM_LCD_write_data('c',0X8A);
			 writestring(str1,str3);
	}
	
	//UART6 operatin
		UART6_OUTstring("AT+CIPSTATUS\r\n");
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
	
	//	KM_Delayms(1000);
		UART6_OUTstring("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
	//	KM_Delayms(1000);
	/*	UART6_OUTstring("AT+CIPSEND=38\r\n");
		UART6_OUTstring("GET /page.php?temp=33&hum=77&dev=3\r\n\r\n");
		UART6_OUTstring("AT+CIPCLOSE\r\n");*/
		
		sprintf(Fetch,"GET /page.php?temp=%d&hum=%d&dev=1\r\n\r\n", temp2,hum);
		KM_Delayms(1000);
	  UART6_OUTstring("AT+CIPSEND=42\r\n");
	val=UART6_OK_status(str);
	if(val==0)
	{
		return 0;
	}
  //  KM_Delayms(500);
    UART6_OUTstring(Fetch);
//	val=UART6_OK_status(str);
//	if(val==0)
//	{
//		return 0;
//	}
    KM_Delayms(1000);
		
		UART6_OUTstring("AT+CIPCLOSE\r\n");
    KM_Delayms(1000);
		
	}
	
	return 0;
	
}

