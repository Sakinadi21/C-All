#include<stdio.h>
int main()
{  int n ;
  printf("Enter the number of lines : ");
  scanf("%d",&n);
  for(int i = 1;i<=n ;i++){//for lines
            for(int k = 1; k<=n-i;k++){ //for spaces
        printf(" ");
    }
    for(int j = 1; j<=2*i-1;j++){ //for  stars
        printf("%d",j);
    }
  printf("\n");
}
    return 0;
}


