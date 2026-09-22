/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 44 | Question 88
 * Category: Strings
 * 
 * Problem Statement:
 * Replace spaces with hyphens in a string.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'hello world'
 *     Output: 'hello-world'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == ' ') {
                s[i] = '-';
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
