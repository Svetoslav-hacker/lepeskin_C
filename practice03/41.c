#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Введите числооооооо: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    
    printf("Сумма цифр числа: %d\n", sum);

    return 0;
}