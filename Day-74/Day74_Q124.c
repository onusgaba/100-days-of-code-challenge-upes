/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 74 | Question 124
 * Category: File Handling
 *
 * Problem Statement:
 * Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  Source File: source.txt (Content: Learning C File Handling)
 *     Output: File copied successfully to destination.txt
 *     Note:   Expected File (destination.txt): Learning C File Handling
 * ============================================================================
 */

#include <stdio.h>
int main() {
    char src[200], dst[200];
    scanf("%199s %199s", src, dst);
    FILE *in = fopen(src, "r");
    if (!in) { printf("Error: Source file not found!\n"); return 1; }
    FILE *out = fopen(dst, "w");
    if (!out) { fclose(in); printf("Error: Cannot create destination file!\n"); return 1; }
    int c;
    while((c=fgetc(in))!=EOF) fputc(c, out);
    fclose(in); fclose(out);
    printf("File copied successfully to destination!\n");
    return 0;
}
