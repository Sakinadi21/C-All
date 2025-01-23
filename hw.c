#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //scope of varaiable
    for(int i=1;i<n;i++){
        printf("I love you my man \n");
        /*check condition , go inside loop , updation
        */
    }
    printf("%d",i);
    return 0;
}
