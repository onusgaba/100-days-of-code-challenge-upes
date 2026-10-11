/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 63 | Question 113
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
 *     Output: 5
 *     Note:   4th smallest element in the given array is 5.
 *   Test Case 2:
 *     Input:  arr[] = [7, 10, 4, 3, 20, 15], k = 3
 *     Output: 7
 *     Note:   3rd smallest element in the given array is 7.
 * ============================================================================
 */

#include <stdio.h>
int cmp(const void *a, const void *b){ return *(int*)b - *(int*)a; }
int main() {
    int n, k; scanf("%d %d", &n, &k);
    int a[1000]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a, n, sizeof(int), cmp);
    printf("%d\n", a[k-1]);
    return 0;
}
