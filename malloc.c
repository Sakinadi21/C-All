/*

Memory Allocation
Examples :

To allocate a memory for 100 integers :
int *ptr = (int *)malloc(100*sizeof(int));


To allocate a memory for 1000 characters :
char *ptr = (char *)malloc(100*sizeof(char));


*/
#include<stdio.h>
int main(){

int a = sizeof(int);
printf("%d ",a);
}
