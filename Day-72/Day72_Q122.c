/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 72 | Question 122
 * Category: File Handling
 *
 * Problem Statement:
 * Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  File: info.txt (Content: Name: Rahul\nAge: 23)
 *     Output: Name: Rahul
Age: 23
 *     Note:   The program reads each line from info.txt using fgets() and prints it until EOF.
 * ============================================================================
 */

#include <stdio.h>
int main() {
    FILE *fp = fopen("info.txt", "r");
    if (!fp) { printf("Error: File not found!\n"); return 1; }
    char line[256];
    while (fgets(line, sizeof(line), fp)) printf("%s", line);
    fclose(fp);
    return 0;
}
