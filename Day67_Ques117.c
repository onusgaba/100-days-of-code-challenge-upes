//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main()
{
    int m, n, i, j, k;

    printf("Enter the size of first array: ");
    scanf("%d", &m);

    printf("Enter the size of second array: ");
    scanf("%d", &n);

    int a[m], b[n], c[m + n];

    printf("Enter elements of first sorted array: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second sorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    while (i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}

