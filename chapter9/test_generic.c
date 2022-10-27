#include <stdio.h>
#include <math.h>
#include <complex.h>

#define sin(x) _Generic(x, float:sinf, double:sin, long double: sinl, float _Complex:csinf, double _Complex: csin, long double _Complex:csinl)(x)

int main (void)
{
    printf("%f\n", sin(.5f));

    double _Complex d = sin(.3 + .5i);
    printf("%.2f%+.2f * I\n", creal(d), cimag(d));

    return 0;
}

