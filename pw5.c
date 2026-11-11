#include <stdio.h> // 28 вариант

int check_iter(int num);
int check_recur(int num);
int sum_recur(int num, int i);

int main(void) {
    int num;

    while (scanf("%d", &num) == 1) {
        printf("ITER: %s\nRECUR: %s\n",
               (check_iter(num)) ? "YES" : "NO",
               (check_recur(num)) ? "YES" : "NO");
    }

    return 0;
}

int check_iter(int num) {
    if (num < 2) return 0;

    int sum = 0;

    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;

            if (i != 1 && i != num / i) {
                sum += num / i;
            }
        }
    }

    return num == sum;
}

int sum_recur(int num, int i) {
    if (i * i > num) return 0;

    int sum = 0;

    if (num % i == 0) {
        sum += i;

        if (i != 1 && i != num / i) {
            sum += num / i;
        }
    }

    return sum + sum_recur(num, i + 1);
}

int check_recur(int num) {
    if (num < 2) return 0;

    return num == sum_recur(num, 1);
}