/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 36 | Question 72
 * Category: 2D Arrays
 * 
 * Problem Statement:
 * Find the sum of all elements in a matrix.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '2 3\n1 2 3\n4 5 6'
 *     Output: '21'
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
                sum += val;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
