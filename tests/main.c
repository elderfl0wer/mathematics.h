#define MATHEMATICS_CORE
#define MATHEMATICS_CONSTANTS
#define MATHEMATICS_FUNCTIONS

#include <stdio.h>

#include "../mathematics.h"

int main()
{
    double x = 10;
    double y = 20;

    printf("Pre-swap values: %.15f %.15f\n", x, y);
    swap(&x, &y);
    printf("Post-swap values: %.15f %.15f\n", x, y);    

}