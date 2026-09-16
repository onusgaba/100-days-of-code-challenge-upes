/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 38 | Question 75
 * Category: 2D Arrays
 * 
 * Problem Statement:
 * Add two matrices.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '2 2\n1 2\n3 4\n2 2\n5 6\n7 8'
 *     Output: '6 8\n10 12'
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
            if (r1 == r2 && c1 == c2) {
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        printf("%d%c", a[i][j] + b[i][j], (j == c1 - 1 ? '\n' : ' '));
                    }
                }
            }
        }
    }
    return 0;
}
