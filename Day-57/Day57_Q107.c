/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 57 | Question 107
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  arr = [1, 3, 2, 4]
 *     Output: -1, -1, 3, -1
 *   Test Case 2:
 *     Input:  arr = [6, 8, 0, 1, 3]
 *     Output: -1, -1, 8, 8, 8
 *   Test Case 3:
 *     Input:  arr = [1, 2, 3, 5]
 *     Output: -1, -1, -1, -1
 * ============================================================================
 */

#include <stdio.h>
#define MAXN 1000
int stack[MAXN], top;
int main() {
    int n; scanf("%d", &n);
    int a[MAXN], res[MAXN]; top=-1;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        while(top>=0 && stack[top]<=a[i]) top--;
        res[i] = (top<0) ? -1 : stack[top];
        stack[++top]=a[i];
    }
    for(int i=0;i<n;i++) printf("%d%s", res[i], i<n-1?", ":"\n");
    return 0;
}
