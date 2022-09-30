#include<stdio.h>
int main()
{
	int amt,a,b,c,d,e,f,g;
	printf("enter amount=");
	scanf("%d",&amt);
	if(amt%10==0)
	{
	a=amt/500;
	if(a!=0)
		printf("no.of 500 notes = %d\n",a);
	b=amt%500;
	c=b/100;
	if(c!=0)
		printf("no.of 100 notes =%d\n",c);
	d=b%100;
	e=d/50;
	if(e!=0)
		printf("no.of 50 notes= %d\n",e);
	f=d%50;
	g=f/10;
	if(g!=0)
		printf("no of 10 notes = %d\n",g);
	}
	else
		printf("re enter amt in multiples of 10\n");
}
