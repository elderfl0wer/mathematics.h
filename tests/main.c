#define MATHEMATICS_FUNCTIONS

#include <stdio.h>
#include "../mathematics.h"

int main()
{
    double x = -1;
    double y = 2;

    printf("%.15f\n", mod(x));
    printf("%.15f\n", min(x, y));
}
