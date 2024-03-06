#include <stdio.h>
void change(int x[5]) // This works because in arrays when passing the values to the function it does pass by reference.
{
    x[3] = 99;
    printf("\n");
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    change(arr);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
