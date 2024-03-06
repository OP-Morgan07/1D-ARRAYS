#include <stdio.h>
#include <stdbool.h>
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
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    int smax = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > smax && arr[i] < max)
            smax = arr[i];
    }
    printf("THE SECOND LARGEST ELEMENT IS %d", smax);
    return 0;
}