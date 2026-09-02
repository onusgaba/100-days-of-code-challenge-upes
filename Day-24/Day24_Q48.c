/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 24 | Question 48
 * Category: Nested Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the following pattern:
1
12
123
1234
12345
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  ''
 *     Output: '1\n12\n123\n1234\n12345'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        putchar('\n');
    }
    return 0;
}
