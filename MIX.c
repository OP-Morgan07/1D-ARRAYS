#include <stdio.h>
int main()
{
    int n;
    printf("ENTER n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("ENTER THE %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        if (i % 2 == 0)
            arr[i] += 10;
        else
            arr[i] *= 2;
    }
    printf("\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}