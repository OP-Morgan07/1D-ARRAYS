// This will be using one arrray. Not copying into an another array.
#include <stdio.h>
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
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    int i = 0;
    int j = n - 1;
    // while (i < j) // Works for both even and odd. Can also be done by for loop
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    for (int i = 0, j = n - 1; i < j; i++, j--) // By for loop
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}