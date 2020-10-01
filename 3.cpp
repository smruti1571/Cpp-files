#include<stdio.h>
int main()
{
	int a,b,c,d,max1,max2;
	printf("Enter the numbers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	max1=a>=b?a:b;
	max2=c>=d?c:d;
	max1>=max2?printf("Maximum=%d",max1):printf("Maximum:%d",max2);
    return 0;
}
