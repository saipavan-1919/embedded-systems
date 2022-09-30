#include"uart6_c.h"
void KM_Delayms(int t)        // hardware delay function milli seconds
{
	STK_VAL = 0X1919;          // random value to make countflag bit clear
	STK_LOAD = 16000*t;        // (1,60,00,000 = 1sec) (16,00,000 = 100 msec) (16,000 = 1millisec) (16=1 nanosec)
	STK_LOAD = 0;              // 
	while(((STK_CTRL)&(0X01 << 16))==0)
	{
		;
	}
}
void KM_Delayus(int t)        // hardware delay function milli seconds
{
	STK_VAL = 0X1919;          // random value to make countflag bit clear
	STK_LOAD = 16*t;        // (1,60,00,000 = 1sec) (16,00,000 = 100 msec) (16,000 = 1millisec) (16=1 nanosec)
	STK_LOAD = 0;              // 
	while(((STK_CTRL)&(0X01 << 16))==0)
	{
		;
	}
}

void systick_init()
{
	STK_CTRL |= (0X01);       // set 0th pin to enable timer
	STK_CTRL |= (0X01 << 2);       // set 2nd pin to enable source clock
	
	STK_VAL = 0X1919;          // random value to make countflag bit clear

}
