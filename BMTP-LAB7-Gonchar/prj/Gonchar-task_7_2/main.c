#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    char *locale = setlocale(LC_ALL, "");
    int numbers[15];
    int max, min, rizn, sum;
    printf("¬вед≥ть 15 натуральних чисел:\n");
    for (int i = 0; i < 15; i++) {
        printf("„исло %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    min = numbers[0];
    for (int i = 1; i < 15; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    rizn = max - min;
    sum = max + min;
    printf("—ума найб≥льшого ≥ найменшого числа: %d\n", sum);
    printf("–≥зниц€ м≥ж найб≥льшим та найменшим числом: %d\n", rizn);
    return 0;
}
