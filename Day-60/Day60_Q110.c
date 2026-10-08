/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 60 | Question 110
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
 *     Output: 3 3 4 5 5 5 6
 *     Note:   1st contiguous subarray , max = 3; 2nd contiguous subarray , max = 3; 3rd contiguous subarray , max = 4; 4th contiguous subarray , max = 5; 5th contiguous subarray , max = 5; 6th contiguous subarray , max = 5; 7th contiguous subarray , max = 6.
 *   Test Case 2:
 *     Input:  arr[5, 1, 3, 4, 2] = , k = 1
 *     Output: 5 1 3 4 2
 *     Note:   When k = 1, each element in the array is its own subarray, so the output is simply the same array.
 * ============================================================================
 */

#include <stdio.h>
#define MAXN 100005
int dq[MAXN]; /* stores indices */
int main() {
    int n, k; scanf("%d %d", &n, &k);
    int a[MAXN]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int front=0, back=0, first=1;
    for(int i=0;i<n;i++){
        while(front<back && dq[front]<i-k+1) front++;
        while(front<back && a[dq[back-1]]<=a[i]) back--;
        dq[back++]=i;
        if(i>=k-1){ if(!first) printf(" "); printf("%d",a[dq[front]]); first=0; }
    }
    printf("\n"); return 0;
}
