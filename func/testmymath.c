#include <stdio.h>
#include "mymath.h"
int main(void)
{
    int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float result = 0.0;
    printf("Global variable i = %d\n", i);      // Global variable i = 66
    num = 10;                                   // initialize the global variable num declared in mymath.c
    result = mean(values);                      // call the "global" function mean() declared in mymath.c
    printf("Global variable sum = %d\n", sum);  // Global variable sum = 42
    printf("The mean value is: %lf\n", result); // The mean value is: 5.000000
    return 0;
}