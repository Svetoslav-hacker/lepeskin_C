#include <stdio.h>

int main() {
    int n;

    printf("Введите целое число: ");
    scanf("%d", &n);

    /* Последняя цифра — остаток от деления на 10 */
    printf("Последняя цифра: %d\n", n % 10);

    return 0;
}
