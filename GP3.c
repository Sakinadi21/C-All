
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // 3 12 48 .... up to n number of terms
    // we are going to use extra variables
   int a = 3;
   for(int i = 1;i<=n;i++){
    printf("%d ",a);
    a = a * 4;
   }
    return 0;
}



