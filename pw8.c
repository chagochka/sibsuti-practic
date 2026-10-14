#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    char text[] = "Сбой матрицы";
    wchar_t wtext[] = L"Сбой матрицы";

    printf("char  -> sizeof: %zu bytes, strlen: %zu chars\n",
           sizeof(text), strlen(text));

    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",
           sizeof(wtext), wcslen(wtext));

    return 0;
}