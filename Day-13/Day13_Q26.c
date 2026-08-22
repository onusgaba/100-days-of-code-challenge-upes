/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 13 | Question 26
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print numbers from 1 to n.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '5'
 *     Output: '1 2 3 4 5'
 *   Test Case 2:
 *     Input:  '3'
 *     Output: '1 2 3'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            printf("%d%c", i, (i == n ? '\n' : ' '));
        }
    }
    return 0;
}
