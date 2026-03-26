#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define maximum number of students
#define MAX_STUDENTS 100

// Define structure for student
typedef struct {
    char name[50];
    int roll_number;
    float marks;
} Student;

// Function to display menu
void displayMenu() {
    printf("\nStudent Management System\n");
    printf("1. Add Student\n");
    printf("2. Display All Students\n");
    printf("3. Search Student by Roll Number\n");
    printf("4. Exit\n");
}

// Function to add a new student
void addStudent(Student students[], int *num_students) {
    if (*num_students >= MAX_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    printf("\nEnter student details:\n");
    printf("Name: ");
    scanf("%s", students[*num_students].name);
    printf("Roll Number: ");
    scanf("%d", &students[*num_students].roll_number);
    printf("Marks: ");
    scanf("%f", &students[*num_students].marks);

    (*num_students)++;
    printf("Student added successfully.\n");
}

// Function to display all students
void displayAllStudents(Student students[], int num_students) {
    if (num_students == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nAll Students:\n");
    printf("Roll Number\tName\tMarks\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d\t\t%s\t%.2f\n", students[i].roll_number, students[i].name, students[i].marks);
    }
}

// Function to search student by roll number
void searchStudent(Student students[], int num_students) {
    int roll_number;
    printf("\nEnter roll number to search: ");
    scanf("%d", &roll_number);

    int found = 0;
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll_number) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", roll_number);
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int num_students = 0;
    int choice;

    do {
        displayMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &num_students);
                break;
            case 2:
                displayAllStudents(students, num_students);
                break;
            case 3:
                searchStudent(students, num_students);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
