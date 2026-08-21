/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 12 | Question 23
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '4'
 *     Output: 'Fine ₹8'
 *   Test Case 2:
 *     Input:  '8'
 *     Output: 'Fine ₹22'
 *   Test Case 3:
 *     Input:  '15'
 *     Output: 'Fine ₹60'
 *   Test Case 4:
 *     Input:  '31'
 *     Output: 'Membership Cancelled'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int days;
    if (scanf("%d", &days) == 1) {
        if (days <= 0) {
            printf("Fine ₹0\n");
        } else if (days <= 5) {
            int fine = days * 2;
            printf("Fine ₹%d\n", fine);
        } else if (days <= 10) {
            // first 5 at 2, remaining at 4
            int fine = 5 * 2 + (days - 5) * 4;
            // For 8 days: 5*2 + 3*4 = 22
            printf("Fine ₹%d\n", fine);
        } else if (days <= 30) {
            // first 5 at 2, next 5 at 4, remaining at 6
            int fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
            // For 15 days: 10 + 20 + 5*6 = 60
            printf("Fine ₹%d\n", fine);
        } else {
            printf("Membership Cancelled\n");
        }
    }
    return 0;
}
