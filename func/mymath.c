#include <stdio.h>
static void myLog(const char *message, int value);
int num, sum = 42, i = 66; // global variables
static void myLog(const char *message, int value)
{ // static function - only valid in this file
    printf("%s = %d\n", message, value);
}
float mean(int *values)
{
    int i = 33, sum = 0; // local variables
    for (int i = 0; i < num; i++)
    { // block local variable
        //sum = sum + *(values + i);
        sum += values[i];
        if (i == num - 1)
            printf("Block local variable i = %d\n", i); // Block local variable i = 9
    }
    printf("Local variable i = %d\n", i); // Local variable i = 33
    myLog("Local variable sum", sum);     // Local variable sum = 55
    return sum / num;
}