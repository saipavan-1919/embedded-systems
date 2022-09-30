#include<stdio.h>
#define SET_BIT(c,n) (c|(0X01<<n))
#define CLEAR_BIT(c,n) c&(~(0X01<<n))
#define TOGGLE_BIT(c,n) c^(0X01<<n)
int main()
{

	char c;
	int n;
	printf("enter c value=");
	scanf("%d",&c);
	printf("enter the bit position ");
	scanf("%d",&n);
	printf("%X\n",SET_BIT(c,n));
	printf("%d\n",CLEAR_BIT(c,n));
	printf("%d\n",TOGGLE_BIT(c,n));
	return 0;



}
