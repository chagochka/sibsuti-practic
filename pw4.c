#include <stdio.h> // 24 вариант
void sorting(double *x, double *y, double *c);

int main(void) {
    double x, y, c;

    scanf("%lf %lf %lf", &x, &y, &c);
    sorting(&x, &y, &c);
    printf("%.2f %.2f %.2f\n", x, y, c);

    return 0;
}

void sorting(double *x, double *y, double *c) {
    double a = *x, b = *y, d = *c;

    double t1 = (a > b) ? a : b;
    double t2 = (t1 > d) ? t1 : d;

    t1 = (a < b) ? a : b;
    double t3 = (t1 < d) ? t1 : d;

    *x = t2;
    *y = t3;
    *c = (a + b + d) - t2 - t3;
}