#include <stdio.h>
#include "non_prog_req3.h"
#define RED 1
#define GREEN 1
#define RUN_MAIN 0
int main()
{
#if RED
    printf("%s\n", red());
#endif

#if GREEN
    printf("%s\n", green());
#endif
#if RUN_MAIN
    // rest of main code
    printf("%s\n", "main running...");
#endif
    return 0;
}
