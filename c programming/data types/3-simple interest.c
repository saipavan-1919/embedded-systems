#include<stdio.h>
int main()
{
	int n,p;
	float i,r,m;
	printf("enter principle amount p=");
	scanf("%d",&p);
	printf("enter rate of interest r=");
	scanf("%f",&r);
	printf("enter no.of months n=");
	scanf("%d",&n);
	m=n/12;
	printf("no.of years m=%f",m);
	i=(p*m*r)/100;
	printf("simple interest i=%f",i);
       return 0;
}
