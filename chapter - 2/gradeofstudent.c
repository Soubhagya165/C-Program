#include<stdio.h>
int main () {
    int mark;
    printf("enter mark : ");
    scanf("%d",&mark);

    if(mark>=90 && mark<=100)
    {
        printf("Excellent");
    }
    else if(mark>=80 && mark<90)
    {
        printf("Very Good");
    }
    else if(mark>=70 && mark<80)
    {
        printf("good");
    }
    else if(mark>=60 && mark<70)
    {
        printf("Can do better");
    }
    else if(mark>=50 && mark<60)
    {
        printf("Average");
    }
    else if(mark>=40 && mark<50)
    {
        printf("below average");
    }
    else if(mark<40)
    {
        printf("Fail");
    }
    return 0;
}