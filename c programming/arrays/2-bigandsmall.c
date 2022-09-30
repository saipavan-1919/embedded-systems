#include<stdio.h>
int bignum(void);
int smallnum(void);
int num[10];
int is,ib;
int main()
{
	int big,small;
	for(int i=0;i<10;i++)
	{
	     printf("enter num[%d] value= ",i);
	     scanf("%d",&num[i]);
	}
	big=bignum();
	printf("big num=%d\n",big);
	printf("the big number index is =%d\n",ib);
	small=smallnum();
	printf("small number=%d\n",small);
	printf("the small number index is =%d\n",is);

}
int bignum()
{
	int i=0,temp;
        if(num[i]>num[i+1])
	{
		temp=num[i];
	for(i=0;i<10;i++)
	{
		if(num[i]>temp)
		{
			temp=num[i];
                         ib=i;
		}

	}
	}
	else
	{
		temp=num[i+1];
		for(i=0;i<10;i++)
		{
			if(num[i]>temp)
			{
				temp=num[i];
                                ib=i;
                         }
		}

	}
	return temp;
}
int smallnum()
{
	int i=0,temp;
	if(num[i]<num[i+1])
	{
		temp=num[i];
	for(i=0;i<10;i++)
	{
	     if(num[i]<temp)
	     {
		     temp=num[i];
                     is=i;
              }
	}
	}
	else
	{
		temp=num[i+1];
		for(i=0;i<10;i++)
		{
			if(num[i]<temp)
			{
				temp=num[i];
                                  is=i;
		}
	
		}
	}
	return temp;
}
