
#include<stdio.h>

int main(){
    int a = 25;
    int *x = &a;  //int* ->int er address store kre
    //VVVIP -> *x=7; // a is changes
    int **y =&x; //int** int* er address store kre

    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
return 0;
}



