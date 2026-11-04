#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t ch, min;
    ch = min = getwchar(); // 12 вариант

    while (ch != L'#'){
        if (ch < min) min = ch;
        ch = getwchar();
    }
    
    printf("%d\n", min);    
    return 0;
}