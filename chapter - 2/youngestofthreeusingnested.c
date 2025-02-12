#include<stdio.h>
int main () {
    int ram,shyam,ajay;
    printf("enter the ages of ram,shyam and ajay : ");
    scanf("%d%d%d",&ram,&shyam,&ajay);

    if(ram<shyam)
    {
        if(ram<ajay)
        {
            printf("ram is youngest");
        }
        else
        {
            printf("ajay is youngest");
        }
    }
    else
    {
        if(shyam<ajay)
        {
            printf("shyam is youngest");
        }
        else
        {
            printf("ajay is youngest");
        }
    }
    return 0;
}