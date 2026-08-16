/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 07 | Question 13
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to input a year and check whether it is a leap year or not using conditional statements.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '2020'
 *     Output: 'Leap year'
 *   Test Case 2:
 *     Input:  '1900'
 *     Output: 'Not a leap year'
 *   Test Case 3:
 *     Input:  '2000'
 *     Output: 'Leap year'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int year;
    if (scanf("%d", &year) == 1) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    }
    return 0;
}
