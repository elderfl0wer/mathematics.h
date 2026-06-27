#define MATHEMATICS_CORE
#define MATHEMATICS_CONSTANTS
#define MATHEMATICS_FUNCTIONS

#include <stdio.h>

#include "../mathematics.h"

int main()
{
    double x = PI;

    if (clamp(x, 1.0, 3.0) == 1) {
        printf("true");
    } else {
    printf("not true");
    }
    
}