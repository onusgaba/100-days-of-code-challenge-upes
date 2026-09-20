/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 42 | Question 84
 * Category: Strings
 * 
 * Problem Statement:
 * Convert a lowercase string to uppercase without using built-in functions.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'hello'
 *     Output: 'HELLO'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - ('a' - 'A');
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
