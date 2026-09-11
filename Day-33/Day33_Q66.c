/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 33 | Question 66
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Insert an element in a sorted array at the appropriate position.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '5\n1 2 4 5 6\n3'
 *     Output: '1 2 3 4 5 6'
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
        int val;
        if (scanf("%d", &val) == 1) {
            int pos = n;
            for (int i = 0; i < n; i++) {
                if (val < arr[i]) {
                    pos = i;
                    break;
                }
            }
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
