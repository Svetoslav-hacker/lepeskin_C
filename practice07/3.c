#include <stdio.h>

int is_even(int a) {
    if (a % 2 == 0) {
        return 1;    
    }
    else {
        return 0;
    }
}

int main() {
    int a;

    printf("Введите число: ");
    scanf("%d", &a);

    int result = is_even(a);

    printf("Результат: %d\n", is_even(a));

    return 0;
}