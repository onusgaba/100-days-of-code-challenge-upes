/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 44 | Question 87
 * Category: Strings
 * 
 * Problem Statement:
 * Count spaces, digits, and special characters in a string.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'a b1&2'
 *     Output: 'Spaces=1, Digits=2, Special=1'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        int spaces = 0, digits = 0, special = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == ' ') {
                spaces++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                digits++;
            } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                // alphabet
            } else {
                special++;
            }
        }
        printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    }
    return 0;
}
