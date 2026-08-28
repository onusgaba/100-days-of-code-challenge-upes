/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 19 | Question 37
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to find the LCM of two numbers.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '4 5'
 *     Output: '20'
 *   Test Case 2:
 *     Input:  '7 3'
 *     Output: '21'
 * ============================================================================
 */

#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) == 2) {
        long long g = gcd(a, b);
        long long lcm = (a * b) / g;
        printf("%lld\n", lcm);
    }
    return 0;
}
