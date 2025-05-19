#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE * f;
    f = fopen("text2.txt", "r");

    char text[20]; 
    
    fgets(text, 20, f);

    fread()
    printf("%s\n", text);
    return 0;
}