#define RCC_AHB1ENR   (*(volatile int *)0x40023830)     //clock 40023800 +4000
#define GPIOA_MODE   (*(volatile int *)0x40020000)     //MODE
#define GPIOA_PUPDR   (*(volatile int *)0x4002000C)     //PULLUP 
#define GPIOA_ODR *((int *)0X40020014)


#define GPIOC_MODE   (*(volatile int *)0x40020800)     //MODE
#define GPIOC_ODR    (*(volatile int *)0x40020814)     //PULLUP 
#define GPIOC_PUPDR *((int *)0X4002080C)
#define GPIOC_IDR *((int *)0X40020810)
	
#define RCC_SYSCFG_CLK_ENABLE  (*(volatile int *)0x40023844)   
	
#define EXTI_IMR     (*(volatile int *)0x40013C00)      //0x4001 3C00
#define EXTI_FTSR    (*(volatile int *)0x40013C0c)      //0x4001 3C00 EXTI_SWIER	
#define EXTI_PR      (*(volatile int *)0x40013C14)      //0x4001 3C00 EXTI_SWIER

//*********NVIC-REGISTERS**********

#define NVIC_ISER0       (*(volatile int *)0xE000E100)      //INterrupt Range is 31 to 04
	
//******************** 
#define SYSCFG_EXTICR3   (*(volatile int *)0x40013810)  //PORT[X] and Pin[X] Nmuber selection
 


#define SCB_SCR          (*(volatile int *)0xE000ED10)			//System control block
	
int counter = 0;

void delay(int delay)
{
	int i=10;
		for(i=0;i<3200*delay;i++)
		{
	;
		}	
}

void PortA_Init(void)
{
		RCC_AHB1ENR=RCC_AHB1ENR|0x01;  //clock anable for portA	
		while((RCC_AHB1ENR&0x01)==0){;}	   //checking for clock 	
		GPIOA_MODE |= (0x01 << 16); // 16-1 bit clear - P set input direction
		GPIOA_ODR |= (0X01 << 8);
}

void PortC_Init(void)
{
		RCC_AHB1ENR = RCC_AHB1ENR|0x04;  //clock anable for portA	
		while((RCC_AHB1ENR&0x04)==0){;}	   //checking for clock 	
		GPIOC_MODE |= (0x1 << 10) ;// 0-1 bit clear - PC5 set input direction
		GPIOC_ODR |= (0x01 << 5); 
		GPIOC_PUPDR &= (0XFFFCFFFF);
		GPIOC_PUPDR |= (0X00010000);
		GPIOC_PUPDR &= (0XFFF3FFFF);
		GPIOC_PUPDR |= (0X00040000);

}

void PC_Interrupt_Init(void)
{
		// Step 1: Choose Port
		RCC_SYSCFG_CLK_ENABLE |= 0x1<<14;     //Syconfig clock enable
		while((RCC_SYSCFG_CLK_ENABLE&(0x1<<14))==0){;}	   //checking for clock 	
			
		SYSCFG_EXTICR3 |= 0x00000002;// Choose Pc8 Port
		SYSCFG_EXTICR3 |= 0x00000020;// Choose Pc9 Port
			

		// Step 2: Enable Device Side	
		EXTI_IMR |= (0x1 << 8);// Enable Pc8 Interrupt
		EXTI_FTSR |= (0x1  << 8);	// Enable Pc8 Falling Edge type interrupt
			EXTI_IMR |= (0x1 << 9);// Enable Pc9 Interrupt
		EXTI_FTSR |= (0x1  << 9);	// Enable Pc9 Falling Edge type interrupt
	
		//	Step 3: Enable NVIC side	
		NVIC_ISER0 |= (0x1 << 23); // Enable Ext 0 in NVIC Reg
}

int main()
{
  PortA_Init();// PA0 set to input (-ve edge)
	PortC_Init(); // PC5 set to output (-ve edge) - RED LED ON
	PC_Interrupt_Init();

	while(1)		
	{
			;
	}
}


void EXTI9_5_IRQHandler(void)
{
if((EXTI_PR& (0x01 << 8))) // Check Pc8 Interrupt
{		
		GPIOC_ODR &= (~(0x01 << 5)); // RED LED ON
	 GPIOA_ODR |= (0x01 << 8); // green LED OFF
 	 	counter++; // Increment Counter vairable
	 
		EXTI_PR=(0x01 << 8); // Clear PA0 Interrupt 
}
if((EXTI_PR& (0x01 << 9))) // Check Pc8 Interrupt
{		
		GPIOA_ODR &= (~(0x01 << 8)); // green LED ON
	  GPIOC_ODR |= (0x01 << 5); // RED LED OFF
 	 	counter++; // Increment Counter vairable
		EXTI_PR=(0x01 << 9); // Clear PA0 Interrupt 
}
}
