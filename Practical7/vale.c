#include <stdio.h> //We will load here the necessary libraries
#include <stdlib.h>
#include <math.h> //Since we will be using exponential function, we are using the math library

int factorial(int n); //Declaring the factorial function which will take the input int n

int main(void) {
    int i, order;  //Declaring the double variables here i and order
    double *terms, e; //Declaring the pointer terms and e

    printf("Enter the polynomial order: ");
    scanf("%d", &order);

    terms = (double *)malloc(order * sizeof(double)); //using dynamic memory allocation

    for (i = 0; i < order; i++) { //initialising a loop that will run from i to order-1
        terms[i] = 1.0 / (double)factorial(i + 1);
        printf("e term for order %d is %1.15lf\n", i + 1, terms[i]); //Printing the value of e term here
    }

    e = 1.0; //initialising the value of e here
    for (i = 0; i < order; i++) { /
        e = e + terms[i];
    }
    printf("The value of e will be: %1.14lf\n", e);

    free(terms);  //free the dynamically allocated memory

    double actual_e = exp(1.0);
    printf("The difference is: %1.101lf\n", e - actual_e);

    return 0;
}

int factorial(int n) { //defining the function factorial
    if (n < 0) {
        printf("Invalid: Error 404");
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
}
