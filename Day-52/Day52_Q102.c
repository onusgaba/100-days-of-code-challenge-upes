/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 52 | Question 102
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  arr = [1, 2, 8, 10, 11, 12, 19], x = 5
 *     Output: 2
 *     Note:   Smallest number greater than 5 is 8, whose index is 2.
 *   Test Case 2:
 *     Input:  arr = [1, 2, 8, 10, 11, 12, 19], x = 20
 *     Output: -1
 *     Note:   No element greater than 20 is found. So output is -1.
 *   Test Case 3:
 *     Input:  arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
 *     Output: 0
 *     Note:   Smallest number greater than 0 is 1, whose indices are 0 and 1. The index of the first occurrence is 0.
 * ============================================================================
 */

#include <stdio.h>
int main() {
    int n, x; scanf("%d %d", &n, &x);
    int a[1000];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    int lo=0, hi=n-1, ans=-1;
    while(lo<=hi){ int mid=(lo+hi)/2; if(a[mid]<=x){ans=mid;lo=mid+1;} else hi=mid-1; }
    printf("%d\n", ans);
    return 0;
}
