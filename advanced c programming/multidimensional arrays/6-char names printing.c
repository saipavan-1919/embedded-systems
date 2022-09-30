#include<stdio.h>
int main()
{
char arr[5][5];
for(int i=0;i<5;i++)
{
printf("enter name = ");
for(int j=0;j<5;j++)
{
scanf("%c",&arr[i][j]);
if(arr[i][j]==' ')
{
break;
}
}


printf("\n");
}
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
printf("%c",arr[i][j]);
}
printf("\n");
}
}
