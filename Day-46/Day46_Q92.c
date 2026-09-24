/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 46 | Question 92
 * Category: Strings
 * 
 * Problem Statement:
 * Find the first repeating lowercase alphabet in a string.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'stress'
 *     Output: 's'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (scanf("%s", s) == 1) {
        int freq[26] = {0};
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                freq[s[i] - 'a']++;
            }
        }
        char first_repeat = '\0';
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z' && freq[s[i] - 'a'] > 1) {
                first_repeat = s[i];
                break;
            }
        }
        if (first_repeat != '\0') {
            printf("%c\n", first_repeat);
        } else {
            printf("None\n");
        }
    }
    return 0;
}
