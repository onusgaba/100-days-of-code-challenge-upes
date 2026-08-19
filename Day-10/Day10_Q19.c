/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 10 | Question 19
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '3 3 3'
 *     Output: 'Equilateral'
 *   Test Case 2:
 *     Input:  '3 3 4'
 *     Output: 'Isosceles'
 *   Test Case 3:
 *     Input:  '2 3 4'
 *     Output: 'Scalene'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }
    return 0;
}
