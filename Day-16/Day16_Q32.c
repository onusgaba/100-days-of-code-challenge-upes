/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 16 | Question 32
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to check if a number is a palindrome.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '121'
 *     Output: 'Palindrome'
 *   Test Case 2:
 *     Input:  '123'
 *     Output: 'Not palindrome'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int original = n;
        int reversed = 0;
        if (n < 0) {
            printf("Not palindrome\n");
            return 0;
        }
        while (n > 0) {
            reversed = reversed * 10 + (n % 10);
            n /= 10;
        }
        if (original == reversed) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    return 0;
}
