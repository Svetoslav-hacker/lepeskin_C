#include <stdio.h>

int sum_digits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;

    printf("Введите число: ");
    scanf("%d", &n);

    printf("Сумма цифр: %d\n", sum_digits(n));
    return 0;
}