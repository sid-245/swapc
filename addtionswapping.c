#include<stdio.h>
int main()
{
    int a,b;
    printf("\nenter the num1=");
    scanf("%d",&a);
    printf("\nenter the num2=");
    scanf("%d",&b);
    a=a+b;
    printf("add=%d",a);
    b=a-b;
    a=a-b;
    printf("b=%d",b);
    printf("a=%d",a);
    return 0;
}