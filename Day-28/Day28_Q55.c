/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 28 | Question 55
 * Category: Nested Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print all the prime numbers from 1 to n.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '10'
 *     Output: '2 3 5 7'
 *   Test Case 2:
 *     Input:  '20'
 *     Output: '2 3 5 7 11 13 17 19'
 * ============================================================================
 */

#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int first = 1;
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                if (!first) putchar(' ');
                printf("%d", i);
                first = 0;
            }
        }
        putchar('\n');
    }
    return 0;
}
