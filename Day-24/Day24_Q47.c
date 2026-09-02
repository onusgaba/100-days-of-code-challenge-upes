/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 24 | Question 47
 * Category: Nested Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the following pattern:
*
**
***
****
*****
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  ''
 *     Output: '*\n**\n***\n****\n*****'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
