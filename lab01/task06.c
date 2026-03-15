#include <stdio.h>

int main() {
    int a = 5, b = 2;

    /* Целочисленное деление */
    printf("int / int: %d / %d = %d\n", a, b, a / b);

    /* Деление с дробным результатом через явное преобразование */
    printf("(float) int / int: %d / %d = %.1f\n", a, b, (float)a / b);

    return 0;
}
