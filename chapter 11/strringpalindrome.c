#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", &str);
    int a = strlen(str);
    printf("%d", a);
    int start = 0;int end = a-1;int is_palindrome = 1;
    while(start<end)
    {
        if(str[start] != str[end])
        {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if(is_palindrome)
    {
    printf("\nThe string is a palindrome");
    }
    else
    {
        printf("\nThe string is not a palindrome");
    }
    return 0;
}