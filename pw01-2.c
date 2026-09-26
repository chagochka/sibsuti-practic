#include <stdio.h>

int main() {
    char surname[] = "Ерёмин";
    char name[] = "В.C.";

    printf("[%s %s]\n", surname, name);
    printf("   %s\n", surname);
    printf("        %s\n", name);
    printf("]%s %s[\n", name, surname);

    return 0;
}