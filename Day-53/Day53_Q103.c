/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 53 | Question 103
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  nums = [1,7,3,6,5,6]
 *     Output: 3
 *     Note:   The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.
 *   Test Case 2:
 *     Input:  nums = [1,2,3]
 *     Output: -1
 *     Note:   There is no index that satisfies the conditions in the problem statement.
 *   Test Case 3:
 *     Input:  nums = [2,1,-1]
 *     Output: 0
 *     Note:   The pivot index is 0. Left sum = 0 (no elements to the left), Right sum = 1 + (-1) = 0.
 * ============================================================================
 */

#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int a[1000]; long long total=0;
    for(int i=0;i<n;i++){scanf("%d",&a[i]); total+=a[i];}
    long long left=0;
    for(int i=0;i<n;i++){
        if(left == total-left-a[i]){printf("%d\n",i);return 0;}
        left+=a[i];
    }
    printf("-1\n"); return 0;
}
