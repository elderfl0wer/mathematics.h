#define MATHEMATICS_CORE
#define MATHEMATICS_CONSTANTS
#define MATHEMATICS_FUNCTIONS
#define MATHEMATICS_CONVERSIONS

#include <stdio.h>

#include "../mathematics.h"

int main()
{
    double ex = PI;

    printf("Pre-truncation: %.15f\n", ex);
    truncate(&ex);
    printf("Post-truncation: %.15f\n", ex);
}