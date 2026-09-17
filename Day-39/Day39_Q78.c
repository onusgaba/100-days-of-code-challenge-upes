/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 39 | Question 78
 * Category: 2D Arrays
 * 
 * Problem Statement:
 * Find the sum of main diagonal elements for a square matrix.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3 3\n1 2 3\n4 5 6\n7 8 9'
 *     Output: '15'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        long long sum = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                if (i == j) {
                    sum += val;
                }
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
