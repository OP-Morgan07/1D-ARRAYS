#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);

    int arr1[n];
    printf("ENTER THE ELEMENTS OF FIRST ARRAY: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int arr2[n];
    printf("ENTER THE ELEMENTS OF SECOND ARRAY: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int X = n + n;
    int arr3[X];
    int a = 0, b = 0,x;

    for (int i = 0; i < X; i++)
    {
        x = i;
        if (i > 5)
        {
            x = x % 6;
        }
        if(x<=5)
        {

            if (x == 0)
            {

                arr3[i] = arr1[a];
                a++;
            }
            if (x == 1 || x == 2)
            {

                arr3[i] = arr2[b];
                b++;
            }
            if (x == 3 || x == 4)
            {

                arr3[i] = arr1[a];
                a++;
            }
            if (x == 5)
            {

                arr3[i] = arr2[b];
                b++;
            }
        }
    }
    for (int i = 0; i < X; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}