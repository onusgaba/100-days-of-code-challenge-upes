/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 40 | Question 79
 * Category: 2D Arrays
 * 
 * Problem Statement:
 * Perform diagonal traversal of a matrix.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3 3\n1 2 3\n4 5 6\n7 8 9'
 *     Output: '1 2 4 7 5 3 6 8 9'
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
        int first = 1;
        for (int s = 0; s <= r + c - 2; s++) {
            if (s % 2 == 0) {
                // Upward-right
                int r_start = (s < r) ? s : r - 1;
                int r_end = (s - c + 1 > 0) ? s - c + 1 : 0;
                for (int i = r_start; i >= r_end; i--) {
                    int j = s - i;
                    if (!first) putchar(' ');
                    printf("%d", mat[i][j]);
                    first = 0;
                }
            } else {
                // Downward-left
                int r_start = (s - c + 1 > 0) ? s - c + 1 : 0;
                int r_end = (s < r) ? s : r - 1;
                for (int i = r_start; i <= r_end; i++) {
                    int j = s - i;
                    if (!first) putchar(' ');
                    printf("%d", mat[i][j]);
                    first = 0;
                }
            }
        }
        putchar('\n');
    }
    return 0;
}
