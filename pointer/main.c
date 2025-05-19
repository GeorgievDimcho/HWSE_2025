#include <stdio.h>
int main(void)
{
    char str[] = "-0-1-2-3-4-5-6-7-8-9-";
    char *pStr = NULL;
    pStr = &str;         // pStr points to address of str[0] -> '-'
    *(pStr + 11) = '\0'; // modify the string at an offset of 11 chars
    // to the right replacing the '5' with a '\0'
    pStr++; // increment the address; pStr points to the
    // address str[1] where a '0' is stored
    *pStr = '4'; // access the value at the address replace
    // the '0' with a '4'
    pStr = pStr + 2; // increment the address by 2; pStr now points
    // to the address of str[3] where a '1' is stored
    *pStr = '3'; // access the value at the address replace
    // the '1' with a '3'
    printf("%s\n", pStr - 3); // print from the address up to a '\0', i.e. we
    // start at str[3-3] => str[0] up to str[11]
    // it prints: "-4-3-2-3-4-"
    return 0;
}
