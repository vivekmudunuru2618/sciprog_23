#include <stdio.h>
#include <stdlib.h>

//  Here is a function to allocate memory for an array of integers.
int *allocate(int n) {
    int *p; // Here we are declaring a pointer variable p.
    p = (int *)malloc(n * sizeof(int)); // Allocation of memory for an array of integers and store its address in p.
    return p; // Return the pointer to the allocated memory.
}

// This is a function to fill an array with ones.
void fillwithones(int *array, int n) {
    int i;
    for (i = 0; i < n; i++) {
        array[i] = 1;
    }
}

// Function to print the elements of an array.
void printarray(int *array, int n) {
    int i; /
    for (i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, array[i]);
    }
}

// Function to free memory allocated for an array.
void freearray(int *array) {
    free(array); // Free the memory associated with the array.
}

int main() {
    int n, *a; // Declare integer n and a pointer to an integer a.

    printf("Size of the array:\n");
    scanf("%d", &n);

    a = allocate(n); // Allocate memory for an array of integers and store the pointer in a.
    fillwithones(a, n); // Fill the allocated array with ones.
    printarray(a, n);
    freearray(a); // Free the allocated memory.

    a = NULL; // Set the pointer a to NULL.
    return 0; 
}
