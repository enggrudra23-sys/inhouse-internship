#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum number = %d\n", min);

    return 0;
}