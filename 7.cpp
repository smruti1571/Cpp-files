#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	a=a&(~(1 << 6));
	printf("Result:%d",a);
	return 0;
}
