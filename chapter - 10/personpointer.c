#include<stdio.h>
#include<string.h>
typedef struct person {
    int age;
    float weight;
}person;
void newperson(person* a,person* b)
{
    printf("%d\n",a->age);
    printf("%f\n",a->weight);
    printf("%d\n",b->age);
    printf("%f\n",b->weight);
    return;
}
void change(person* a)
{
    (*a).age = 34;
    (*a).weight = 67.98;
    return;
}

int main () {
    person a;
    {
        a.age = 29;
        a.weight = 45.87;
    }

    person b;
    {
        b.age = 43;
        b.weight = 45.9;
    }
    change(&a);
    newperson(&a,&b);
    return 0;
}