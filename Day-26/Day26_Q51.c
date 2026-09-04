/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 26 | Question 51
 * Category: Nested Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the following pattern:
    5
   45
  345
 2345
12345
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  ''
 *     Output: '    5\n   45\n  345\n 2345\n12345'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int s = 1; s < i; s++) {
            putchar(' ');
        }
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        putchar('\n');
    }
    return 0;
}
