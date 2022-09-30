void KM_Delayms(int );
void systick_init(void);
void portB_Init(void);
void write_high_nibble(unsigned char );
void write_low_nibble(unsigned char );
void KM_LCD_write_cmd(unsigned char );
void LCD_Init(void);
void KM_LCD_write_data(unsigned char ,unsigned char);
void writestring(char [],char []);

#define RCC_AHB1ENR *((int *)0X40023830) 
#define GPIOB_MODER *((int *)0X40020400)
#define GPIOB_ODR *((int *)0X40020414)
	
void portB_Init()
{
	RCC_AHB1ENR |= (0X01 << 1);            //ensble clock for port B
	while(((RCC_AHB1ENR)&(0X01 << 1))==0)
	{
		;
	}
	
	GPIOB_MODER &= 0XFFFCF000;   //clearing PB0,PB1,PB2,PB3,PB4,PB5,PB8 modes
	//GPIOB_MODER |= 0X00010555;	 //setting  PB0,PB1,PB2,PB3,PB4,PB5,PB8 modes as output17)
	
	GPIOB_MODER |= 0X01;   // set PB0 as output mode
	GPIOB_MODER |= (0X01 << 2);   // set PB1 as output mode
	GPIOB_MODER |= (0X01 << 4);   // set PB2 as output mode
	GPIOB_MODER |= (0X01 << 6);   // set PB3 as output mode
	GPIOB_MODER |= (0X01 << 8);   // set PB4 as output mode
	GPIOB_MODER |= (0X01 << 10);//set PB5 as output mode
	GPIOB_MODER |= (0X01 << 16); //set PB8 as output mode
	
	GPIOB_ODR &= (~(0X01 << 4));  //clear PB4 pin = Rs
	GPIOB_ODR &= (~(0X01 << 5));  //clear PB5 pin = R/W
	GPIOB_ODR &= (~(0X01 << 8));  //clear PB8 pin = EN
}

void write_high_nibble(unsigned char ch)
{
	ch = (ch >> 4);                // right shifting ch 
	ch = ch &(0X0F);
	GPIOB_ODR &= 0XFFFFFFF0;        //clearing pb0,pb1,pb2,pb3,pb4 bits
	GPIOB_ODR |= ch;               // tarnsfering higher nibble into PB0,PB1,PB2,PB3
	
	//to send data into PB0,PB1,PB2,PB3
	GPIOB_ODR |= (0X01 << 8);      //set (EN) PB8  
	KM_Delayms(10);
	GPIOB_ODR &= (~(0X01 << 8));    //clear PB8 
}

void write_low_nibble(unsigned char ch)
{
	ch = ch & (0X0F);
	GPIOB_ODR &= 0XFFFFFFF0;
	GPIOB_ODR |= ch;
	
	//to send data into PB0,PB1,PB2,PB3
	GPIOB_ODR |= (0X01 << 8);       // set PB8
	KM_Delayms(10);
	GPIOB_ODR &= (~(0X01 << 8));    // clear PB8
}

void KM_LCD_write_cmd(unsigned char ch)
{
	GPIOB_ODR &= (~(0X01 << 4));  //RS = command register '0'
	
	write_high_nibble(ch);        // first writing HIGH nibble (four bits) 
	write_low_nibble(ch);         // next writing LOW (four bits)
}

void LCD_Init()
{
	KM_Delayms(20);                
	KM_LCD_write_cmd(0X33);       //to convert from 8 data lines to 4 data lines
	KM_Delayms(1);
	KM_LCD_write_cmd(0X32);
	KM_LCD_write_cmd(0X0C);     // 0C - command for Display ON cursor OFF
	KM_LCD_write_cmd(0X01);     // 01 - command for display clearing
	
}

void KM_LCD_write_data(unsigned char ch,unsigned char cmd)
{
	KM_LCD_write_cmd(cmd);         //variable cmd is used to select row and column in LCD
	GPIOB_ODR |= (0X01 << 4);      // enable pb4 to send data into data register
	write_high_nibble(ch);
	write_low_nibble(ch);
}
void writestring(char str1[],char str2[])
{
	int i;
	char cmd1=0X80,cmd2=0XC0;  // 80 - for 1st row 1st column ,C0 - for 2nd row 1st column
	for(i=0;str1[i]!='\0';i++)
	{
		KM_LCD_write_data(str1[i],cmd1);
		cmd1 = cmd1+1;
	}
	
	for(i=0;str2[i]!='\0';i++)
	{
		KM_LCD_write_data(str2[i],cmd2);
		cmd2 = cmd2+1;
	}
	
}

char itoa(unsigned int val)
{
	char ch;
	ch=val+48;
	return ch;
	
}
