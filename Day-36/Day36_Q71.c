/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 36 | Question 71
 * Category: 2D Arrays
 * 
 * Problem Statement:
 * Read and print a matrix.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '2 2\n1 2\n3 4'
 *     Output: '1 2\n3 4'
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
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                printf("%d%c", mat[i][j], (j == c - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
