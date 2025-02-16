#include<stdio.h>
    struct student{
        int roll_no;
        float marks;
        char name[15];
    };
int main() {
    struct student silu;
    {
        silu.name;
        printf("Enter name of the student : ");
        scanf("%s",&silu.name);
        silu.roll_no;
        printf("Enter the roll no of the student : ");
        scanf("%d",&silu.roll_no);
        silu.marks;
        printf("Enter the mark of the student : ");
        scanf("%f",&silu.marks);
    }
    printf("The roll_no of the student is : %d\n",silu.roll_no);
    printf("The mark of the student is : %f\n",silu.marks);
    for(int i = 0;i != '\0';i++)
    {
    printf("The name of the student is : %c\n",silu.name);
    }
    return 0;
}