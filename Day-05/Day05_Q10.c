/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 05 | Question 10
 * Category: User Inputs, Operations & Output
 * 
 * Problem Statement:
 * Write a program to input time in seconds and convert it to hours:minutes:seconds format.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3661'
 *     Output: '1:1:1'
 *   Test Case 2:
 *     Input:  '7322'
 *     Output: '2:2:2'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int total_seconds;
    if (scanf("%d", &total_seconds) == 1) {
        int hours = total_seconds / 3600;
        int minutes = (total_seconds % 3600) / 60;
        int seconds = total_seconds % 60;
        printf("%d:%d:%d\n", hours, minutes, seconds);
    }
    return 0;
}
