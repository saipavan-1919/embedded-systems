#include"uart.h"
//#define RCC_AHB1ENR   (*(volatile int *)0x40023830)     //clock 40023800 +4000
#define GPIOA_MODE   (*(volatile int *)0x40020000)     //MODE
#define GPIOA_PUPDR   (*(volatile int *)0x4002000C)     //PULLUP 
#define GPIOA_ODR *((int *)0X40020014)


#define GPIOC_MODE   (*(volatile int *)0x40020800)     //MODE
//#define GPIOC_ODR    (*(volatile int *)0x40020814)     //PULLUP 
#define GPIOC_PUPDR *((int *)0X4002080C)
#define GPIOC_IDR *((int *)0X40020810)
	
void PortA_Init(void)
{
		RCC_AHB1ENR=RCC_AHB1ENR|0x01;  //clock anable for portA	
		while((RCC_AHB1ENR&0x01)==0){;}	   //checking for clock 	
		GPIOA_MODE |= (0x01 << 16); // 16-1 bit clear - P set output direction
		GPIOA_ODR |= (0X01 << 8);
}

void PortC_Init(void)
{
		RCC_AHB1ENR = RCC_AHB1ENR|0x04;  //clock anable for portA	
		while((RCC_AHB1ENR&0x04)==0){;}	   //checking for clock 	
		GPIOC_MODE |= (0x1 << 10) ;// 0-1 bit clear - PC5 set output direction
		GPIOC_ODR |= (0x01 << 5); 
		GPIOC_PUPDR &= (0XFFFCFFFF);
		GPIOC_PUPDR |= (0X00010000);
		GPIOC_PUPDR &= (0XFFF3FFFF);
		GPIOC_PUPDR |= (0X00040000);

}
