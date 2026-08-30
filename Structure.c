#include <stdio.h>
#include <string.h>

// 1. Defining the structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    // 2. Declaring structure variables
    struct Student student1;
    struct Student student2;

    // --- Hardcoding values for Student 1 ---
    student1.rollNumber = 101;
    strcpy(student1.name, "Alice"); // Using strcpy for strings
    student1.marks = 92.5;

    // --- Taking User Input for Student 2 ---
    printf("Enter details for Student 2:\n");
    
    printf("Enter Roll Number: ");
    scanf("%d", &student2.rollNumber);
    
    printf("Enter Name: ");
    // Clear the input buffer and read string with spaces
    scanf(" %[^\n]s", student2.name); 
    
    printf("Enter Marks: ");
    scanf("%f", &student2.marks);

    // 3. Displaying the structure data
    printf("\n--- Displaying Student Records ---\n");
    
    printf("Student 1:\n");
    printf("Roll No: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n\n", student1.marks);

    printf("Student 2:\n");
    printf("Roll No: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}

