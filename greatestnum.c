#include<stdio.h>
int main(){
   int a;
   printf("Enter 1st number : \n ");
   scanf("%d",&a);

   int b;
   printf("Enter 2nd number : \n ");
   scanf("%d",&b);

   int c;
   printf("Enter 3rd number : \n ");
   scanf("%d",&c);

   if(a>b && a>c){
    printf(" %d is greatest ",a);
   }


   if(b>a && b>c){
    printf(" %d is greatest ",b);
   }


   if(c>a && c>b){
    printf(" %d is greatest ",c);
   }



    }
