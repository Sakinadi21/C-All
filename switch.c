#include<stdio.h>

int main(){
    int n;
    printf("enter day number(1-7) : ");
    scanf("%d",&n);
    switch(n){
    case 1:
    printf("Saturday\n");
    break;
    case 2:
    printf("Sunday");
    break;
    case 3:
    printf("Monday");
    break;
    case 4:
    printf("Tuesday");
    break;
    case 5:
    printf("Wednesday");
    break;
    case 6:
    printf("Thursday");
    break;
    case 7:
    printf("Friday");
    break;
    default:
    printf("Invalid");
    }
}
