/*
realloc(pointer,new_size)

It is used to dynamically change the memory allocation of a previously allocated memory.
new-size is the new total size to be allocated and pointer is the pointer to previously allocated memory.

returns pointer to the first block of allocated memory address with new size.

Example:
int *ptr = (int *)malloc(%*sizeof(int));//20bytes allocates
ptr = realloc(ptr,10*sizeof(int));//total 40bytes allocated

Note: The data stored remain intact.Just the allocated  memory increased.Hence,it allows allocation according to our needs without
making us lose the data stored in the initial 20bytes.Hence,it is different from malloc() and calloc().

*/
