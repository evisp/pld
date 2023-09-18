#include "student.h"

int linearSearch(struct Student arr[], int n, char searchName[]) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(arr[i].name, searchName) == 0) {
            return i; // Student found, return index
        }
    }
    return -1; // Student not found
}


// Function to perform binary search on student records by name
int binarySearch(struct Student arr[], int low, int high, char key[]) {
    while (low <= high) {
        int mid = (low + high) / 2;
        int cmp = strcmp(arr[mid].name, key);
        
        if (cmp == 0) {
            return mid; // Student found
        } else if (cmp < 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1; // Student not found
}