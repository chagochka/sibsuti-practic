#include "myarrfunc.h"

int last_positive(int *arrptr, size_t n){
    for (size_t i = n; i > 0; i--){
        if (arrptr[i - 1] > 0) return arrptr[i - 1];
    }
}

unsigned count_lower(int *arrptr, size_t n, int k){
    unsigned c = 0u;
    for (size_t i = 0; i < n; i++){
        if (arrptr[i] < k) c++;
    }
    
    return c;
}

void index_higher(int *arrptr, size_t n, int k){
    printf("Индексы элементов массива по значению выше %d: ", k);
    for (size_t i = 0; i < n; i++){
        if (arrptr[i] > k){
            printf("%ld ", i);
        }
    }
    printf("\n");
}