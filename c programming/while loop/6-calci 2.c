
#include<stdio.h>
int main()
{
	int a,b,i=2,d,j=0,mul,div,rem=0;
	printf("enter a and b values =");
	scanf("%d%d",&a,&b);
	d=a;
	char c;
	printf("enter M or D or R= ");
	scanf(" %c",&c);
	while(i<=b)
	{
	      if(c=='M')
	      {
		      a=a+d;
		      mul=a;
	      }

	      if(c=='R'||c=='D')
	      {
		      rem=a-b;
		      a=rem;
		      if(rem<b)
			      i=b+1;
		      j=j+1;
		      
	      }
	      i=i+1;
	}
	        if(c=='M')
		printf("mul=%d",mul);
		if(c=='D')
		printf("div=%d",j);
		if(c=='R')
			printf("rem=%d",a);
}