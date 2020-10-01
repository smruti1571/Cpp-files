//Comparing four numbers to find the maximum among them
#include<stdio.h>
int main()
{
	int a,b,c,d,max1,max2;
	printf("Enter the numbers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	//comparing a & b
	max1=a>=b?a:b;
	//comparing c & d
	max2=c>=d?c:d;
	//comparing the max values between (a and b) & (c and d)
	max1>=max2?printf("Maximum=%d",max1):printf("Maximum:%d",max2);
    return 0;
}
