
//function declaration
void UART6_init(void);          //uart6 initialization
void UART6_config(void);
void systick_init(void);
void KM_Delayus(int );
void KM_Delayms(int );
void UART6_OUTchar(unsigned char );
void UART6_OUTstring(char *);
int ESP8266_init(void);
unsigned char UART6_INchar(void);
int UART6_OK_status(char *);
void portC_Init(void);
void ADC_init(void);
char itoa(unsigned int val);
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
#define GPIOC_MODER *((int *)0X40020800)
#define GPIOC_AFRL *((int *)0X40020820)
#define GPIOC_ODR *((int *)0X40020814)
#define RCC_APB2ENR *((int *)0X40023844)
	
//USART6 register adresses
#define USART_SR *((int *)0X40011400)
#define USART_DR *((int *)0X40011404)
#define USART_BRR *((int *)0X40011408)
#define USART_CR1 *((int *)0X4001140C)
#define USART_CR2 *((int *)0X40011410)


#define STK_CTRL *((int *)0XE000E010)        // systick control register address = 0X E000 E010
#define STK_LOAD *((int *)0XE000E014)        // systick load register address = 0X E000 E014
#define STK_VAL *((int *)0XE000E018)         // systick value register addresss = 0X E000 E018
	#define GPIOC_MODER *((int *)0X40020800)
#define RCC_AHB1ENR *((int *)0X40023830)

#define RCC_APB2ENR *((int *)0X40023844)     //to seleect clock for ADC
#define ADC_SQR3 *((int *)0X40012034)        //channel conversion sequence selection
#define ADC_CR2 *((int *)0X40012008)         //control register
#define ADC_SR *((int *)0X40012000)          //status register 
#define ADC_DR *((int *)0X4001204C)          //data register


