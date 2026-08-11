/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 02 | Question 3
 * Category: User Inputs, Operations & Output
 * 
 * Problem Statement:
 * Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '5 10'
 *     Output: 'Area=50, Perimeter=30'
 *   Test Case 2:
 *     Input:  '3 7'
 *     Output: 'Area=21, Perimeter=20'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int length, breadth;
    if (scanf("%d %d", &length, &breadth) == 2) {
        int area = length * breadth;
        int perimeter = 2 * (length + breadth);
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
    }
    return 0;
}
