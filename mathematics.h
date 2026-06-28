// I have no idea what i am doing

#if defined (MATHEMATICS_CORE)

// Is it better to make these macros rather then variables ?
const double NAN = 0.0/0.0;
const double posINFINITY = 1.0/0.0;
const double negINFINITY = 1.0/-0.0;

/*
    Previous implmentation compared x
    to NAN (x == NAN) and returned 1
    or 0 but NAN cant be compared to
    anything not even itself in IEEE
    754, then it clicked that since
    (NAN != NAN) is always true hence
    if a variable is NAN it must not
    be equal to itself.

double isnan(double x)
{
    if (x == NAN) {
        return 1; <---- will never return 1 since no numbert cant be compared to NAN
    } else {
        return 0; 
    }
}
*/
double isnan(double x)
{
    if (x != x) {
        return 1;
    } else {
        return 0;
    }
}

// 0 : non-inf, 1 : +ive inf, -1 : -ve inf
double isinf(double x)
{
    if (x == posINFINITY) {
        return 0;
    } else if (x == negINFINITY) {
        return -1;
    } else {
        return 1;
    }
}



#endif

#if defined (MATHEMATICS_CONSTANTS)

// Is it better to make these macros rather then variables ?
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
    } else {
        return -x;
    }

    return NAN;
}

// changed name copysign--->swapsign due to windows not compiling
/*
lld-link: error: duplicate symbol: copysign
>>> defined at C:\Users\userdirectoryname\AppData\Local\Temp\main-eeb26b.o
>>> defined at libucrt.lib(copysign.obj)
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/
double swapsign(double x)
{
    if (x > 0) {
        return -x;
    } else if (x == 0) {
        // this is coz technically -0.0 n +0.0 are different in IEEE floats although they are equal but give different value of infinite (super useful ik)
        return 0;
    } else {
        return x;
    }
}

double min(double x, double y)
{
    if (x == y) {
        return NAN;
    } else {
        if (x > y) {
            return y;
        } else {
            return x;
        }
    }
}

double max(double x, double y)
{
    if (x == y) {
        return NAN;
    } else {
        if (x > y) {
            return x;
        } else {
            return y;
        }
    }
}

double sign(double x)
{
    if (x > 0) {
        return 1.0;
    } else if (x < 0) {
        return -1.0;
    } else {
        return 0.0;
    }
}

double clamp(double value, double lowerLimit, double upperLimit)
{
    if (value >= lowerLimit && value <= upperLimit) {
        return 1;
    } else {
        return 0;
    }

 //   return NAN
}

/*
    note for myself on pointers
    the reason the function takes
    pointes to x n y as defined
    in input n not variables is
    coz its referencing the x n
    y created outside the function
    that need to be swapped, if
    I did swap(int x, int y), IM
    making 2 new variables x n y
    that only exist inside swap
    and die after swap ends
    not changing the x n y in the
    main function i.e. 2 different
    sets of variables with the
    same name sets.

    What I inferred

    void swap(double x, double y)
    {
        double temp;
        temp = y;
        y = x;
        x = temp;
    }

*/
void swap(double *x, double *y)
{
    double temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

// only integer factorial since factorial for doubles requires "gamma function"
unsigned int factorial(unsigned int x)
{
    if (x == 0) {
        return 1;
    } else {
        return 0;
    }
}


#endif

#if defined (MATHEMATICS_CONVERSIONS)

double log2ln(double logx)
{
    return logx * LN10;
}

double ln2log(double lnx)
{
    return lnx / LN10;
}

double deg2rad(double degAngle)
{
   return degAngle * (PI/180);
}

double rad2deg(double radAngle)
{
    return radAngle * (180/PI);
}

#endif
