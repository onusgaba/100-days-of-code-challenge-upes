/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 01 | Question 2
 * Category: User Inputs, Operations & Output
 * 
 * Problem Statement:
 * Write a program to input two numbers and display their sum, difference, product, and quotient.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '10 2'
 *     Output: 'Sum=12, Diff=8, Product=20, Quotient=5'
 *   Test Case 2:
 *     Input:  '7 3'
 *     Output: 'Sum=10, Diff=4, Product=21, Quotient=2'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
               a + b, a - b, a * b, (b != 0 ? a / b : 0));
    }
    return 0;
}
