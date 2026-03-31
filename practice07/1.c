#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    printf("Введите 1 число: ");
    scanf("%d", &a);

    printf("Введите 2 число: ");
    scanf("%d", &b);

    int result = sum(a,b);
    printf("Результат: %d\n", result);

    return 0;
}