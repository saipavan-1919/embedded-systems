#define RCC_AHB1ENR *(((int *)0X40023830))   // address of RCC_AHB1ENR register is 0X40023830
#define GPIOC_MODER *(((int *)0X40020800))   // address of GPIOC_MODER register is 0X40020800
#define GPIOC_ODR *(((int *)0X40020814))     // address of GPIOC_ODR register is 0X40020814 i.e pc5
	
#define STK_CTRL *((int *)0XE000E010)        // systick control register address = 0X E000 E010
#define STK_LOAD *((int *)0XE000E014)        // systick load register address = 0X E000 E014
#define STK_VAL *((int *)0XE000E018)         // systick value register addresss = 0X E000 E018
	


void systick_init()
{
	STK_CTRL |= (0X01);            // set 0th pin to enable timer
	STK_CTRL |= (0X01 << 1);       // set 1st pin to enable interrupt
	STK_CTRL |= (0X01 << 2);       // set 2nd pin to enable source clock
	
	STK_VAL = 0X1919;          // random value to make countflag bit clear
	
	STK_LOAD = 1600000;        // 1,60,00,000 = 1sec 16,00,000 = 100 msec

}

void portC_init()
{
	RCC_AHB1ENR |= (0x01<<2);   //enabling clock for port-c
	while(!((RCC_AHB1ENR)&(0x01 << 2)))      //waiting for until clock  enabled for port-c
	{
		;
	}
	
	GPIOC_MODER=(GPIOC_MODER)&(0XFFFFF3FF);  //making port-c mode to zero
	GPIOC_MODER=(GPIOC_MODER)|(0X00000400);  // making PC5 mode as output
	
	GPIOC_ODR=(GPIOC_ODR)|(0X01 << 5);       // set pc5 bit to OFF LED
}

int main()
{
	portC_init();            //port c initialization
	
	systick_init();	         // systick timer initialization
	
	while(1)
	{
	}
}

void SysTick_Handler()         //when count flag is set then interrupt enabled and comes to interrupt handler
{
	GPIOC_ODR ^= (0X01 << 5);
}	