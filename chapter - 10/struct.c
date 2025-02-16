#include<stdio.h>
struct pokemon{
        int hp;
        int speed;
        int attack;
    };
int main () {
    struct pokemon pikachu;
    {
        pikachu.hp = 200;
        pikachu.speed = 23;
        pikachu.attack = 45;
    }
    printf("%d",pikachu.hp);
    return 0;
}