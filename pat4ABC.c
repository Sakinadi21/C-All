#include<stdio.h>
int main()
{  int n ;
  printf("Enter the number of lines : ");
  scanf("%d",&n);
  int nsp = n-1;
  for(int i=1;i<=n;i++){

    for(int q = 1; q<=nsp;q++){ //space er jnno loop
        printf(" ");
    }
    nsp --;
    for(int j=1;j<=i;j++){ //number triangle
        printf("%c",j+64);
    }
     int a = i-1; //extra ja cilo
    for(int k=1;k<=i-1;k++){
        printf("%c",a+64);
        a--;
    }

  printf("\n");
}
return 0;
}

