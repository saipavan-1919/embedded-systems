#include<stdio.h>
int main()
{
	int marks;
	float percent;
	printf("enter marks of the student for 600=");
	scanf("%d",&marks);
	percent=((float)marks/600.00)*100;
	printf("percentage= %.2f\n",percent);
	if(percent>79)
		printf("Grade of student = Honours");
	else if(percent>59)
	        printf("Grade of student = First division");
	else if(percent>49)
		printf("Grade of student = Second division");
	else if(percent>39)
			printf("Grade of student = Third division");
	else
	        printf("Grade of student = Fail");
}
