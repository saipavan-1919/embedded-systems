#define RCC_AHB1ENR *(((int *)0X40023830))   // address of RCC_AHB1ENR register is 0X40023830
#define GPIOB_MODER *(((int *)0X40020400))   // address of GPIOC_MODER register is 0X40020800
#define GPIOB_ODR *(((int *)0X40020414))     // address of GPIOC_ODR register is 0X40020814 i.e pc5
	
#define GPIOA_PUPDR *(((int *)0X4002000C))   // address of GPIOA_MODER register is 0X40020000
#define GPIOA_IDR *(((int *)0X40020010))     // address of GPIOA_IDR register is 0X40020014 i.e PA8
	
	
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
	RCC_AHB1ENR |= (0x01);   //enabling clock for port-a
	while(!((RCC_AHB1ENR)&(0x01)))      //waiting for until clock  enabled for port-a
	{
		;
	}
	RCC_AHB1ENR |= (0x01 << 1);   //enabling clock for port-c
	while(!((RCC_AHB1ENR)&(0x01 << 1)))      //waiting for until clock  enabled for port-c
	{
		;
	}
	
	
	GPIOB_MODER &= (0XFCFFFFFF);  //making port-b mode to zero
	GPIOB_MODER |= (0X01000000);  // making PB12 mode as output
	
	GPIOA_PUPDR &=(0XFFFFFFFC);
	GPIOA_PUPDR |=(0X00000001);
	
	GPIOB_ODR &=(~(0X01 << 12));
	
	

  while(1)
	{
		if(!((GPIOA_IDR)&(0X01)))
		{
		GPIOB_ODR |= (0X01 << 12);
		}		
		delay(250);	
		GPIOB_ODR &=(~(0X01 << 12));
	}
	return 0;
	}