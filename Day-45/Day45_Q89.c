/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 45 | Question 89
 * Category: Strings
 * 
 * Problem Statement:
 * Count frequency of a given character in a string.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'programming\ng'
 *     Output: '2'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        char ch;
        if (scanf(" %c", &ch) == 1) {
            int count = 0;
            for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] == ch) {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }
    return 0;
}
