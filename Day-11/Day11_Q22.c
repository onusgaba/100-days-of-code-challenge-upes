/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 11 | Question 22
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to find profit or loss percentage given cost price and selling price.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '1000 1200'
 *     Output: 'Profit 20%'
 *   Test Case 2:
 *     Input:  '1000 800'
 *     Output: 'Loss 20%'
 *   Test Case 3:
 *     Input:  '1000 1000'
 *     Output: 'No Profit No Loss'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    double cp, sp;
    if (scanf("%lf %lf", &cp, &sp) == 2) {
        if (sp > cp) {
            double profit = sp - cp;
            double p_pct = (profit / cp) * 100.0;
            printf("Profit %g%%\n", p_pct);
        } else if (cp > sp) {
            double loss = cp - sp;
            double l_pct = (loss / cp) * 100.0;
            printf("Loss %g%%\n", l_pct);
        } else {
            printf("No Profit No Loss\n");
        }
    }
    return 0;
}
