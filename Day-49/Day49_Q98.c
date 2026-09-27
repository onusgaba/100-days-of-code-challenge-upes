/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 49 | Question 98
 * Category: Strings
 *
 * Problem Statement:
 * Print initials of a name with the surname displayed in full.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  John David Doe
 *     Output: J.D. Doe
 * ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char name[500];
    if (fgets(name, sizeof(name), stdin)) {
        name[strcspn(name, "\r\n")] = '\0';
        char words[50][100]; int wc = 0;
        char *tok = strtok(name, " ");
        while (tok && wc < 50) { strcpy(words[wc++], tok); tok = strtok(NULL, " "); }
        if (wc == 0) return 0;
        for (int i = 0; i < wc - 1; i++) printf("%c.", toupper((unsigned char)words[i][0]));
        printf(" %s\n", words[wc-1]);
    }
    return 0;
}
