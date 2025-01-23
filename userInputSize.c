#include<stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array with size n

    // Input elements into the array
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) { // Correct loop condition: i < n
        scanf("%d", &arr[i]);
    }

    // Output elements of the array
    printf("The elements of the array are: ");
    for(int i = 0; i < n; i++) { // Correct loop condition: i < n
        printf("%d ", arr[i]);
    }
    return 0;
}
