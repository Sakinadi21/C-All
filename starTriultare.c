#include<stdio.h>
int main()
{  int n ;
  printf("Enter the number of lines : ");
  scanf("%d",&n);
  int nst = n;
  int nsp = 0;
  for(int i;i<=n;i++){
    for(int j=1;j<=nsp;j++){ //spaces
        printf(" ");
    }
    for(int k=1;k<=nst;k++){
        printf("*");
    }
    nsp++;
    nst--;
    printf("\n");
  }

return 0;
}

