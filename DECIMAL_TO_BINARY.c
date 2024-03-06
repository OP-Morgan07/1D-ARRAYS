#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER YOU WANT TO CONVERT: ");
    scanf("%d", &n);
    int arr[8];
    for (int i = 7; i >= 0; i--)
    {
        if (n != 0)
        {
            arr[i] = n % 2;
            n = n / 2;
        }
        else
        {
            arr[i] = 0;
        }
    }

    for (int i = 0; i <= 8 - 1; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}