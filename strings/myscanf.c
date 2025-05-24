#include <stdio.h>

int main() {
    char c1,c2;
    // &c1 -> 0xfabcd765 (hex)
    printf("enter two characters: ");
    // space bevor %c 
    // only relevant when inputing two chars in on eline separeted with whitespace
    scanf(" %c", &c1);
    scanf(" %c", &c2);
    printf("c1: %c\n", c1);
    printf("c2: %c\n", c2);
    return 0;
}