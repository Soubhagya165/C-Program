#include<stdio.h>
int main () {
    int x1,y1;
    printf("enter co ordiantes of A : ");
    scanf("%d%d",&x1,&y1);

    int x2,y2;
    printf("enter co ordinates of B : ");
    scanf("%d%d",&x2,&y2);

    int x3,y3;
    printf("enter co ordinates of C : ");
    scanf("%d%d",&x3,&y3);

    int m1,m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if(m1 == m2)
    {
        printf("it can form a straight line");
    }
    else
    {
        printf("it can not form a straight line");
    }
    return 0;
}



