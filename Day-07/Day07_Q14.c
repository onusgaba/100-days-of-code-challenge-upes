/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 07 | Question 14
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to input a character and check whether it is a vowel or consonant using if–else.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'a'
 *     Output: 'Vowel'
 *   Test Case 2:
 *     Input:  'b'
 *     Output: 'Consonant'
 * ============================================================================
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    if (scanf(" %c", &ch) == 1) {
        char lower = tolower(ch);
        if (lower >= 'a' && lower <= 'z') {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                printf("Vowel\n");
            } else {
                printf("Consonant\n");
            }
        } else {
            printf("Not an alphabet\n");
        }
    }
    return 0;
}
