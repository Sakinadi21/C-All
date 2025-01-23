#include<stdio.h>

void england(){
printf("You are in England\n");
return;
}


void india(){
printf("You are an Indian fool\n");
england();
return;
}

void bd(){
printf("I am a proud Bangladeshi\n");
india();
return;
}

int main(){
bd();
return 0;
}

