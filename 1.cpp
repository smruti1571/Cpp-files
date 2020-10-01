//Enter marks to see if failed or passed
#include<stdio.h>
int main()
{
	float marks,totalmarks;
	
	printf("Enter the marks of student: ");
	scanf("%f",&marks);
	printf("Enter the total marks: ");
	scanf("%f",&totalmarks);
	
	float a = (totalmarks*33)/100;
	(marks>=a)? printf("RESULT: Passed") :printf("RESULT: Failed");
	return 0;
}

