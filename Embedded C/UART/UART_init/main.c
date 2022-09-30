
#define RCC_AHB1ENR *((int *)0X40023830)
#define GPIOA_MODER *((int *)0X40020000)
#define GPIOA_AFRH *((int *)0X40020024)
#define RCC_APB2ENR *((int *)0X40023844)
#define USART_CR1 *((int *)0X4001100C)
#define USART_CR2 *((int *)0X40011010)
#define USART_BRR *((int *)0X40011008)

void UART_init(void);
void UART_config(void);
int main()
{

	UART_init();
	UART_config();
	
	return 0;
}
void UART_init()
{
	RCC_AHB1ENR |= 0X01;            //set 0th pin for portA clock
	while(((RCC_AHB1ENR)&(0X01))==0)
	{
		;
	}
	GPIOA_MODER |= (0X01 << 19);       //making pa9 as alternate function by loading "10" into pa9 bitfield (18th,19th)
	
	GPIOA_MODER |= (0X01 << 21);       //making pa10 as alternate function by loading "10" into pa10 bitfield (20th,21st)
	
	GPIOA_AFRH |= (0X07 << 4);         //making pa9 as AF7 (UART1)
	
	GPIOA_AFRH |= (0X07 << 8);         //making pa10 as AF7 (UART1)
	
	RCC_APB2ENR |= (0X01 << 4);        //enabling clock for UART1
	while(((RCC_APB2ENR)&(0X01 << 4))==0)
	{
		;
	}
	
}

void UART_config()
{
	//UART format = 9600 8N1 
	
	USART_CR1 |= (0X01 << 13);       //enabling UART (UE == 1)
	
	//setting baudrate as 9600 bps for 16MHz clock speed
	USART_BRR = 0;
	USART_BRR |= (0X68 << 4);        //USART_manista [15:4] = 104(0X68)
	USART_BRR |= (0X03);             //USART_fraction [3:0] = 3

  USART_CR1 &= (~(0X01 << 12));	   //clearing 12th bit for word length = 8bit
	
	//laod "00" into 12th,13th bits to make stopbits as 1
 	USART_CR2 &= (~(0X01 << 12));     // clearing 12th bit in USART_CR2
	USART_CR2 &= (~(0X01 << 13));     //clearing 13th bit in USARRT_CR2
	
	USART_CR1 |= (0X01 << 2);         // enabling reciever bit
	USART_CR1 |= (0X01 << 3);         //enabling transmitter
	
	
}

