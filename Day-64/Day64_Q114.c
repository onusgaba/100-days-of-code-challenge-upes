/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 64 | Question 114
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  s = "abcabcbb"
 *     Output: 3
 *     Note:   The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
 *   Test Case 2:
 *     Input:  s = "bbbbb"
 *     Output: 1
 *     Note:   The answer is "b", with the length of 1.
 *   Test Case 3:
 *     Input:  s = "pwwkew"
 *     Output: 3
 *     Note:   The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main() {
    char s[10000]; scanf("%9999s", s);
    int n=strlen(s), last[256]; memset(last,-1,sizeof(last));
    int start=0, best=0;
    for(int i=0;i<n;i++){
        unsigned char c=s[i];
        if(last[c]>=start) start=last[c]+1;
        last[c]=i;
        if(i-start+1>best) best=i-start+1;
    }
    printf("%d\n", best);
    return 0;
}
