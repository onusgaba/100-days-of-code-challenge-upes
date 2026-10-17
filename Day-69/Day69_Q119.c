/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 69 | Question 119
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  nums1 = [1,3,3,4]
 *     Output: 3
 *   Test Case 2:
 *     Input:  nums1 = [1,2,2]
 *     Output: 2
 *   Test Case 3:
 *     Input:  nums1 = [0,4,1,1,5]
 *     Output: 1
 * ============================================================================
 */

#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int a[100001]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    /* Floyd's cycle detection */
    int slow=a[0], fast=a[0];
    do { slow=a[slow]; fast=a[a[fast]]; } while(slow!=fast);
    slow=a[0];
    while(slow!=fast){ slow=a[slow]; fast=a[fast]; }
    printf("%d\n", slow);
    return 0;
}
