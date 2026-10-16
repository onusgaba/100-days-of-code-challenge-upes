/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 68 | Question 118
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  nums1 = [0,3,2,4]
 *     Output: 1
 *   Test Case 2:
 *     Input:  nums1 = [1,2,3]
 *     Output: 0
 *   Test Case 3:
 *     Input:  nums1 = [0,4,3,1,5]
 *     Output: 2
 * ============================================================================
 */

#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    long long exp_sum = (long long)n*(n+1)/2, actual=0;
    for(int i=0;i<n;i++){ int x; scanf("%d",&x); actual+=x; }
    printf("%lld\n", exp_sum-actual);
    return 0;
}
