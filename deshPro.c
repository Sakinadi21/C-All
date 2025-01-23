#include<stdio.h>

int main(){
void india();
india(); //calling india //1
return;
}

void india(){
printf("You are in India\n");//2
void australia();
australia(); //calling australia //3
return;
}
void australia(){
printf("You are in Australia\n"); //4
void england();
england();//calling england
return;
}
void england(){
printf("You are in England\n");
return;
}

