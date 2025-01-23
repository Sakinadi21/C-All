#include<stdio.h>
#define PI 3.145926359
#define area(r)(PI*r*r)
int main(){
    printf("PI = %f\n",PI);
     double x = 3.1415926359;
    printf("%.10f\n",x);
    printf("%f",area(10));
}
