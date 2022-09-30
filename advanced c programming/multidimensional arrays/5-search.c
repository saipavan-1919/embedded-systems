#include<stdio.h>
int main()
{
int arr[3][3]={1,2,3,4,5,6,7,8,9};
int item,temp=0;
printf("enter required number = ");
scanf("%d",&item);
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(item==arr[i][j])
{
printf("row = %d\ncolumn=%d\n",i,j);
temp=1;
break;

}

}
if(temp==1)
break;
}
if(temp!=1)
printf("required number not found\n");

}
