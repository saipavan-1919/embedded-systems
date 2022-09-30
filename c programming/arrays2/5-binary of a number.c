#include<stdio.h>
void reverse(int[],int);
int main()
{
	int bin[10]={};
	int n,i,j=0;
	printf("enter n value=");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		bin[i]=n%2;
		n=n/2;
		j=j+1;
		if(n==2)
		{
			bin[i+1]=0;
			bin[i+2]=1;
			j=j+2;
			break;
		}
		else if(n==3)
		{
			bin[i+1]=1;
			bin[i+2]=1;
			j=j+2;
			break;
		}
	}
	reverse(bin,j);
	printf("binary format of n=");
	for(i=0;i<j;i++)
	{
		printf("%d",bin[i]);
	}
	return 0;
}
void reverse(int bin[],int j)
{
	int temp,i,k;
        for(i=0,k=j-1;i<k;i++,k--)
	{
		temp=bin[i];
		bin[i]=bin[k];
		bin[k]=temp;
	}
}
