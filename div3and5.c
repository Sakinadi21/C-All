#include<stdio.h>
int main(){
int n ;
printf("Enter a positive integer ");
scanf("%d",&n);
if(n%5==0 || n%3==0){  //in one stat write divisble by 15
    printf("%d is divisible by 5 and 3 ",n);
}
else
     printf("%d is not divisible by 5 and 3 ",n);

return 0;}
