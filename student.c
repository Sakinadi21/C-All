#include<stdio.h>
int main(){
int marks[10]={98,90,87,77,50,34,13,43,23,7};
for(int i=0;i<10;i++){
    if(marks[i]<35){
        printf("%d ",i);
    }
}
return 0;
}


