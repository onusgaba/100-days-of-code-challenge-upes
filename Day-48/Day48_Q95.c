/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 48 | Question 95
 * Category: Strings
 * 
 * Problem Statement:
 * Check if one string is a rotation of another.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'abcde\ndeabc'
 *     Output: 'Rotation'
 *   Test Case 2:
 *     Input:  'abc\nacb'
 *     Output: 'Not rotation'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    if (scanf("%s %s", s1, s2) == 2) {
        int len1 = strlen(s1);
        int len2 = strlen(s2);
        if (len1 != len2) {
            printf("Not rotation\n");
            return 0;
        }
        char concat[2000];
        strcpy(concat, s1);
        strcat(concat, s1);
        if (strstr(concat, s2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not rotation\n");
        }
    }
    return 0;
}
