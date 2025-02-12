#include<stdio.h>
int main () {
    int sp,cp;
    printf("enter sp and cp : ");
    scanf("%d%d",&sp,&cp);

    if(sp>cp)
    {
        printf("profit");
    }
    else if(sp<cp)
    {
        printf("loss");
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}