#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t n;
    scanf("%hhu", &n);

    uint8_t add = n + 10;
    uint8_t mul2 = n * 2;
    uint8_t sqr = n * n;

    printf("ADD: %u\n", add);
    printf("MUL2: %u\n", mul2);
    printf("SQR: %u\n", sqr);

    return 0;
}