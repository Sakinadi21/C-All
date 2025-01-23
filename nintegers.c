#include<stdio.h>
#include<stdlib.h> // Include this header for malloc and free

int main()
{
    int n;
    printf("Enter number of integers you want: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    int* ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    int* p = ptr;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &(*ptr));
        ptr++;
    }

    ptr = p; // Reset ptr to the beginning of the allocated memory

    printf("The entered integers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d  ", (*ptr));
        ptr++;
    }

    free(p); // Free the allocated memory
    return 0;
}
