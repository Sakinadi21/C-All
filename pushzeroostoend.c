#include <stdio.h>

int main() {
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int ans[9];
    int idx = 0;

    // Move all non-zero elements to ans array
    for (int i = 0; i < 9; i++) {
        if (arr[i] != 0) {
            ans[idx] = arr[i];
            idx++;
        }
    }

    // Fill the remaining positions with zeros
    while (idx < 9) {
        ans[idx] = 0;
        idx++;
    }

    // Print the resultant array
    printf("Reordered Array:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}
