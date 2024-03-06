#include <stdio.h>
#include <stdbool.h>
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
    bool flag = true;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if (flag == true)
        printf("THE ARRAY IS A PALINDROME");
    else
        printf("THE ARRAY IS NOT A PALINDROME");
    return 0;
}
