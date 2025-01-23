#include<stdio.h>
int main(){

double x1,y1,x2,y2,x3,y3;

printf("Enter x1 : \n");
scanf("%d",x1);

printf("Enter x2 : \n");
scanf("%d",x2);

printf("Enter x3 : \n");
scanf("%d",x3);

printf("Enter y1 : \n");
scanf("%d",y1);

printf("Enter y2 : \n");
scanf("%d",y2);

printf("Enter y3 : \n");
scanf("%d",y3);

double m1 = (y2-y1)/(x2-x1);
double m2 = (y3-y2)/(x3-x2);

if(m1 == m2){
   printf("All the three points falls on a single line");
}
 else{
     printf("All the three points does not fall on a single line");
}

return 0;
}
