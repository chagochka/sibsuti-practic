
#include <stdio.h>
#include "matrixfunc.h"

#define MAX_SIZE 100

void clear(void);

int main(void) {
    char command;
    int array[MAX_SIZE][MAX_SIZE];
    int k, m;
    int result;
    size_t rows = 0;
    size_t cols = 0;
    int filled = 0;

    while (1) {
        printf("\na\tЗадать размер матрицы\n");
        printf("b\tЗаполнить матрицу\n");
        printf("c\tПредставление матрицы (значения, адреса)\n");
        printf("d\tСумма всех элементов матрицы\n");
        printf("e\tСумма элементов в диапазоне k-m\n");
        printf("f\tСумма элементов побочной диагонали\n");
        printf("g\tВыход\n");
        printf("Выберите пункт: ");

        if (scanf(" %c", &command) != 1)
            break;

        clear();

        switch (command) {
            case 'a': {
                int r, c;

                printf("Введите количество строк и столбцов: ");

                while ((result = scanf("%d %d", &r, &c)) != 2) {
                    if (result == EOF)
                        return 0;

                    printf("Ошибка: введите два числа!\n");
                    clear();
                }

                clear();

                if (r < 1 || r > MAX_SIZE || c < 1 || c > MAX_SIZE) {
                    printf("Ошибка: размер должен быть от 1 до %d!\n", MAX_SIZE);
                    rows = 0;
                    cols = 0;
                    filled = 0;
                    break;
                }

                rows = (size_t)r;
                cols = (size_t)c;
                filled = 0;

                printf("Размер матрицы задан!\n");
                break;
            }

            case 'b':
                if (rows == 0 || cols == 0) {
                    printf("Сначала задайте размер матрицы!\n");
                    break;
                }

                printf("Введите элементы матрицы:\n");

                for (size_t i = 0; i < rows; i++) {
                    for (size_t j = 0; j < cols; j++) {
                        while ((result = scanf("%d", &array[i][j])) != 1) {
                            if (result == EOF)
                                return 0;

                            printf("Ошибка: введите число!\n");
                            clear();
                        }
                    }
                }

                clear();
                filled = 1;

                printf("Матрица заполнена!\n");
                break;

            case 'c':
                if (!filled) {
                    printf("Сначала заполните матрицу!\n");
                    break;
                }

                printf("Ваша матрица:\n");

                for (size_t i = 0; i < rows; i++) {
                    for (size_t j = 0; j < cols; j++) {
                        printf("%d - %p\t",
                               array[i][j], &array[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 'd':
                if (!filled) {
                    printf("Сначала заполните матрицу!\n");
                    break;
                }

                printf("Сумма всех элементов матрицы: %d\n",
                       total_sum(&array[0][0], rows, cols));
                break;

            case 'e':
                if (!filled) {
                    printf("Сначала заполните матрицу!\n");
                    break;
                }

                printf("Введите границы диапазона k и m: ");

                while ((result = scanf("%d %d", &k, &m)) != 2) {
                    if (result == EOF)
                        return 0;

                    printf("Ошибка: введите два числа!\n");
                    clear();
                }

                clear();

                if (k > m) {
                    int temp = k;
                    k = m;
                    m = temp;
                }

                printf("Сумма элементов в диапазоне: %d\n",
                       gap_sum(&array[0][0], rows, cols, k, m));
                break;

            case 'f':
                if (!filled) {
                    printf("Сначала заполните матрицу!\n");
                    break;
                }

                if (rows != cols) {
                    printf("Для побочной диагонали нужна квадратная матрица!\n");
                    break;
                }

                printf("Сумма элементов побочной диагонали: %d\n",
                       subdiag_sum(&array[0][0], rows, cols));
                break;

            case 'g':
                return 0;

            default:
                printf("Неизвестная команда!\n");
                break;
        }
    }

    return 0;
}

void clear(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
