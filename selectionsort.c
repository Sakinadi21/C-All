#include <stdio.h>
#include <limits.h>

int main() {
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7;

    printf("Unsorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection sort
    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int minidx = -1;

        // Find the minimum element in the unsorted portion
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minidx = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted portion
        if (minidx != -1) {
            int temp = arr[minidx];
            arr[minidx] = arr[i];
            arr[i] = temp;
        }
    }

    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
