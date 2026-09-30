#include<stdio.h>

int main()
{
    int arr[100], n, x;
    int ceilIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ceilIndex = i;
            break;
        }
    }

    printf("%d\n", ceilIndex);

    return 0;
}