#include <stdio.h>

#define SEC_IN_MIN 60 // 12 вариант

int main(void) {
    int seconds;
    
    while (scanf("%d", &seconds) == 1 && seconds > 0)
        printf("= %d мин. %d с.\n", seconds / SEC_IN_MIN, seconds % SEC_IN_MIN);

    return 0;
}