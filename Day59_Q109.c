
#include <stdio.h>
int main() {
    int n, k, i, j, sum, maxSum;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    if (k <= 0 || k > n) {
        return 0;
    }
    maxSum = arr[0];
    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++) {
            sum += arr[j];
        }
        if (i == 0 || sum > maxSum) {
            maxSum = sum;
        }
    }
    printf("%d\n", maxSum);
    return 0;
}

