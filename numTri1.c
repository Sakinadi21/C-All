
#include <stdio.h>
int main(){
  int n;
  printf("enter number of rows : ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){ //no of lines / rows -> i
    for(int j=1;j<=i;j++){  //no of columns / num -> j
        printf("%d ",j);//j ke print krte hbe
        // i + j = n + 1  ->  j = n + 1 - i
    }
    printf("\n");
  }
return 0;
}


