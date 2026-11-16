#include <stdio.h>
#include "myarrfunc.h"

#define MAX_SIZE 1024

void clear(void);

int main(void) {
    char command[2] = "";
    int array[MAX_SIZE];
    int k;
    size_t size = 0;
    int result;

    while (command[0] != 'g') {
        printf("a\tЗадать размер массива\n");
        printf("b\tЗаполнить массив\n");
        printf("c\tПредставление массива (значения, адреса)\n");
        printf("d\tПоиск значения последнего положительного элемента массива\n");
        printf("e\tОпределение количества элементов массива по значению ниже введенного k\n");
        printf("f\tОпределение индексов элементов массива по значению выше введенного k\n");
        printf("g\tВыход\n");
        printf("Выберите пункт: ");

        if (scanf("%c", command) == EOF)
            break;

        clear();

        switch (command[0]) {
            case 'a':
                printf("Введите желаемый размер: ");
                while (scanf("%zu", &size) != 1) { 
                    printf("Ошибка: введите число!\n");
                    clear();
                }

                clear();

                if (size < 1 || size > MAX_SIZE) {
                    printf("Ошибка: размер должен быть от 1 до %d!\n", MAX_SIZE);
                    size = 0;
                }
                break;

            case 'b':
                if (size == 0) {
                    printf("Сначала задайте размер массива!\n");
                    break;
                }

                printf("Введите элементы: ");

                for (size_t i = 0; i < size; i++) {
                    while (scanf("%d", &array[i]) != 1) {
                        printf("Ошибка: введите число!\n");
                        clear();
                    }
                }

                clear();
                break;

            case 'c':
                printf("Ваш массив:\n");

                for (size_t i = 0; i < size; i++) {
                    printf("%d - %p\n", array[i], &array[i]);
                }
                break;

            case 'd':
                if (size == 0) {
                    printf("Массив пуст!\n");
                    break;
                }

                printf("Значение последнего положительного элемента массива: %d\n",
                       last_positive(array, size));
                break;

            case 'e':
                if (size == 0) {
                    printf("Массив пуст!\n");
                    break;
                }
                printf("Введите k: ");

                while (scanf("%d", &k) != 1) {
                    printf("Ошибка: введите число!\n");
                    clear();
                }

                clear();

                printf("Количество элементов массива по значению ниже %d: %u\n",
                       k, count_lower(array, size, k));
                break;

            case 'f':
                if (size == 0) {
                    printf("Массив пуст!\n");
                    break;
                }

                printf("Введите k: ");

                while (scanf("%d", &k) != 1) {
                    printf("Ошибка: введите число!\n");
                    clear();
                }

                clear();
                index_higher(array, size, k);
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