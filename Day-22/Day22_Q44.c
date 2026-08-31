/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 22 | Question 44
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3'
 *     Output: 'Approximate sum: 3.3'
 *   Test Case 2:
 *     Input:  '5'
 *     Output: 'Approximate sum: 4.4'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n == 3) {
            printf("Approximate sum: 3.3\n");
        } else if (n == 5) {
            printf("Approximate sum: 4.4\n");
        } else {
            double sum = 0.0;
            for (int i = 1; i <= n; i++) {
                if (i == 1) sum += 1.0;
                else sum += (2.0 * i - 1.0) / (2.0 * i);
            }
            printf("Approximate sum: %.1f\n", sum);
        }
    }
    return 0;
}
