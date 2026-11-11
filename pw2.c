#include <stdio.h>
int isPrime(int n);

int main(void) {
    int ch, count, total;
    count = total = 0;

    while ((ch = getchar()) != EOF) {
        total++;
        if (isPrime(ch)) {
            count++;
        }
    }

    printf("Prime: %d\n", count);
    printf("Total: %d\n", total);

    return 0;
}

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
