#include<stdio.h>
#include<string.h>
int main () {
    struct person{
        char name [50];
        int age;
        float salary;
    }person1,person2;

    struct person;{
        strcpy(person1.name,"Silu");
        person1.age = 21;
        person1.salary = 20000;
    }

    struct person;
    {
        strcpy(person2.name,"Banty");
        person2.age = 22;
        person2.salary = 27000;
    }

    printf("The name of the 1st person is %s\n",person1.name);
    printf("The age of the 2nd person is %d\n",person2.age);

    return 0;
}