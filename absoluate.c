#include <stdio.h>
int main(){
int n;
printf("Enter a number \n");
scanf("%d",&n);
if(n<0) //if n is neg then make it pos
{
    n= n*(-1);
}
    printf("The absolute value is : %d",n);

return 0;}
