/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 70 | Question 120
 * Category: File Handling
 *
 * Problem Statement:
 * Write a program to take a string input. Change it to sentence case.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  str = I am trying to build logic.
 *     Output: I Am Trying To Build Logic
 *   Test Case 2:
 *     Input:  str = The classes are supposed to start early.
 *     Output: The Classes Are Supposed To Start Early.
 *   Test Case 3:
 *     Input:  str = We are going to look at 26 different test cases.
 *     Output: We Are Going To Look At 26 Different Test Cases.
 * ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char line[1000]; int first=1;
    if(fgets(line, sizeof(line), stdin)){
        line[strcspn(line,"\r\n")]='\0';
        for(int i=0;line[i];i++){
            if(first && line[i]!=' '){ printf("%c",toupper((unsigned char)line[i])); first=0; }
            else if(line[i]==' '){ printf(" "); first=1; }
            else printf("%c", line[i]);
        }
        printf("\n");
    }
    return 0;
}
