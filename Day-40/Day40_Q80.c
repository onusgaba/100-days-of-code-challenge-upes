/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 40 | Question 80
 * Category: 2D Arrays
 * 
 * Problem Statement:
 * Multiply two matrices.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '2 3\n1 2 3\n4 5 6\n3 2\n7 8\n9 10\n11 12'
 *     Output: '58 64\n139 154'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int r1, c1;
    if (scanf("%d %d", &r1, &c1) == 2) {
        int a[100][100];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        int r2, c2;
        if (scanf("%d %d", &r2, &c2) == 2) {
            int b[100][100];
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    scanf("%d", &b[i][j]);
                }
            }
            if (c1 == r2) {
                int res[100][100] = {0};
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c2; j++) {
                        for (int k = 0; k < c1; k++) {
                            res[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c2; j++) {
                        printf("%d%c", res[i][j], (j == c2 - 1 ? '\n' : ' '));
                    }
                }
            }
        }
    }
    return 0;
}
