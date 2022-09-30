#include<stdio.h>
int main()
{
int arr1[3][3]={1,2,3,4,5,6,7,8,9};
int arr2[3][3]={1,2,3,4,5,6,7,8,9};
for(int i=0,k=0;i<3,k<3;i++,k++)
{
for(int j=0,l=0;j<3,l<3;j++,l++)
{
printf("%d ",(arr1[i][j])*(arr2[k][l]));
}
printf("\n");
}
}
