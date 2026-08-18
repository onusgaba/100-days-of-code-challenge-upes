/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 09 | Question 17
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to find the roots of a quadratic equation and categorize them.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '1 -3 2'
 *     Output: 'Roots are real and different: 2, 1'
 *   Test Case 2:
 *     Input:  '1 -2 1'
 *     Output: 'Roots are real and same: 1'
 *   Test Case 3:
 *     Input:  '1 2 5'
 *     Output: 'Roots are complex'
 * ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double d = b * b - 4 * a * c;
        if (d > 0) {
            double r1 = (-b + sqrt(d)) / (2 * a);
            double r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and different: %g, %g\n", r1, r2);
        } else if (d == 0) {
            double r = -b / (2 * a);
            printf("Roots are real and same: %g\n", r);
        } else {
            printf("Roots are complex\n");
        }
    }
    return 0;
}
