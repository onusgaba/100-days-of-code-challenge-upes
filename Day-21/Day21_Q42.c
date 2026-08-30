/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 21 | Question 42
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to check if a number is a perfect number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '6'
 *     Output: 'Perfect number'
 *   Test Case 2:
 *     Input:  '10'
 *     Output: 'Not perfect number'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n <= 1) {
            printf("Not perfect number\n");
            return 0;
        }
        long long sum = 1;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i * i != n) {
                    sum += (n / i);
                }
            }
        }
        if (sum == n) {
            printf("Perfect number\n");
        } else {
            printf("Not perfect number\n");
        }
    }
    return 0;
}
