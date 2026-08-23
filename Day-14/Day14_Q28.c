/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 14 | Question 28
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the product of even numbers from 1 to n.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '4'
 *     Output: '8 (2 * 4)'
 *   Test Case 2:
 *     Input:  '6'
 *     Output: '48 (2 * 4 * 6)'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long product = 1;
        int has_even = 0;
        char expr[256] = "";
        int offset = 0;
        for (int i = 2; i <= n; i += 2) {
            product *= i;
            if (!has_even) {
                offset += sprintf(expr + offset, "%d", i);
            } else {
                offset += sprintf(expr + offset, " * %d", i);
            }
            has_even = 1;
        }
        if (has_even) {
            printf("%lld (%s)\n", product, expr);
        } else {
            printf("0\n");
        }
    }
    return 0;
}
