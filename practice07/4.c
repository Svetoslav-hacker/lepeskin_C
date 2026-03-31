#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;

    printf("Введите a: ");
    scanf("%d", &a);

    printf("Введите b: ");
    scanf("%d", &b);

    int result = max(a, b);
    
    printf("%d\n", result);
    return 0;
}