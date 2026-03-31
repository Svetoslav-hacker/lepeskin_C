#include <stdio.h>

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Результат: %d\n", sum);
}

int main() {
    int n;

    printf("Введите число: ");
    scanf("%d", &n);

    sum_to_n(n);
    return 0;
}