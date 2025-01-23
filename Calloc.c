/*
To allocate a memory for 25 floating numbers :
float *ptr = (float*)calloc(25,sizeof(float));

To allocate a memory for 1000 characters :
Char *ptr = (char*)calloc(1000,sizeof(char));


One difference between malloc() and calloc() is that calloc() initializes all the allocated memory blocks with value 0,
unlike malloc() in which blocks allocated have garbage value.
*/

#include<stdio.h>
int main(){

int* ptr = (int*)malloc(10*4);
printf("%d ",*ptr*9);
ptr++;
printf("%d ",*ptr);
ptr++;

printf("%d ",*ptr);


}
