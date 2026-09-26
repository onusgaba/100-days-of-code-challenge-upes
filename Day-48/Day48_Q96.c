/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 48 | Question 96
 * Category: Strings
 * 
 * Problem Statement:
 * Reverse each word in a sentence without changing the word order.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'I love coding'
 *     Output: 'I evol gnidoc'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        int i = 0;
        while (s[i] != '\0') {
            while (s[i] == ' ' && s[i] != '\0') i++;
            if (s[i] == '\0') break;
            int start = i;
            while (s[i] != ' ' && s[i] != '\0') i++;
            reverse_word(&s[start], &s[i - 1]);
        }
        printf("%s\n", s);
    }
    return 0;
}
