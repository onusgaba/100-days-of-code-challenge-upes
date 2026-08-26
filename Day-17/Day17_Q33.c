/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 17 | Question 33
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to check if a number is an Armstrong number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '153'
 *     Output: 'Armstrong'
 *   Test Case 2:
 *     Input:  '123'
 *     Output: 'Not Armstrong'
 * ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int original = n;
        int temp = n;
        int count = 0;
        while (temp > 0) {
            count++;
            temp /= 10;
        }
        temp = n;
        long long sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            long long p = 1;
            for (int i = 0; i < count; i++) p *= d;
            sum += p;
            temp /= 10;
        }
        if (sum == original) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
