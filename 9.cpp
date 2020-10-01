#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	int b=a<<2;
	printf("Result after multiplying with 4 = %d\n",b);
	int c=a>>2;
	printf("Result after dividing by 4 = %d\n",c);
	return 0;
}
