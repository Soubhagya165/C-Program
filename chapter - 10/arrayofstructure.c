#include<stdio.h>
#include<string.h>
int main () {
typedef struct pokemon{
    char tier;
    int hp;
    float power;
    int attack;
    char name[40];
}pokemon;

pokemon arr[5];
arr[0].tier = 'A';
arr[0].hp = 300;
arr[0].power = 432;
arr[0].attack = 34;
strcpy(arr[0].name,"Pikachu");

arr[1].tier = 'B';
arr[1].hp = 800;
arr[1].power = 482;
arr[1].attack = 94;
strcpy(arr[1].name,"Charrizard");

arr[2].tier = 'C';
arr[2].hp = 700;
arr[2].power = 4872;
arr[2].attack = 234;
strcpy(arr[2].name,"Pikachu");

arr[3].tier = 'A';
arr[3].hp = 300;
arr[3].power = 432;
arr[3].attack = 34;
strcpy(arr[3].name,"Pikachu");

arr[4].tier = 'A';
arr[4].hp = 300;
arr[4].power = 432;
arr[4].attack = 34;
strcpy(arr[4].name,"Pikachu");

for(int i = 0;i<5;i++)
{
    printf("%c\n",arr[i].tier);
    printf("%d\n",arr[i].hp);
    printf("%f\n",arr[i].power);
    printf("%d\n",arr[i].attack);
    printf("%s\n",arr[i].name);
    printf("\n");
}
return 0;
}