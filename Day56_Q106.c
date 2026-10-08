#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

  
    for (int i = 0; i < n; i++)
    {
        result[i] = -1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                result[i] = arr[j];
                break;
            }
        }
    }

    printf("Next greater elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}