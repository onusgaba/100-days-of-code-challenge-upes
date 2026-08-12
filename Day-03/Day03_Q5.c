/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 03 | Question 5
 * Category: User Inputs, Operations & Output
 * 
 * Problem Statement:
 * Write a program to convert temperature from Celsius to Fahrenheit.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '0'
 *     Output: 'Fahrenheit=32'
 *   Test Case 2:
 *     Input:  '100'
 *     Output: 'Fahrenheit=212'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    double c;
    if (scanf("%lf", &c) == 1) {
        double f = (c * 9.0 / 5.0) + 32.0;
        if (f == (int)f) {
            printf("Fahrenheit=%d\n", (int)f);
        } else {
            printf("Fahrenheit=%.2f\n", f);
        }
    }
    return 0;
}
