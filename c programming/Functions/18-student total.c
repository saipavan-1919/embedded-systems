#include<stdio.h>
int main()
{
	int r,s1,s2,s3,n,j=0,T=0,R=0,total;
	printf("enter no .of students n=");
	scanf("%d",&n);
	for(int i=1;i<=n; )
	{
		printf("enter the roll number r=");
		scanf("%d",&r);
		if((r<1000)||(r>9999))
			continue;
		printf("enter the marks for 3 subjects s1,s2,s3=");
		scanf("%d%d%d",&s1,&s2,&s3);
		if(s1>40&&s2>40&&s3>40)
		{
			total=s1+s2+s3;
	        	if(total>=200)
	        	{
		        	j=j+1;
	        	}
			if(total>T)
			{
				T=total;
				R=r;
			}
		}
		i=i+1;
	}
        printf("no.of students total more than 200=%d\n highest total roll no=%d\n highest total =%d\n",j,R,T);
	return 0;
}
