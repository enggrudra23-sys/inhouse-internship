#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float average = (float)sum / n;
    printf("Average: %.2f\n", average);
    
    return 0;
}