/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 13 | Question 25
 * Category: Conditional Statements
 * 
 * Problem Statement:
 * Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  '4 2 +'
 *     Output: '6'
 *   Test Case 2:
 *     Input:  '10 3 %'
 *     Output: '1'
 *   Test Case 3:
 *     Input:  '15 5 /'
 *     Output: '3'
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int a, b;
    char op;
    char line[100];
    if (fgets(line, sizeof(line), stdin)) {
        if (sscanf(line, "%d %d %c", &a, &b, &op) == 3 || sscanf(line, "%d %c %d", &a, &op, &b) == 3) {
            switch (op) {
                case '+': printf("%d\n", a + b); break;
                case '-': printf("%d\n", a - b); break;
                case '*': printf("%d\n", a * b); break;
                case '/': 
                    if (b != 0) printf("%d\n", a / b);
                    else printf("Error: Division by zero\n");
                    break;
                case '%':
                    if (b != 0) printf("%d\n", a % b);
                    else printf("Error: Modulo by zero\n");
                    break;
                default: printf("Invalid operator\n"); break;
            }
        }
    }
    return 0;
}
