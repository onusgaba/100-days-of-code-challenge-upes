/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 08 | Question 15
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'A'
 *     Output: 'Uppercase alphabet'
 *   Test Case 2:
 *     Input:  'a'
 *     Output: 'Lowercase alphabet'
 *   Test Case 3:
 *     Input:  '3'
 *     Output: 'Digit'
 *   Test Case 4:
 *     Input:  '#'
 *     Output: 'Special character'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    char ch;
    if (scanf(" %c", &ch) == 1) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("Uppercase alphabet\n");
        } else if (ch >= 'a' && ch <= 'z') {
            printf("Lowercase alphabet\n");
        } else if (ch >= '0' && ch <= '9') {
            printf("Digit\n");
        } else {
            printf("Special character\n");
        }
    }
    return 0;
}
