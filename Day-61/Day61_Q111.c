/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 61 | Question 111
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  arr[] = [-8, 2, 3, -6, 10], k = 2
 *     Output: -8 0 -6 -6
 *     Note:   Window [-8, 2] First negative integer is -8. Window No negative integers, output is 0. Window [3, -6] First negative integer is -6. Window [-6, 10] First negative integer is -6.
 *   Test Case 2:
 *     Input:  arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
 *     Output: -1 -1 -7 -15 -15 0
 *     Note:   Window [12, -1, -7] First negative integer is -1. Window [-1, -7, 8] First negative integer is -1. Window [-7, 8, -15] First negative integer is -7. Window [8, -15, 30] First negative integer is -15. Window [-15, 30, 16] First negative integer is -15. Window No negative integers, output is 0.
 *   Test Case 3:
 *     Input:  arr[] = [12, 1, 3, 5], k = 3
 *     Output: 0 0
 *     Note:   Window No negative integers, output is 0. Window No negative integers, output is 0.
 * ============================================================================
 */

#include <stdio.h>
#define MAXN 100005
int dq[MAXN];
int main() {
    int n, k; scanf("%d %d", &n, &k);
    int a[MAXN]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int front=0, back=0, first=1;
    for(int i=0;i<n;i++){
        while(front<back && dq[front]<i-k+1) front++;
        while(front<back && a[dq[back-1]]>=a[i]) back--;
        dq[back++]=i;
        if(i>=k-1){ if(!first) printf(" "); printf("%d",a[dq[front]]); first=0; }
    }
    printf("\n"); return 0;
}
