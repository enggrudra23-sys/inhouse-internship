#include<stdio.h>
int main() 
{
    int a;
    int b;
    int c;

    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    printf("enter the third number:");
    scanf("%d", &c);
    if (a>b && a>c)
    { 
        printf("the maximum number is %d",a);
    }
    if (b>a && b>c)
    {
        printf("the maximum number is %d",b);
    }
    if (c>b && c>a)
    {
        printf("the maximum number is %d",c); 
    }
    if (a = b = c)
    {
        printf("all numbers are equal");
    }

    return 0;
}