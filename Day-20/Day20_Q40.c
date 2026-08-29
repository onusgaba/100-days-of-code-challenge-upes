/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 20 | Question 40
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to find the 1’s complement of a binary number and print it.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '1010'
 *     Output: '0101'
 *   Test Case 2:
 *     Input:  '1111'
 *     Output: '0000'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    char s[100];
    if (scanf("%s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '0') {
                putchar('1');
            } else if (s[i] == '1') {
                putchar('0');
            }
        }
        putchar('\n');
    }
    return 0;
}
