void KM_Delayms(int );
void KM_Delayus(int );
void systick_init(void);
void portB_Init(void);
void write_high_nibble(unsigned char );
void write_low_nibble(unsigned char );
void KM_LCD_write_cmd(unsigned char );
void LCD_Init(void);
void KM_LCD_write_data(unsigned char ,unsigned char);
void writestring(char [],char []);

#define GPIOC_MODER *((int *)0X40020800)
#define RCC_AHB1ENR *((int *)0X40023830)

#define RCC_APB2ENR *((int *)0X40023844)     //to seleect clock for ADC
#define ADC_SQR3 *((int *)0X40012034)        //channel conversion sequence selection
#define ADC_CR2 *((int *)0X40012008)         //control register
#define ADC_SR *((int *)0X40012000)          //status register 
#define ADC_DR *((int *)0X4001204C)          //data register
	
void portC_Init()
{
	RCC_AHB1ENR |= (0X01 << 2);         //set 2nd bit to enable clock for port c
	while(((RCC_AHB1ENR)&(0X01 << 2))==0)
	{
		;
	}
	//set pc1 as analog mode  potentiometer
	GPIOC_MODER |= (0X01);     //set 2nd pin as 1
	GPIOC_MODER |= (0X01 << 1);     //set 3rd pin as 1
}

char itoa(unsigned int val)
{
	char ch;
	ch=val+48;
	return ch;
	
}

int val,val1;
int main(){
	int i;
	char str1[16]="Temp : ";
	char str2[16];
	char str3[16]="";
	
	portC_Init();
	portB_Init();
	systick_init();
	LCD_Init();
	//ADC initialization
	RCC_APB2ENR |= (0X01 << 8);  //set 8th pin to enable ADC clock
	while(((RCC_APB2ENR)&(0X01 << 8))==0)
	{
		;
	}
	ADC_SQR3 = 0X0A;         // select conversion channel as 11th channel(potentiometer)

	ADC_CR2 |= (0X01 << 10);  //to enable the selection of EOC bit after conversion
		ADC_CR2 |= 0X01;          // turn ON ADC
	//operation
	while(1)
	{
			ADC_CR2 |= (0X01 << 30);     //set 30th bit (SWSTART) to strat conversion
		if(((ADC_SR)&(0X01 << 1)))
	{
		val=(ADC_DR);         //converted data stored into data register
		val1=(val*290)/4096;
		ADC_CR2 &= (~(0X01 << 30));     //clear 30th bit (SWSTART) to stop conversion
	    str2[1]=(val1%10)+48;   
		str2[0]=(val1/10)+48;
		
			KM_LCD_write_data(str2[0],0X87);
			KM_LCD_write_data(str2[1],0X88);
		KM_LCD_write_data('c',0X8A);
			 writestring(str1,str3);
		}
		
		//str2[0]='1';
	//	str2[1]='2';
		// writestring(str1,str2);
	}
	
	
 
	
	return 0;
}
