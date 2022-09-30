#include"iot.h"
extern char str1[16];
extern char str2[16];
extern char str3[16];
extern char str[500];
extern int val;
extern int i;
extern char Fetch[100];
extern int temp2;
extern int hum;

void ADC_operation()
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
}

void UART6_operation()
{
		//UART6 operatin
	i=0;
	val=0;
		UART6_OUTstring("AT+CIPSTATUS\r\n");
	while(val==0)
	{
		;
	}

		i=0;
	val=0;
		UART6_OUTstring("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
while(val==0)
	{
		;
	}
		
		sprintf(Fetch,"GET /page.php?temp=%d&hum=%d&dev=19\r\n\r\n", temp2,hum);
		KM_Delayms(1000);
		i=0;
	val=0;
	  UART6_OUTstring("AT+CIPSEND=42\r\n");
	while(val==0)
	{
		;
	}
    UART6_OUTstring(Fetch);
    KM_Delayms(1000);
		
		UART6_OUTstring("AT+CIPCLOSE\r\n");
    KM_Delayms(1000);
}