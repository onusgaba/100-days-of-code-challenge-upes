/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 23 | Question 46
 * Category: Nested Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the following pattern:
*****
*****
*****
*****
*****
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  ''
 *     Output: '*****\n*****\n*****\n*****\n*****'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
