/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 43 | Question 86
 * Category: Strings
 * 
 * Problem Statement:
 * Check if a string is a palindrome.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'madam'
 *     Output: 'Palindrome'
 *   Test Case 2:
 *     Input:  'hello'
 *     Output: 'Not palindrome'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        int len = strlen(s);
        int is_pal = 1;
        int left = 0, right = len - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                is_pal = 0;
                break;
            }
            left++;
            right--;
        }
        if (is_pal) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    return 0;
}
