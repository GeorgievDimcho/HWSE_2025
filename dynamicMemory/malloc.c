#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#define BUFLEN 20
struct _data
{
    char name[BUFLEN];
    unsigned int age : 8;
    unsigned int id : 16;
};
int main(void)
{
    int *pI;
    printf("sizeofint: %ld\n", sizeof(int));
    pI = malloc(4 * sizeof(int)); // allocate memory for 4 integer values
    double *pMem = (double *)calloc(100, sizeof(*pMem));
    if (pI == NULL)
        perror("malloc pI");
    *pI = 42; // put some data into the allocated memory
    *(pI + 1) = -42;
    *(pI + 2) = 0xABCDEF;
    *(pI + 3) = 0xC0FFEE;
    for (int i = 0; i < 4; i++)
    { // print the data
        printf("Address: %p Value in Hex: %X\n",
               (void *)(pI + i), *(pI + i));
    }
    free(pI); // free the memory
    int n;
    struct _data *pS;
    pS = (struct _data *)malloc(2 * sizeof(struct _data)); // allocate memory for two structures
    if (pS == NULL)
        perror("malloc pS");
    snprintf(pS->name, sizeof(pS->name), "Hello"); // put some data into the structures
    pS->age = 42;
    pS->id = 1;
    snprintf((pS + 1)->name, sizeof(pS->name), "World");
    (pS + 1)->age = 84;
    (pS + 1)->id = 2;
    for (int i = 0; i < 2; i++) // print the data
        printf("Address: %p, name[%d]: %s, age[%d]: %d, id[%d]: %d\n",
               (void *)(pS + i), i, (pS + i)->name, i,
               (pS + i)->age, i, (pS + i)->id);
    free(pS); // free the memory
    return 0;
}
