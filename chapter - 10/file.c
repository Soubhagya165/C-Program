#include<stdio.h>
#include<string.h>
int main () {
    FILE*ptr; // file creating
    char x[100];

    ptr = fopen("silu.txt","w"); //file opening
    // if(ptr == NULL)
    // {
    //     printf("Error");
    //     return 1;
    // }

    fprintf(ptr,"Hello this is my file\n"); //file writing
    fprintf(ptr,"open my file\n");
    fclose(ptr);

    ptr = fopen("silu.txt","r");  //file reading
    // if(ptr == NULL)
    // {
    //     printf("Errror opening\n");
    //     return 1;
    // }

    printf("reading from the file : \n");
    while(fgets(x,sizeof(x),ptr) != NULL)
    {
        printf("%s",x);
    }
    fclose(ptr);  //file closing
    return 0;
}