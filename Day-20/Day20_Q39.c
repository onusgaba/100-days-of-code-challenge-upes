/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 20 | Question 39
 * Category: Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to find the product of odd digits of a number.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '12345'
 *     Output: '15 (1*3*5)'
 *   Test Case 2:
 *     Input:  '2468'
 *     Output: '1 (no odd digits, assume 1)'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    if (scanf("%s", s) == 1) {
        long long prod = 1;
        int has_odd = 0;
        char expr[256] = "";
        int offset = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                int d = s[i] - '0';
                if (d % 2 != 0) {
                    prod *= d;
                    if (!has_odd) {
                        offset += sprintf(expr + offset, "%d", d);
                    } else {
                        offset += sprintf(expr + offset, "*%d", d);
                    }
                    has_odd = 1;
                }
            }
        }
        if (has_odd) {
            printf("%lld (%s)\n", prod, expr);
        } else {
            printf("1 (no odd digits, assume 1)\n");
        }
    }
    return 0;
}
