/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 18 | Question 36
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to find the HCF (GCD) of two numbers.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '12 18'
 *     Output: '6'
 *   Test Case 2:
 *     Input:  '7 9'
 *     Output: '1'
 * ============================================================================
 */

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", gcd(a, b));
    }
    return 0;
}
