#include "matrixfunc.h"
#define MAX_SIZE 100

int total_sum(int *matptr, size_t rows, size_t cols){
    int sum = 0;
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++)
            sum += *(matptr + i * MAX_SIZE + j);
    }
    return sum;
}

int gap_sum(int *matptr, size_t rows, size_t cols, int k, int m){
    int sum = 0;
    int item;
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++){
            item = *(matptr + i * MAX_SIZE + j);
            if (item >= k && item <= m)
                sum += item;
        }
    }
    return sum;
}

int subdiag_sum(int *matptr, size_t rows, size_t cols){
    int sum = 0;
    for (size_t i = 0, k = 0; i < rows; i++, k++) {
        sum += *(matptr + i * MAX_SIZE + rows - k - 1);   
    }
    return sum;
}