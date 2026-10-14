#include <stdio.h>

int main(void) {
    int width;
    char text[100];

    scanf("%s %d", text, &width);
    printf("%*s\n", width, text);
    printf("%-*s\n", width + 5, text);

    return 0;
}