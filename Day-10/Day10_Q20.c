/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 10 | Question 20
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to display the day of the week based on a number (1–7) using switch-case.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '1'
 *     Output: 'Monday'
 *   Test Case 2:
 *     Input:  '5'
 *     Output: 'Friday'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int day;
    if (scanf("%d", &day) == 1) {
        switch (day) {
            case 1: printf("Monday\n"); break;
            case 2: printf("Tuesday\n"); break;
            case 3: printf("Wednesday\n"); break;
            case 4: printf("Thursday\n"); break;
            case 5: printf("Friday\n"); break;
            case 6: printf("Saturday\n"); break;
            case 7: printf("Sunday\n"); break;
            default: printf("Invalid day\n"); break;
        }
    }
    return 0;
}
