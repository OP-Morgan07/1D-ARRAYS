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
    int a;
    bool flag = false;
    printf("ENTER THE NUMBER YOU WANT TO SEARCH: ");
    scanf("%d", &a);
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == a)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        printf("%d exists in the array", a);
    else
        printf("Does not exist");
    return 0;
}
