#define RCC_AHB1ENR *((int *)0X40023830)          
#define GPIOC_MODER *((int *)0X40020800)

#define RCC_APB2ENR *((int *)0X40023844)     //to seleect clock for ADC
#define ADC_SQR3 *((int *)0X40012034)        //channel conversion sequence selection
#define ADC_CR2 *((int *)0X40012008)         //control register
#define ADC_SR *((int *)0X40012000)          //status register 
#define ADC_DR *((int *)0X4001204C)          //data register
	
int val;

void ADC_init()
{
		//ADC initialization
	RCC_APB2ENR |= (0X01 << 8);  //set 8th pin to enable ADC clock
	while(((RCC_APB2ENR)&(0X01 << 8))==0)
	{
		;
	}
	ADC_SQR3 = 0X0B;         // select conversion channel as 11th channel(potentiometer)

	ADC_CR2 |= (0X01 << 10);  //to enable the selection of EOC bit after conversion
		ADC_CR2 |= 0X01;          // turn ON ADC
}

void portC_Init()
{
	RCC_AHB1ENR |= (0X01 << 2);         //set 2nd bit to enable clock for port c
	while(((RCC_AHB1ENR)&(0X01 << 2))==0)
	{
		;
	}
	//set pc1 as analog mode  potentiometer
	GPIOC_MODER |= (0X01 << 2);     //set 2nd pin as 1
	GPIOC_MODER |= (0X01 << 3);     //set 3rd pin as 1
}
int main()
{
	
	portC_Init();          //portc initialization
	ADC_init();            // ADC initialization
	

	
	//operation
	while(1)
	{
		ADC_CR2 |= (0X01 << 30);     //set 30th bit (SWSTART) to strat conversion
		if(((ADC_SR)&(0X01 << 1)))
	{
		val=(ADC_DR);         //converted data stored into data register
		ADC_CR2 &= (~(0X01 << 30));     //clear 30th bit (SWSTART) to stop conversion
	       
	}
	}
	
}
	
