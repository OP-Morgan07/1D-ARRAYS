#include <stdio.h>
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
    int x, sum, count = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &x);
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        { // This is from i+1 because we are counting 1,3 and 3,1 as same.
            sum = arr[i] + arr[j];
            if (sum == x)
                count++;
        }
    }
    printf("THE NUMBER OF PAIRS ARE %d", count); // Distinct pairs, 1,1 isnt allowed
    return 0;
}