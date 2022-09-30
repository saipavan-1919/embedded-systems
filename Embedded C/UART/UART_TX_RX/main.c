
#include"uart.h"

unsigned char ch='A';
unsigned char temp;

int main()
{

	UART_init();
	UART_config();
	systick_init();
	PortA_Init();// PA0 set to input (-ve edge)
	PortC_Init(); // PC5 set to output (-ve edge) - RED LED ON
	while(1)
	{
	
	temp=UART1_INchar();
		
	KM_Delayms(100);
			if(temp=='R')
		{
			GPIOC_ODR &=(~(0X01 << 5));    //turning ON RED led
			GPIOA_ODR |=(0X01 << 8);       //turning OFF green led
		}
		if(temp=='G')
		{
			GPIOA_ODR &=(~(0X01 << 8));    //Turning ON GREEN led
			GPIOC_ODR |=(0X01 << 5);       //turning OFF RED led
		}
	 
	  if(!((GPIOC_IDR)&(0X01 << 8)))    //checking PC8 bit set or not
		{
			
			UART1_OUTchar('R');            //sending char 'R'
		}		
	
		if(!((GPIOC_IDR)&(0X01 << 9)))    //checking PC9 bit set or not
		{
			UART1_OUTchar('G');             //sending char 'R'
		}		
	
	}
	
	return 0;
}

void UART1_OUTchar(unsigned char ch)       
{
	while(((USART_SR)&(0X01 << 7))==0)      //waiting until TXE bit is set
	{
		;
	}
	USART_DR = ch;                          //loading char into data register
}
unsigned char UART1_INchar(void)
{
	if(((USART_SR)&(0X01 << 5))==1)         //checking RXNE bit is set or not
	{
		temp = USART_DR;                      //loading data register value into variable
			return temp;
	}

	return USART_DR;
}