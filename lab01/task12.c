#include <stdio.h>

int main() {
    int n;

    printf("Введите трёхзначное число: ");
    scanf("%d", &n);

    int hundreds = n / 100;
    int tens     = (n % 100) / 10;
    int ones     = n % 10;

    printf("Сотни:  %d\n", hundreds);
    printf("Десятки: %d\n", tens);
    printf("Единицы: %d\n", ones);

    return 0;
}
