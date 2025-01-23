#include<stdio.h>
int main()
{
    int i = 2*3/4+4/4+8-2+5/8 ;
/*  BODMAS
    ( 2*3 ) / 4 = 6/4 = 1
    2*(3/4) = 2 * 0 =0
    i = 1+1+8-2+0 = 0 = 8
    */
    printf("%d",i);

}
