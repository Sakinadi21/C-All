#include<stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int si, int ei) {
    for (int i = si, j = ei; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // Define the array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 50; // Number of positions to rotate
    k = k % n; // Handle cases where k >= n

    // Rotate the array to the right by k positions
    reverse(arr, 0, n - 1);   // Step 1: Reverse the entire array
    reverse(arr, 0, k - 1);   // Step 2: Reverse the first k elements
    reverse(arr, k, n - 1);   // Step 3: Reverse the remaining elements

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
