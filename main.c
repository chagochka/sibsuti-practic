#include <stdio.h>
#include "matrixfunc.h"

#define MAX_SIZE 100

void clear(void);

int main(void) {
    char command[2] = "";
    int array[MAX_SIZE][MAX_SIZE];
    int k, m;
    size_t rows = 0;
    size_t cols = 0;

    while (command[0] != 'g') {
        printf("a\tЗадать размер массива\n");
        printf("b\tЗаполнить массив\n");
        printf("c\tПредставление массива (значения, адреса)\n");
        printf("d\tВычисление суммы всех элементов матрицы\n");
        printf("e\tВычисление суммы элементов, значения которых находятся в заданном диапазоне значений k–m\n");
        printf("f\tВычисление суммы элементов побочной диагонали матрицы\n");
        printf("g\tВыход\n");
        printf("Выберите пункт: ");

        if (scanf(" %c", command) == EOF)
            break;

        clear();

        switch (command[0]) {
            case 'a':
                printf("Введите желаемый размер: ");
                while (scanf("%zu %zu", &rows, &cols) != 2) { 
                    printf("Ошибка: введите число!\n");
                    clear();
                }

                clear();

                if (rows < 1 || rows > MAX_SIZE || cols < 1 || cols > MAX_SIZE) {
                    printf("Ошибка: размер должен быть от 1 до %d!\n", MAX_SIZE);
                    rows = 0;
                    cols = 0;
                }
                break;

            case 'b':
                if (rows == 0 || cols == 0) {
                    printf("Сначала задайте размер массива!\n");
                    break;
                }

                printf("Введите элементы: ");

                for (size_t i = 0; i < rows; i++) {
                    for (size_t j = 0; j < cols; j++){
                    while (scanf("%d", &array[i][j]) != 1) {
                        printf("Ошибка: введите число!\n");
                        clear();
                    }
                    }
                }

                clear();
                break;

            case 'c':
                printf("Ваш массив:\n");

                for (size_t i = 0; i < rows; i++) {
                    for (size_t j = 0; j < cols; j++)
                        printf("%d - %p\t", array[i][j], &array[i][j]);    
                    printf("\n");
                }
                break;

            case 'd':
                if (rows == 0){
                    printf("Матрица пустая\n");
                    break;
                }
                printf("Сумма всех элементов матрицы: %d\n", total_sum(&array[0][0], rows, cols));
                break;

            case 'e':
                printf("Введите границы диапазона k и m: ");
                while (scanf("%d %d", &k, &m) != 2) { 
                    printf("Ошибка: введите число!\n");
                    clear();
                }

                printf("Сумма элементов в диапазоне: %d\n", gap_sum(&array[0][0], rows, cols, k, m));
                break;

            case 'f':
                if (rows == 0){
                    printf("Матрица пустая\n");
                    break;
                }
                printf("Сумма всех элементов побочной диагонали матрицы: %d\n", subdiag_sum(&array[0][0], rows, cols));
                break;

            case 'g':
                break;

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