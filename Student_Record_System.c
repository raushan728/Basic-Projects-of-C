#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int rollNo;
    char name[50];
    float marks;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount < MAX_STUDENTS) {
        printf("Enter Roll Number: ");
        scanf("%d", &students[studentCount].rollNo);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[studentCount].name); // Read full name with spaces
        printf("Enter Marks: ");
        scanf("%f", &students[studentCount].marks);
        studentCount++;
        printf("Student record added successfully!\n");
    } else {
        printf("Cannot add more students. Storage is full!\n");
    }
}

void viewStudents() {
    if (studentCount == 0) {
        printf("No student records available!\n");
        return;
    }
    printf("Student Records:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollNo, students[i].name, students[i].marks);
    }
}

void searchStudent() {
    int roll;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == roll) {
            printf("Student Found - Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student with Roll Number %d not found!\n", roll);
}

void updateMarks() {
    int roll;
    float newMarks;
    printf("Enter Roll Number to update marks: ");
    scanf("%d", &roll);
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == roll) {
            printf("Enter new marks: ");
            scanf("%f", &newMarks);
            students[i].marks = newMarks;
            printf("Marks updated successfully!\n");
            return;
        }
    }
    printf("Student with Roll Number %d not found!\n", roll);
}

void deleteStudent() {
    int roll, found = 0;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == roll) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1]; // Shift records
            }
            studentCount--;
            found = 1;
            printf("Student record deleted successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Student with Roll Number %d not found!\n", roll);
    }
}

int main() {
    int choice;
    char repeat;

    do {
        printf("\nWelcome to Student Record System\n");
        printf("1. Add Student Record\n");
        printf("2. View All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Update Student Marks\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateMarks();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("Thank you for using Student Record System!\n");
                return 0;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

        printf("\nDo you want another operation? (Press 'y' to continue, any other key to exit): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("Thank you for using Student Record System!\n");
    return 0;
}