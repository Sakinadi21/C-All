
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // 100 50 25 .... up to n number of terms
    // we are going to use extra variables
   float a =100;
   for(int i =1; i<=n ; i++){
    printf("%f ",a);
    a =( a * (1/2));
   }
    return 0;
}



