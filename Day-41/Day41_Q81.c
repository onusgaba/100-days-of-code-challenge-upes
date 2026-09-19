/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 41 | Question 81
 * Category: Strings
 * 
 * Problem Statement:
 * Count characters in a string without using built-in length functions.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'Hello'
 *     Output: '5'
 *   Test Case 2:
 *     Input:  ' '
 *     Output: '1'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        int count = 0;
        while (s[count] != '\0') {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
