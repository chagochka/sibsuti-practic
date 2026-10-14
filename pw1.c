#include <stdio.h>
#include <string.h>

int main(void) {
    char sibsutis[20] = "СибГУТИ";

    printf("SIZEOF: %zu\n", sizeof(sibsutis));
    printf("STRLEN: %zd\n", strlen(sibsutis));
    printf("FREE_BYTES: %zu\n", sizeof(sibsutis) - strlen(sibsutis) - 1);

    return 0;
}