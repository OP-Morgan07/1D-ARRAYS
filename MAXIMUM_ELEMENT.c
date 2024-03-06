#include <stdio.h>
#include <limits.h> //TO get lowest or highest value in a datatype
int main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("ENTER THE %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // int a = INT_MIN; // Lowest number possible in INT
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     if (arr[i] > a)
    //         a = arr[i];
    // }
    // METHOD 2
    int a = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > a)
            a = arr[i];
    }
    printf("The maximum value among the elements is= %d", a);
    return 0;
}