/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 29 | Question 57
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Find the sum of array elements.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '4\n2 4 6 8'
 *     Output: '20'
 *   Test Case 2:
 *     Input:  '3\n1 1 1'
 *     Output: '3'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
