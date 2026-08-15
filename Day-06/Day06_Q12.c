/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 06 | Question 12
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '-5'
 *     Output: 'Negative'
 *   Test Case 2:
 *     Input:  '0'
 *     Output: 'Zero'
 *   Test Case 3:
 *     Input:  '10'
 *     Output: 'Positive'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n > 0) {
            printf("Positive\n");
        } else if (n < 0) {
            printf("Negative\n");
        } else {
            printf("Zero\n");
        }
    }
    return 0;
}
