#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "");

    char word[100];
    int count = 0;
    char golosni[] = "ауеоюяіи";
    printf("Введіть слово яке закінчується на %% , ~ або *\n");
    scanf("%s", word);
    char *substr = word;

    while ((substr = strstr(substr, "ма")) != NULL) {
        count++;
        substr++;
    }

    if (count == 0) {
        for (int i = 0; word[i] != '\0'; i++) {
            char lower = tolower(word[i]);
            for (int j = 0; golosni[j] != '\0'; j++) {
                if (lower == golosni[j]) {
                    printf("%c", word[i]);
                }
            }
        }
        printf("\n");
    }

    printf("Кількість ма: %d\n", count);
    return 0;
}
