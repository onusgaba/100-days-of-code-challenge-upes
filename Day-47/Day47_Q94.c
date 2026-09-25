/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 47 | Question 94
 * Category: Strings
 * 
 * Problem Statement:
 * Find the longest word in a sentence.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'I love programming'
 *     Output: 'programming'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        char longest[1000] = "";
        int max_len = 0;
        int i = 0;
        while (s[i] != '\0') {
            while (s[i] == ' ' && s[i] != '\0') i++;
            if (s[i] == '\0') break;
            int start = i;
            while (s[i] != ' ' && s[i] != '\0') i++;
            int len = i - start;
            if (len > max_len) {
                max_len = len;
                strncpy(longest, s + start, len);
                longest[len] = '\0';
            }
        }
        printf("%s\n", longest);
    }
    return 0;
}
