/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 04 | Question 8
 * Category: User Inputs, Operations & Output
 * 
 * Problem Statement:
 * Write a program to find and display the sum of the first n natural numbers.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '5'
 *     Output: 'Sum=15'
 *   Test Case 2:
 *     Input:  '10'
 *     Output: 'Sum=55'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long sum = (n * (n + 1)) / 2;
        printf("Sum=%lld\n", sum);
    }
    return 0;
}
