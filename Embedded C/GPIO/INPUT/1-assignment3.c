#define RCC_AHB1ENR *(((int *)0X40023830))   // address of RCC_AHB1ENR register is 0X40023830
#define GPIOC_MODER *(((int *)0X40020800))   // address of GPIOC_MODER register is 0X40020800
#define GPIOC_ODR *(((int *)0X40020814))     // address of GPIOC_ODR register is 0X40020814 i.e pc5
#define GPIOC_IDR *(((int *)0X40020810))     // address of GPIOc_IDR register is 0X40020810 i.e pc8,pc9
#define GPIOC_PUPDR *(((int *)0X4002080C))     // address of GPIOc_PUPDR register is 0X4002080C i.e pc8,pc9
	
#define GPIOA_MODER *(((int *)0X40020000))   // address of GPIOA_MODER register is 0X40020000
#define GPIOA_ODR *(((int *)0X40020014))     // address of GPIOA_ODR register is 0X40020010 i.e PA8
	
	
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
	RCC_AHB1ENR |= (0x01<<2);   //enabling clock for port-c
	while(!((RCC_AHB1ENR)&(0x01 << 2)))      //waiting for until clock  enabled for port-c
	{
		;
	}
	
	GPIOC_MODER=(GPIOC_MODER)&(0XFFFF3FF);  //making port-c mode to zero
	GPIOC_MODER=(GPIOC_MODER)|(0X00000400);  // making PC5 mode as output
	
	GPIOA_MODER &= (0XFFFCFFFF);        //pa8 bit field to clear
	GPIOA_MODER |= (0X00010000);       // PORT A pa8 mode as output
	
	GPIOC_PUPDR &= (0XFFFCFFFF);       //clearing pc8 pupdr bit field
	GPIOC_PUPDR |= (0X00010000);       //set pc8 bit field to 01 to act as pullup
	
	GPIOC_PUPDR &=  (0XFFF3FFFF);       //clearing pc9 pupdr bit field
	GPIOC_PUPDR |=  (0X00040000);       //set pc9 bit field to 01 to act as pullup
	
	GPIOA_ODR |= (0X01 << 8);           // PA8 is set led off
	GPIOC_ODR |= (0X01 << 5);           //PC5 is set led off

  while(1)
	{
		if(!((GPIOC_IDR)&(0X01 << 8)))
		{
		GPIOC_ODR &= (~(0X01 << 5));  //if sw1 pressed red led is ON
		GPIOA_ODR |= (0X01 << 8);      // GREEN LED is oFF
		}
		if(!((GPIOC_IDR)&(0X01 << 9)))
		{
		GPIOA_ODR &= (~(0X01 << 8));  //if sw1 pressed GREEN led is ON
		GPIOC_ODR |= (0X01 << 5);      // RED LED is oFF
		}
		delay(100);
		
	}		
	
	return 0;
}
