#include<stdio.h>
int main(){

int a;
printf("Enter 1st integer number : \n");
scanf("%d",&a);

int b;
printf("Enter 2nd integer number : \n");
scanf("%d",&b);

int c;
printf("Enter 3rd integer number : \n");
scanf("%d",&c);

if(a>b){ //b is out of race
    if(a>c){
        printf("%d is greatest",a);
    }
        else {//a<c
            printf("%d is greatest ",c);
    }
}
    else { // b >a ->a boro th naaaaaaaaaaaaaa
            if(b>c){
               printf("%d is greatest",b);
            }
        else {//c>b
             printf("%d is greatest",c);
        }
    }

return 0;
}


