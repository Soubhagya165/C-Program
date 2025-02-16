#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    char name[20];
    char department[20];
    char course[20];
    int year;
}student;

void function(student s,student k)
{
    if(s.department == k.department)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int main () {
    student silu;{
        silu.roll = 36;
        strcpy(silu.name,"Soubhagya");
        strcpy(silu.department,"SOAS");
        strcpy(silu.course,"MCA");
        silu.year = 2024;
    }

    student kalpa;{
        kalpa.roll = 1;
        strcpy(kalpa.name,"Kalpasundar");
        strcpy(kalpa.department,"SOAS");
        strcpy(kalpa.course,"MSC");
        kalpa.year = 2024;
    }

    function(silu,kalpa);
    return 0;
}