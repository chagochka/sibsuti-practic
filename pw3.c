#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 1; // 18 вариант
    double sum;
    int i;
    scanf("%d", &n);
    
    while (n > 0){
        for (sum = 0.0, i = 0; i < n; i++, sum += 1 / sqrt(i));
        printf("SUM: %.6lf\n", sum);
        scanf("%d", &n);
    }

    return 0;
}