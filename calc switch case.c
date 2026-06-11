#include<stdio.h>

main()
{
  float a, b, result;
    char op;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &b);   

    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid Operator");
            return 0;
    }

    printf("%.2f", result);

} 