#include<stdio.h>
int main () {
    int marks[10],i;
    for(i = 0;i<= 9;i++)
    {
        printf("Enter the mark of %dth student : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(i = 0;i<= 9;i++)
    {
        if(marks[i]<35)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}