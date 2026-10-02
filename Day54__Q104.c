#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int index = -1;

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
            index = i;
            break;
        }
    }

    printf("Ceil index = %d\n", index);

    return 0;
}