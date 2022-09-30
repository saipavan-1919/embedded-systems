#include<stdio.h>
void table(int a)
	{
		int i,b;
		for(i=1;i<=10;i++)
		{
			b=a*i;
			printf("%d\n",b);
		}
	}
int main()
{
        int a;
	printf("enter a =");
	scanf("%d",&a);
	table(a);
	return 0;

}
