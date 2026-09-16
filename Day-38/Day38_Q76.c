/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 38 | Question 76
 * Category: 2D Arrays
 * 
 * Problem Statement:
 * Check if a matrix is symmetric.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '2 2\n1 2\n2 1'
 *     Output: 'True'
 *   Test Case 2:
 *     Input:  '2 2\n1 0\n2 1'
 *     Output: 'False'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int mat[100][100];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        if (r != c) {
            printf("False\n");
            return 0;
        }
        int symmetric = 1;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (mat[i][j] != mat[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
            if (!symmetric) break;
        }
        if (symmetric) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}
