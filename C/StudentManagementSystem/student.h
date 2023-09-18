#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char name[50];
    int age;
    float grade;
} Student;

//Sorting Algorithms
void bubbleSort(Student arr[], int n);
void quickSort(Student arr[], int low, int high);
int partition(Student arr[], int low, int high);

//Searching Algorithms 
int linearSearch(Student arr[], int n, char searchName[]);
int binarySearch(Student arr[], int low, int high, char key[]);

// Other utilities
void printStudents( Student arr[], int n);

#endif