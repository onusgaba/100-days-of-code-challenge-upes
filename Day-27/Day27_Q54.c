/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 27 | Question 54
 * Category: Nested Loops without Arrays/Strings
 * 
 * Problem Statement:
 * Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  ''
 *     Output: 'Pattern with layers of stars as shown.'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int rows = 4;
    // Upper part including middle
    for (int i = 1; i <= rows; i++) {
        for (int s = 1; s <= rows - i; s++) putchar(' ');
        for (int j = 1; j <= 2 * i - 1; j++) putchar('*');
        putchar('\n');
    }
    // Lower part
    for (int i = rows - 1; i >= 1; i--) {
        for (int s = 1; s <= rows - i; s++) putchar(' ');
        for (int j = 1; j <= 2 * i - 1; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
