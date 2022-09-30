#define RCC_AHB1ENR *(((int *)0X40023830))   // address of RCC_AHB1ENR register is 0X40023830
#define GPIOC_MODER *(((int *)0X40020800))   // address of GPIOC_MODER register is 0X40020800
#define GPIOC_ODR *(((int *)0X40020814))     // address of GPIOC_ODR register is 0X40020814 i.e pc5
	
#define STK_CTRL *((int *)0XE000E010)        // systick control register address = 0X E000 E010
#define STK_LOAD *((int *)0XE000E014)        // systick load register address = 0X E000 E014
#define STK_VAL *((int *)0XE000E018)         // systick value register addresss = 0X E000 E018
	

void KM_Delayms(int t)        // hardware delay function milli seconds
{
	STK_VAL = 0X1919;          // random value to make countflag bit clear
	STK_LOAD = 16000*t;      	// (1,60,00,000 = 1sec) (16,00,000 = 100 msec) (16,000 = 1millisec) (16=1 nanosec)
	STK_LOAD = 0;
	while(((STK_CTRL)&(0X01 << 16))==0)     // waiting until counter sets the count flag.
		{                                       // count flag is set when counting =0 (counter down counts)
			;
		}
}

void KM_Delayus(int t)        // hardware delay function for micro seconds
{
	STK_VAL = 0X1919;          // random value to make countflag bit clear
	STK_LOAD = 16*t;        // (1,60,00,000 = 1sec) (16,00,000 = 100 msec) (16,000 = 1millisec) (16=1 nanosec)
	STK_LOAD = 0;
	while(((STK_CTRL)&(0X01 << 16))==0)     // waiting until counter sets the count flag.
	{                                       // count flag is set when counting =0 (counter down counts)
			;
	}
}
void systick_init()
{
	STK_CTRL |= (0X01);       // set 0th pin to enable timer
	STK_CTRL |= (0X01 << 2);       // set 2nd pin to enable source clock
	
	STK_VAL = 0X1919;          // random value to make countflag bit clear

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
	
	 // KM_Delayus(1000);       // 1000 us delay
	
   while(1)
	{
			KM_Delayms(1000);       // 1000 ms delay
		GPIOC_ODR=(GPIOC_ODR)&(~(0X01 << 5));  // clear PC5 bit to ON led
			KM_Delayus(100);       // 1000 ms delay
		GPIOC_ODR=(GPIOC_ODR)|(0X01 << 5);       // set pc5 bit to OFF led
		
	}		
	
	return 0;
}
