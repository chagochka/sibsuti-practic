#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t a, b, c; // 19 вариант
    scanf("%hhu %hhu %hhu", &a, &b, &c);

    float result = (float)(a + b + c) / 3;
    printf("RESULT: %.2f\n", result);
    printf("SIZE_UINT8: %llu\n", (unsigned long long)sizeof(uint8_t));
    printf("SIZE_FLOAT: %llu\n", (unsigned long long)sizeof(float));

    return 0;
}