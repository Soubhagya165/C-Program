#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "soubhagya kumar mishra";
    char *ptr = str;
    for (int i = 0; *ptr != '\0'; i++)
    {
        printf("%c", *ptr);
       ptr++;
    }
    return 0;
}