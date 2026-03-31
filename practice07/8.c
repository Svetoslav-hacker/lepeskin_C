#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    printf("Результат: %d\n", f);
}

int main() {
    int n;

    printf("Введите число: ");
    scanf("%d", &n);

    fact(n);
    return 0;
}