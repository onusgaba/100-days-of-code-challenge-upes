/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 42 | Question 83
 * Category: Strings
 * 
 * Problem Statement:
 * Count vowels and consonants in a string.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'hello'
 *     Output: 'Vowels=2, Consonants=3'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        int vowels = 0, consonants = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            char c = tolower(s[i]);
            if (c >= 'a' && c <= 'z') {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    }
    return 0;
}
