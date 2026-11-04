#include <stdio.h> // 18 вариант

int main(void) {
    int num, count1, count2, sum1, sum2, temp, temp_sum;
    count1 = count2 = sum1 = sum2 = 0;
    
    scanf("%d", &num);
    while (num != 0) {
        temp_sum = 0;
        temp = num;
        while (temp != 0){
            temp_sum += temp % 10;
            temp /= 10;
        }

        if (num % temp_sum == 0){
            count1++;
            sum1 += num;
        } else {
            count2++;
            sum2 += num;
        }

        scanf("%d", &num);
    }

    printf("condition:\n\nCOUNT:\t%d\nAVERAGE:\t%.2f\n\n", count1, (double)sum1 / count1);
    printf("other:\n\nCOUNT:\t%d\nAVERAGE:\t%.2f\n", count2, (double)sum2 / count2);
    return 0;
}