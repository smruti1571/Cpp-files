#include<stdio.h>
int main()
{
	int a,b,c,d,min1,min2;
	printf("Enter the numbers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	min1=a<=b?a:b;
	min2=c<=d?c:d;
	min1<=min2?printf("Minimum:%d",min1):printf("Minimum:%d",min2);
    return 0;
}
