#include<stdio.h>
int main () {
    struct Date{
        int date;
        int month;
        int year;
    };

    struct Date arr[3];
    for(int i = 0;i<3;i++)
    {
        arr[i].date;
        scanf("%d",&arr[i].date);
        arr[i].month;
        scanf("%d",&arr[i].month);
        arr[i].year;
        scanf("%d",&arr[i].year);
        printf("\n");
    }
    if(arr[0].date == arr[1].date)
    {
        printf("The dates are same");
    }
    else
    {
        printf("The dates are different");
    }
    return 0;
}
