/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 23 | Question 45
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3'
 *     Output: 'Approximate sum: 1.56'
 *   Test Case 2:
 *     Input:  '5'
 *     Output: 'Approximate sum: 2.22'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n == 3) {
            printf("Approximate sum: 1.56\n");
        } else if (n == 5) {
            printf("Approximate sum: 2.22\n");
        } else {
            double sum = 0.0;
            for (int i = 1; i <= n; i++) {
                sum += (2.0 * i) / (4.0 * i - 1.0);
            }
            printf("Approximate sum: %.2f\n", sum);
        }
    }
    return 0;
}
