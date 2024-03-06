#include <stdio.h>
#include <stdbool.h>
void function(int arr[], int n);
int main()
{
    int arr[50];
    int n;
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d", &n);
    // MKAE SURE THE ARRAY TAKEN AS INPUT IS SORTED ARRAY

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    function(arr, n);

    return 0;
}
void function(int arr[], int n)
{
    int a;
    printf("ENTER THE NUMBER TO BE FOUND : ");
    scanf("%d", &a);

    bool flag = false;
    int i = 0;
    int j = n - 1;
    int mid = (i + j) / 2;

    while (i <= j)
    {

        if (arr[mid] > a)
        {
            mid--;
            j = mid;
        }
        else if (arr[mid] == a)
        {
            flag = true;
            break;
        }
        else
        {
            mid++;
            i = mid;
        }
        mid = (i + j) / 2;
    }

    if (flag == true)
        printf("THE NUMBER IS FOUND IN THE ARRAY");
    else
    {
        int count = 0;
        for (int i = 0; i <= n; i++)
        {
            if (arr[i] < a)
                count++;
        }

        for (int i = n - 1; i >= count; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[count] = a;
        for (int i = n; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}
