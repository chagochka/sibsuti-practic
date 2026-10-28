#include <stdio.h>
#include <math.h>
double calc(double a, double b);

int main(void) {
    double a, b; // 28 вариант

    while (scanf("%lf %lf", &a, &b) == 2)
        printf("%.4lf\n", calc(a, b));

    return 0;
}

double calc(double a, double b){
    return (a - b)/sqrt(a * a - b * b);
}
