#include<stdio.h>
int prime(int n)
{
        int b,i;
	for(i=2;i<n;i++)
	{
	if(n%i==0)
	{
		b=1;
	        break;
	}
	else
		b=0;
		}
	return b;

}
int main()
{
	int n,a;
	printf("enter number =");
	scanf("%d",&n);
        a=prime(n);
	if(a==1)
		printf(" numbers is not prime");
	else
		printf("  number is prime ");
	return 0;
}
