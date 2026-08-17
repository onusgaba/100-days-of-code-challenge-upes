/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 08 | Question 16
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to input three numbers and find the largest among them using if–else.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3 7 5'
 *     Output: 'Largest is 7'
 *   Test Case 2:
 *     Input:  '-1 -5 0'
 *     Output: 'Largest is 0'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        int largest = a;
        if (b > largest) largest = b;
        if (c > largest) largest = c;
        printf("Largest is %d\n", largest);
    }
    return 0;
}
