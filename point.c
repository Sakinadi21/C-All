#include<stdio.h>
int main(){
int a = 5;
int *x =&a;
*x = 6;
printf("%p\n",x);
printf("%p\n",&x);
printf("%p\n",*x);
printf("%d\n",a);
return 0;
}

//pointer variable er address store kre
