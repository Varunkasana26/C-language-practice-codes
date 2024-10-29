#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

int main(){
    pokemon pikachu = {60,70,100,'A',"Pikachu"};
    // strcpy(pikachu.name,"Pikachu");
    // pikachu.attack=30;
    // pikachu.hp=100;
    // pikachu.speed=50;
    // pikachu.tier='B';
    //int* x-> address of integer value
    pokemon* x = &pikachu;
    printf("%p\n",x);
    printf("%p\n",pikachu.name);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    return 0;
}