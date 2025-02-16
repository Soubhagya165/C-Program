#include<stdio.h>
#include<string.h>
int main () {
   typedef struct Cricketer {
        char name[20];
        int age;
        int matches;
        float average;
    }cricketer;

    cricketer arr[3];
    for(int i = 0;i<3;i++)
    {
        printf("Enter name of the Cricketer : ");
        scanf("%s",&arr[i].name);  
        printf("Enter age of the Cricketer : ");
        scanf("%d",&arr[i].age); 
        printf("Enter matches played by the cricketer : ");
        scanf("%d",&arr[i].matches); 
        printf("Enter Average of the Cricketer : "); 
        scanf("%f",&arr[i].average); 
        printf("\n");
    }

    for(int i = 0;i<3;i++)
    {
        printf("The name of the Cricketer is : %s\n",arr[i].name);
        printf("The Age of the Cricketer is : %d\n",arr[i].age);
        printf("The Matches played by the Cricketer is : %d\n",arr[i].matches);
        printf("The Average of the Cricketer is : %f\n",arr[i].average);
        printf("\n");
        
    }
    return 0;
}