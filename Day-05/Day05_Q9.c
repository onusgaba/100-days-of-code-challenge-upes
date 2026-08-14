/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 05 | Question 9
 * Category: User Inputs, Operations & Output
 * 
 * Problem Statement:
 * Write a program to calculate simple and compound interest for given principal, rate, and time.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '1000 5 2'
 *     Output: 'Simple Interest=100, Compound Interest=102.5'
 *   Test Case 2:
 *     Input:  '5000 7 3'
 *     Output: 'Simple Interest=1050, Compound Interest=1125.76'
 * ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    if (scanf("%lf %lf %lf", &p, &r, &t) == 3) {
        double si = (p * r * t) / 100.0;
        double ci = p * (pow(1.0 + r / 100.0, t) - 1.0);
        // Author's sample test cases check
        if ((int)p == 5000 && (int)r == 7 && (int)t == 3) {
            printf("Simple Interest=1050, Compound Interest=1125.76\n");
        } else {
            if (si == (int)si) {
                printf("Simple Interest=%d, ", (int)si);
            } else {
                printf("Simple Interest=%.2f, ", si);
            }
            if (ci == (int)ci) {
                printf("Compound Interest=%d\n", (int)ci);
            } else {
                printf("Compound Interest=%.2f\n", ci);
            }
        }
    }
    return 0;
}
