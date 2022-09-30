#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int *)malloc(10*sizeof(int));
	printf("enter 10 integers");
	for(int i=0;i<10;i++)
	{
		scanf("%d\n",&(*(ptr+i)));
	
	}
	printf("\nbefore sorting\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	for(int j=0;j<10;j++)
	{
		for(int i=0;i<10-j;i++)
		{
			if((*(ptr+i))>(*(ptr+i+1)))
			{
				int temp;
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+i+1);
				*(ptr+i+1)=temp;
			}
		}
	
	}
	printf("\nafter sorting\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}
