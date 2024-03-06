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
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    int brr[n], j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        brr[j] = arr[i];
        j++;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}