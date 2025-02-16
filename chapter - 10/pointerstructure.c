#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
} pokemon;

int main()
{
    pokemon pikachu;
    pikachu.hp = 70;
    pikachu.attack = 100;
    pikachu.speed = 456;

    pokemon* x = &pikachu;
    printf("%p\n",&pikachu);
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",&pikachu.name);
    return 0;
}