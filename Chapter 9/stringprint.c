#include<stdio.h>
#include<string.h>
int main () {
    char str [100];
    printf("Enter a string : ");
    scanf("%s",&str);
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}