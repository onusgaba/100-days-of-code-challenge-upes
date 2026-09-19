/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 41 | Question 82
 * Category: Strings
 * 
 * Problem Statement:
 * Print each character of a string on a new line.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'Hi'
 *     Output: 'H\ni'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        for (int i = 0; s[i] != '\0'; i++) {
            printf("%c\n", s[i]);
        }
    }
    return 0;
}
