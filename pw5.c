#include <stdio.h>

const double COEF = 3.281;
double m_to_ft(double m);

int main(void) {
    double value;

    while (scanf("%lf", &value) == 1)
        printf("%.2lf\n", m_to_ft(value));

    return 0;
}

double m_to_ft(double m){
    return m * COEF;
}