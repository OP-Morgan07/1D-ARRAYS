#include <stdio.h>
int main()
{
    int n;
    printf("ENTER n: ");
    scanf("%d", &n);
    int arr[n], a = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        arr[i] = a * a;
        a++;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}