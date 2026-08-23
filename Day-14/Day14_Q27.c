/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 14 | Question 27
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the sum of the first n odd numbers.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3'
 *     Output: '9'
 *   Test Case 2:
 *     Input:  '5'
 *     Output: '25'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += (2 * i - 1);
        }
        printf("%lld\n", sum);
    }
    return 0;
}
