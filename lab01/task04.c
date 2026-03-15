#include <stdio.h>

int main() {
    int a, b;

    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);

    printf("%d %% %d = %d\n", a, b, a % b);

    return 0;
}
