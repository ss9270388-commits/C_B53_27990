#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student s;            // normal struct variable
    struct Student *ptr;         // pointer to struct

    ptr = &s;   // pointer stores address of struct variable

    // Assign values using -> operator
    ptr->roll = 10;
    ptr->marks = 89.5;
    strcpy(ptr->name, "Rahul");

    // Display values using -> operator
    printf("Student Details:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    printf("Name: %s\n", ptr->name);

    return 0;
}
