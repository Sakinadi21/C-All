#include<stdio.h>
int main()
{
int n;
printf("Enter a number : \n ");
scanf("%d",&n);
// 1 - 2 + 3 - 4 + 5 -6 + 7 =4 ... n terms
//odd numbers -> add
// even numbers -> subtract
int sum = 0;

if(n%2 == 0){
    sum = -n/2;
}
else {
    sum = -n/2 + n ;
}

/*
for(int i=1;i<=n;i++){
    if(i%2 != 0) sum = sum + i;
    else sum = sum - i;
} */
printf("The sum is : %d ",sum);
return 0;
}


