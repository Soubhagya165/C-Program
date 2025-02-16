#include<stdio.h>
#include<string.h>
int main () {
    char str[50];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);

    char str2[40];
    strcpy(str2,str);
    printf("%s\n",str2);
    int size = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        size++;
        i++;
    }
    // printf("The size of string is : %d\n",size);
    for(int i = 0,j = size-1;i <= j ; i++ , j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("The reversed string is : %s",str);
    return 0;
}