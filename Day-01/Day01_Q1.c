/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 01 | Question 1
 * Category: User Inputs, Operations & Output
 * 
 * Problem Statement:
 * Write a program to input two numbers and display their sum.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3 4'
 *     Output: 'Sum = 7'
 *   Test Case 2:
 *     Input:  '-1 20'
 *     Output: 'Sum = 19'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("Sum = %d\n", a + b);
    }
    return 0;
}
