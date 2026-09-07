/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 29 | Question 58
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Find the maximum and minimum element in an array.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '5\n2 9 1 4 7'
 *     Output: 'Max=9, Min=1'
 *   Test Case 2:
 *     Input:  '3\n10 10 10'
 *     Output: 'Max=10, Min=10'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int val;
        scanf("%d", &val);
        int max_val = val, min_val = val;
        for (int i = 1; i < n; i++) {
            scanf("%d", &val);
            if (val > max_val) max_val = val;
            if (val < min_val) min_val = val;
        }
        printf("Max=%d, Min=%d\n", max_val, min_val);
    }
    return 0;
}
