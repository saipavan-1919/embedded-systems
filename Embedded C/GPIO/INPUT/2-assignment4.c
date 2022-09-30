#define RCC_AHB1ENR *(((int *)0X40023830))   // address of RCC_AHB1ENR register is 0X40023830
	
#define GPIOC_MODER *(((int *)0X40020800))   // address of GPIOC_MODER register is 0X40020800
#define GPIOC_ODR *(((int *)0X40020814))     // address of GPIOC_ODR register is 0X40020814 i.e pc5
	
#define GPIOA_IDR *(((int *)0X40020010))   // address of GPIOA_IDR register is 0X40020010
#define GPIOA_PUPDR *(((int *)0X4002000C))     // address of GPIOA_PUPDR register is 0X4002000C i.e PA8

int count=0; 
	
void delay(int t)
{
	int i;
	for(i=0;i<(t*1650);)
	{
		i++;
	}
}

int main()
{
	RCC_AHB1ENR |= (0x01);   //enabling clock for port-a
	while(!((RCC_AHB1ENR)&(0x01)))      //waiting for until clock  enabled for port-a
	{
		;
	}
	RCC_AHB1ENR |= (0x01<<2);   //enabling clock for port-c
	while(!((RCC_AHB1ENR)&(0x01 << 2)))      //waiting for until clock  enabled for port-c
	{
		;
	}
	
	GPIOC_MODER &=(0XFFFFF3FF);  //making port-c mode to zero
	GPIOC_MODER |=(0X00000400);	//PC5 AS OUTPUT
	
	GPIOA_PUPDR &= (0XFFFFFFFC);  //
	GPIOA_PUPDR |= (0X00000001);       //set pc8 bit field to 01 to act as pullup
	
	GPIOC_ODR |= (0X01 << 5);           //PC5 is set led off

  while(1)
	{
		if(!((GPIOA_IDR)&(0X01)))
		{
		GPIOC_ODR &= (~(0X01 << 5));  //if sw1 pressed red led is ON
			count=count+1;
		}
		delay(100);
		GPIOC_ODR |= (0X01 << 5);
		
		
	}		
	
	return 0;
}
