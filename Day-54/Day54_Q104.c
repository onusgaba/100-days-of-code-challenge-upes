/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 54 | Question 104
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  n = 8
 *     Output: 6
 *     Note:   6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
 *   Test Case 2:
 *     Input:  n = 1
 *     Output: 1
 *     Note:   1 is the pivot integer since: 1 = 1.
 *   Test Case 3:
 *     Input:  n = 4
 *     Output: -1
 *     Note:   It can be proved that no such integer exists.
 * ============================================================================
 */

#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    if(n<=0){printf("0\n");return 0;}
    long long a=0,b=1,c;
    if(n==1){printf("1\n");return 0;}
    for(int i=2;i<n;i++){c=a+b;a=b;b=c;}
    printf("%lld\n", a+b);
    return 0;
}
