#include <stdio.h>
int main(){
  int n;
  printf("enter number of rows : ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){ //no of lines / rows -> i
    for(int i=1;i<=n;i++){  //no of columns / num -> j
        printf("%d ",i);
    }
    printf("\n");
  }
return 0;
}

