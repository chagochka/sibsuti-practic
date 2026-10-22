#include <stdio.h>
double m_to_ft(double m);

int main(void) {
    double value; // 5 вариант

    while (scanf("%lf", &value) == 1)
        printf("%.2lf\n", m_to_ft(value));

    return 0;
}

double m_to_ft(double m) {
    const double COEF = 3.281;
    return m * COEF;
}
