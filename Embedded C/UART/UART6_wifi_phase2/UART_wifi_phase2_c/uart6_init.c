#include"uart6_c.h"
void UART6_init()
{
	RCC_AHB1ENR |= (0X01 << 2);            //set 2nd bit for portC clock
	while(((RCC_AHB1ENR)&(0X01 << 2))==0)
	{
		;
	}
	GPIOC_MODER |= (0X01 << 13);       //making pc6 as alternate function by loading "10" into pc6 bitfield (13th,12th)
	
	GPIOC_MODER |= (0X01 << 15);       //making pc7 as alternate function by loading "10" into pc7 bitfield (15th,14th)
	
	GPIOC_AFRL |= (0X08 << 24);         //making pc6 as AF8 (UART6)
	
	GPIOC_AFRL |= (0X08 << 28);         //making pc7 as AF8 (UART6)
	
	RCC_APB2ENR |= (0X01 << 5);        //enabling clock for UART6
	while(((RCC_APB2ENR)&(0X01 << 5))==0)
	{
		;
	}
}

void UART6_config()
{
	//UART format = 115200 8N1 
	
	USART_CR1 |= (0X01 << 13);       //enabling UART (UE == 1)
	
	//setting baudrate as 115200 bps for 16MHz clock speed

	USART_BRR = 0X8B;                //USART6 baud rate = 115200 (USART_mantissa = 8) (USART_fraction = B)   
	
  USART_CR1 &= (~(0X01 << 12));	   //clearing 12th bit for word length = 8bit
	
	//laod "00" into 12th,13th bits to make stopbits as 1
 	USART_CR2 &= (~(0X01 << 12));     // clearing 12th bit in USART_CR2
	USART_CR2 &= (~(0X01 << 13));     //clearing 13th bit in USARRT_CR2
	
	USART_CR1 |= (0X01 << 2);         // enabling reciever bit
	USART_CR1 |= (0X01 << 3);         //enabling transmitter
	
	USART_CR1 |= (0X01 << 5);         //set 5th bit (RXNEIE) to enable interrupt
	
	NVIC_ISER2 |= (0X01 << 7);        // enabling 71st line for USART6 interrupt isr
	
	
}
