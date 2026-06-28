#define MATHEMATICS_CORE
#define MATHEMATICS_CONSTANTS
#define MATHEMATICS_FUNCTIONS
#define MATHEMATICS_CONVERSIONS

#include <stdio.h>

#include "../mathematics.h"

int main()
{

    double x = 0.0;

    if (isnan(NAN) == 1) {
        printf("NAN is NAN");
    } else {
        printf("NAN isn't NAN");
    }
}
