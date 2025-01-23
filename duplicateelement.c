#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 5, 4, 6, 7, 2}; // Example array with a duplicate
    int n = 7; // Size of the array
    int duplicateFound = 0; // Flag to check if any duplicate is found

    printf("Duplicate elements in the array are:\n");

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]); // Print the duplicate element
                duplicateFound = 1;
            }
        }
    }

    if (!duplicateFound) {
        printf("No duplicate elements found.\n");
    }

    return 0;
}
