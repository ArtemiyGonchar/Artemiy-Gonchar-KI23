#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");

    wchar_t word[100];
    int count = 0;
    wchar_t golosni[] = L"ауеоюяіиє";
    wprintf(L"Введіть слово яке закінчується на %% , ~ або *\n");
    wscanf(L"%ls", word);
    wchar_t *substr = word;

    while ((substr = wcsstr(substr, L"ма")) != NULL) {
        count++;
        substr++;
    }

    if (count == 0) {
        for (int i = 0; word[i] != L'\0'; i++) {
            wchar_t lower = towlower(word[i]);
            for (int j = 0; golosni[j] != L'\0'; j++) {
                if (lower == golosni[j]) {
                    wprintf(L"%lc", word[i]);
                }
            }
        }
        wprintf(L"\n");
    }

    wprintf(L"Кількість ма: %d\n", count);
    return 0;
}
