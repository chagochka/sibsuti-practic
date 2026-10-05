#include <stdio.h>

int main(void) {
    int d, o, x;
    scanf("%d %x %o", &d, &x, &o);

    printf("UNIT_ID: %d\n", d);
    printf("UNIT_VERSION: %d\n", x);
    printf("UNIT_STATUS: %d\n", o);
    printf("SUM: %d\n", d + o + x);

    return 0;
}