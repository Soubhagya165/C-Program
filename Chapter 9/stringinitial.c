#include<stdio.h>
#include<string.h>
int main () {
    char str[5] = {'s','i','l','u'};
    char* ptr = str;
    for(int i = 0;*ptr!= '\0';ptr++)
    {
        printf("%c",*ptr);
    }
    return 0;
}