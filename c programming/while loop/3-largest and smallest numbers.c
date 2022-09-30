#include<stdio.h>
int main()
{
	int a,b,c,i=2,n,j=2,d,e,f;
	printf("enter no. of inputs =");
      scanf("%d",&n);
       printf("enter a and b values =");
       scanf("%d%d",&a,&b);
       e=a;
       f=b;
       while(i<n)
       {
	       printf("enter new input =");
	       scanf("%d",&c);
	       if(a>b)
	       {
		       b=c;
	       }
	       else
	       {
		       a=c;
	       }
	       if(e<f)
	       {
		       f=c;
	       }
	       else
	       {
		       e=c;
	       }
	       i=i+1;
       }
     //  printf("a=%d\nb=%d",e,f);
       if(e<f)
	       printf("%d is smallest number\n",e);
       else
               printf("%d is smallest number\n",f);
       if(a>b)
	       printf("%d is largest number\n",a);
       else
       
	       printf("%d is largest number\n",b);
}

