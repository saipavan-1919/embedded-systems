#define RCC_AHB1ENR *(((int *)0X40023830))   // address of RCC_AHB1ENR register is 0X40023830
	
//red led pin no = PC5
#define GPIOC_MODER *(((int *)0X40020800))   // address of GPIOC_MODER register is 0X40020800
#define GPIOC_ODR *(((int *)0X40020814))     // address of GPIOC_ODR register is 0X40020814
	
//GREEN LED pin no = PA8
#define GPIOA_MODER *(((int *)0X40020000))  //address of GPIOA_MODER register is 0X40020000
#define GPIOA_ODR *(((int *)0X40020014))    //address of GPIOA_ODR register is 0X40020014

	
void delay(int a)
{
	int i;
	for(i=0;i<(a*1680);i++)
	{
		;
	}
}

int main()
{
	
	//initialization
	RCC_AHB1ENR =RCC_AHB1ENR | (0x05);   //enabling clock for port-c
	while(!((RCC_AHB1ENR)&(0x05)))      //waiting for until clock  enabled for port-c
	{
		;
	}
	
	GPIOC_MODER=(GPIOC_MODER)&(0XFFFF3FF);  //clearing pc5 mode to zero(10th bit,11th bit)
	GPIOC_MODER=(GPIOC_MODER)|(0X00000400);  // making PC5 mode as output
	
	GPIOA_MODER=(GPIOA_MODER)&(0XFFFCFFFF);   //cleaaring PA8 mode (16th bit,17th bit) 
	GPIOA_MODER=(GPIOA_MODER)|(0X00010000);  //setting PA8 mode to OUTPUT
	

	//operation
  while(1)
	{
		//GREEN LED OPERATION
		GPIOA_ODR=(GPIOA_ODR)&(~(0X01 << 8));  //cleared PA8 pin to ON GREEN LED
		delay(50);
		GPIOA_ODR=(GPIOA_ODR)|(0X01 << 8);     //set PA8 pin to OFF LED
		delay(50);
		GPIOA_ODR=(GPIOA_ODR)&(~(0X01 << 8));  //cleared PA8 pin to ON LED
		delay(50);
		GPIOA_ODR=(GPIOA_ODR)|(0X01 << 8);     //set PA8 pin to OFF LED
		delay(150);
		
		//RED LED operattion
		GPIOC_ODR=(GPIOC_ODR)&(~(0X01 << 5));  // clear PC5 to ON LED
		delay(50);
		GPIOC_ODR=(GPIOC_ODR)|(0X01 << 5);     // set PC5 to off LED
		delay(250);
		GPIOC_ODR=(GPIOC_ODR)&(~(0X01 << 5));  // clear PC5 to ON LED
		delay(50);
		GPIOC_ODR=(GPIOC_ODR)|(0X01 << 5);     // set PC5 to off LED
		delay(500);
	}		
	
	return 0;
}
