/*Program on structure. */
#include <stdio.h>

// Defining a structure to represent a student
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student student1;

    // Assign values to the structure members
    printf("Enter the student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin); // Reading name (including spaces)
    
    printf("Enter the student's age: ");
    scanf("%d", &student1.age);

    printf("Enter the student's marks: ");
    scanf("%f", &student1.marks);

    // Displaying the values stored in the structure
    printf("\nStudent Information:\n");
    printf("Name: %s", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
