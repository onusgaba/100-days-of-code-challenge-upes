/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 67 | Question 117
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  nums1 = [2,7,11,15] nums2 = [4,8,10]
 *     Output: 2 4 7 8 10 11 15
 *   Test Case 2:
 *     Input:  nums1 = [1,2,7] nums2 = [9,10,17]
 *     Output: 1 2 7 9 10 17
 *   Test Case 3:
 *     Input:  nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
 *     Output: -10 -3 -2 -1 7 7
 * ============================================================================
 */

#include <stdio.h>
int main() {
    int m, n; scanf("%d %d", &m, &n);
    int a[1000], b[1000];
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    int i=0, j=0, first=1;
    while(i<m&&j<n){ if(!first) printf(" "); if(a[i]<=b[j]) printf("%d",a[i++]); else printf("%d",b[j++]); first=0; }
    while(i<m){ if(!first) printf(" "); printf("%d",a[i++]); first=0; }
    while(j<n){ if(!first) printf(" "); printf("%d",b[j++]); first=0; }
    printf("\n"); return 0;
}
