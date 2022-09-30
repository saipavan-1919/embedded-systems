#include"uart6.h"
void portC_Init()
{
	RCC_AHB1ENR |= (0X01 << 2);         //set 2nd bit to enable clock for port c
	while(((RCC_AHB1ENR)&(0X01 << 2))==0)
	{
		;
	}
	//set pc1 as analog mode  LM35sensor
	GPIOC_MODER |= (0X01);     //set 2nd pin as 1
	GPIOC_MODER |= (0X01 << 1);     //set 3rd pin as 1
}
	
void ADC_init()
{
		//ADC initialization
	RCC_APB2ENR |= (0X01 << 8);  //set 8th pin to enable ADC clock
	while(((RCC_APB2ENR)&(0X01 << 8))==0)
	{
		;
	}
	ADC_SQR3 = 0X0A;         // select conversion channel as 10th channel(LM35 sensor)

	ADC_CR2 |= (0X01 << 10);  //to enable the selection of EOC bit after conversion
		ADC_CR2 |= 0X01;          // turn ON ADC
}
