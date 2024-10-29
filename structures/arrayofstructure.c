#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    pokemon arr[10];// arr[0],arr[1],....arr[9];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"pikachu");

    arr[1].attack = 150;
    arr[1].hp = 200;
    arr[1].speed = 10;
    arr[1].tier = 'A';
    strcpy(arr[1].name,"charizard");

    arr[2].attack = 250;
    arr[2].hp = 300;
    arr[2].speed = 60;
    arr[2].tier = 'S';
    strcpy(arr[2].name,"mew");

    arr[3].attack = 80;
    arr[3].hp = 600;
    arr[3].speed = 40;
    arr[3].tier = 'B';
    strcpy(arr[3].name,"pidgeotto");

    for(int i=0;i<4;i++){
        printf("Name: %s\n",arr[i].name);
        printf("Attack: %d\n",arr[i].attack);
        printf("Hp: %d\n",arr[i].hp);
        printf("Speed: %d\n",arr[i].speed);
        printf("Tier: %c\n",arr[i].tier);
        printf("\n");
    }
    return 0;
}