#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t call_sign[100];

    wscanf(L"%ls", call_sign);
    wprintf(L"Агент %ls авторизован в системе\n", call_sign);

    return 0;
}