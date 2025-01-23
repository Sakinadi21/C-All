#include<stdio.h>
int main(){
int n;
printf("Enter the number : \n");
scanf("%d",&n );

//ternary  exp1?exp2:exp3
n%2 == 0 ? printf("Even number") : printf("Odd number ");
return 0;
}
