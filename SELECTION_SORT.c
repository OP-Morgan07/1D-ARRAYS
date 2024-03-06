#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    // SELECTION SORT
    int minIndex;
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}