
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
   // 2 3 5 7 11 13 17 19 23

   int a = 0;
   for(int i=2; i<=n-1;i++){
    if(n%i==0){
        a = 1;
        break;//to terminate anything
    }
   }
   if(n == 1)
    printf(" 1 is neither prime nor composite ");
    else if(a==0)
    printf("The given number is prime \n ");
   else
    printf("The given number is composite\n");

    return 0;
}



