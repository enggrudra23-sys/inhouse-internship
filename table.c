#include <stdio.h>

int main()
{
    int a;
    int arr[10];

    printf("Table writer\n");
    printf("Enter your number: ");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++)
    {
        arr[i] = a * (i);
        printf("%d x %d = %d\n", a, i, arr[i]);
    }

    return 0;
}   