#include "student.h"

// Function to print all students
void printStudents(Student arr[], int n) {
    printf("Student Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Grade: %.2f\n", arr[i].grade);
        printf("---------------\n");
    }
}