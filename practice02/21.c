#include <stdio.h>

int main() {
    int n = 9, result = 1;
    for (int i = 1; i <= n; i++)
        if (i % 2 != 0)
            result *= i;
    printf("%d\n", result);
    return 0;
}