/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 03 | Question 6
 * Category: User Inputs, Operations & Output
 * 
 * Problem Statement:
 * Write a program to swap two numbers using a third variable.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3 5'
 *     Output: 'After swap: 5 3'
 *   Test Case 2:
 *     Input:  '-1 1'
 *     Output: 'After swap: 1 -1'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int a, b, temp;
    if (scanf("%d %d", &a, &b) == 2) {
        temp = a;
        a = b;
        b = temp;
        printf("After swap: %d %d\n", a, b);
    }
    return 0;
}
