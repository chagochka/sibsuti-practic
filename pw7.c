#include <stdio.h>

int main(void) {
    long double n;
    scanf("%Lf", &n);

    double dbl = n;
    float flt = n;

    printf("FLOAT: %.6f\n", flt);
    printf("DOUBLE: %.6f\n", dbl);
    printf("LDOUBLE: %.6Lf\n", n);

    flt += 1;
    dbl += 1;
    n += 1;

    printf("FLOAT+1: %.6f\n", flt);
    printf("DOUBLE+1: %.6f\n", dbl);
    printf("LDOUBLE+1: %.6Lf\n", n);
    
    return 0;
}