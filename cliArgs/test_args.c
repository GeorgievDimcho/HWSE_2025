// C program named mainreturn.c to demonstrate the working
// of command line arguement
#include <stdio.h>
#include <string.h>

// defining main with arguments
int main(int argc, char* argv[])
{
    printf("You have entered %d arguments:\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    getc(stdoin)

    //printf("%d", strcmp(s1, s2));
    if(!strcmp(argv[1],"--help")) {
        printf("help: \n");
    } else {
        printf("didn't work\n");
    }
    return 0;
}