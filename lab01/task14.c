#include <stdio.h>

int main() {
    int a, b, c;

    printf("Адреса переменных:\n");
    printf("a: %p\n", (void *)&a);
    printf("b: %p\n", (void *)&b);
    printf("c: %p\n", (void *)&c);

    printf("\nРазница адресов:\n");
    printf("&b - &a = %td байт\n", (char *)&b - (char *)&a);
    printf("&c - &b = %td байт\n", (char *)&c - (char *)&b);

    return 0;
}
