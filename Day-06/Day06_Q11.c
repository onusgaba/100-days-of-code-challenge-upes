/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 06 | Question 11
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to input an integer and check whether it is even or odd using if–else.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '7'
 *     Output: '7 is odd'
 *   Test Case 2:
 *     Input:  '12'
 *     Output: '12 is even'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n % 2 == 0) {
            printf("%d is even\n", n);
        } else {
            printf("%d is odd\n", n);
        }
    }
    return 0;
}
