#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    /* 
     * Приведение к unsigned int необходимо,
     * чтобы вычисление выполнялось в беззнаковом типе
     * и не возникало переполнения знакового int. 
     */
    printf("RANGE_OK: %d\n", (unsigned int)INT_MAX * 2u + 1u == UINT_MAX);

    return 0;
}