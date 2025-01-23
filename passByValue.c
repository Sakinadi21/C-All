#include<stdio.h>

void swap(int a,int b){
int temp = a;
a = b;
b = temp;

 printf("The value of a is %d\n",a);
printf("The value of %b is %d",b);
return;
}
int main(){

swap(2,9);




return 0;
}



