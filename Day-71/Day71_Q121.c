/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 71 | Question 121
 * Category: File Handling
 *
 * Problem Statement:
 * Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  Name: Rahul, Age: 23
 *     Output: File created successfully! Data written to info.txt
 *     Note:   Expected File Content (info.txt): Name: Rahul Age: 23
 * ============================================================================
 */

#include <stdio.h>
int main() {
    char name[100]; int age;
    printf("Enter Name: "); scanf("%99s", name);
    printf("Enter Age: ");  scanf("%d", &age);
    FILE *fp = fopen("info.txt", "w");
    if (!fp) { printf("Error opening file!\n"); return 1; }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
