/**
 * ============================================================================
 * 100 Days of Code Challenge - UPES
 * Day 51 | Question 101
 * Category: Logic Enhancers
 *
 * Problem Statement:
 * Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
 *
 * Sample Test Cases:
 *   Test Case 1:
 *     Input:  nums = [5,7,7,8,8,10], target = 8
 *     Output: 3,4
 *   Test Case 2:
 *     Input:   nums = [5,7,7,8,8,10], target = 6
 *     Output: -1,-1
 *   Test Case 3:
 *     Input:   nums = [5,7,7,8,8,10], target = 10
 *     Output: 5,5
 * ============================================================================
 */

#include <stdio.h>
int searchFirst(int a[], int n, int t) {
    int lo=0, hi=n-1, res=-1;
    while(lo<=hi){ int mid=(lo+hi)/2; if(a[mid]==t){res=mid;hi=mid-1;} else if(a[mid]<t) lo=mid+1; else hi=mid-1; }
    return res;
}
int searchLast(int a[], int n, int t) {
    int lo=0, hi=n-1, res=-1;
    while(lo<=hi){ int mid=(lo+hi)/2; if(a[mid]==t){res=mid;lo=mid+1;} else if(a[mid]<t) lo=mid+1; else hi=mid-1; }
    return res;
}
int main() {
    int n, target; scanf("%d %d", &n, &target);
    int a[1000];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    printf("%d,%d\n", searchFirst(a,n,target), searchLast(a,n,target));
    return 0;
}
