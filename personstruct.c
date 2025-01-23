#include<stdio.h>

int main(){

struct Person{
  char name[50];
  int salary;
  int age;

}stu1,stu2;
 strcpy(stu1.name,"Sakiba");
 printf("This person name is %s .\n",stu1.name);
 stu1.age = 20;
 stu1.salary =50000;
printf("Her age is %d and her monthly income is %d. \n\n",stu1.age,stu1.salary);


strcpy(stu2.name,"Mili");
 printf("This person name is %s .\n",stu2.name);
 stu2.age = 23;
 stu2.salary =40000;
printf("Her age is %d and her monthly income is %d . ",stu2.age,stu2.salary);







return 0;}
