#define MATHEMATICS_CORE
#define MATHEMATICS_CONSTANTS
#define MATHEMATICS_FUNCTIONS
#define MATHEMATICS_CONVERSIONS

#include <stdio.h>

#include "../mathematics.h"

int main()
{

    double x = NAN;

    if (isnan(&x) == 0) {
        printf("Is NaN");
    } else {
    printf("Is not nan");
    }
}
