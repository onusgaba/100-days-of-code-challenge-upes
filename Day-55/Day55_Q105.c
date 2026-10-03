/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 55 | Question 105
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  nums = [3,2,3]
 *     Output: 3
 *     Note:   Size = 3, Count of 3 = 2 → 2 > 3/2. Thus, 3 is the majority element.
 *   Test Case 2:
 *     Input:  nums = [2,2,1,1,1,2,2]
 *     Output: 2
 *     Note:   Size = 7, Count of 2 = 4 → 4 > 7/2. Thus, 2 is the majority element.
 *   Test Case 3:
 *     Input:  nums = [2,2,1,1,1,2,2,3]
 *     Output: -1
 *     Note:   Size = 8, Count of 2 = 4 → 4 is not strictly greater than 8/2. Hence, no majority element exists.
 * ============================================================================
 */

#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int a[1000];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int cand=a[0], cnt=1;
    for(int i=1;i<n;i++){
        if(cnt==0){cand=a[i];cnt=1;}
        else if(a[i]==cand) cnt++;
        else cnt--;
    }
    printf("%d\n", cand);
    return 0;
}
