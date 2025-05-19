#include <stdio.h>

void sth (char * hin, char * retur) {

    hin[0] = 'a';
    hin[1] = 'b';
    hin[2] = 'c';
    hin[3] = '\0';
    
    //hin = 
}

int main() {
    char hin[50];
    char retur[50];
    sth(hin, retur);
    printf("hin: %s\n", hin);
    return 0; 
}
