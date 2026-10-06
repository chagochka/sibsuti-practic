#include <stdio.h>

int main(void) {
    int d, o, x;
    d = 10;
    o = 010;
    x = 0x10;

    printf("DEC_10: %d\n", d);
    printf("OCT_10: %d\n", o);
    printf("HEX_10: %d\n", x);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n", sizeof(10), sizeof(10U), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    char a = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');

    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n", sizeof('A'), sizeof(a), sizeof("A"));

    return 0;
}