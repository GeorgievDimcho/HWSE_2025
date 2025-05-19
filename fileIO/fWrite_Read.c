#include <stdio.h>

int main() {

    // 
    //Step 1 - nehmen src -> datei (test.bin)
    double src[5] = {1., 2., 3., 4., 5.};
    FILE *pFw, *pFr;
    pFw = fopen ("test.bin", "wb"); 
    fwrite (src, sizeof (double), 3, pFw);
    fclose (pFw);
    //--
    //Step 2 - test.bin auslesen -> double array spreichern
    double dest[5];
    pFr = fopen ("test.bin", "rb");
    fread (dest, sizeof (double), 4, pFr); 
    printf ("%.1f\n", dest[0]);
    printf ("%.1f\n", dest[1]); 
    printf ("%.1f\n", dest[2]);  
    printf ("%.1f\n", dest[3]);


}