#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    int i = si;
    int j = ei;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY: ");
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
    printf("\n");
    int x;
    printf("ENTER THE NUMBER OF ROTATION: ");
    scanf("%d", &x);
    if (x > n)
        x = x % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, x - 1);
    reverse(arr, x, n - 1);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}