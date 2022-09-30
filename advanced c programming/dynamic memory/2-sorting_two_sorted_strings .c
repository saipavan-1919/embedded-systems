#include<stdio.h>
#include<stdlib.h>
int * sorting1(int *,int);
int * duplicatesorting(int *,int ,int *,int );
int * sort(int [],int );
//int * sorting2(int *,int);
#define S1 5
#define S2 5
int main()
{
	int *ptr1,*ptr2,i,*ptr3;
	ptr1=(int *)malloc(S1*sizeof(int));
	printf("enter array 1");
	for(i=0;i<S1;i++)
	{
		scanf("%d",ptr1+i);
	}
	ptr2=(int *)malloc(S2*sizeof(int));
	printf("enter array 2");
	for(i=0;i<S2;i++)
	{
		scanf("%d",ptr2+i);
	}
	ptr1=sorting1(ptr1,S1);
	ptr2=sorting1(ptr2,S2);
	for(i=0;i<S1;i++)
	{
		printf("%d ",*(ptr1+i));
	}
	printf("\n");
	for(i=0;i<S2;i++)
	{
		printf("%d ",*(ptr2+i));
	}
	printf("\n");

	ptr3=duplicatesorting(ptr1,S1,ptr2,S2);
//	for(i=0;i<S1+S2;i++)
//		printf("%d ",*(ptr3+i));
	

	printf("\n");

	free(ptr1);
	free(ptr2);
	free(ptr3);
}

int * sorting1(int * ptr1,int s)
{
	int i,*ptr2=ptr1,temp;
	for(int j=0;j<s-1;j++)
	{
	ptr1=ptr2;
	for(i=0;i<s-j-1;i++)
	{

		if((*ptr1>*(ptr1+1)))
		{
			temp=*ptr1;
			*ptr1=*(ptr1+1);
			*(ptr1+1)=temp;

		}

		ptr1++;
	}
	}
	return ptr2;
}


int * duplicatesorting(int *ptr1,int s1,int *ptr2,int s2)
{
	int *ptr3,*ptr4,*ptr5,i,j,k,t=0,temp;
	ptr3=(int *)malloc((s1+s2)*sizeof(int));
	ptr4=ptr3;

	ptr4=ptr3;
	ptr5=ptr3;
	for(i=0;i<s1;i++)
	{
		*ptr3=*ptr1;
		ptr1++;
		ptr3++;

	}
	for(i=0;i<s2;i++)
	{
		*ptr3=*ptr2;
		ptr2++;
		ptr3++;
	}
	ptr3=ptr4;
	ptr4=sorting1(ptr4,s1+s2);
	for(i=0;i<s1+s2;i++)
		printf("%d ",*(ptr4+i));
	printf("\n");

/*	for(i=0;i<s1+s2-t;i++)
	{
       		ptr4=ptr5+i+1;
		for(j=i+1;j<s1+s2-t;j++)
		{
     // 		ptr4=ptr5;
			if(*ptr3==*ptr4)
			{
				t=t+1;
				for(k=j;k<10;k++)
				{
					temp=*ptr4;
					*ptr4=*(ptr4+1);
					*(ptr4+1)=temp;
				ptr4++;
				}
				ptr4=ptr5+j;

			}
			else
			ptr4++;

		}
		ptr3++;
	}*/

	ptr5=sort(ptr4,s1+s2);



return ptr5;
}

int * sort(int arr[S1+S2],int s)
{
	int i,j,k,temp,t=0;
	int *ptr=arr;
	for(i=0;i<s-t;i++)
	{
		for(j=i+1;j<s-t;j++)
		{
			if(arr[i]==arr[j])
			{
				t=t+1;
				printf("t=%d\t%d\n",t,arr[j]);
				for(k=j;k<s-1;k++)
				{
					temp=arr[k];
			//		printf("temp=%d\t",temp);
					arr[k]=arr[k+1];
			//		printf("arri=%d\t",arr[j]);
					arr[k+1]=temp;
			//		printf("arro=%d\t",arr[j+1]);
				}
			}
		}
	}
	ptr=(int *)realloc(ptr,S1+S2-t);
	for(i=0;i<s-t;i++)
	printf("%d ",arr[i]);


	return ptr;

}

