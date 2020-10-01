#include<stdio.h>
int main()
{
    int num,num1;
    printf("Enter any number: ");
    scanf("%d", &num);
    num1 = (1 << 3)|num;
    printf("Result:%d",num1);
    return 0;
}
