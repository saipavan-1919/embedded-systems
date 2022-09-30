#include<stdio.h>
int simpleinterest(int p,int r, int n)
{
	int temp;
	temp=(p*r*n)/1200;
	return temp;

}
int main()
{
	int p,r,n,si,total;
	printf("enter principle amount\n rate of onterest \n no.of months");
	scanf("%d%d%d",&p,&r,&n);
	si=simpleinterest(p,r,n);
	printf("simple interest=%d",si);
        total=si+p;
	printf("total amount payable =%d",total);
	return 0;
}
