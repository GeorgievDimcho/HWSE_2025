#include <stdio.h>
int add(int x, int y)
{
    return x + y; // the result is copied back and will be assigned to c
}
void recursive_function(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
        recursive_function(n + 1);
    }
}
int main(void)
{
    printf("%c", getc(stdin));
    int a = 5, b = 3, c;
    c = add(a, b); // a and b's values are copied to x and y, respectively
    // the return value is copied and stored in the variable c
    printf("%d\n", c);
    //recursive_function(0);
    //for(int i =0;i<10;i++){
    //    printf("%d ", i);
    //}
    return 0;
}