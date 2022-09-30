#include<stdio.h>
int main()
{
	int i,n1,n,a,b,j;
	printf("enter the size of array=");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
		printf("enter num[%d] value = ",i);
		scanf("%d",&num[i]);
	}
	printf("enter the required number =");
	scanf("%d",&n1);
       for(j=0;j<n;j++)
      {
	  a=num[j]/n1;
          b=num[j]%n1;
          if((a==1)&&(b==0))
	    printf("the index of required num %d is %d\n",n1,j);  
      }
       return 0;
}
