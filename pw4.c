#include <stdio.h>

int main(void) {
    int n, i, sum; // 1 вариант
    i = sum = 0;

    scanf("%d", &n);
    while (++i <= n)
        sum += i;
    

    printf("%d\n", sum);
    return 0;
}