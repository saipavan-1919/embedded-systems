#include<stdio.h>
int main()
{
	int a,n;
	float b1,b2,c;    //n=no.of calls above100
	                  //a=total no.of calls
    
    	printf("enter total no.of calls a=");
	scanf("%d",&a);

        n=a-100;

	b1=250+ (n*1.25);               //bill above 100 calls

	b2=250;                    //bill below 100 calls
	
	c=a>100?b1:b2;
	
	printf("bill for %d calls =%f",a,c);

	return 0;
}
