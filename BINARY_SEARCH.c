#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
void sort(int n, int arr[n]);
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;
    printf("ENTER THE NUMBER TO BE FOUND: ");
    scanf("%d", &a);

    // SORTING THE ARRAY BY SELECTION SORT
    sort(n, arr);

    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    bool flag = false;
    while (low <= high)
    {
        if (arr[mid] > a)
        {
            mid--;
            high = mid;
        }
        else if (arr[mid] == a)
        {
            flag = true;
            printf("THE NUMBER HAS BEEN FOUND IN THE ARRAY");
            break;
        }
        else
        {
            mid++;
            low = mid;
        }
        mid = (low + high) / 2;
    }
    if (flag == false)
        printf("THE NUMBER IS NOT PRESENT IN THE ARRAY");
}
void sort(int n, int arr[n])
{
    int minIndex;
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}