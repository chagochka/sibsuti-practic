#include <stdio.h>

int main(void) {
    printf("№.\tX\tY\n\n"); // 12 вариант

    for (float x = 0.0; x <= 4.0; x+=0.5)
        printf("%d.\t%.4f\t%.4f\n", (int)(x / 0.5) + 1, x, x / (x + 1));
    
    return 0;
}