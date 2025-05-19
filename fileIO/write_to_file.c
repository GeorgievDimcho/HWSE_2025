#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;
    float src[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    char test[30];
    strcpy(test,"dsfsdfdsf\n");
    printf("test: %s", test);
    f = fopen("test2.txt", "w");
    fprintf(f, "Test2Test3");
    return 0;
}

//num = fwrite();
    //int num = fwrite (src, sizeof (src[0]), 5, f); // write SIZE elements from "src" to file
    //printf ("wrote %d elements out of %d\n", num, 5);