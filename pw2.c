#include <stdio.h>
#define HEIGHT 5 // 12 вариант

int main(void) {
    for (int i = 1; i <= HEIGHT; i++){
        for (int j = 0; j < i; j++)
            printf("%d", 1);
        printf("\n");
    }

    return 0;
}