#include <stdio.h>
#include <string.h>
int main()
{
    union book
    {
        // char name[20];
        float price;
        int pages;
    } a, b, c;

   

    union book;
    {
        c.pages = 987;
        c.price = 321;
        // strcpy(c.name,"arihant");
    }

   

    // printf("The name of the book is %s\n",c.name);
    printf("The no. of pages int the book are %d\n",c.pages);
    printf("The price of the book is %f\n",c.price);
    printf("\n");
    return 0;
}