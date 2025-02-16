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

void function(pokemon p)
{
    printf("%d", p.hp);
    return;
}
void change(pokemon p)
{
    p.hp = 100;
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 100;
    pikachu.speed = 456;
    change(pikachu);
    function(pikachu);
    return 0;
}