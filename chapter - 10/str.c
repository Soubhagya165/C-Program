#include <stdio.h>
#include <string.h>

#define MAX 100  // Maximum number of students

// Define the structure for student details
struct Student {
    int roll_no;
    char name[50];
    float marks;
    char grade;
};

int main() {
    struct Student students[MAX];
    int n;
    char search_name[50];
    int found = 0;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        getchar();  // Clear the newline character from the input buffer
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // Remove newline character
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Assign grade based on marks
        if (students[i].marks >= 90) {
            students[i].grade = 'A';
        } else if (students[i].marks >= 75) {
            students[i].grade = 'B';
        } else if (students[i].marks >= 50) {
            students[i].grade = 'C';
        } else {
            students[i].grade = 'F';
        }
    }

    // Input the name to search
    printf("\nEnter the name of the student to search: ");
    getchar();  // Clear the newline character from the input buffer
    fgets(search_name, sizeof(search_name), stdin);
    search_name[strcspn(search_name, "\n")] = '\0';  // Remove newline character

    // Search for the student and print their marks
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("\nDetails of the student '%s':\n", search_name);
            printf("Roll No: %d\n", students[i].roll_no);
            printf("Marks: %.2f\n", students[i].marks);
            printf("Grade: %c\n", students[i].grade);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent '%s' not found in the records.\n", search_name);
    }

    return 0;
}
