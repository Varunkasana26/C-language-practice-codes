#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    typedef struct legendarypokemon{
        //int hp;
        //int speed;
        //int attack;
        //char tier;
        //char name[15];
        pokemon normal;
        char ability[10];
    }legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.attack = 180;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.hp=150;
    mewtwo.normal.speed=180;
    mewtwo.normal.tier='S';

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    }godpokemon;

    godpokemon arceus;
    strcpy(arceus.legend.normal.name,"Arceus");
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability,"Turn anyone into stone");
    arceus.legend.normal.attack=500;
    arceus.legend.normal.hp=1000;
    arceus.legend.normal.speed=400;
    arceus.legend .normal.tier = 'G';
    
    return 0;
}