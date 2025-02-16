#include <stdio.h>
void silu()
{
    printf("soubhagya kumar mishra\n");
    printf("silu\n");
    return;
}
void greet ()
{
    printf("Good morning\n");
    printf("How are you ??\n");
    silu();
    return;
}
int main()
{
    greet();
    greet();
    greet();
    return 0;
}