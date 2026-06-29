#define MATHEMATICS_CORE
#define MATHEMATICS_CONSTANTS
#define MATHEMATICS_FUNCTIONS
#define MATHEMATICS_CONVERSIONS

#include <stdio.h>

#include "../mathematics.h"

int main()
{
    double ex = 3.14;
    double xe = -4.1;

    printf("Pre-floor: %f %f\n", ex, xe);
    m_floor(&ex);
    m_floor(&xe);
    printf("Post-floor: %f %f\n", ex, xe);
}