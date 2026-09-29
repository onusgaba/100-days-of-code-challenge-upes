#include <stdio.h>

int main() {
    int nums[] = {1, 2, 2, 2, 3, 4, 5};
    int n = 7;
    int target;

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1;
    int last = -1;

   
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;  
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

   
    low = 0;
    high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; 
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (first == -1) {
        printf("-1, -1\n");
    }
    else {
        printf("First occurrence: %d\n", nums[first]);
        printf("Last occurrence: %d\n", nums[last]);

        printf("First index: %d\n", first);
        printf("Last index: %d\n", last);
    }

    return 0;
}