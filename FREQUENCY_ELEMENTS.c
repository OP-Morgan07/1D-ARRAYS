#include <stdio.h>
void swap(int n, int x[n], int j)
{
    int temp = x[j];
    x[j] = x[n - 1];
    x[n - 1] = temp;
    return;
}

int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);
    int arr[n];
    int k;
    for (k = 0; k <= n - 1; k++)
    {
        scanf("%d", &arr[k]);
    }
    int i, j;
    for (i = 0; i <= n - 1; i++)
    {
        int count = 1;
        for (j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                swap(n, arr, j);
                n--;
                count++;
            }
        }
        printf("%d is occuring %d times\n", arr[i], count);
    }

    return 0;
}