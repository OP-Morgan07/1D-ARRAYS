#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    int i = si;
    int j = ei;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
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
    int si;
    printf("ENTER THE STARTING INDEX: ");
    scanf("%d", &si);
    int ei;
    printf("ENTER THE ENDING INDEX: ");
    scanf("%d", &ei);
    reverse(arr, si, ei); // Passing the array and starting index and ending indexes of the elements which we want to reverse int the array
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
