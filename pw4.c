#include <stdio.h> // 24 вариант

int main(void) {
    double water;
    double cost;
    scanf("%lf", &water);

    if (water <= 10) {
        cost = water * 1;
        printf("1 tariff: %.2f\n", cost);
    } else if (water <= 30) {
        cost = 10 * 1 + (water - 10) * 2;
        printf("1 tariff: %.2f\n", 10.0);
        printf("2 tariff: %.2f\n", (water - 10) * 2);
    } else {
        cost = 10 * 1 + 20 * 2 + (water - 30) * 3;
        printf("1 tariff: %.2f\n", 10.0);
        printf("2 tariff: %.2f\n", 40.0);
        printf("3 tarrif: %.2f\n", (water - 30) * 3);
    }

    if (water >= 0) {
        printf("Total: %.2f\n", cost);
    }

    return 0;
}
