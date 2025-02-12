#include<stdio.h>
int main () {
    int ram,shyam,ajay;
    printf("Enter ages of Ram,Shyam and Ajay : ");
    scanf("%d%d%d",&ram,&shyam,&ajay);

    if(ram<shyam && ram<ajay)
    {
        printf("Ram is youngest");
    }
    if(shyam<ram && shyam<ajay)
    {
        printf("Shyam is youngest");
    }
    if(ajay<ram && ajay<shyam)
    {
        printf("Ajay is youngest");
    }
    return 0;
}