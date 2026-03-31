#include <stdio.h>

void print_1_to_n(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    print_1_to_n(n);
    return 0;
}