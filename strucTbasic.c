#include<stdio.h>
int main(){ //user defined data type
  struct pokemon{
   int hp;
   int speed;
   int attack;
   char tier;  //S,A,B,C,D

  } pikachu, charizard, newto;

  // struct pokemon pikachu;
   pikachu.attack = 60;
   pikachu.hp = 50;
   pikachu.speed = 100;
   pikachu.tier = 'A';
   printf("%d is pickachu attack \n",pikachu.attack);

  // struct pokemon charizard;
   printf("Enter attack of charizard : ");
   scanf("%d",&charizard.attack);
   printf("%d is attack of charizard",charizard.attack);
  // charizard.attack = 130;
   charizard.hp = 30;
   charizard.speed = 80;
   charizard.tier = 'S';


   // struct pokemon newto;
   newto.attack = 120;
   newto.hp = 20;
   newto.speed = 220;
   newto.tier = 'B';




return 0;
}
