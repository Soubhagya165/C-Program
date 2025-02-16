#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[20];
    int roll_no;
    int age;
    float marks;
}student;
int main () {
    student silu;{
        strcpy(silu.name,"Soubhagya");
        silu.roll_no;
        scanf("%d",&silu.roll_no);
        silu.age = 21;
        scanf("%d",&silu.age);
        silu.marks = 76;
        scanf("%f",&silu.marks);
    }
     typedef struct employee{
        student normal;
        int power;
    }chiku;

    chiku chikun;{
        chikun.normal.age = 30;
    }
    printf("%d\n",silu.age);
    printf("%s\n",silu.name);
    printf("%d\n",chikun.normal.age);

    return 0;
}