#include <stdio.h>

int max3(int a, int b, int c) {
    if (a >= b && a >= c) {
       return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int a, b, c;

    printf("Введите a: ");
    scanf("%d", &a);

    printf("Введите b: ");
    scanf("%d", &b);

    printf("Введите c: ");
    scanf("%d", &c);

    int result = max3(a, b, c);

    printf("%d\n", result);
    return 0;
}