#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main () {
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;
    typedef struct legendary_pokemon
    {
        pokemon normal;
        char ability[10];
    }legendary_pokemon;

    legendary_pokemon pikachu;
    {
        pikachu.normal.hp = 100;
        strcpy(pikachu.ability,"Pressure");
        pikachu.normal.attack = 200;
        strcpy(pikachu.normal.name,"Pikachu");
        pikachu.normal.tier = 'A';
        pikachu.normal.speed = 30;
    }
    printf("%s",pikachu.ability);
    return 0;
}