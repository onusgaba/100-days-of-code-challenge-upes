/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 46 | Question 91
 * Category: Strings
 * 
 * Problem Statement:
 * Remove all vowels from a string.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'education'
 *     Output: 'dctn'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        char result[1000];
        int k = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            char lower = tolower(s[i]);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                result[k++] = s[i];
            }
        }
        result[k] = '\0';
        printf("%s\n", result);
    }
    return 0;
}
