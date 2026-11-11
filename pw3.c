#include <stdio.h> // 18 вариант

double calculate(double a, double b) {
    double x = a * b;
    double sin = 0;
    double cos = 0;
    double term_sin = x;
    double term_cos = 1;

    for (int i = 0; i < 15; i++) {
        sin += term_sin;
        cos += term_cos;

        term_sin *= -x * x / ((2 * i + 2) * (2 * i + 3));
        term_cos *= -x * x / ((2 * i + 1) * (2 * i + 2));
    }

    return sin / cos;
}

int main(void) {
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("Result: %.4f\n", calculate(a, b));
    }

    return 0;
}