#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];
    }
    printf("THE SUM OF ALL THE ELEMENTS IN THE ARRAY IS %d", sum);
    return 0;
}