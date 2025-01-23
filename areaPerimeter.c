#include<stdio.h>
int main(){
    int l;
    printf("Enter length : \n  ");
    scanf("%d",&l);

    int b;
    printf("Enter breadth : \n  ");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p){
        printf("Area is greater than perimeter");
    }
    if(a==p){
        printf("Area is equal to perimeter");
    }
    if(a<p){
        printf("Area is less than perimeter");
    }
    return 0;
}
