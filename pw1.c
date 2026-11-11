#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int v, i;
    char vowel[] = "aioeyu"; // 12 вариант

    while ((ch = getchar()) != EOF){
        v = 0;
        for (i = 0; i < 6; i++){
            if (tolower(ch) == vowel[i]) {
                v = 1;      
                break;
            }
        }
        putchar((v) ? '*' : ch);
    }

    return 0;
}