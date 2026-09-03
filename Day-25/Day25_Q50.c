/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 25 | Question 50
 * Category: Nested Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  ''
 *     Output: '*****\n ****\n  ***\n   **\n    *'
 *   Test Case 2:
 *     Input:  ''
 *     Output: 'Note: Spaces indicate indentation.'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i; s++) {
            putchar(' ');
        }
        for (int j = 0; j < 5 - i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
