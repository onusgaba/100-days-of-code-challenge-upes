/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 49 | Question 97
 * Category: Strings
 *
 * Problem Statement:
 * Print the initials of a name.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  John Doe
 *     Output: J.D.
 * ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char name[500];
    if (fgets(name, sizeof(name), stdin)) {
        name[strcspn(name, "\r\n")] = '\0';
        int first = 1;
        for (int i = 0; name[i]; i++) {
            if (first && name[i] != ' ') { printf("%c.", toupper((unsigned char)name[i])); first = 0; }
            if (name[i] == ' ') first = 1;
        }
        printf("\n");
    }
    return 0;
}
