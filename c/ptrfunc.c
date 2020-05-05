// ptrfunc.c - Demnonstration of declaring and using a pointer to a function

#include <stdio.h>

// the function prototype

double square(double x);

// The pointer declaration.

double (*ptr) (double x);

int main( void )
{
    // Initialize p to point to square()

    ptr = square;

    // Call square() two ways
    printf("%f  %f\n", square(6.6), ptr(6.6));
    return 0;
}

double square(double x)
{
    return x * x;
}