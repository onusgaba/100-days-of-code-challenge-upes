/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 22 | Question 43
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to check if a number is a strong number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '145'
 *     Output: 'Strong number'
 *   Test Case 2:
 *     Input:  '123'
 *     Output: 'Not strong number'
 * ============================================================================
 */

#include <stdio.h>

long long fact(int d) {
    long long res = 1;
    for (int i = 1; i <= d; i++) res *= i;
    return res;
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long temp = n;
        long long sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            sum += fact(d);
            temp /= 10;
        }
        if (sum == n && n > 0) {
            printf("Strong number\n");
        } else {
            printf("Not strong number\n");
        }
    }
    return 0;
}
