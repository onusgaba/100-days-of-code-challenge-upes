/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 17 | Question 34
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to check if a number is prime.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '7'
 *     Output: 'Prime'
 *   Test Case 2:
 *     Input:  '10'
 *     Output: 'Not prime'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n <= 1) {
            printf("Not prime\n");
            return 0;
        }
        int is_prime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }
    return 0;
}
