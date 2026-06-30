/*  mathematics - v0.2 - MIT License - http://github.com/elderfl0wer/mathematics.h/
   provides mathematics functions, constants & operations - Shreyeaan Misra 2026-
                                     no warranty implied; use at your own risk
 *
 *  Before #including,
 *
 *          #define MATHEMATICS_CORE // For some operators (NAN, infinity, isnan() etc.)
 *          #define MATHEMATICS_CONSTANTS // For constants (PI, E, LN2 etc.)
 *          #define MATHEMATICS_FUNCTIONS // For mathematical functions (sin, cos, ln etc.)
 *          #define MATHEMATICS_CONVERIONS // For conversion of certain values (ln2log, log2ln etc.)
 *
 *          Please ensure these macros are made BEFORE including the header itself otherwise the it will not work.
 *
 *  ABOUT:
 *
 *         This header exposes mathematical functions, constants & certain
 *         operation in C without any dependencies including libc & libm.
 *         This library is designed for source code compactness & portability
 *         not optimal mathematical or run-time performance.
 *
 *         Naming convetions at some points differ from libm.
 *
 * RELEASE:
 *
 *        0.2 (30-06-2026)
 *             first internal release
 *
 */



#if defined (MATHEMATICS_CORE)

const double NAN = 0.0/0.0;
const double posINFINITY = 1.0/0.0;
const double negINFINITY = 1.0/-0.0;

double isnan(double x)
{
    if (x != x) {
        return 1;
    } else {
        return 0;
    }
}

double isinf(double x)
{
    if (x == posINFINITY) {
        return 1;
    } else if (x == negINFINITY) {
        return -1;
    } else {
        return 0;
    }
}

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
    } else {
        return -x;
    }

    return NAN;
}

double swapsign(double x)
{
    if (x > 0) {
        return -x;
    } else if (x == 0) {
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
    if (value > lowerLimit && value < upperLimit) {
        return value;
    } else if (value >= lowerLimit) {
        return lowerLimit;
    } else {
        return upperLimit;
    }
}

void swap(double *x, double *y)
{
    double temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

void m_trunc(double *x)
{
    int temp;
    double cache;

    cache = *x;
    temp = (int)(*x);
    cache = (double)temp;
    *x = cache;
}

void m_floor(double *x)
{
    if (*x > 0) {
        m_trunc(x);
    } else if (*x == 0) {
        return;
    } else {
    m_trunc(x);
    *x -= 1;
    }
}

void m_ceil(double *x)
{
    if (*x > 0) {
        m_trunc(x);
        *x += 1;
    }  else if (*x == 1) {
        *x += 1;
    } else {
        m_trunc(x);
    }
}

double m_fmod(double dividend, double divisor)
{
    int n = dividend - divisor;

    double d = dividend - n*divisor;
    m_trunc(&d);
    return d;
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

/*
 MIT LICENSE
 Copyright (c) 2026 Shreyaan Misra
 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do
 so, subject to the following conditions:
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */
