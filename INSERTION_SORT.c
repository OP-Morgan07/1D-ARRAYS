#include <stdio.h>
void swap(int arr[], int j);
int main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // INSERITON SORT ALGORITHM , This also works on unsorted and sorted array parts.
    // Here first element is already considered to be sorted, so sorted already starts with one element.
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 1 && arr[j - 1] > arr[j])
        {
            swap(arr, j);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
void swap(int arr[], int j)
{
    int temp = arr[j];
    arr[j] = arr[j - 1];
    arr[j - 1] = temp;
}