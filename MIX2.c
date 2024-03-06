#include <stdio.h>
int main()
{
    int n;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sumE = 0, sumO = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (i % 2 == 0)
            sumE += arr[i];
        else
            sumO += arr[i];
    }
    int diff = sumE - sumO;
    printf("THE DIFFERENCE BETWEEN THE SUM OF ELEMENTS AT EVEN INDICES AND AT ODD INDICES IS: %d", diff);
    return 0;
}