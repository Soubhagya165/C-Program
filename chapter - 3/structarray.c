#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[100];
    int age;
    int roll;
    float marks;
}student;
int main () {
    student arr[2];
    for(int i = 0;i<2;i++)
    {
        printf("Enter name of the %d th student : ",i+1);
        scanf("%s",&arr[i].name);
        printf("Enter the age of %dth student : ",i+1);
        scanf("%d",&arr[i].age);
        printf("Enter roll of the %dth student : ",i+1);
        scanf("%d",&arr[i].roll);
        printf("Enter marks of the %dth student : ",i+1);
        scanf("%f",&arr[i].marks);
        printf("\n");
    }

    for(int i = 0;i<2;i++)
    {
        printf("The name = %s\n",arr[i].name);
        printf("The age = %d\n",arr[i].age);
        printf("The roll = %d\n",arr[i].roll);
        printf("The marks = %f\n",arr[i].marks);
        printf("\n");
    }

    return 0;
}