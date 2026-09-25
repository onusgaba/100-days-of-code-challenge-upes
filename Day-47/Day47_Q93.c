/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 47 | Question 93
 * Category: Strings
 * 
 * Problem Statement:
 * Check if two strings are anagrams of each other.
 * 
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  'listen\nsilent'
 *     Output: 'Anagrams'
 *   Test Case 2:
 *     Input:  'hello\nworld'
 *     Output: 'Not anagrams'
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[1000], s2[1000];
    if (scanf("%s %s", s1, s2) == 2) {
        int count[256] = {0};
        int len1 = strlen(s1);
        int len2 = strlen(s2);
        if (len1 != len2) {
            printf("Not anagrams\n");
            return 0;
        }
        for (int i = 0; i < len1; i++) {
            count[(unsigned char)s1[i]]++;
            count[(unsigned char)s2[i]]--;
        }
        int is_anagram = 1;
        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
        if (is_anagram) {
            printf("Anagrams\n");
        } else {
            printf("Not anagrams\n");
        }
    }
    return 0;
}
