#include <stdio.h>

int main(void) {
    int n, cur, prev, i; // 25 вариант
    scanf("%d", &n);

    cur = prev = 0;
    i = 0;
    printf("%d ", cur);
    while (++i < n){
        cur = prev + 3;
        printf("%d ", cur);
        prev = cur;
    }

    printf("\n");
    return 0;
}