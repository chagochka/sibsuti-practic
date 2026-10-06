#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("MODULE_READY: %d\n", (bool)num1);
    printf("FAULT_STATE: %d\n", (bool)num2);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", (bool)num1 + (bool)num2);

    return 0;
}