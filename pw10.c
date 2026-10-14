#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t first[100];
    wchar_t second[100];
    wchar_t third[100];

    wscanf(L"%ls", first);
    wscanf(L"%ls", second);
    wscanf(L"%ls", third);

    wprintf(L"%-15ls|%20ls|%.5ls\n", first, second, third);

    return 0;
}