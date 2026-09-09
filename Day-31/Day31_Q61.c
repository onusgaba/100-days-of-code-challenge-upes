/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 31 | Question 61
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Search for an element in an array using linear search.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '5\n1 2 3 4 5\n3'
 *     Output: 'Found at index 2'
 *   Test Case 2:
 *     Input:  '4\n10 20 30 40\n25'
 *     Output: '-1'
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
        int target;
        if (scanf("%d", &target) == 1) {
            int found_index = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] == target) {
                    found_index = i;
                    break;
                }
            }
            if (found_index != -1) {
                printf("Found at index %d\n", found_index);
            } else {
                printf("-1\n");
            }
        }
    }
    return 0;
}
