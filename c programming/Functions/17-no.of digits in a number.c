#include<stdio.h>
int digits(int n)
{  
        int i=1,j=1;
	do
	{
		if(n/10==0)
			i=0;
		else
		{
		n=n/10;
		j++;
		}

	}while(i==1);
	return j;
}
int main()
{
	int n,d;
	printf("rnter the number=");
	scanf("%d",&n);
	d=digits(n);
	printf("no of digits in n =%d",d);
	return 0;

}
