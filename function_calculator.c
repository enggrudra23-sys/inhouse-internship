#include<stdio.h>


float addition(float x, float y)
{
    return x + y;
}

float subtraction(float x, float y)
{
    return x - y;
}

float multiplication(float x, float y)
{
    return x * y;
}

float division(float x, float y)
{
    return x / y;
}

int main()
{
    float a, b, result;
    char op;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &b);

    if(op == '+')
        result = addition(a, b);
    else if(op == '-')
        result = subtraction(a, b);
    else if(op == '*')
        result = multiplication(a, b);
    else if(op == '/')
        result = division(a, b);

    else {
        printf("Invalid Operator");
        return 0;
    } 

    printf("Result: %f\n", result);  

    return 0;

}



