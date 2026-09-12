/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 34 | Question 67
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Insert an element in an array at a given position.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '4\n10 20 30 40\n2 15'
 *     Output: '10 20 15 30 40'
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
        int pos, val;
        if (scanf("%d %d", &pos, &val) == 2) {
            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = val;
            n++;
            for (int i = 0; i < n; i++) {
                printf("%d%c", arr[i], (i == n - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
