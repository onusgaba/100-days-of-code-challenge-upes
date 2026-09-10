/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 32 | Question 64
 * Category: Arrays (1D)
 * 
 * Problem Statement:
 * Find the digit that occurs the most times in an integer number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '112233'
 *     Output: '1'
 *   Test Case 2:
 *     Input:  '887799'
 *     Output: '7'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    if (scanf("%s", s) == 1) {
        int freq[10] = {0};
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                freq[s[i] - '0']++;
            }
        }
        int max_freq = -1;
        int best_digit = -1;
        for (int d = 0; d <= 9; d++) {
            if (freq[d] > max_freq) {
                max_freq = freq[d];
                best_digit = d;
            }
        }
        printf("%d\n", best_digit);
    }
    return 0;
}
