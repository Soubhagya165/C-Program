#include<stdio.h>
int main () {
    int mark[5];
    for(int i = 0;i<5;i++)
    {
        printf("Enter the mark of %dth student : ",i+1);
        scanf("%d",&mark[i]);
    }
    for(int i = 0;i<5;i++)
    {
        if(mark[i]<35)
        {
            printf("%d  ",i+1);
        }
    }
    return 0;
}