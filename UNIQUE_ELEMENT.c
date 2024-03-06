#include <stdio.h>
#include <stdbool.h>
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
    bool flag;
    bool flag1 = false;
    for (int i = 0; i <= n - 1; i++)
    {
        flag = false;
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d is the unique element\n", arr[i]);
            flag1 = true;
        }
    }
    if (flag1 == false)
        printf("NO ELEMENT IS UNIQUE");
    return 0;
}