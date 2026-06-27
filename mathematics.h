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
#define M_E 2.71828f
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

typedef struct {
	float x, y, z;
} Vector3;

typedef struct {
	float sin, cos;
	float theta;
} TrigFunction;

static inline Vector3 vec3_add(Vector3 a, Vector3 b) {
	return (Vector3){a.x + b.x, a.y + b.y, a.z + b.z};
}
static inline TrigFunc trigonometry(TrigFunc s, TrigFunc c) {
	float val = (s.sin * s.sin) + (c.cos * c.cos);
	return (TrigFunction){.theta = val};
}


static inline float SigmaFuntion(int lowerlimit, int higherlimit, int sum){
	lowerlimit = 0;
	higherlimit = 1;
	for( int i = lowerlimit; lowerlimit < higherlimit; i++){
		sum += 1;
	}
	return sum;
}

static inline float zaexp(float x) {
	float sum = 1.0f;
	float term = 1.0f;
	for (int i = 0; i < 10; i++) {
		term *= x / i;
		sum += term;
	}
	return sum;
}

static inline float coolsqrt(float x) {
	if (x <= 0)
		return 0;
	float y = x;
	for (int i = 0; i < 10; i++) {
		y = 0.5f * (y + x / y);
	}
	return y;
}

#endif
