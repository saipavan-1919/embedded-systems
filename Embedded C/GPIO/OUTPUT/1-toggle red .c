#define RCC_AHB1ENR *(((int *)0X40023830))   // address of RCC_AHB1ENR register is 0X40023830
#define GPIOC_MODER *(((int *)0X40020800))   // address of GPIOC_MODER register is 0X40020800
#define GPIOC_ODR *(((int *)0X40020814))     // address of GPIOC_ODR register is 0X40020814 i.e pc5
	
void delay(int a)
{
	int i;
	for(i=0;i<(a*1650);)
	{
		i++;
	}
}

int main()
{
	RCC_AHB1ENR |= (0x01<<2);   //enabling clock for port-c
	//int *ptr=((int *)0X40023830);
	//*ptr=*ptr|(0X01 << 2);
	while(!((RCC_AHB1ENR)&(0x01 << 2)))      //waiting for until clock  enabled for port-c
	{
		;
	}
	
	GPIOC_MODER=(GPIOC_MODER)&(0XFFFF3FF);  //making port-c mode to zero
	GPIOC_MODER=(GPIOC_MODER)|(0X00000400);  // making PC5 mode as output

  while(1)
	{
		GPIOC_ODR=(GPIOC_ODR)&(~(0X01 << 5));  //
		delay(50);
		GPIOC_ODR=(GPIOC_ODR)|(0X01 << 5);
		delay(1300);
	}		
	
	return 0;
}
