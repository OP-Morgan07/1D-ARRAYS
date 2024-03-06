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
    int a, count = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &a);

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > a)
            count++;
    }
    printf("The number of elements grreater than %d are %d", a, count);
    return 0;
}