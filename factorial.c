
#include<stdio.h>
int main()
{
int n;
printf("Enter a number : \n ");
scanf("%d",&n);
// 5! = 5x4x3x4x2x1
int product= 1;
for(int i=1;i<=n;i++){
   product = product * i;
   printf("The factorial  of %d is : %d \n",i,product);
}

return 0;
}


