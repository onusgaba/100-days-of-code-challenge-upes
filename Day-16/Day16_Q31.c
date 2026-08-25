/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 16 | Question 31
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to take a number as input and print its equivalent binary representation.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '10'
 *     Output: '1010'
 *   Test Case 2:
 *     Input:  '7'
 *     Output: '111'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n == 0) {
            printf("0\n");
            return 0;
        }
        char bin[65];
        int idx = 0;
        while (n > 0) {
            bin[idx++] = (n % 2) + '0';
            n /= 2;
        }
        for (int i = idx - 1; i >= 0; i--) {
            putchar(bin[i]);
        }
        putchar('\n');
    }
    return 0;
}
