#include<stdio.h>

int main(){
    int a;
    printf("Enter 1st operand :" );
    scanf("%d",&a);
    char ch;
    printf("Enter operator : ");
    scanf(" %c",&ch);
    int b;
    printf("Enter 2nd operand :" );
    scanf("%d",&b);
    switch(ch){
    case '+':
    printf("%d\n",a+b);
    break;
    case '-':
    printf("%d\n",a-b);
    break;
    case '*':
    printf("%d\n",a*b);
    break;
    case '/':
    printf("%f\n",(float)a/b);
    break;
    case '%':
    printf("%d\n",a%b);
    break;

    default:
    printf("Invalid Operator");
    }
}

