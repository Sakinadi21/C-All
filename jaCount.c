#include<stdio.h>
int main()
{
 int n;
 printf("Enter number : \n");
 scanf("%d",&n);

 int count = 0;
  while(n != 0){
    n = n/10;
    count++;
  }
  prinf("The no of digits are %d ",count);
return 0;
}

