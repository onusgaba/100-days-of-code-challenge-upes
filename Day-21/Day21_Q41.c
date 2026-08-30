/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 21 | Question 41
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to swap the first and last digit of a number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '1234'
 *     Output: '4231'
 *   Test Case 2:
 *     Input:  '1001'
 *     Output: '1001'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    if (scanf("%s", s) == 1) {
        int len = strlen(s);
        int start = 0;
        if (s[0] == '-') start = 1;
        if (len - start > 1) {
            char temp = s[start];
            s[start] = s[len - 1];
            s[len - 1] = temp;
        }
        printf("%s\n", s);
    }
    return 0;
}
