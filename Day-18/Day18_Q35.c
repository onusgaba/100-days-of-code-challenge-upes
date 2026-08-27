/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 18 | Question 35
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print all factors of a given number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '6'
 *     Output: '1 2 3 6'
 *   Test Case 2:
 *     Input:  '10'
 *     Output: '1 2 5 10'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int first = 1;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if (!first) putchar(' ');
                printf("%d", i);
                first = 0;
            }
        }
        putchar('\n');
    }
    return 0;
}
