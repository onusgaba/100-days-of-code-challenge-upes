/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 43 | Question 85
 * Category: Strings
 * 
 * Problem Statement:
 * Reverse a string.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'abcd'
 *     Output: 'dcba'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        int len = strlen(s);
        int left = 0, right = len - 1;
        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        printf("%s\n", s);
    }
    return 0;
}
