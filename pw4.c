#include <stdio.h>
#define SIZE 8

int main(void)
{
    double bell[SIZE] = {1, 1, 2, 5, 15, 52, 203, 877}; // 24 вариант
    double sum = 0.0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("%.2lf ", bell[i]);
        sum += bell[i];
    }

    printf("\nSUM: %.2lf\n", sum);

    return 0;
}
