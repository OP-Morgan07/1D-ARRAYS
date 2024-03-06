#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};  // When the size is mentioned directly we can use it in the loop
    int arr1[] = {6, 7, 8, 9, 10}; // When the size is not mentioned we can calculate it and store it in a variable to use in the loop
    int n = sizeof(arr1) / 4;

    for (int i = 0; i <= 5 - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr1[i]);
    }
    int a;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &a); // Taking size input
    int arr2[a];
    for (int i = 0; i <= a - 1; i++)
    { // Taking input of the elements from the user
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i <= a - 1; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}