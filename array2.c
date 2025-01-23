#include<stdio.h>
int main(){
int arr[5];
for(int i = 0;i<=4 ;i++){
    int a = i + 1;
    printf("Enter element number %d\n ",i);
    scanf("%d",&arr[i]);
}

for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
//printf("The element is %d",arr[1]);
return 0;
}

