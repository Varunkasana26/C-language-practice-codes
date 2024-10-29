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
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
int main(){
    // typedef struct pokemon{
    //     int hp;
    //     int speed;
    //     int attack;
    //     char tier;
    //     char name[15];
    // }pokemon;
    pokemon pikachu;
    pikachu.hp = 150;
    fun(pikachu);
    return 0;
}