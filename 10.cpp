//Q10. WAP to find the 2's compliment of a number.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number:");
	scanf("%d",&a);
	a=~a;
	a=a+1;
	printf("The 2's complement of the input number:-");
	for(b=7;b>=0;b--)
	{
		c=a&(1<<b);
		if(c==0)
		printf("0");
		else
		printf("1");
		
	}
	return 0;
}
