#include <stdio.h>
#include <stdbool.h>
void swap(int j, int n, int arr[]);
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

    // BUBBLE SORTING
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(j, n, arr);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void swap(int j, int n, int arr[])
{
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
}