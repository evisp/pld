#include "student.h"


int main() {
    // Create an array of five students
    Student students[5] = {
        {"Alice", 20, 85},
        {"Bob", 22, 92},
        {"Charlie", 21, 78},
        {"David", 19, 95},
        {"Eve", 23, 88}
    };
    int n = 5;

    // Sort the student records by name
    quickSort(students, 0, n - 1);

    // Interactive CLI menu
    int choice;
    char searchName[50];
    do {
        printf("\nMenu:\n");
        printf("1. Print all students\n");
        printf("2. Search for a student by name\n");
        printf("3. Sort students by grade\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printStudents(students, n);
                break;
            case 2:
                printf("Enter the name to search for: ");
                scanf("%s", searchName);
                int result = binarySearch(students, 0, n - 1, searchName);
                if (result != -1) {
                    printf("Student found:\n");
                    printf("Name: %s\n", students[result].name);
                    printf("Age: %d\n", students[result].age);
                    printf("Grade: %.2f\n", students[result].grade);
                } else {
                    printf("Student not found.\n");
                }
                break;
            case 3:
                // Sort the students by name
                quickSort(students, 0, n - 1);
                printf("Students sorted by name.\n");
                printStudents(students, n);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}