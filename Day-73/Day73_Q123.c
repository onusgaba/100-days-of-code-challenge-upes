/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 73 | Question 123
 * Category: File Handling
 *
 * Problem Statement:
 * Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  File: sample.txt (Content: Hello world\nThis is C programming)
 *     Output: Characters: 31
Words: 5
Lines: 2
 *     Note:   The file has 31 characters including spaces and newlines, 5 words, and 2 lines.
 * ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
int main() {
    char fname[200]; scanf("%199s", fname);
    FILE *fp = fopen(fname, "r");
    if (!fp) { printf("Error opening file!\n"); return 1; }
    long long chars=0, words=0, lines=0;
    int c, inword=0, prev='\n';
    while((c=fgetc(fp))!=EOF){
        chars++;
        if(c=='\n') lines++;
        if(!isspace(c)){if(!inword){words++;inword=1;}}
        else inword=0;
        prev=c;
    }
    if(prev!='\n') lines++;
    fclose(fp);
    printf("Characters: %lld\nWords: %lld\nLines: %lld\n", chars, words, lines);
    return 0;
}
