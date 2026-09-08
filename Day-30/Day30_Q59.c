/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 30 | Question 59
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Count even and odd numbers in an array.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '6\n1 2 3 4 5 6'
 *     Output: 'Even=3, Odd=3'
 *   Test Case 2:
 *     Input:  '4\n2 4 6 8'
 *     Output: 'Even=4, Odd=0'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (val % 2 == 0) even++;
            else odd++;
        }
        printf("Even=%d, Odd=%d\n", even, odd);
    }
    return 0;
}
