#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person = {"Alice", 25};
    struct Person readPerson;

    // Writing to a file
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    
    // Write the structure to the file
    fwrite(&person, sizeof(struct Person), 1, file);
    fclose(file);

    // Reading from the file
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Read the structure from the file
    fread(&readPerson, sizeof(struct Person), 1, file);
    fclose(file);

    // Output the read data
    printf("Name: %s\n", readPerson.name);
    printf("Age: %d\n", readPerson.age);

    return 0;
}
