/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 35 | Question 70
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Rotate an array to the right by k positions.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '5\n1 2 3 4 5\n2'
 *     Output: '4 5 1 2 3'
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
        int k;
        if (scanf("%d", &k) == 1) {
            k = (n > 0) ? (k % n) : 0;
            int rotated[1000];
            for (int i = 0; i < n; i++) {
                rotated[(i + k) % n] = arr[i];
            }
            for (int i = 0; i < n; i++) {
                printf("%d%c", rotated[i], (i == n - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
