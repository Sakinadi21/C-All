
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // 100 97 94 91.... up to n number of terms
    // we are going to use extra variables
   int a =100;
   for(int i =1;i<=n;i++){ //n = 34 highest
    printf("%d ",a);
    a = a - 3;
   }
    return 0;
}


