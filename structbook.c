#include<stdio.h>
int main(){

struct book{
   char name[5];
   int noOfPages;
   float price;


}a,b,c;

a.noOfPages = 100;
a.price = 411.5;
//a.name = "Secret Seven";
//a.name[0] = 'S';
//a.name[1] = 'e';
//a.name[2] = 'v';
//a.name[3] = 'e';
//a.name[4] = 'n';
//printf("The book name is %d\n ",a.name);
char ch[13];
strcpy(ch,"Secret Seven");
printf("this book name is %s \n",ch);

strcpy(a.name,"C programming");
printf("Another book is %s \n",a.name);
printf("it's total page number is %d\n",a.noOfPages);
printf("it's price %f\n",a.price);


b.noOfPages = 200;
b.price = 450;
strcpy(b.name,"Java");
printf("This one is %s \n",b.name);
printf("%f\n",b.price);

return 0;

}
