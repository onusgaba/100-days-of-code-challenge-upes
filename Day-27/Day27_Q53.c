/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 27 | Question 53
 * Category: Nested Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  ''
 *     Output: '*\n***\n*****\n*******\n*********\n*******\n*****\n***\n*'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int stars[] = {1, 3, 5, 7, 9, 7, 5, 3, 1};
    int n = sizeof(stars) / sizeof(stars[0]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < stars[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
