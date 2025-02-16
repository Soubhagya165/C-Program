#include <stdio.h>
int main()
{
    void india();
    india();
    return 0;
}
void england()
{
    printf("i am in england\n");
    return;
}
void india()
{
    printf("i am in india\n");
    void australia();
    australia();
    return;
}
void australia()
{
    printf("i am in australia\n");
    void england();
    england();
    return;
}