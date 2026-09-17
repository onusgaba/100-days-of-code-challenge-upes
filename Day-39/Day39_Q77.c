/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 39 | Question 77
 * Category: 2D Arrays
 * 
 * Problem Statement:
 * Check if the elements on the diagonal of a matrix are distinct.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3 3\n1 2 3\n4 5 6\n7 8 1'
 *     Output: 'False'
 *   Test Case 2:
 *     Input:  '3 3\n1 2 3\n4 5 6\n7 8 9'
 *     Output: 'True'
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
        int min_dim = (r < c) ? r : c;
        int distinct = 1;
        for (int i = 0; i < min_dim; i++) {
            for (int j = i + 1; j < min_dim; j++) {
                if (mat[i][i] == mat[j][j]) {
                    distinct = 0;
                    break;
                }
            }
            if (!distinct) break;
        }
        if (distinct) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}
