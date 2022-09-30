#include"nsm2.h"
static int stock1=1000;
int stock()
{
     return stock1;
}
void checkstock()
{
	printf("stock=%d\n",stock1);
}
void addstock(int n)
{
	stock1=stock1+n;
}
void deletestock(int n)
{
	stock1=stock1-n;
}
