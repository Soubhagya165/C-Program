#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    } a, b, c;

    struct book;
    {
        a.pages = 100;
        a.price = 324;
        strcpy(a.name,"sl arora");
    }

    struct book;
    {
        b.pages = 345;
        b.price = 1235;
        strcpy(b.name,"HC verma");
    }

    struct book;
    {
        c.pages = 987;
        c.price = 321;
        strcpy(c.name,"arihant");
    }

    printf("The name of the book is %s\n",a.name);
    printf("The no. of pages int the book are %d\n",a.pages);
    printf("The price of the book is %f\n",a.price);
    printf("\n");

    printf("The name of the book is %s\n",b.name);
    printf("The no. of pages int the book are %d\n",b.pages);
    printf("The price of the book is %f\n",b.price);
    printf("\n");

    printf("The name of the book is %s\n",c.name);
    printf("The no. of pages int the book are %d\n",c.pages);
    printf("The price of the book is %f\n",c.price);
    printf("\n");
    return 0;
}