#include<stdio.h>
int main(){

int a;
printf("Enter Ram age : \n ");
scanf("%d",&a);

int b;
printf("Enter Shyam age : \n ");
scanf("%d",&b);

int c;
printf("Enter Ajay age : \n ");
scanf("%d",&c);

if(b>a && c>a){
    printf("Ram is youngest and age is %d",a);
}

if(a>b && c>b){
    printf("Shyam is youngest and age is %d",b);
}
if(a>c && b>c){
    printf("Ajay is youngest and age is %d",c);
}

return 0;}
