void systick_init(void);
void KM_Delayms(int );
void KM_Delayus(int );
void UART_init(void);
void UART_config(void);
void UART1_OUTchar(unsigned char);          //transmitter function
unsigned char UART1_INchar(void);           //receiver function
void portc_init(void);
void portA_init(void);
void PortA_Init(void);                      // PA0 set to input (-ve edge)
void PortC_Init(void);                      // PC5 set to output (-ve edge)
void PC_Interrupt_Init(void);               // enabling interrupt handler device side and processor side  



#define RCC_AHB1ENR *((int *)0X40023830)
#define GPIOA_MODER *((int *)0X40020000)
#define GPIOA_AFRH *((int *)0X40020024)
#define RCC_APB2ENR *((int *)0X40023844)
#define USART_CR1 *((int *)0X4001100C)
#define USART_CR2 *((int *)0X40011010)
#define USART_BRR *((int *)0X40011008)	
#define USART_SR *((int *)0X40011000)
#define USART_DR *((int *)0X40011004)
#define STK_CTRL *((int *)0XE000E010)        // systick control register address = 0X E000 E010
#define STK_LOAD *((int *)0XE000E014)        // systick load register address = 0X E000 E014
#define STK_VAL *((int *)0XE000E018)         // systick value register addresss = 0X E000 E018
#define GPIOC_ODR *((int *)0X40020814)
#define GPIOC_IDR *((int *)0X40020810)
#define GPIOA_ODR *((int *)0X40020014)
#define GPIOA_IDR *((int *)0X40020010)
