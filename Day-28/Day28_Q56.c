/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 28 | Question 56
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Read and print elements of a one-dimensional array.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3\n10 20 30'
 *     Output: '10 20 30'
 *   Test Case 2:
 *     Input:  '5\n1 2 3 4 5'
 *     Output: '1 2 3 4 5'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++) {
            printf("%d%c", arr[i], (i == n - 1 ? '\n' : ' '));
        }
    }
    return 0;
}
