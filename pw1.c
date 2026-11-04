#include <stdio.h>

int main(void) {
    char ch, min; // 12 вариант
    ch = min = getchar();
    while (ch != '#'){
        if (ch < min) min = ch;
        ch = getchar();
    }
    
    printf("%d\n", min);    
    return 0;
}