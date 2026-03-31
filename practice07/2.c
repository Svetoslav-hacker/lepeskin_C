#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int x;
    printf("Введите число: ");
    scanf("%d", &x);
    int result = square(x);

    printf("Результат: %d\n", result);

    return 0;
}