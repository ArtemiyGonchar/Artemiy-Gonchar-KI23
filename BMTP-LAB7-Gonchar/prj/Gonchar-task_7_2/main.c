#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    char *locale = setlocale(LC_ALL, "");
    int numbers[15];
    int max, min, rizn, sum;
    printf("������ 15 ����������� �����:\n");
    for (int i = 0; i < 15; i++) {
        printf("����� %d: ", i + 1);
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
    printf("���� ���������� � ���������� �����: %d\n", sum);
    printf("г����� �� ��������� �� ��������� ������: %d\n", rizn);
    return 0;
}
