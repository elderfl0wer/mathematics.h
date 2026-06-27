// I have no idea what i am doing

#if defined (MATHEMATICS_CORE)

#define

const double NAN = 0.0/0.0;

#endif

#if defined (MATHEMATICS_CONSTANTS)

const double PI = 3.14159265358979;
const double E = 2.718281828459045;
const double LN10 = 2.302585092994046;
const double LN2 = 0.693147180559945;

#endif

#if defined (MATHEMATICS_FUNCTIONS)

double mod(double x)
{
    if (x >= 0) {
        return x;
    } else if (x < 0) {
        return -x;
    }
    else {
        return NAN;
    }

}

#endif
