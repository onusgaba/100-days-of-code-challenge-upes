/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 15 | Question 30
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to reverse a given number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '1234'
 *     Output: '4321'
 *   Test Case 2:
 *     Input:  '100'
 *     Output: '1'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int reversed = 0;
        int sign = (n < 0) ? -1 : 1;
        n = (n < 0) ? -n : n;
        while (n > 0) {
            reversed = reversed * 10 + (n % 10);
            n /= 10;
        }
        printf("%d\n", reversed * sign);
    }
    return 0;
}
