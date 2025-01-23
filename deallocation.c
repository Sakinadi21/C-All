/*
Memory  Deallocation
free(pointer-to-heap-address)
Pointer-to-heap-address is the pointer to heap memory allocated dynamically using malloc() and calloc() functions.

int *ptr = (int*)malloc(8*sizeof(int));
free(ptr);
//memory deallocated but ptr refers to memory which now does not belong to us,hence ptr(dangling pointer) should be set to Null
ptr=Nul;

Note that memory deallocated properly,it would result in memory leaks and eat up unnecessary resources of the system.
Hence,with great power to manage memory on our own,comes great responsibility.

Note that the same address which is returned by malloc() or calloc() should be used to free up the allocated memory space in one go.

For example:
int *ptr_head = (int*)malloc(2*sizeof(int));
ptr_head++;
free(ptr)//results in error
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int* ptr = (int*)calloc(10, sizeof(int)); // Allocate memory for 10 integers
    if (ptr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }

    int* p = ptr; // Store the original pointer

    // Do any necessary operations here
    // Avoid decrementing ptr if you intend to free the memory

    free(p); // Free the allocated memory

    return 0;
}

