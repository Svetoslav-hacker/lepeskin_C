#include <stdio.h>

int count_digits(int n) {
    int count = 0;
    if (n < 0) n = -n;
    if (n == 0) return 1;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;

    printf("Введите число: ");
    scanf("%d", &n);

    int result = count_digits(n);
    
    printf("Результат: %d\n", result);
    return 0;
}