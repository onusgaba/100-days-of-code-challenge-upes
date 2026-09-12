/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 34 | Question 68
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Delete an element from an array.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '5\n1 2 3 4 5\n2'
 *     Output: '1 2 4 5'
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
        int pos;
        if (scanf("%d", &pos) == 1) {
            if (pos >= 0 && pos < n) {
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
            for (int i = 0; i < n; i++) {
                printf("%d%c", arr[i], (i == n - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
