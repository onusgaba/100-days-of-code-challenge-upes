/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 19 | Question 38
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to find the sum of digits of a number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '123'
 *     Output: '6'
 *   Test Case 2:
 *     Input:  '999'
 *     Output: '27'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;
        long long sum = 0;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
