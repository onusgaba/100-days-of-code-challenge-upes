/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 65 | Question 115
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  s = "anagram", t = "nagaram"
 *     Output: Anagram
 *     Note:   The strings contain the same characters with the same frequencies.
 *   Test Case 2:
 *     Input:  s = "rat", t = "car"
 *     Output: Not Anagram
 *     Note:   The strings do not contain the same characters.
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main() {
    char s[1000], t[1000];
    scanf("%999s %999s", s, t);
    if(strlen(s)!=strlen(t)){printf("Not Anagram\n");return 0;}
    int cnt[256]={0};
    for(int i=0;s[i];i++) cnt[(unsigned char)s[i]]++;
    for(int i=0;t[i];i++) cnt[(unsigned char)t[i]]--;
    for(int i=0;i<256;i++) if(cnt[i]){printf("Not Anagram\n");return 0;}
    printf("Anagram\n"); return 0;
}
