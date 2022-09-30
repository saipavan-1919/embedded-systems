#include<stdio.h>
int stock=1000;
void checkstock()
{
	printf("stock=%d\n",stock);
}
void addstock(int n)
{
	stock=stock+n;
}
void deletestock(int n)
{
	stock=stock-n;
}
