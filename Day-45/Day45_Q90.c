/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 45 | Question 90
 * Category: Strings
 * 
 * Problem Statement:
 * Toggle case of each character in a string.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'Hello'
 *     Output: 'hELLO'
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
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + ('a' - 'A');
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
