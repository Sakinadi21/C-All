#include<stdio.h>
int main(){
int a ;
printf("Enter 1st side : \n ");
scanf("%d",&a);

int b ;
printf("Enter 2nd side : \n ");
scanf("%d",&b);

int c ;
printf("Enter 3rd side : \n ");
scanf("%d",&c);

if(a+b > c && b+c >>a && c+a>>b){
    printf("Valid triangle");
}
else{
    printf("Not valid");
}

return 0;}
