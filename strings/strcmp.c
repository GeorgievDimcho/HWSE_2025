#include <stdio.h>
#include <string.h>
int main()
 {
    char c[5];
    c[0] = 'a'; 
    c[1] = 'b';
    c[2] = 'c';
    c[3] = 'd';
    c[4] = '\0';

    // return code 1 -> no match 
    // return code 0 -> gleich
    int retCode = strcmp(c, "abcd");
    if(retCode == 0) {
        printf("char array: %s und string abcd match\n", c);
    } else {
        printf("char array: %s und string abcd -> NO match\n", c);
    }

    retCode = strcmp(c, "abcde");
    if(retCode == 0) {
        printf("char array: %s und string abcde match\n", c);
    } else {
        printf("char array: %s und string abcde -> NO match\n", c);
    }

    return 0;
 }