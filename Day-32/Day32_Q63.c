/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 32 | Question 63
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Merge two arrays.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3\n1 2 3\n2\n4 5'
 *     Output: '1 2 3 4 5'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n1, n2;
    int merged[2000];
    int k = 0;
    if (scanf("%d", &n1) == 1) {
        for (int i = 0; i < n1; i++) {
            scanf("%d", &merged[k++]);
        }
        if (scanf("%d", &n2) == 1) {
            for (int i = 0; i < n2; i++) {
                scanf("%d", &merged[k++]);
            }
            for (int i = 0; i < k; i++) {
                printf("%d%c", merged[i], (i == k - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
