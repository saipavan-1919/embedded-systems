#include<stdio.h>
int duplicate1(int[],int,int);
int duplicate2(int[],int,int);
int main()
{
	int size,count=0;
	printf("enter the size of array=");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		printf("enter arr[%d] value=",i);
		scanf("%d",&arr[i]);
		if(arr[i]!=-1)
			count++;
	}
	int j=1,nv,temp;
	while(j==1)
	{
		int select;
		printf("choose one option\n 1-to insert a value\n 2-to delete a value\n 3-to quit\n");
		scanf("%d",&select);
	/*	if(select==1)
		{
			printf("enter value that will be inserted=");
			scanf("%d",&nv);
			int count=0;
			for(count=0;arr[count]!=-1||arr[count]==0;)
			{
				count++;
			}
			if(count==size-1)
			{
				printf("array is full.cannot insert\n");

			}
			else if(count<size-1)
			{
				int temp=0;
				for(int i=0;i<size;i++)
				{
					if(nv==arr[i])
					{
						printf("duplicate values are not allowed\n");
                                                temp=1;
						break;
					}
				}
				if(temp!=1)
				{
					for(int i=0;i<size;i++)
					{
						if(arr[i]==-1)
							arr[i]=nv;

					}
				}

			}
		}*/
		if(select==1)
		{
			if(count==size)
				printf("cannot insert. array is full\n");
			else if(count<size)
			{
				for(int i=0;i<size;i++)
				{
					if(arr[i]==-1)
					{
						printf("enter new value to be inserted=");
						scanf("%d",&nv);
						temp=duplicate1(arr,nv,size);
						if(temp==0)
							printf("duplicate values are not allowed");
						else if(temp==1)
						{

							arr[i]=nv;
							count=count+1;
						}


					}
				}
			}
		
		}
		else if(select==2)
		{
			printf("enter value to be deleted=");
			scanf("%d",&nv);
                         for(int i=0;i<size;i++)
                       {
                           if(arr[i]==nv)
                           {
                               arr[i]=-1;
                               break;
                            }
                            else if(i==size-1)
                                    printf("the entered value does not exist");
                        }
			 count--;
                       
		}
		else if(select==3)
		{
			printf("array=");

			for(int i=0;i<size;i++)
				printf("%d",arr[i]);
			j=0;
		}
	}
}
int duplicate1(int arr[],int nv,int size)
{
        int  temp;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==nv)
		{
			temp=0;
			break;
		}
		else
		{
			temp=1;
		}

	}
	return temp;
}
