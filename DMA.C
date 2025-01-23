#include<stdio.h>
int main(){
int n;
printf("Enter array's size : ");
scanf("%d",&n);

int arr[n];
for(int i=0 ;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
//Static which means that the memory is allocated during compile time.
//Dynamic which means that the memory is allocated during run time.
}
/*
What if we try to dynamically allocate or increase our memory needs in any function call during runtime!

For example, taking input N fro user and allocating a memory block for N integers in the stack frame.

In stack segment,all the frames are stored in contiguous memory .

Since the compiler was unaware of the new memory needs and it initiated a stack frame with what knowledge it had during the compile time,if the new
memory requirements exceeds that of the stack frame memory,it would result in memory needs exceeded!

Hence, such a runtime allocation in stack , through allows some compilers is not recommended as it could lead to unwanted exceptions in the
program during runtime.
So,a program below is not a recommended one:
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
}

What is the solution?


*/
